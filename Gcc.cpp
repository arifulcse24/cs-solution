
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
        else
        return gcd(b,(a%b));
}

int main()
{
    int n,a,b;
    cin>>a>>b;
    n = gcd(a,b);
    cout<<n<<endl;
    return 0;

}
