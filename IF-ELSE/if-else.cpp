#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 < num2) {
        cout << "The minimum number is: " << num1 << endl;
    } else {
        cout << "The minimum number is: " << num2 << endl;
    }

    return 0;
}
