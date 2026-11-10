#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0;
    int j=s.length()-1;
    bool is_palindrome=true;
    while(i<j){
        if(s[i]!=s[j]){
            is_palindrome=false;
            break;
        }
        i++;
        j--;
    }
    if(is_palindrome){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}