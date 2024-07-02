#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(int m, int n, int *k)
{
    bool f = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int l = 0; l < n; l++)
            {
                for (int o = 0; o < n; o++)
                {
                    if (k[i] + k[j] + k[l] + k[o] == m)
                    {
                        f = true;
                    }
                }
            }
        }
    }
    if (f)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> k(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> k[i];
    }
    solve(m, n, k.data());
    return 0;
}