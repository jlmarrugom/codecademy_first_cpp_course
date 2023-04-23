#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num){
  std::vector <int> g1;
  for (int i=1; i<4;i++){
    g1.push_back(i*num);
  }

  return g1;
}

int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}
