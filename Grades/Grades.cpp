#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int studentsNumber;
    cin >> studentsNumber;

    double grade;

    double moreThan5 = 0, between4_5 = 0, between3_4 = 0, LessThan3 = 0;
    double sumOfGrades = 0;

    for (int currentStudent = 1; currentStudent <= studentsNumber; currentStudent++) {
        cin >> grade;
        sumOfGrades += grade;
        if (grade >= 5.0) {
            moreThan5++;
        }
        else if (grade >= 4.0) {
            between4_5++;
        }
        else if (grade >= 3.0) {
            between3_4++;
        }
        else {
            LessThan3++;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Top students: " << moreThan5 / studentsNumber * 100 << '%' << endl;
    cout << "Between 4.00 and 4.99: " << between4_5 / studentsNumber * 100 << '%' << endl;
    cout << "Between 3.00 and 3.99: " << between3_4 / studentsNumber * 100 << '%' << endl;
    cout << "Fail: " << LessThan3 / studentsNumber * 100 << '%' << endl;
    cout << "Average: " << sumOfGrades / studentsNumber << endl;

    return 0;
}
