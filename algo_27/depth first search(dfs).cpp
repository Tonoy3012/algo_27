
#include<bits/stdc++.h>
using namespace std;


vector<int>v[1000];
int vis[1002];

void DFS()
{

}

int main()
{

    int n,m;
    cin>>n>>m;

    while(m--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    DFS(1);
    return 0;
}
