#include<bits/stdc++.h>
using namespace std;

int binary_serach(int arr[],int item , int s , int e)
{

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==item) return 1;
        else if(arr[mid]<item) s= mid+1;
        else if(arr[mid]>item) e = mid-1;
    }
    return 0 ;
}

int main()
{

    int arr[10]={1,2,3,4,50,6,7,8};

    int item = 411;
    int sz = 8;
    int s = 0 ;
    int e = sz-1;
    int p = binary_serach(arr,item , s , e);
    if(p==1)
    {
        cout<<"find"<<endl;
    }
    else
    {
        cout<<"not find "<<endl;
    }


}


