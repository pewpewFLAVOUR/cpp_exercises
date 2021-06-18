#include <iostream>
#include <vector>
#include <map>

int FindMostFrequentOccurence(std::vector<int> v){
  std::map<int,int> hash;
  int max = -1;
  hash[max] = -1;

  for (int n : v){

    if (hash[n]){ //Counts consecutives
      hash[n] += 1;
    } else {
      hash[n] = 1;
    }

    if (hash[n] > hash[max]) { //Determines max
      max = n;
    }
  }
  return max;
}

int main() {
  std::vector<int> v = {1,3,5,5,100,5,5,100,3,1,100,1};
  std::cout << "most frequent occurence:"<< FindMostFrequentOccurence(v) << "\n";
  return 0;
}
