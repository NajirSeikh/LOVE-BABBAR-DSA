#include<iostream>
using namespace std;

int main(){
    /*
    int a;
    cin >> a;
    
    cout << "The value of a is " << a << endl;
    */
   
   /*
    int a;
    cout << "enter the value of a " << endl;
    cin >> a;

    if(a > 0){
        cout << "a is positive" << endl;
        
    }
    else{
        if(a < 0){
            cout << "a is negative" << endl;
        }
        else{
            cout << "a is 0" << endl;
        }
    }
    */

   /*
   int a;
   cin >> a;

   if(a>0){
       cout << "a is positive" << endl;
   }
   else if(a<0){
       cout << "a is negative" << endl;
   }
   else{
       cout << "a is 0" << endl;
   }
   */

    // int a = 24;

    // if(a > 20){
    //     cout << "Love" << endl;
    // }
    // else if(a == 24){
    //     cout << "Lovely" << endl;
    // }
    // else{
    //     cout << "Babbar" << endl;   
    // }

  /* ````````````````````Assignment 1```````````````*/
    char ch;
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout << "This is Lowercase" << endl;
    }else if(ch >= 'A' && ch <= 'Z'){
        cout << "This is Uppercase" << endl;
    }else if(ch >= '0' && ch <= '9'){
        cout << "This is Number" << endl;
    }
    else{
        cout << "This is Special character" << endl;
    }

}