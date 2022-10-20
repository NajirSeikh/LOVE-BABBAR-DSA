#include<iostream>
using namespace std;

int main(){
    char ch = '1';
    int num = 1;

    cout<<endl;
    while(1){
    switch (ch)
    {
    case 1:
        cout<<"First"<<endl;
        break;
    case '1': 
        cout<<"The value is "<<num<<endl;
        exit(1);
    
    default:
        cout<<"It is default case"<<endl;
        break;
    }
    }
    
}