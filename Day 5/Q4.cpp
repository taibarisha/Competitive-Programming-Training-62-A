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
    int i=0, j=0, max_len=0;
    long long current=0;
    for(j=0; j<n; j++){
        current+=a[j];
        while(current>s && i<=j){
            current-=a[i];
            i++;

        }
        max_len=max(max_len, j-i+1);
    }
    cout<<"Longest sum length <= "<< s <<" is "<<max_len<<endl;
    return 0;
}