#include <iostream>

using namespace std;

const int MAX = 1000000;


int memo[n + 1][1 << (n + 1)];

int fun(int i, int mask)
{

	if (mask == ((1 << i) | 3))
		return dist[1][i];
	if (memo[i][mask] != 0)
		return memo[i][mask];

	int res = MAX; 



	for (int j = 1; j <= n; j++)
		if ((mask & (1 << j)) && j != i && j != 1)
			res = std::min(res, fun(j, mask & (~(1 << i)))
									+ dist[j][i]);
	return memo[i][mask] = res;
}
int main()
{
    int n;
    cin>>n;
    int dist[n+1][n+1],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>dist[i][j];
        }
    }
	int ans = MAX;
	for (int i = 1; i <= n; i++)

		ans = min(ans, fun(i, (1 << (n + 1)) - 1)
								+ dist[i][1]);
    cout<<ans<<endl;

	return 0;
}

// This code is contributed by Serjeel Ranjan
