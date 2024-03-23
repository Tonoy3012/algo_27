#include<bits/stdc++.h>
using namespace std;

#define inf 9999999



int main()
{


    int node;
    cout<<"enter node"<<endl;
    cin>>node;
    int g[node+3][node+3];

    for(int i = 1 ;i<=node ; i++)
    {
        for(int j = 1;j<=node ;j++)
        {
            if(i==j)
            {
                g[i][j] = 0;
            }
            else
            {
                g[i][j]=inf;
            }
        }
    }

    int edge;
    cout<<"enter edge"<<endl;
    cin>>edge;


    for(int i = 1 ;i<=edge ;i++)
    {
        int u,v,k;
        cin>>u>>v>>k;
        g[u][v] = k;
    }


    for(int i = 1 ;i<=node ; i++)
    {
        for(int j = 1;j<=node ;j++)
        {
            if(g[i][j]==inf)
            {
                cout<<"inf"<<"   ";
            }
            else
            {
                cout<<g[i][j]<<"   ";
            }

        }
        cout<<endl;
    }

    cout<<endl<<endl;


    for(int k = 1 ;k<=node ;k++)
    {
        for(int i = 1 ;i<=node ;i++)
        {
            for(int j = 1 ;j<=node ;j++)
            {
                g[i][j] = min(g[i][j],g[i][k]+g[k][j]);
            }
        }
    }


    for(int i = 1 ;i<=node ; i++)
    {
        for(int j = 1;j<=node ;j++)
        {
            if(g[i][j]==inf)
            {
                cout<<"inf"<<"   ";
            }
            else
            {
                cout<<g[i][j]<<"   ";
            }

        }
        cout<<endl;
    }

    return 0;
}

