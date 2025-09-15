Program 1

Aim:
To write a C++ program that calculates the sum of the first n natural numbers using recursion.

 Theory:
Recursion is a programming technique where a function calls itself to solve a smaller version of the problem until it reaches a base case.
In this program, recursion is used to calculate the sum of the first n natural numbers. The function recursiveSum(n) returns:
n + recursiveSum(n - 1)
The recursion continues until n becomes 0, which is the base case. At this point, the recursion stops and the values are returned back up the call stack to get the total sum.
Mathematically:Sum(n) = n + (n-1) + (n-2) + ... + 1
Using recursion:
Sum(n) = n + Sum(n - 1)
Base case:
Sum(0) = 0

 Algorithm:
- Start
- Accept input n from the user.
- If n is less than 0, display an error message and stop.
- Call a recursive function recursiveSum(n):
- If n == 0, return 0 (base case).
- Otherwise, return n + recursiveSum(n - 1).
- Print the result.
- End

Program 2

Aim:
To write a C++ program to find the factorial of a number using recursion.

Theory:

Recursion is a process where a function calls itself. The factorial of a number n (denoted as n!) is the product of all positive integers less than or equal to n.
Mathematically:
n! = n × (n - 1) × (n - 2) × ... × 1
Using recursion:
factorial(n) = n × factorial(n - 1)

Base Case:
factorial(0) = 1
This base case stops the recursion.

 Algorithm:
- Start
- Input a number n.
- If n is negative, display an error.
- Define a recursive function factorial(n):
- If n == 0 or n == 1, return 1.
- Else return n * factorial(n - 1).
- Call the recursive function and print the result.
- End

Program 3

Aim:
C++ program that takes a string from the user and prints it in reverse using recursion.

Theory:
Recursion works by calling the same function with a smaller problem size.
Here, we start from the last character of the string and keep printing characters while moving backward.

Algorithm:
- Start
- Read the string from the user.
- Define a recursive function reverseString(str, index):
- If index < 0, return.
- Print str[index].
- Call reverseString(str, index - 1).
- Call the function with index = str.length() - 1.
- End


Program 4
Aim:

Write a C++ program to reverse a given integer number.

Theory:

Reversing a number means to arrange the digits of the number in reverse order. For example, if the number is 1234, the reversed number will be 4321.
To reverse a number, we extract the last digit using the modulus operator % 10, add it to a new reversed number by shifting existing digits to the left (multiplying by 10), and then remove the last digit from the original number by dividing it by 10. This process is repeated until the original number becomes zero.

Algorithm:

- Start
- Read the number n
- Initialize reversed_number as 0
- While n is not 0:
- Extract last digit digit = n % 10
- Update reversed_number = reversed_number * 10 + digit
- Remove last digit from n by n = n / 10
- Print reversed_number
- End
