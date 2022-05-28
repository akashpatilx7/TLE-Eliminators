/* HINT : Take 1 of the 3 numbers, write the conditions of it being <= the other 2. Now write the vice versa >= or <= conditions for the remaining 2 numbers.   

T. Sort Numbers

Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 10^6 ≤  A, B, C  ≤  10^6)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read. */



#include <iostream>
using namespace std;

int main()
{
    int p ,s ,j ;
    cin >> p >> s >> j;
    if(p<=s && p<=j){
        if(s<=j ){
            cout<< p << endl;
            cout<< s << endl;
            cout<< j << endl;
        }else if(j<=s){
            cout<< p << endl;
            cout<< j << endl;
            cout<< s << endl;
        } 
    }
    
    else if(s<=p && s<=j){
        if(p<=j){
            cout<< s << endl;
            cout<< p << endl;
            cout<< j << endl;
        }else if(j<=p){
            cout<< s << endl;
            cout<< j << endl;
            cout<< p << endl;
        }
    }
    
    else if(j<=s && j<=p){
        if(s<=p){
            cout<< j << endl;
            cout<< s << endl;
            cout<< p << endl;
        }else if(p<=s){
            cout<< j << endl;
            cout<< p << endl;
            cout<< s << endl;
        }
    }
    
    cout<<endl;
    cout<< p <<endl;
    cout<< s <<endl;
    cout<< j <<endl;

    return 0;
}
