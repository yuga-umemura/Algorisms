#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, int *a)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int len = a[i] + a[j] + a[k];        // 周の長さ
                int ma = max(a[i], max(a[j], a[k])); // 一番長い棒の長さ
                int rest = len - ma;
                if (rest > ma)
                {
                    // 三角形が作れるので、答えを更新できれば更新
                    ans = max(ans, len);
                }
            }
        }
    }
    printf("%d\n", ans);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    solve(n, a.data()); // a.data() : 配列aの先頭へのポインタを返す
    return 0;
}