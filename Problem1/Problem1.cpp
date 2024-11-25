#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  string str, rev;
  cout << "Enter the word/string: ";
  cin >> str;
  rev = str;
  reverse(rev.begin(),rev.end());
  if (str == rev)
  cout << "This word is a palindrome";
  else
  cout << "This word is not a palindrome";
  cout << endl;
  
  return 0;
}

  
