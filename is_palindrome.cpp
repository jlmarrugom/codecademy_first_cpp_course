#include <iostream>
#include<string.h>

bool is_palindrome(std::string text){
  for (int i=0;i<text.length();i++){
    if (text[i]!=text[text.length()-i-1]){
        return false;
    }
  return true;
  }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
//1,1,0
