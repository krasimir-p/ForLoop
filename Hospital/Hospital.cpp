#include <iostream>

using namespace std;

int main()
{
    const int INITIAL_DOCTORS = 7;

    int period;
    cin >> period;
    
    int patients;
    int doctors=INITIAL_DOCTORS;
    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int day = 1; day <= period; day++) {
        cin >> patients;

        if (day % 3 == 0 && untreatedPatients > treatedPatients) {
            doctors++;
        }

        if (patients > doctors) {
            untreatedPatients += (patients-doctors);
            treatedPatients += doctors;
        }
        else {
            treatedPatients += patients;
        }
    }

    cout << "Treated patients: " << treatedPatients << "." << endl;
    cout << "Untreated patients: " << untreatedPatients << "." << endl;

    return 0;
}
