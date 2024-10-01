#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int movementsNumber;
    cin >> movementsNumber;

    int points;
    int between0_9 = 0, between10_19 = 0, between20_29 = 0, between30_39 = 0, between40_50 = 0, invalid = 0;
    double totalPoints = 0;


    for (int i = 1; i <= movementsNumber; i++) {
        cin >> points;
        if (points<0) {
            totalPoints /= 2;
            invalid++;
        }
        else if (points < 10) {
            totalPoints += points * 0.2;
            between0_9++;
        }
        else if (points < 20) {
            totalPoints += points * 0.3;
            between10_19++;
        }
        else if (points < 30) {
            totalPoints += points * 0.4;
            between20_29++;
        }
        else if (points < 40) {
            totalPoints += 50;
            between30_39++;
        }
        else if (points <= 50) {
            totalPoints += 100;
            between40_50++;
        }
        else {
            totalPoints /= 2;
            invalid++;
        }
    }

    cout << fixed << setprecision(2);
    cout << totalPoints << endl;
    cout << "From 0 to 9: " << static_cast<double>(between0_9) / movementsNumber * 100 << "%" << endl;
    cout << "From 10 to 19: " << static_cast<double>(between10_19) / movementsNumber * 100 << "%" << endl;
    cout << "From 20 to 29: " << static_cast<double>(between20_29) / movementsNumber * 100 << "%" << endl;
    cout << "From 30 to 39: " << static_cast<double>(between30_39) / movementsNumber * 100 << "%" << endl;
    cout << "From 40 to 50: " << static_cast<double>(between40_50) / movementsNumber * 100 << "%" << endl;
    cout << "Invalid numbers: " << static_cast<double>(invalid) / movementsNumber * 100 << "%" << endl;
    return 0;
}
