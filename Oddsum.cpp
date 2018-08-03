#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,ans,count1 = 0, count11 = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        if(a%2==0)
            count1++;
        else
            count11++;
    }
    ans = count1*count11;
    cout<<ans<<endl;
    return 0;
}
