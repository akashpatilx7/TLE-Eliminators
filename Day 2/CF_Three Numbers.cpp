/* Z. Three Numbers

Given two numbers K and S. Determine how many different values of X,Y and Z such that (0≤X,Y,Z≤K) and X+Y+Z=S.

Input
Only one line containing two numbers K and S (0≤K≤3000,0≤S≤3K).

Output
Print the answer required above.

Note
In the first test case all values of X,Y,Z that satisfy the conditions are :

0 0 1

0 1 0

1 0 0

In the second test case all values of X,Y,Z that satisfy the conditions are : SEE IMAGE IN PROBLEM STATEMENT */




#include <iostream>
using namespace std;

int main(){
	int K,S;
    cin>>K>>S;

    int count=0;
    int X,Y,Z;
        for(int X=0;X<=K;X++){
            for(int Y=0;Y<=K;Y++){
                int Z=S-X-Y;
                if(0<=Z && Z<=K){
                    count++;
                }
            }
        }
    cout<<count<<endl;
	return 0;
}
