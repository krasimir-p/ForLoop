#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tournamentsNumber, initialPoints;
    cin >> tournamentsNumber >> initialPoints;

    string position;
    int winCount = 0;
    int points = initialPoints;

    for (int i = 1; i <= tournamentsNumber; i++) {
        cin >> position;
        if (position == "W") {
            points += 2000;
            winCount++;
        }
        else if (position == "F") {
            points += 1200;
        }
        else if (position == "SF") {
            points += 720;
        }
    }

    cout << "Final points: " << points << endl;
    cout << "Average points: " << (points-initialPoints) / tournamentsNumber << endl;
    cout << fixed << setprecision(2) << static_cast<double>(winCount) / tournamentsNumber * 100 << '%' << endl;

    return 0;
}
