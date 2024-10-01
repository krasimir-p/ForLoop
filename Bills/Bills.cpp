#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int WATER_EXPENSE_MONTLY = 20;
    const int INTERNET_EXPENSES_MONTHLY = 15;
    const double OTHER_EXPENSES_PERCENT = 1.2;
    
    int monthsNumber;
    cin >> monthsNumber;

    double electricityExpensesMonthly;

    double waterTotalExpenses = 0;
    double internetTotalExpenses = 0;
    double electricityTotalExpenses = 0;
    double otherTotalExpenses = 0;
    double monthlyTotalExpenses = 0;

    for (int i = 1; i <= monthsNumber; i++) {
        cin >> electricityExpensesMonthly;
        electricityTotalExpenses += electricityExpensesMonthly;
        waterTotalExpenses += WATER_EXPENSE_MONTLY;
        internetTotalExpenses += INTERNET_EXPENSES_MONTHLY;
        monthlyTotalExpenses = electricityExpensesMonthly + WATER_EXPENSE_MONTLY + INTERNET_EXPENSES_MONTHLY;
        otherTotalExpenses += monthlyTotalExpenses * OTHER_EXPENSES_PERCENT;
    }

    double totalExpenses = electricityTotalExpenses + waterTotalExpenses + internetTotalExpenses + otherTotalExpenses;
    double averageExpenses = totalExpenses / monthsNumber;

    cout << fixed << setprecision(2);
    cout << "Electricity: " << electricityTotalExpenses << " lv" << endl;
    cout << "Water: " << waterTotalExpenses << " lv" << endl;
    cout << "Internet: " << internetTotalExpenses << " lv" << endl;
    cout << "Other: " << otherTotalExpenses << " lv" << endl;
    cout << "Average: " << averageExpenses << " lv" << endl;

    return 0;
}
