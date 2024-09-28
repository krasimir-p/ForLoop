#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = INT_MIN, min = INT_MAX;
    int number;

    for (int i = 1; i <= n; i++) {
        cin >> number;
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }

    cout << "Max number: " << max << endl;
    cout << "Min number: " << min << endl;

    return 0;
}
