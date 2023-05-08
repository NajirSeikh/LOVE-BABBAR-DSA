#include<string>
#include<iostream>
#include<vector>
using namespace std;

bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }
    
    return 0;
}
    
char toLowerCase(char ch) {
if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
    return ch;
else{
    char temp = ch - 'A' + 'a';
    return temp;
}
}

bool checkPalindrome(string a) {
int s = 0;
int e = a.length()-1;

while(s<=e) {
    if(a[s] != a[e])
    {
        return 0;       
    }
    else{
        s++;
        e--;
    }
}
return 1;
}

bool isPalindrome(string s) {
    
    //remove invalid character 
    string temp = "";
    
    for(int j=0; j<s.length(); j++) {   
        if(valid(s[j])) {
            temp.push_back(s[j]);
        }
    }
    
    //lowercase all characters 
    for(int j=0; j<temp.length(); j++) { 
        temp[j] = toLowerCase(temp[j]);
    }
    
    //check palindrome
    return checkPalindrome(temp);
}


int main()
{
    string str;

    cout << "Enter the string: " << endl;
    // cin >> str;

    getline (cin, str);

    if(isPalindrome(str)){
    cout << str << " is Palindrome." << endl;
    }else{
    cout << str << " is not Palindrome." << endl;
    }

return 0;
}