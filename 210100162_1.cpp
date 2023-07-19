#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    long int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long int s;
        cin>>s;
        s-=3;
        cout<<26+(s-1)*(s+9)<<endl;
    }

    return 0;
}
