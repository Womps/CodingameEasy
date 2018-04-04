#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message;         // Variable used to read the message from stdin.
    getline(cin, message);  // Reading and storing the message from stdin.
    bool curBit(false);     // Will be used to save the state of the current bit.
    bool last(false);       // Will be used to save the state of the previous bit.
    bool start(true);       // Will be used to check if we're starting to read the message.

    // For each character in the string read from stdin.
    for(int i = 0; i < message.length(); i++)
    {
        // For each character, we check every bits, starting from the most significant bit.
        for (int j = 6; j >= 0; j--)
        {
            // We shift to the left the bit set to true and we apply a mask on the current character to get the current bit of the character.
            curBit = (message[i] & (1 << j));

            // If the current bit is in a different state of the previous, or if we're starting to encode the message.
            if((curBit != last) || start)
            {
                // If we're not starting to encode the message, then we add a space before.
                if(!start)
                    cout << " ";

                // We print a 0 or 00 considering the new state of the current Bit.
                cout << ((curBit) ? "0 " : "00 ");
                start = false;
            }

            last = curBit;
            // We print a 0 no matter which state is the current bit.
            cout << "0";
        }
    }

    cout << endl;
}
