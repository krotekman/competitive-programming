// 1915C - Can I Square?

#include <ios>
#include <iostream>

void test() {
  int c;
  long long b = 0;
  std::cin >> c;
  while (c--) {
    int tmp;
    std::cin >> tmp;
    b += tmp;
  }

  long long start = 1;
  long long end = 14142136;
  
  while (start <= end) {
    long long mid = (start + end) / 2;
    long long m2 = mid * mid;
  
    if (m2 == b) {
      std::cout << "YES\n";
      return;
    } else if (m2 < b) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  std::cout << "NO\n";
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  std::cout.tie(0);
  int t;
  std::cin >> t;
  while (t--) test();
}
