// A. Way Too Long Words

#include <iostream>

int main() {
  int n;
  std::cin >> n;
  while (n--) {
    std::string S;
    std::cin >> S;
    if (S.size() > 10) {
      std::cout << S[0] << S.size()-2 << S[S.size()-1] << "\n";
    } else {
      std::cout << S << "\n";
    }
  }
}
