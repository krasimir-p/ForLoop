#include <iostream>

using namespace std;

int main()
{
    for (int hour = 0; hour <= 23; hour++) {
        for (int minute = 0; minute <= 59; minute++) {
            for (int secund = 0; secund <= 59; secund++) {
                cout << hour << " : " << minute << " : " << secund << endl;
            }
        }
    }
    return 0;
}
