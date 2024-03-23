#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[10]={2,41,6,8,1,33,8};
    int item = 117;
    int pos = 3;
    int ele = 7;
    for(int i = ele ; i>pos-1;i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1]= item;
    ele++;

    for(int i = 0  ;i < ele ; i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}


