#include<bits/stdc++.h>
#include<vector>
using namespace std;
const int N=1000000;
vector<pair<int, int > >v[N];
int dis[N];
void dijkstra(int src){
    queue<pair<int,int> >q;
    q.push({src,0});
    dis[src]=0;
    while (!q.empty())
    {
        pair<int,int>parent=q.front();
        q.pop();
        int node=parent.first;
        int cost=parent.second;
        for(pair<int, int>child : v[node]){
            int childnode=child.first;
            int childcost=child.second;
            if(cost+childcost<dis[childnode]){
                dis[childnode]=cost+childcost;
                q.push( { childnode , 
                dis[childnode]});
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e; //input node & edge
    while (e--)
    {
        int a,b,c;
        cin>> a>> b>> c;
        v[a].push_back({ b, c}); //input graph
    }
    //memset(dis,INT_MAX,sizeof(dis));
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    dijkstra(0);//dijkstra in running for 0 to all node distance
    for(int i=0;i<n;i++){
        cout<<i<<"-> "<<dis[i]<<endl;
    }
    return 0;
    
}
