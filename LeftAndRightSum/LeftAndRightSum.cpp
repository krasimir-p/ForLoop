#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int number;
    int sumLeft = 0, sumRight = 0;

    for (int i = 1; i <= n; i++) {
        cin >> number;
        sumLeft += number;
    }
    for (int i = 1; i <= n; i++) {
        cin >> number;
        sumRight += number;
    }

    if (sumLeft == sumRight) {
        cout << "Yes, sum = " << sumRight << endl;
    }
    else {
        cout << "No, diff = " << abs(sumLeft - sumRight) << endl;
    }

    return 0;
}
