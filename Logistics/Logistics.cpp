#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MICROBUS_TON_PRICE = 200;
    const int TRUCK_TON_PRICE = 175;
    const int TRAIN_TON_PRICE = 120;

    int cargosNumber=0;
    cin >> cargosNumber;

    int tonsCargo=0;
    int microBusTonsCargo = 0;
    int truckTonsCargo = 0;
    int trainTonsCargo = 0;

    for (int i = 1; i <= cargosNumber; i++) {
        cin >> tonsCargo;
        if (tonsCargo <= 3) {
            microBusTonsCargo += tonsCargo;
        }
        else if (tonsCargo <= 11) {
            truckTonsCargo += tonsCargo;
        }
        else {
            trainTonsCargo += tonsCargo;
        }
    }

    int totalPrice = microBusTonsCargo * MICROBUS_TON_PRICE + truckTonsCargo * TRUCK_TON_PRICE + trainTonsCargo * TRAIN_TON_PRICE;
    int totalTonsCargo = microBusTonsCargo + truckTonsCargo + trainTonsCargo;

    cout << fixed << setprecision(2);
    cout << static_cast<double>(totalPrice) / totalTonsCargo << endl;
    cout << static_cast<double>(microBusTonsCargo) / totalTonsCargo * 100 << '%' << endl;
    cout << static_cast<double>(truckTonsCargo) / totalTonsCargo * 100<< '%' << endl;
    cout << static_cast<double>(trainTonsCargo) / totalTonsCargo * 100 << '%' << endl;

    return 0;
}
