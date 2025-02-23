#include <iostream>
using namespace std;

int main() {
  /*
  char character = 'w';
  char* str1 = "hello";
  cout << str1 << endl;
  str1[0] = 'H';
  cout << str1 << endl;
  str1 = "changed";
  cout << str1 << endl;
*/
  char* const str2 = "world";
  cout << str2 << endl;
  str2[1] = 'M';
  cout << str2 << endl;
  //str2 = "Earth";
  //cout << str2 << endl;
/*
  const char* str3 = "bang bang";
  cout << str3 << endl;
  //str3[0] = 'H';
  //cout << str3 << endl;
  str3 = "duru duru";
  cout << str3 << endl;
/*
  const char* const str4 = "Captain";
  cout << str4 << endl;
  str4[0] = 'H';
  cout << str4 << endl;
  str4 = "America";
  cout << str4 << endl;

  char str5[] = "Iron Man";
  cout << str5 << endl;
  for(char c: str5) {cout << c << endl;}
  str5[0] = 'H';
  cout << str5 << endl;
  str5 = "Spider Man";
  cout << str5 << endl;*/
}