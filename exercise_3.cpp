#include <iostream>
#include <vector>

int Fib(int n){
  if (n <=1){
    return n;
  } else {
    return Fib(n - 1) + Fib(n - 2);
  }
}
int Fib2(int n){
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }

  int current, previous;

  previous = 0;
  current = 1;

  for (int i = 0; i < n-1; i++){
    std::cout << "previous: " << previous << std::endl;
    std::cout << "current: " << current << std::endl;
    std::cout << "---" << std::endl;
    int temp = previous;
    previous = current;
    current = temp + previous;
  }
  return current;
}
int main() {

  // std::cout << Fib2(6) << std::endl;

  std::vector<int> expected_output = {0, 1, 1, 2, 3, 5, 8, 13, 21};
  for (int i = 0; i < expected_output.size(); i++) {
    int actual = Fib2(i);
    int expected = expected_output[i];
    if (actual != expected) {
      std::cout << "Fib(" << i<< "): Expected " << expected << " but got " << actual << std::endl;
      exit(EXIT_FAILURE);
    }
  }

    std::cout << "Success!" << std::endl;
    return 0;
}
