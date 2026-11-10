#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, w;
    cin>>n;
    cin>>w;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    if(w>n){
        cout<<"Window size"<<endl;
        return 0;
    }
    long long current_sum=0, max_sum=0;
    for(int i=0; i<w; i++){
        current_sum+=a[i];
    }
    max_sum = current_sum;
    for(int i=w; i<n; i++){
        current_sum+=a[i]-a[i-w];
        max_sum=max(max_sum, current_sum);
    }
    cout<<"Maximum sum of subarray of size " << w << " is: " <<max_sum<< endl;
    return 0;
}