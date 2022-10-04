#include<iostream>
using namespace std;

int main(){
    int num,i=1;
    cin >> num;

    // while(i <= num){
    //     cout << i << " ";
    //     i = i + 1;
    // }

    // int sum = 0;
    // while(i <= num){
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout << "the value of sum is " << sum << endl;

    // int sum = 0;
    // while(i <= num){
    //     if(i%2 == 0){
    //     sum = sum + i;
    //     }
    //     i = i + 1;
    // }
    // cout << "the value of sum is " << sum << endl;

    int div = 2;
    while(div < num){
        if(num%div == 0){
        cout << num << " is not Prime" << endl;
        }
        else{
             cout << num << " is Prime" << endl;
        }
        div = div + 1;
    }
   

}