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
Start
Accept input n from the user.
If n is less than 0, display an error message and stop.
Call a recursive function recursiveSum(n):
If n == 0, return 0 (base case).
Otherwise, return n + recursiveSum(n - 1).
Print the result.
End
