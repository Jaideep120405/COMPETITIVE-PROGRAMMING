#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int t,n,k,b,s; cin>>t;
    while(t--){
        cin>>n>>k>>b>>s;

        if(b*k>s||s>b*k+n*(k-1)){
            cout<<"-1"<<endl;
            continue;
        }
        s=s-b*k;

        for(long long i=1;i<n;i++){
            cout<<min(s,k-1)<<" ";
            s=s-min(s,k-1);
        }

        cout<<s+b*k<<endl;
    }

    return 0;
}
