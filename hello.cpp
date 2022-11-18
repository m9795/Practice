/*
拡張子は.cpp
C++のソースファイルにはC言語の関数を直接記述できる
*/

#include <stdlib.h>
#include <stdio.h>

class MyObject {
public:
  static int Calc(int x, int y);
};

int MyObject::Calc(int x, int y)
{
  return abs(x * y);
}

int main(int argc, char *argv[])
{
  printf("%d\n", MyObject::Calc(-1, 1));
  printf("%d\n", MyObject::Calc(-2, -2));

  return 0;
}

