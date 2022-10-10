#include <stdio.h>

void main() {
  int a;
  printf("数値を入力\n");
  // キーボードから整数を入力
  scanf("%d", &a);
  //入力された値が、正の数か調べる
  if(a > 0) {
    printf("入力した値は、正の数です。\n");
  } else {
      printf("入力した値は、正の数ではありません。\n");
  }
}
