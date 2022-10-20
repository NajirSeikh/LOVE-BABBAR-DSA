#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row <= n){

        // Print space
        int space = n - row;
        while(space){
            cout << " ";
            space = space - 1;
        }

        // Print 1st triangle
        int times = row; 
        int start = 1;
        while(times){
            cout << start;
            start = start + 1;
            times = times - 1;
        }

        // Print 2nd triangle
        int end = row - 1;
        while(end){
            cout << end;
            end = end - 1;
        }

        cout << endl;
        row = row + 1;
    }

}