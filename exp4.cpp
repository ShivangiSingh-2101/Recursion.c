//Shivangi Singh 
//24070123148
//B3
#include <iostream>
using namespace std;

int main() {
    int n, reversed_number = 0;
    cout << "Enter a number: ";
    cin >> n;

    int original = n; 
    while (n != 0) {
        int digit = n % 10;                  
        reversed_number = reversed_number * 10 + digit;
        n = n / 10;                          
    }

    cout << "Reversed number of " << original << " is " << reversed_number << endl;

    return 0;
}

/*Output
Enter a number: 2118
Reversed number of 2118 is 8112
*/
