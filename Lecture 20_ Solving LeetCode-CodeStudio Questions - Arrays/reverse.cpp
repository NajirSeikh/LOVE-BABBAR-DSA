#include <iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){

    int start =  0, end = v.size()-1;

    while (start <= end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
    return v;
}

void print(vector<int> v){
    for(int i:v){
        cout<<i<<' ';
    }
    cout<<endl;
}

int main()
{
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    cout<<"Original array ", print(v);

    vector<int> ans = reverse(v);
    
    cout<<"Reverse array ", print(ans);

return 0;
}