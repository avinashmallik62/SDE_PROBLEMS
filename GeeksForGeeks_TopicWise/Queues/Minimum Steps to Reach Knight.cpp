// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

int minStepToReachTarget(int *, int *, int);

// Driver code to test above methods
int main() {
    // size of square board
    int t;
    cin >> t;
    while (t--) {
        int N;
        int a, b, c, d;
        cin >> N;
        cin >> a >> b;
        cin >> c >> d;
        int knightPos[] = {a, b};
        int targetPos[] = {c, d};
        cout << minStepToReachTarget(knightPos, targetPos, N) << endl;
    }
    return 0;
}
// } Driver Code Ends


// User function template for C++

// KnightPos : knight position coordinates
// targetPos : target position coordinated
// N : square matrix size
bool check(int u, int v, int N)
{
    return (u>0 && u<=N && v>0 && v<=N);
}

int xc[] = {-1, -1, -2, -2, +1, +1, +2, +2};
int yc[] = {-2, +2, -1, +1, -2, +2, -1, +1};

int minStepToReachTarget(int knightPos[], int targetPos[], int N) {

    bool vis[N+1][N+1];
    memset(vis, false, sizeof(vis));
    queue <pair<int,int>> q;
    q.push({knightPos[0],knightPos[1]});
    vis[knightPos[0]][knightPos[1]] = true;
    int height = 0;
    // applying the bfs here
    while(!q.empty())
    {
        int s = q.size();
        while(s--)
        {
            pair<int,int> p = q.front();
            q.pop();
            if(p.first == targetPos[0] && p.second == targetPos[1])
            return height;
            for(int dir = 0; dir<8; dir++)
            {
                if(check(p.first + xc[dir], p.second + yc[dir], N) && !vis[p.first + xc[dir]][p.second + yc[dir]])
                    {
                        vis[p.first + xc[dir]][p.second + yc[dir]] = true;
                        q.push({p.first + xc[dir], p.second + yc[dir]});
                    }
            }
        }
        height += 1;
    }
}