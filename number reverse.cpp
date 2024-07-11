#include <iostream>

using namespace std;

int main()
{
   long int n;
   long int r,rn=0;
    cin>>n;
    do{
        r=n%10;
    rn=rn*10+r;
    n=n/10;
    }while(n!=0);
    cout<<rn;

    return 0;
}
