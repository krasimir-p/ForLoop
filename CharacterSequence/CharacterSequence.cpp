#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sent;
    getline(cin, sent);

    for (int i = 0; i <= sent.length() - 1; i++) {
        cout << sent[i] << endl;
    }
    return 0;
}
