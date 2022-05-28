/* K. Divisors

Given a number N. Print all the divisors of N in ascending order.

Input
Only one line containing a number N (1 ≤ N ≤ 104).

Output
Print all positive divisors of N, one number per line. */ 


#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        if(N%i==0){
            cout<<i<<endl;
        }
    }
	return 0;
}
