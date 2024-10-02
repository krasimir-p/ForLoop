#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int stadiumCapacity;
    cin >> stadiumCapacity;
    int fansNumber;
    cin >> fansNumber;
    
    int aSector = 0, bSector = 0, vSector = 0, gSector = 0;
    char currentFanSector;

    for (int i = 1; i <= fansNumber; i++) {
        cin >> currentFanSector;
        switch (currentFanSector)
        {
        case 'A':
            aSector++;
            break;
        case 'B':
            bSector++;
            break;
        case 'V':
            vSector++;
            break;
        case 'G':
            gSector++;
            break;
        }
    }

    cout << fixed << setprecision(2);
    cout << static_cast<double>(aSector) / fansNumber * 100 << '%' << endl;
    cout << static_cast<double>(bSector) / fansNumber * 100 << '%' << endl;
    cout << static_cast<double>(vSector) / fansNumber * 100 << '%' << endl;
    cout << static_cast<double>(gSector) / fansNumber * 100 << '%' << endl;
    cout<< static_cast<double>(fansNumber) / stadiumCapacity * 100 << '%' << endl;
    
    return 0;
}
