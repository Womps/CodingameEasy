#include <iostream>

using namespace std;

int main()
{
    int surfaceN; // The number of points used to draw the surface of Mars.
    int landX; // X coordinate of a surface point. (0 to 6999).
    int landY; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
    int X; // The Y position of Mars Lander.
    int Y; // The Y position of Mars Lander.
    int hSpeed; // The horizontal speed (in m/s), can be negative.
    int vSpeed; // The vertical speed (in m/s), can be negative.
    int fuel; // The quantity of remaining fuel in liters.
    int rotate; // The rotation angle in degrees (-90 to 90).
    int power; // The thrust power (0 to 4).
    cin >> surfaceN; cin.ignore(); // Reading value to get the number of points to draw the surface of Mars. 
    
    // Loop to get all of the points of the surface.
    for (int i = 0; i < surfaceN; i++)
    {
        cin >> landX >> landY; cin.ignore();
    }

    // Game loop.
    while (1)
    {
        cin >> X >> Y >> hSpeed >> vSpeed >> fuel >> rotate >> power; cin.ignore(); // Reading values from stdin.

        // 2 integers: rotate power. rotate is the desired rotation angle (should be 0 for level 1), power is the desired thrust power (0 to 4).
        cout << "0 "<< ((vSpeed <= -40) ? min(4,power+1) : max(0,power-1)) << endl;
    }
}
