#include<iostream>
using namespace std;

int main(){

    int num;
    cin >> num;
    
    // int i = 1;
    // while(i <= num){

    //     int j = 1;
    //     while(j <= num){
    //         cout << j;
    //         j = j + 1;
    //     }
    //     cout << endl;

    //     i = i + 1;
    // }
    int i = 1;
    while(i <= num){

        int j = 1;
        while(j <= num){
            cout << num - j + 1;
            j = j + 1;
        }
        cout << endl;

        i = i + 1;
    }


}