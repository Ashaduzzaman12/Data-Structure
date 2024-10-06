//depth first search algo
#include <bits/stdc++.h>
using namespace std;
int v[1005][1005];//declare 2D array
char x[1005][1005];//declare char 2D array
pair<int, int> p[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};//pair to move
void dfs(int s1, int s2, int n, int m, int *loc)
{
  v[s1][s2] = 1;
  *loc = *loc + 1;

  for (int i = 0; i < 4; i++)
  {
    if (s1 + p[i].first < n && s1 + p[i].first >= 0 &&
        s2 + p[i].second < m && s2 + p[i].second >= 0 &&
        v[s1 + p[i].first][s2 + p[i].second] == 0)
    {
      dfs(s1 + p[i].first, s2 + p[i].second, n, m, loc);
    }
  }
}
