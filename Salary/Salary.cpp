#include <iostream>

using namespace std;

int main()
{
    const int FACEBOOK_FINE = 150;
    const int INSTAGRAM_FINE = 100;
    const int REDDIT_FINE = 50;

    int tabsNumber, salary;
    cin >> tabsNumber >> salary;

    string siteName;

    for (int i = 1; i <= tabsNumber; i++) {
        cin >> siteName;
        if (siteName == "Facebook") {
            salary -= FACEBOOK_FINE;
        }
        else if (siteName == "Instagram") {
            salary -= INSTAGRAM_FINE;
        }
        else if (siteName == "Reddit") {
            salary -= REDDIT_FINE;
        }
        if (salary <= 0) {
            cout << "You have lost your salary." << endl;
            return 0;
        }
    }
    
    cout << salary << endl;

    return 0;
}
