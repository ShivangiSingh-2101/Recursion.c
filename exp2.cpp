//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else
        return n * factorial(n - 1); 
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(num);
        cout << "Factorial of " << num << " is: " << result << endl;
    }

    return 0;
}
//Output
// Enter a positive integer: 6
// Factorial of 6 is: 720
