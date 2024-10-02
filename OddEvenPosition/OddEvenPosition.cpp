#include <iostream>
#include <limits.h>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;

    double oddSum = 0, evenSum = 0;
    double oddMin = 999999999999999.0, evenMin = 999999999999999.0, oddMax = -999999999999999.0, evenMax = -999999999999999.0;
    
    double oddNumber, evenNumber;

    cout << fixed << setprecision(2);

    switch (n)
    {
    case 0:
        cout << "OddSum=0.00,\nOddMin=No,\nOddMax=No,\nEvenSum=0.00,\nEvenMin=No,\nEvenMax=No" << endl;
        break;
   
    case 1:
        cin >> oddNumber;
        cout << "OddSum=" << oddNumber << ",\nOddMin=" << oddNumber << ",\nOddMax=" << oddNumber << ",\nEvenSum=0.00,\nEvenMin=No,\nEvenMax=No" << endl;
        break;
    
    default:
        for (int i = 1; i <= n/2; i++) {
            cin >> oddNumber >> evenNumber;
            oddSum += oddNumber;
            evenSum += evenNumber;
            if (oddNumber < oddMin) {
                oddMin = oddNumber;
            }
            if (oddNumber > oddMax) {
                oddMax = oddNumber;
            }
            if (evenNumber < evenMin) {
                evenMin = evenNumber;
            }
            if (evenNumber > evenMax) {
                evenMax = evenNumber;
            }
        }

        if (n % 2) {
            cin >> oddNumber;
            oddSum += oddNumber;
            if (oddNumber < oddMin) {
                oddMin = oddNumber;
            }
            if (oddNumber > oddMax) {
                oddMax = oddNumber;
            }
        }
        
        cout << "OddSum=" << oddSum << "," << endl;
        cout << "OddMin=" << oddMin << "," << endl;
        cout << "OddMax=" << oddMax << "," << endl;
        cout << "EvenSum=" << evenSum << "," << endl;
        cout << "EvenMin=" << evenMin << "," << endl;
        cout << "EvenMax=" << evenMax << endl;
        break;
    }

    return 0;
}
