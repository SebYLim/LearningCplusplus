#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {1, 2, 3, 4};
  for (auto x : numbers) {
    std::cout << x << "\n";
  }
}
