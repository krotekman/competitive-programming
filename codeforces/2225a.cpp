// A Number Between Two Others

#include <bits/extc++.h>
using namespace std;
 
void s() {
    long long x, y;
    cin >> x >> y;
    if (y / x != 2) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    cin.tie(0)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) s();
}
