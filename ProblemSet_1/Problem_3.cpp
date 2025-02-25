#include <iostream>
// Given mark of student, Print the Grade
//Grade A if mark is greater than or equal to 90
//Grade B if mark is greater than or equal to 80
//Grade C if mark if greater than or equal to 60
//Grade D if mark if greaer than or equal to 35
//Fail if mark is lesser than 35

using namespace std;
int main() {
    int mark;
    cout <<"Enter the Marks: ";
    cin >> mark;
    if(mark >= 90)
    cout << "Grade A";
    else if(mark >= 80)
    cout << "Grade B";
    else if(mark >= 60)
    cout << "Grade C";
    else if(mark >= 35)
    cout << "Grade D";
    else
    cout << "Fail";
    return 0;
}
