#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int space = n - row;
        
        while(space){
            cout << " ";
            space = space - 1;
        }

        int times = row; 
        
        while(times){
            cout << row;
            times = times - 1;
        }
        cout << endl;
        row = row + 1;
    }

}