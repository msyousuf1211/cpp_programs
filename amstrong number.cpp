#include<iostream>
using namespace std;

int main ()
{
    int N, temp, rem, sum = 0;
    
    cin >> N;
    temp = N;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem*rem*rem;
        temp = temp / 10;
    }
    if (sum == N)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
