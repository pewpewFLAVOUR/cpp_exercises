#include <iostream>

void CountHundred(const int& num){
    if (num < 100){
        std::cout << num << std::endl;
        CountHundred(num - 1);
    }
}
void CountHundred(){
    for (int i = 0; i < 100; i++){
        std::cout << i << std::endl;
    }
}
int main() {
    CountHundred();
    return 0;
}