#include <string>
#include <iostream>

int main() {
  std::string sentence{"She"};
  sentence.append(" is playing");
  sentence += " the piano.";
  
  std::cout << sentence << "\n";
}
