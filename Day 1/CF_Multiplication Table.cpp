/* F. Multiplication table

Given a number N. Print the maltiplication table of the number from 1 to 12

For example: if N = 1


Input
Only one line containing a number N (1 ≤ N ≤ 50).

Output
Print 12 lines according to the required above. */ 


#include<iostream>
using namespace std;

int main(){
     int N;
     cin>>N;
     
     for(int i=1;i<13;i++){
          cout<<N<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<N*i<<endl;
     }
     return 0;
}
