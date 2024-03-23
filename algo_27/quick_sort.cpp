#include<bits/stdc++.h>
using namespace std;


int Partition(int arr[] , int s ,int e)
{
    int pivot = arr[s];
    int cnt = 0 ;

    for(int i = s+1 ;i<=e ;i++)
    {
        if(arr[i]<=pivot) cnt++;
    }

    int i = s ,j = e;

    int pivotind = cnt+s;
    swap(arr[pivotind],arr[s]);

    while(i<pivotind && j>pivotind)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotind && j>pivotind)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

void quicksort(int arr[] , int s , int e)
{
    if(s>=e) return ;

    int p = Partition(arr,s,e);
    quicksort(arr,s,p);
    quicksort(arr,p+1,e);
}

int main()
{

    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0 ; i<n ;i++) cin>>arr[i];

    quicksort(arr,0,n-1);

    for(int i = 0 ; i<n ;i++) cout<<arr[i]<<"   ";

    return 0;
}

