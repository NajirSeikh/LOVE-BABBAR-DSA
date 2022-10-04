#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool isBool = 0;
    for (int i = 0; i < 30; i++)
    {
         int ans = pow(2,i);

         if(ans == n){
             isBool = 1;
             break;
         }
    }

    if (isBool == 1)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}