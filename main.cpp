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
    cout << "hello";
}
