#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int number;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;

    for (int i = 1; i <= n; i++) {
        cin >> number;
        if (number < 200) {
            p1++;
        }
        else if (number < 400) {
            p2++;
        }
        else if (number < 600) {
            p3++;
        }
        else if (number < 800) {
            p4++;
        }
        else {
            p5++;
        }
    }

    cout << fixed << setprecision(2);
    cout << static_cast<double>(p1) / n * 100 << '%' << endl;
    cout << static_cast<double>(p2) / n * 100 << '%' << endl;
    cout << static_cast<double>(p3) / n * 100 << '%' << endl;
    cout << static_cast<double>(p4) / n * 100 << '%' << endl;
    cout << static_cast<double>(p5) / n * 100 << '%' << endl;

    return 0;
}
