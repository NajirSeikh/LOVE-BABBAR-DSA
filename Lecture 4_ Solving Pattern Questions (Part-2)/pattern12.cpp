#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1,start = 1;
    while(row <= n){

        int col = 1;
        while(col <= n){
            char ch = 'A' + start - 1 ;;
            cout << ch << " ";
            col = col + 1;
            start = start + 1;
        }
        cout << endl;
        row = row +1;
    }

}