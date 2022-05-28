/* F. Digits Summation

Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.

Note
First Example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5) */



#include <iostream>
using namespace std;

int main() {
	long long int N,M;
    cin>>N>>M;

    int lastdigit1=N%10;
    int lastdigit2=M%10;

    cout<<lastdigit1+lastdigit2<<endl;
	return 0;
}
