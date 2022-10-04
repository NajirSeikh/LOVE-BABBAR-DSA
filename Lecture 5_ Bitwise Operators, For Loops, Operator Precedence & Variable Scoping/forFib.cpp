#include<iostream>
using namespace std;

int main(){
    int range;
    cout<<"Enter the range of the series "<<endl;
    cin >> range;

    int a = 0;
    int b = 1;


    cout<<"The Fibonacci series is shown below: "<<endl<<a<<" "<<b<<" ";
    for (int i = 1; i <= range; i++)
    {
        /* code */
        int nextNumber = a + b;
        cout<<nextNumber<<" ";

        a = b;
        b = nextNumber;
    }
    cout<<endl;
    




}