#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int ODD_YEAR_EXPENSES_INITIAL = 12000;
    const int ODD_YARS_MULTIPLIER = 50;
    const int EVEN_YEAR_EXPENSES = 12000;
    const int TELEPORT_YEAR = 1800;
    const int AGE = 18;
    
    double money;
    cin >> money;
    int year;
    cin >> year;

    int curentAge = AGE;

    for (int i = TELEPORT_YEAR; i <= year; i++) {
        if (i % 2) {
            money -= (ODD_YEAR_EXPENSES_INITIAL+curentAge*ODD_YARS_MULTIPLIER);
        }
        else {
            money -= EVEN_YEAR_EXPENSES;
        }
        curentAge++;
    }

    cout << fixed << setprecision(2);
    if (money >= 0) {
        cout << "Yes! He will live a carefree life and will have " << money << " dollars left." << endl;
    }
    else {
        cout << "He will need " << -1 * money << " dollars to survive." << endl;
    }

    return 0;
}
