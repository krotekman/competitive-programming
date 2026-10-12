#include <bits/stdc++.h>

long long a[100010];

void solve() {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; ++i) std::cin >> a[i];

  int pos = 0;
  for (int i = n; i > 0; --i) {
//    std::cerr << a[i] << " " << pos << " " << (a[i] - pos);
    pos += 2 * (a[i] - pos);
//    std::cerr << " " << pos << "\n";
  }
  std::cout << pos / 2 << "\n";
}

int main() {
#if 1
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);
#endif

  int t;
  std::cin >> t;

  while (t--) solve(); 
}
