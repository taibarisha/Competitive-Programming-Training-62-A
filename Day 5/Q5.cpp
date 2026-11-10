#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s;
    cin>>n;
    cin>>s;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int i=0, j=0;
    int min_len=n+1;
    long long current=0;
    for(j=0; j<n; j++){
        current+=a[j];
        while(current>=s){
            min_len=min(min_len, j-i+1);
            current-=a[i];
            i++;

        }
   
    }
    if(min_len==n+1){
    cout<<"Longest sum length >= "<< s <<" is "<<min_len<<endl;
    }
    return 0;
}