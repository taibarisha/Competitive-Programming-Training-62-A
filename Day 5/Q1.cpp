#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, target;
    cin>>n;
    cin>>target;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int i=0, j=n-1;
    bool found = false;
    while(i<j){
        if(a[i]+a[j]<target){
            i++;
        }
        else if(a[i]+a[j]>target){
            j--;
        }
        else{
             found=true;
             break;
             
        }
    }
    if(found){
        cout<<"Pair found: "<<a[i]<<" and "<<a[j]<<endl;
    }
    return 0;
}