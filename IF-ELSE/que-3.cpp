#include <iostream>
using namespace std;

int main() {
    float subject1, subject2, subject3, average;

    cout << "Enter marks for Subject 1 (out of 100): ";
    cin >> subject1;
    cout << "Enter marks for Subject 2 (out of 100): ";
    cin >> subject2;
    cout << "Enter marks for Subject 3 (out of 100): ";
    cin >> subject3;

    average = (subject1 + subject2 + subject3) / 3;

    cout << "The average mark is: " << average << endl;

    return 0;
}
