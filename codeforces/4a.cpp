// A. Watermelon

#include <iostream>

int main() {
  int A;
  std::cin >> A;

  if (A % 2 == 1) {
    std::cout << "NO\n";
    return 0;
  }
  if (A == 2) {
    std::cout << "NO\n";
    return 0;
  }
  std::cout << "YES\n";
  return 0;
}
