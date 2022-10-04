#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // int row = 1;
    // while(row <= n){

    //     int col = 1;
    //     while(col <= n){
    //         char ch = 'A' + row + col - 2 ;;
    //         cout << ch << " ";
    //         col = col + 1;
             
    //     }
    //     cout << endl;
    //     row = row +1;
    // }
    int row = 1;
    while(row <= n){

        int col = 1;
        char start = 'A' + row + col - 2 ;;

        while(col <= n){
            cout << start << " ";
            col = col + 1;
            start = start + 1;
        }
        cout << endl;
        row = row +1;
    }



}