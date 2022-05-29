/* U. Float or int

Given a number N. Determine whether N is float number or integer number.

Note:

If N is float number then print "float" followed by the integer part followed by decimal part separated by space.
If N is integer number then print "int" followed by the integer part separated by space.
For more clarification see the examples below.

Input
Only one line containing a number N (1≤N≤103)

Output
Print the answer required above. */




#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    float N;
    cin>>N;

    int O=N;

    float decimal=N-O;
    cout<<fixed<<setprecision(3);

    if(decimal==0){
        cout<<"int"<<" "<<O<<endl;
    }
    
    else{
        cout<<"float"<<" "<<O<<" "<<decimal<<endl;
    }

	return 0;
}
