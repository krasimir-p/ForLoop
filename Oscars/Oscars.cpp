#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    const double PASS_SCORE = 1250.5;

    string actorName;
    double academyPoints;
    int judgesNumber;
    getline(cin, actorName);
    cin >> academyPoints >> judgesNumber;

    string judgeName;
    double judgePoints;
    double points=academyPoints;

    cout << fixed << setprecision(1);

    for (int i = 1; i <= judgesNumber; i++) {
        cin.ignore();
        getline(cin, judgeName);
        cin >> judgePoints;
        points += judgeName.length() * judgePoints / 2;
        if (points >= PASS_SCORE) {
            cout << "Congratulations, " << actorName << " got a nominee for leading role with " << points << "!" << endl;
            return 0;
        }
    }

    cout << "Sorry, " << actorName << " you need " << PASS_SCORE - points << " more!" << endl;

    return 0;
}
