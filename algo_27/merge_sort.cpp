#include<bits/stdc++.h>
using namespace std;

int a[1000];

void Merge(int l, int mid, int r)
{
    int p = l;
    int q = mid+1;
    int len = r-l-1;

    int tmp[len+1];
    int k = 0;

    for(int i = l ; i<=r ; i++)
    {
        if(p>mid)
        {
            tmp[k] = a[q];
            q++;
        }
        else if(q>r)
        {
            tmp[k] = a[p];
            p++;
        }
        else if(a[p]<=a[q])
        {
            tmp[k] = a[p];
            p++;
        }
        else
        {
            tmp[k] = a[q];
            q++;
        }

        k++;
    }

    k = 0;

    for(int i = l ; i<=r ; i++)
    {
        a[i] = tmp[k];
        k++;
    }

}


void Mergesort(int l, int r)
{
    if(l==r) return ;

    int mid = (l+r)/2;

    Mergesort(l,mid);
    Mergesort(mid+1,r);
    Merge(l,mid,r);
}

int main()
{

    int n;
    cin>>n;
    for(int i = 1 ; i<=n ; i++)cin>>a[i];

    Mergesort(1,n);

    for(int i = 1 ; i<=n ; i++)cout<<a[i]<<"  ";

}

