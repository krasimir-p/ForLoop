#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int BROTHER_TAX = 1;
    const int MONEY_FOR_SECOND_BIRTHDAY = 10;
    const int DELTA_MONEY = 10;
    
    int age, toyPrice;
    double washingMachinePrice;
    cin >> age >> washingMachinePrice >> toyPrice;

    int oddBirthdays, evenBirthdays;
    evenBirthdays = age / 2;
    oddBirthdays = evenBirthdays + age % 2;
    
    int moneyFromToys = toyPrice * oddBirthdays;
    int moneyAsGiftsBeforeTax = ((2 * MONEY_FOR_SECOND_BIRTHDAY + (evenBirthdays - 1) * DELTA_MONEY) / 2) * evenBirthdays;
    int allMoney = moneyFromToys + moneyAsGiftsBeforeTax - evenBirthdays * BROTHER_TAX;

    double restMoney = allMoney - washingMachinePrice;
    cout << fixed << setprecision(2);
    if (restMoney >= 0) {
        cout << "Yes! " << restMoney << endl;
    }
    else {
        cout << "No! " << restMoney * -1 << endl;
    }

    return 0;
}
