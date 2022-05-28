/* H. One Prime

Given a number X. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are


Input
Only one line containing a number X (2 ≤ X ≤ 105).

Output
print "YES" if the number is prime and "NO" otherwise. */



#include <iostream>
using namespace std;

int main() {
	int X;
    cin>>X;

    int count=0;

    for(int i=1;i<=X;i++){
        if(X%i==0){
            count++;
        }
    }

    if(count==2){
        cout<<"YES"<<endl;
    }
    else {
         cout<<"NO"<<endl;
    }

	return 0;
}
