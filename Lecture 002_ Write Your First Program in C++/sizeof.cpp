#include<iostream>
using namespace std;

int main(){
    int a = 123;
    cout << "Size of an Integer is " << sizeof(a) << " bytes" << endl;

    char ch = 'n';

    cout << "Size of a Character is " << sizeof(ch) << " bytes" << endl;
 
    bool bl = true;
    cout << "Size of a Boolean is " << sizeof(bl) << " bytes" << endl;

    float f = 1.4;
    cout << "Size of a Float is " << sizeof(f) << " bytes" << endl;

    double d = 1.23;
    cout << "Size of a Double is " << sizeof(d) << " bytes" << endl;

}