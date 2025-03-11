#include<bits/stdc++.h>
#define ll long long
#define dd double
#define nl endl
using namespace std;

void solve() {
    string first,search;
    cin>>first>>search;
    int flag=0;
    int j=0;
    unordered_set<char>second;
    for (char ch : first) {
        if (ch != ' ') { 
            second.insert(ch);
        }
    }


    for(int i=0;i<search.length();i++){
        if(second.find(search[i])!=second.end()){
            j++;
        }
        if(search.length()==j){
            flag=1;
            break;
        }
    }
    if(flag)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
