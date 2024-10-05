//adjacency matrix or 2D array graph input
#include <bits/stdc++.h>
using namespace std; 

int main() {
  int node ,edge;      //input node and edge
  cin>>node>>edge;
  int mat[node][node];
  memset(mat,0,sizeof(mat));  // making value 0 of the 2D matrix
  
  while (edge--) //input value of the graph
  {
    int a,b;
    cin>>a>>b;
    mat[a][b]==1;
  }
  return 0;
}
