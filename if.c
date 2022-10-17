#include <stdio.h>

// void main() {
//   int a;
//   printf("数値を入力\n");
//   // キーボードから整数を入力
//   scanf("%d", &a);
//   //入力された値が、正の数か調べる
//   if(a > 0) {
//     printf("入力した値は、正の数です。\n");
//   } else {
//       printf("入力した値は、正の数ではありません。\n");
//   }
// }

// void main() {
//   int num;
//   printf("1~3の値を入力してください：");
//   scanf("%d", &num);
//   if(num == 1){
//     printf("one\n");
//   }else if(num == 2){
//     printf("two\n");
//   }else if(num == 3){
//     printf("three\n");
//   }else{
//     printf("不適切な値です。\n");
//   }
// }

void main(){
  // 変数diceを定義
  int dice;
  printf("1から6の数値を入力してください：");
  scanf("%d", &dice);
  //  入力された値がサイコロの数値か判断
  if(1 <= dice && dice <= 6){
    // さらに偶数・奇数で処理を分ける
    // 例1
    // if(dice == 2 || dice == 4 || dice == 6){

    // 例2
    // 2で割り切れる数(偶数)か調べる
    // if(dice%2 == 0){
    //   printf("丁です。\n");
    // }else{
    //   printf("半です。\n");
    // }

    // 例3
    // 否定形でのif文
    if(!(dice%2 == 0)){
      printf("半です。\n");
    }else{
      printf("丁です\n");
    }

  }else{
    printf("範囲外の数値です。\n");
  }
}
