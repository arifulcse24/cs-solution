#include<bits/stdc++.h>
using namespace std;

void lelection_sort(int ar[],int n)
{
    int i,j,index_min,temp;
    for(i=0; i<n-1; i++) {
        index_min=i;
        for(j = i+1;j<n;j++) {
            if(ar[j]<ar[index_min]) {
                index_min=j;
            }
        }
        if(index_min!=i) {
            temp=ar[i];
            ar[i]=ar[index_min];
            ar[index_min]=temp;
        }
    }
}
int main()
{
    int n,ara[1000];
    cin>>n;
    int i;
    for(i = 0; i<n;i++) {
        cin>>ara[i];
    }
    lelection_sort(ara,n);

    for(i = 0; i<n; i++) {
        cout<<ara[i]<<endl;
    }
}
