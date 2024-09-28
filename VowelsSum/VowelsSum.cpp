#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sent;
    getline(cin, sent);

    int sum = 0;

    for (int i = 0; i <= sent.length() - 1; i++) {
        if (sent[i] == 'a') {
            sum += 1;
        }
        else if (sent[i] == 'e') {
            sum += 2;
        }
        else if (sent[i] == 'i') {
            sum += 3;
        }
        else if (sent[i] == 'o') {
            sum += 4;
        }
        else if (sent[i] == 'u') {
            sum += 5;
        }
    }

    cout << sum << endl;

    return 0;
}
