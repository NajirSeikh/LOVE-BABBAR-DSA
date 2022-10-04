#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int row = 1;

    while(row <= n){

        // Print 1st number triangle
        int firstTraiangle = n - row + 1, number = 1;
        while(firstTraiangle){
            cout << number << " ";
            number = number + 1;
            firstTraiangle = firstTraiangle - 1;
        }

        // Print 1st star triangle
        int times = row - 1; 
        while(times){
            cout << "*" << " ";
            times = times - 1;
        }

        // Print 2nd star triangle
        int end = row - 1;
        while(end){
            cout << "*" << " ";
            end = end - 1;
        }

        // Print 2nd number triangle
        int secndTraiangle = n - row + 1;
        number = n  - row + 1;
        while(secndTraiangle){
            cout << number << " ";
            number = number - 1;
            secndTraiangle = secndTraiangle - 1;
        }

        cout << endl;
        row = row + 1;
    }

}