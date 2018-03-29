#include <iostream>

using namespace std;

int main()
{
    string enemy1, enemy2;  // Name of enemy 1 and enemy 2.
    int dist1, dist2;       // Distance to enemy 1 and enemy 2.

    // Game loop.
    while (1)
    {
        // Reading values.
        cin >> enemy1 >> dist1 >> enemy2 >> dist2; cin.ignore();

        // Print which enemy to destroy considering their distances from the turret.
        cout << ((dist1 <= dist2) ? enemy1 : enemy2) << endl;
    }
}
