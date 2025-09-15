//Shivangi Singh 
//24070123148
//B3
#include <iostream>
using namespace std;

int main() {
    int n, reversed_number = 0;
    cout << "Enter a number: ";
    cin >> n;

    int original = n; // Store original number to show output properly

    while (n != 0) {
        int digit = n % 10;                   // Extract last digit
        reversed_number = reversed_number * 10 + digit; // Append digit
        n = n / 10;                          // Remove last digit
    }

    cout << "Reversed number of " << original << " is " << reversed_number << endl;

    return 0;
}

/*Output
Enter a number: 2118
Reversed number of 2118 is 8112
*/
