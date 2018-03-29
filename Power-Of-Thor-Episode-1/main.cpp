#include <iostream>
#include <string>

using namespace std;

int main()
{
    int lightX; // The X position of the light of power.
    int lightY; // The Y position of the light of power.
    int initialTX; // Thor's starting X position.
    int initialTY; // Thor's starting Y position.
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore(); // Reading values.

    // Game loop.
    while (initialTX != lightX || initialTY != lightY)
    {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        string direction = ""; // Thor's direction.
        cin >> remainingTurns; cin.ignore(); // Reading the remaining turns. Ignored.

        // Checking Y axis of light and Thor, and selecting the right direction.
        if(lightY > initialTY){initialTY++;direction = "S";}
        else if (lightY < initialTY){initialTY--;direction = "N";}
        
        // Checking X axis of light and Thor, and selecting the right direction.
        if(lightX > initialTX){initialTX++;direction += "E";}
        else if (lightX < initialTX){initialTX--;direction += "W";}

        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << direction << endl;
    }
}
