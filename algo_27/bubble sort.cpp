#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int arr[],int n)
{
    int cnt = 0 ;

    for(int i = 0 ; i< n-1 ;i++)
    {
        for(int j = 0 ; j < n-1-i ;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                cnt++;
            }


        }

    }
    cout<<"cnt  = "<<cnt<<endl;
}

int main()
{

    int arr[15]={22,51,57,85,46,20,3,52,100,99,76};
    int n = 11;
    bubble_sort(arr,n);
    for(int i = 0 ; i < n ;i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}


