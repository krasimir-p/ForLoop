#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1, number; i <= n; i++) {
        cin >> number;
        sum += number;
    }

    cout << sum;

    return 0;
}
