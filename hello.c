// #include <stdio.h>

// void main() {
  // printf("Hello Word.\n");

  // printf("こんにちは。私の名前は%sです。\n年齢は%d歳で現在の職業は%sです。\n", "上田花子", 27, "銀行員");
  // printf("身長は%.1fcmで体重は%.1fkg、血液型は%c型です。\n", 160.5, 45.7, 'A');

  // float height, weight, bmi;
  // height = 1.6;
  // weight = 45.7;
  // bmi = weight/(height*height);

  // printf("BMIは%.2fです。\n", bmi);
// }

  // void main() {
  //   printf("ABC");
  //   printf("DEF\n");
  // }


// 配列変数　例1
// #include <stdio.h>

// void main() {
//   double one, two, three;
//   double sum, avg;
//   one = 1.2, two = 3.7, three = 4.1;
//   printf("%f %f %f \n", one, two, three);
//   sum = one + two + three;
//   avg = sum / 3.0;
//   printf("合計値：%f\n", sum);
//   printf("平均値；%f\n", avg);
// }

// #include <stdio.h>

// void main() {
//   double d1, d2, d3;
//   double a = 1.2, b = 3.4, c = 2.7;
//   // 同じ計算が３回
//   d1 = (a + b) / 2.0;
//   d2 = (4.1 + 5.7) / 2.0;
//   d3 = (c + 2.8) / 2.0;
//   printf("d1 = %f, d2 = %f, d3 = %f\n", d1, d2, d3);
// }

// 平均値を求める関数を定義し、上記を記述する(実行結果は同じ)
// #include <stdio.h>

// // 平均値を求める関数の定義
// double avg(double l, double m){
//   // 引数l, mの平均値を求め、rに代入する
//   double r = (l + m) / 2.0;
//   return r;
// }

// void main() {
//   double d1, d2, d3;
//   double a = 1.2, b = 3.4, c = 2.7;
//   // 同じ計算が3回(関数を呼び出して計算)
//   d1 = avg(a, b);
//   d2 = avg(4.1, 5.7);
//   d3 = avg(c, 2.8);
//   printf("d1 = %f, d2 = %f, d3 = %f\n", d1, d2, d3);
// }


// プロトタイプ宣言
// #include <stdio.h>

// // 関数avgのプロトタイプ宣言
// double avg(double, double);

// void main(){
//   double d1, d2, d3;
//   double a = 1.2, b = 3.4, c = 2.7;
//   // 同じ計算が3回(関数を呼び出して計算)
//   d1 = avg(a,b);
//   d2 = avg(4.1,5.7);
//   d3 = avg(c,2.8);
//   printf("d1 = %f, d2 = %f, d3 = %f\n", d1, d2, d3);
// }

// // 平均値を求める関数
// double avg(double l, double m){
//   //  引数l,mの平均値を求め、rに代入する
//   double r = (l + m) / 2.0;
//   return r;
// }

// #include <stdio.h>

// // プロトタイプ宣言
// int max(int, int);
// void show(int);
// void line();

// void main(){
//   int n1 = 4,n2 = 5;
//   line();
//   show(n1);
//   show(n2);
//   printf("二つの数のうち、大きい数は、%dです。\n", max(n1,n2));
//   line();
// }

// // 2つの整数のうち最大値を求める関数
// int max(int a, int b)
// {
//   if(a > b){
//       return a;
//   }
//   return b;
// }
// // 数値を表示する関数
// void show(int n)
// {
//   printf("数値：%d\n", n);
//   return;
// }
// void line()
// {
//   printf("***********\n");
// }

// 変数（グローバル変数・ローカル変数）
// #include <stdio.h>

// // グローバル関数
// int global = 10;

// // プロトタイプ宣言
// void func1(double,int);
// void func2();

// void main(){
//   double a = 123.41;
//   int b = 100;
//   printf("main処理中\n");
//   printf("global=%d\n",global);
//   printf("a=%f b=%d\n", a,b);
//   printf("*************************\n");
//   // func1を呼び出し
//   func1(3.1,4);
//   // func2を呼び出し
//   func2();
// }

// // func1
// void func1(double a,int b)
// {
//   printf("func1処理中\n");
//   printf("global=%d\n", global);
//   printf("a=%f b=%d\n", a,b);
//   printf("*************************\n");
// }

// // func2
// void func2()
//   {
//     double a = -4.1;
//     int b = 2;
//     printf("func2処理中\n");
//     printf("blogal=%d\n", global);
//     printf("a=%f b=%d\n", a,b);
//     printf("*************************\n");
//   }

// #include <stdio.h>
// #include "calc.h"

// void main(){
//   double d1,d2,d3;
//   double a = 1.2,b = 3.4,c = 2.7;
//   // 同じ計算が3回(関数を呼び出して計算)
//   d1 = avg(a,b);
//   d2 = avg(4.1,5.7);
//   d3 = avg(c,2.8);
//   printf("d1 = %f,d2 = %f,d3 = %f\n",d1,d2,d3);
// }


// 分割の練習(元ファイル)
// #include <stdio.h>
// // 計算の答え（グローバル変数）
// int ans = 0;

// void add(int,int);
// void sub(int,int);
// void showAnswer();

// void main(){
//   int a = 2,b = 3;
//   printf("%d + %d = ",a,b);
//   add(a,b);
//   showAnswer();
//   printf("%d - %d = ",a,b);
//   sub(a,b);
//   showAnswer();
// }

// void add(int a,int b){
//   ans = a + b;
// }

// void sub(int a,int b){
//   ans = a - b;
// }

// void showAnswer(){
//   printf("%d\n",ans);
// }


// 分割練習(分割ファイル)
// #include <stdio.h>
// #include "calc.h"
// #include "showResult.h"

// void main(){
//   int a = 2,b = 3;
//   printf("%d + %d = ",a,b);
//   add(a,b);
//   showAnswer();
//   printf("%d - %d = ",a,b);
//   sub(a,b);
//   showAnswer();
// }

/* コンパイル　コマンド覚書

オブジェクトファイル作成
 gcc -c hello.c
 gcc -c calc.c
 gcc -c showResult.c

gcc hello.o calc.o showResult.o -o hello
./hello

*/

// 乱数
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void main(){
//   int a,b;
//   // 乱数の初期化
//   srand((unsigned) time(NULL));
//   // 1から10までの乱数を発生させる
//   a = rand() % 10 + 1;
//   b = rand() % 10 + 1;
//   // 計算結果を出力
//   printf("%d + %d = %d\n",a,b,a+b);
// }

// 数学関数
#include <stdio.h>
#include <math.h>

#define PI 3.14

void main(){
  int angle;
  double rad;
  printf("角度を入力してください(0~360):");
  scanf("%d",&angle);
  // 角度をラジアンに変換
  rad = PI * (double)angle / 180.0;
  // 三角関数での計算
  printf("sin(%d)=%f\n",angle,sin(rad));
  printf("cos(%d)=%f\n",angle,cos(rad));
  printf("tan(%d)=%f\n",angle,tan(rad));
}
