#include<bits/stdc++.h>
using namespace std;

int Count(int coin[],int ele,int sum)
{

    if(sum==0) return 1;
    if(sum<0) return 0;
    if(ele<=0) return 0;

//    int p = Count(coin , ele , sum-coin[ele-1]);
//    cout<<"p = "<<p<<endl;
//    int q = Count(coin , ele-1 , sum);
//    cout<<"q =  "<<q<<endl ;
//    int ans = p+q;
//    cout<<"ans =  "<<ans<<endl<<endl ;
//
//    cout<<"ele = "<<ele<<"    sum = "<<sum<<endl;

    return Count(coin , ele , sum-coin[ele-1])+Count(coin , ele-1 , sum);

}


int main()
{

    int coin[]={1,2,3};
    int sum;
    cin>>sum;
    int ans = Count(coin,3,sum);
    cout<<ans<<endl;
    return 0;
}

