//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;

int recursiveSum(int n) {
    if (n == 0)
        return 0; 
    else
        return n + recursiveSum(n - 1); 
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        int result = recursiveSum(n);
        cout << "Sum of numbers from 1 to " << n << " is: " << result << endl;
    }

    return 0;
}
//  Output
// Enter a positive integer: 6
// Sum of numbers from 1 to 6 is: 21
