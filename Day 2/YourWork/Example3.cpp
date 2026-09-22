#include <bits/stdc++.h>
using namespace std;

int main() {
    pair< int, pair < string, double > > p;
    p.first = 16;
    p.second.first = "Taiba";
    p.second.second = 3.55;
    cout << "ID: " << p.first<< endl;
    cout << "Name: " << p.second.first << endl;
    cout << "CGPA: " << p.second.second << endl;
    return 0;
}