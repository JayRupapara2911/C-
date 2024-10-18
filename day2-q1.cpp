#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Find the minimum using the ternary operator
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
                1 < 2 ?   1 < 3  ?  1 : 3 : 2 < 3  ? 2 : 3
    // Output the minimum number
    cout << "The minimum number is: " << min << endl;

    return 0;
}
