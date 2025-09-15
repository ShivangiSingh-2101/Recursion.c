//Shivangi Singh
//24070123148
#include <iostream>
using namespace std;


void reverseString(string str, int index) {
    if (index < 0)
        return; // base case
    cout << str[index];
    reverseString(str, index - 1); 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // allows spaces in input

    cout << "Reversed string: ";
    reverseString(input, input.length() - 1);

    cout << endl;
    return 0;
}
/*
Output
Enter a string: Shivangi
Reversed string: ignavihS
*/
