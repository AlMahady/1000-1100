#include<bits/stdc++.h>


using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];

        }
        int first=vec[0];

        bool bol=false;
        for(int i:vec){
            if(first>i){
                bol=true;
            }
        }
        if(bol) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
