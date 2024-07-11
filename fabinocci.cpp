
#include <iostream>
using namespace std;
int main(){
    int n,c,a=1,b=1;
    cin>>n;
    for(int i=1;i<n-1;i++){
       
        c=b+a;
        a=b;
        b=c;
    }
    cout<<b<<endl;

return 0;
}

