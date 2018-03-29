#include <iostream>
#include <string>

using namespace std;

int main()
{
    int letterWidth;                    // Variable used to generate letters width of the ASCII art message.
    cin >> letterWidth; cin.ignore();   // Read its value from stdin.

    int letterHeight;                   // Variable used to generate letters height of the ASCII art message.
    cin >> letterHeight; cin.ignore();  // Read its value from stdin.

    string textToTransform;             // Message to transform from string to ASCII art.
    getline(cin, textToTransform);      // Read its value from stdin.

    string ROW;                         // Variable used to store the line read from stdin for the ASCII alphabet.

    char currentChar;                   // Used to check if the current char is allowed by the ASCII representation given.

    // To print the ASCII art from top to bottom.
    for (int i = 0; i < letterHeight; i++)
    {
        getline(cin, ROW);              // Read ASCII Alphabet from stdin.

        // For each character in the string to transform
        for(int j = 0; j < textToTransform.length(); j++)
        {
            // We get the current character in the string to transform, and setting it to uppercase.
            currentChar = toupper(textToTransform[j]);

            // If the current char to uppercase is outside the interval of the given alphabet representation.
            if(currentChar < 'A' || currentChar > 'Z')
            {
                // Then we print the last character in the ASCII representation.
                cout << ROW.substr(ROW.size() - letterWidth, letterWidth);
            }
            else
            {
                // Else, we calculate the position of the character in the ASCII representation, and print it.
                cout << ROW.substr((currentChar - 'A') * letterWidth, letterWidth);
            }
        }

        cout << endl;
    }
}
