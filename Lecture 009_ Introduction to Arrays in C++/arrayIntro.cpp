#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout << endl << "Printing the array" << endl; 
    //print array      
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl << "Printing Done" << endl; 

}

int main(){
    //declare
    int number[15];

    //accessing an array
    cout << "Value at 14 index " << number[14] << endl;

    //intializing an array
    int second[3] = {5,7,11};

    //accessing an element
    cout << "Value of 2 index " << second[2] << endl;

    int third[15] = {2,7};

    int n = 15;    
    printArray(third, n);   //output : 2 7 0 0 0 0 0 0 0 0 0 0 0 0 0

    //initiazing all location with 0
    int forth[10] = {0};

    n = 10;
    printArray(forth, n);   // output : 0 0 0 0 0 0 0 0 0 0

    //initiazing all location with 1 [not possible with below line]
    int fifth[10] = {1};

    n = 10;
    printArray(fifth, n);   // output : 1 0 0 0 0 0 0 0 0 0
    
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of fifth is " << fifthSize << endl;

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << endl << "Printing the array" << endl; 
    //print array      
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl << "Printing Done" << endl;

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];





    cout << endl << "Everything is fine!" << endl;

}