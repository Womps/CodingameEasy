#include <iostream>

using namespace std;

int main()
{
    int n; // The number of temperatures to analyse.
    cin >> n; cin.ignore(); // Reading the value of number of temperatures to analyse. 
    int temps; // We will store the current temp as an integer.
    int closestValue = 5527; // Integer used to store the closest value to 0. We start from the highest value (5527).

    // If no temperatures are given, then the closest value to print is 0.
    if(n == 0)
    {
        closestValue = 0;
    }
    else
    {
        // For each temperatures given.
        for(int i = 0; i < n; i++)
        {
            cin >> temps; // Reading the different temperatures from stdin.

            // If the current temp given is lower than the closest value already saved, then we save the current temp.
            if(abs(temps) < abs(closestValue))
            {
                closestValue = temps;
            }
            // If the current temp and the closest value are equals, and one of them is the inverse, then we save the absolute value.
            else if(abs(temps) == abs(closestValue) && (temps == -closestValue))
            {
                closestValue = abs(closestValue);
            }
        }
    }

    // Print the closest value to 0.
    cout << closestValue << endl;
}
