#include<bits/stdc++.h>
using namespace std;
class graph
{
    int n,e,i,j,g[100][100],a,b,visit[100],top,st,s;
public:
    int add_edge()
    {
         cin>>n>>e;
    for(i=0; i<e; i++)
    {

        cin>>a>>b;
        g[a][b]=1;
        g[b][a]=1;
    }
    }
    void print()
    {
         for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    }
    void dfs()
    {
        stack st;
        st.push(s);
        visit[s]=true;
        while(!st.empty())
            top=st.back();
        visit[top]=true;
        for(i=1;i<=n;i++)
        {
            if(!visit[i]&&g[top][i])
            {
                st.push();
                break;
            }
            st.pop();
        }
    }
};
int main()
{
    graph ob;
    ob.add_edge();
    ob.print();
    ob.dfs();
}
