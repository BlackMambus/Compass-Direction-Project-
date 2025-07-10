#include <iostream>
#include <string>
using namespace std;

// Function to get compass direction from degrees
string getCompassDirection(int degree) {
    // Normalize degree to 0–359
    degree = degree % 360;

    if (degree >= 337 || degree < 23)
        return "North";
    else if (degree >= 23 && degree < 68)
        return "North-East";
    else if (degree >= 68 && degree < 113)
        return "East";
    else if (degree >= 113 && degree < 158)
        return "South-East";
    else if (degree >= 158 && degree < 203)
        return "South";
    else if (degree >= 203 && degree < 248)
        return "South-West";
    else if (degree >= 248 && degree < 293)
        return "West";
    else
        return "North-West";
}

int main() {
    int degree;
    cout << "Enter the degree (0 to 360): ";
    cin >> degree;

    if (degree < 0 || degree > 360) {
        cout << "Invalid input. Please enter a value between 0 and 360." << endl;
        return 1;
    }

    string direction = getCompassDirection(degree);
    cout << "Compass Direction: " << direction << endl;

    return 0;
}


