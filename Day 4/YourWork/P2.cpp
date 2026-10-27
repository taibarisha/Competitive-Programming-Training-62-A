#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string, int> freq;
    for(int i=0; i<n; i++){
        string w;
        cin>>w;
        freq[w]++;
    }
    cout<<"Word Frequencies: "<<endl;
    for(auto x:freq){
        cout<<x.first<<" "<<x.second<<endl;
    }
    string query;
    cin>>query;
    cout<<"Frequency of " <<query<< "is: "<<freq[query]<<endl;
    return 0;
}