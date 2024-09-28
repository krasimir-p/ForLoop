#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0, result = 1; i <= n; i += 2, result *= 4) {
        cout << result << endl;
    }
    return 0;
}
