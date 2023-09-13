#include <iostream>
using namespace std;

double radarRangeCalculator(double time) {
    // Speed of light in meters per second
    const double speedOfLight = 299792458.0;

    // Calculate distance using formula: distance = (speed * time) / 2
    double distance = (speedOfLight * time) / 2;

    return distance;
}

int main() {
    double timeToTarget;
    cout << "Enter round-trip time in seconds: ";
    cin >> timeToTarget;

    double distanceToTarget = radarRangeCalculator(timeToTarget);
    cout << "The distance to the target is approximately " << distanceToTarget << " meters." << endl;

    return 0;
}
