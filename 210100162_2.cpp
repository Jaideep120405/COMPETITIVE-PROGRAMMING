#include <iostream>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    for(long long int i=1;i<=n;i++){
        long long int a=i*i*(i*i-1)/2;
        long long int b=4*(i-1)*(i-2);
        cout<<a-b<<endl;
    }
    return 0;
}
