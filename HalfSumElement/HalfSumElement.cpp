#include <iostream>
#include <climits>

using namespace std;

int main() {
	int n;
	cin >> n;

	int number, sumNumber = 0, maxNumber = INT_MIN;

	for (int i = 1; i <= n; i++) {
		cin >> number;
		sumNumber += number;
		if (number > maxNumber) {
			maxNumber = number;
		}
	}

	if (sumNumber - maxNumber == maxNumber) {
		cout << "Yes" << endl;
		cout << "Sum = " << maxNumber << endl;
	}
	else {
		cout << "No" << endl;
		cout << "Diff = " << abs(sumNumber - 2 * maxNumber) << endl;
	}
	return 0;
}