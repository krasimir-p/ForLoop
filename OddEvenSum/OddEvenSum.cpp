#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int number;
    int oddSum = 0, evenSum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> number;
        if (i % 2) {
            oddSum += number;
        }
        else {
            evenSum += number;
        }
    }

    if (oddSum == evenSum) {
        cout << "Yes" << endl;
        cout << "Sum = " << oddSum << endl;
    }
    else {
        cout << "No" << endl;
        cout << "Diff = " << abs(oddSum - evenSum) << endl;
    }

    return 0;
}
