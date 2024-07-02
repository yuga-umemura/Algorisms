#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int L, int n, int *x)
{
    int minT = 0;
    int maxT = 0;
    // min
    // すべてのアリが近い方の端を向いている場合
    for (int i = 0; i < n; i++)
    {
        minT = max(minT, min(x[i], L - x[i]));
        maxT = max(maxT, max(x[i], L - x[i]));
    }
    printf("%d %d\n", minT, maxT);
}

int main()
{
    int L, n;
    cin >> L >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    solve(L, n, x.data());
}