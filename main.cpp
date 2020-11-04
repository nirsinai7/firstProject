#include <iostream>
#include <vector>

#define ll long long
using namespace std;

ll t, n, m, a, b, i, j;
vector<int> g[2000000];
bool visited[20000], gender[20000];
bool flag;

bool dfs(int cur, bool gen) {
    if (visited[cur]) return gen == gender[cur];
    visited[cur] = true;
    gender[cur] = gen;
    for (auto k : g[cur]) if (!dfs(k, !gen)) return false;
    return true;
}

int main() {
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n >> m;

        for (j = 0; j < n + 1; j++) {
            g[j].clear();
            visited[j] = false;
        }

        for (j = 0; j < m; j++) {
            cin >> a >> b;
            g[a].push_back(b);
            g[b].push_back(a);
        }

        flag = true;
        j = 1;
        while (j < n + 1 && flag) {
            if (!visited[j]) {
                if (!dfs(j, true)) {
                    flag = false;
                }
            }
            j++;
        }
        cout << "Scenario #"<< i + 1 << ":" << endl;
        if (flag) cout << "No suspicious bugs found!" << endl;
        else cout << "Suspicious bugs found!" << endl;
    }
}