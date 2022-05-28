/* C. Even, Odd, Positive and Negative

Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Note
First Example :

Even Numbers are : 0, -4 , 12

Odd Numbers are : -5 , -3

Positive Numbers are : 12

Negative Numbers are : -5 , -3 , -4 */




#include <iostream>
using namespace std;

int main() {
	int X;
    cin>>X;

    int arr[X];
    for(int i=0;i<X;i++){
        cin>>arr[i];
    }

    int evenCount=0;
    int oddCount=0;
    int positiveCount=0;
    int negativeCount=0;

    for(int i=0;i<X;i++){
        if(arr[i]==0){
            evenCount++;
        }

        else{
            if(arr[i]%2==0){
                evenCount++;
            }
            else if(arr[i]%2!=0){
                oddCount++;
            }

            if(arr[i]>0){
                positiveCount++;
            }
            else if(arr[i]<0){
                negativeCount++;
            }
        }
    }

    cout<<"Even: "<<evenCount<<endl;
    cout<<"Odd: "<<oddCount<<endl;
    cout<<"Positive: "<<positiveCount<<endl;
    cout<<"Negative: "<<negativeCount<<endl;
	return 0;
}
