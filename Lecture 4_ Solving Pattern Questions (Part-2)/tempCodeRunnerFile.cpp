#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int space = n - row;
        int i = 1;
        while(i <= space){
            cout << " ";
            space = space - 1;
            i = i + 1;
        }

        int col = 1;
        while(col <= row){
            cout << "*";
            col = col + 1;
        } 
        cout << endl;
        row = row + 1;

         
    }

}