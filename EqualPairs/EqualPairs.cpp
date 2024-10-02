#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
    int pairsNumber;
    cin >> pairsNumber;

    int firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;
    int currentPair = firstNumber + secondNumber;
    int previousPair = currentPair;

    int maxDifference = 0;
    int currentDifference = 0;

    for (int i = 2; i <= pairsNumber; i++) {
        previousPair = currentPair;
        cin >> firstNumber >> secondNumber;
        currentPair = firstNumber + secondNumber;
        currentDifference = abs(currentPair - previousPair);
        if (currentDifference > maxDifference) {
            maxDifference = currentDifference;
        }
    }
    if (maxDifference) {
        cout << "No, maxdiff=" << maxDifference << endl;
    }
    else {
        cout << "Yes, value=" << currentPair << endl;
    }

    return 0;
}
