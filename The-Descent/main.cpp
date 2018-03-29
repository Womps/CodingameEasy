#include <iostream>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on).
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{
    // Game loop.
    while (1)
    {
        int currentMountain = 0; // Represents the height of the current mountain.
        int higherMoutain   = 0; // Represents the height of the higher mountain.
        int mountainToShoot = 0; // Represents the index of the mountain to shoot.

        // Loop used to browse mountains and select the higher one.
        for (int i = 0; i < 8; i++)
        {
            cin >> currentMountain; cin.ignore(); // Read height value for each mountain.

            // If the height of the current mountain is higher than the height of the higher one.
            if(currentMountain >= higherMoutain)
            {
                higherMoutain = currentMountain; // Then we set the new higher mountain to the current one.
                mountainToShoot = i; // And, we set the mountain to shoot to the index of the current higher mountain.
            }
        }

        cout << mountainToShoot << endl; // The index of the mountain to shoot.
    }
}
