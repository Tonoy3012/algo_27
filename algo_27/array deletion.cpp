#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[50]={1,2,3,4,5,6,7,8,9};
    int pos = 3;
    int ele = 9;

    for(int i = pos ;i<ele;i++)
    {
        arr[i-1]=arr[i];
    }
    ele--;
    for(int i = 0 ; i<ele;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}


