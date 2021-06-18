#include <iostream>
#include <vector>

void Sum(int n){
  int total = 0;
  for (int i = 1; i < n; i++){
    if (i % 3 == 0 || i % 5 == 0) {
      total += i;
      std::cout << i << std::endl;
    }
  }
  std::cout << total << std::endl;
}
int main() {

  Sum(1000);
    std::cout << "Success!" << std::endl;
    return 0;
}

