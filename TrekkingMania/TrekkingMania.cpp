#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int groupsNumber;
    cin >> groupsNumber;

    int climbersNumber;

    int musalaClimbersNumber = 0, montblancClimbersNumber = 0, kilimanjaroClimbersNumber = 0, k2ClimbersNumber = 0, everestClimbersNumber = 0;

    for (int i = 1; i <= groupsNumber; i++) {
        cin >> climbersNumber;
        if (climbersNumber <= 5) {
            musalaClimbersNumber += climbersNumber;
        }
        else if (climbersNumber <= 12) {
            montblancClimbersNumber += climbersNumber;
        }
        else if (climbersNumber <= 25) {
            kilimanjaroClimbersNumber += climbersNumber;
        }
        else if (climbersNumber <= 40) {
            k2ClimbersNumber += climbersNumber;
        }
        else {
            everestClimbersNumber += climbersNumber;
        }
    }

    int totalClimbersNumber = musalaClimbersNumber + montblancClimbersNumber + kilimanjaroClimbersNumber + k2ClimbersNumber + everestClimbersNumber;

    cout << fixed << setprecision(2);
    cout << static_cast<double>(musalaClimbersNumber) / totalClimbersNumber * 100 << '%' << endl;
    cout << static_cast<double>(montblancClimbersNumber) / totalClimbersNumber * 100 << '%' << endl;
    cout << static_cast<double>(kilimanjaroClimbersNumber) / totalClimbersNumber * 100 << '%' << endl;
    cout << static_cast<double>(k2ClimbersNumber) / totalClimbersNumber * 100 << '%' << endl;
    cout << static_cast<double>(everestClimbersNumber) / totalClimbersNumber * 100 << '%' << endl;

    return 0;
}
