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
// #include <stdio.h>
// #include <math.h>

// #define PI 3.14

// void main(){
//   int angle;
//   double rad;
//   printf("角度を入力してください(0~360):");
//   scanf("%d",&angle);
//   // 角度をラジアンに変換
//   rad = PI * (double)angle / 180.0;
//   // 三角関数での計算
//   printf("sin(%d)=%f\n",angle,sin(rad));
//   printf("cos(%d)=%f\n",angle,cos(rad));
//   printf("tan(%d)=%f\n",angle,tan(rad));
// }

/* コンパイル　コマンド覚書
  math.h利用時のコンパイルは-lmオプションが必要
（数学ライブラリをリンクすることで数学ライブラリが使えるようになる。）
  l→リンクの意
  m→数学ライブラリの意

コマンド
gcc -o xxx xxx.c -lm
*/

// #include <stdio.h>
// #include <stdlib.h> // abs関数に使用
// #include <math.h>   // コンパイル時-lmオプション必要

// void main(){
//   int n = -2;
//   double d1 = -2.5,d2 = 4.0;
//   printf("%dの絶対値は%d\n",n,abs(n));
//   printf("%fの絶対値は%f\n",d1,fabs(d1));
//   printf("%fの2乗は%fです。\n",d2,pow(d2,2));
//   printf("%fの平方根は%fです。\n",d2,sqrt(d2));
// }


// ビット演算
// #include <stdio.h>
// #include <stdlib.h>

// void main(){
//   // 16進数
//   unsigned char i = 0xf;  // 2進数：00001111
//   unsigned char j = 0xff; // 2進数：11111111
//   printf("%x << 1 = %x\n",i,i << 1);         // 1ビット左シフト：2進数：00011110 = 0x1e0
//   printf("%x >> 1 = %x\n",i,i >> 1);         // 1ビット右シフト：2進数：00000111 = 0x7
//   printf("%x | %x = %x\n",i,j,i | j);        // OR演算：2進数：11111111 = 0xff
//   printf("%x & %x = %x\n",i,j,i & j);        // AND演算：2進数：00001111 = 0xf
//   printf("~%x = %x\n",i,(unsigned char)~i);  // NOT演算：2進数：11110000 = 0xf0
// }

// #include <stdio.h>

// void main(){
//   int a = 100;       // int型の変数
//   double b = 123.4;  // double型の変数
//   float c = 123.4f;  // float型の変数(数値の後ろにfをつける)
//   char d = 'a';      // char型の変数
//   printf("aの値は%d、大きさは%dbyte、アドレスは0x%x\n",a,sizeof(int),&a);
//   printf("bの値は%f、大きさは%dbyte、アドレスは0x%x\n",b,sizeof(double),&b);
//   printf("cの値は%f、大きさは%dbyte、アドレスは0x%x\n",c,sizeof(float),&c);
//   printf("dの値は%c、大きさは%dbyte、アドレスは0x%x\n",d,sizeof(char),&d);
// }



// ポインタ
// #include <stdio.h>

// void show(int,int,int);

// void main(){
//   int a = 100;     // 整数型変数a
//   int b = 200;     // 整数型変数b
//   int *p = NULL;   // 整数型のポインタ変数p
//   // ↑(ポインタ変数はNULL(ヌル)を入れて初期化する)
//   p = &a;          // pにaのアドレスを代入(pとaは等しくなる)
//   show(a,b,*p);
//   *p = 300;        // pとaは同じなのでaも300になる
//   show(a,b,*p);
//   p = &b;          // pにbのアドレスを代入(pとbが等しくなり、pとaは等しくなくなる)
//   show(a,b,*p);
//   *p = 400;        // *pに値を代入(bも等しい値になる)
//   show(a,b,*p);
// }

// void show(int n1,int n2,int n3){
//   printf("a = %d b = %d *p = %d\n",n1,n2,n3);
// }

/* メモ
ポインタの変数にアドレスを設定するときは、原則同じ型のポインタ変数でする
 例）int a → int* p;　ならOK
             cher *p; はNG
*/



// ポインタと関数
// #include <stdio.h>

// 変数の値入れ替えを行う関数
// void swap(int*,int*);

// void main(){
//   int a = 1,b = 2;
//   printf("a = %d b = %d\n",a,b);
//   swap(&a,&b);
//   printf("a = %d b = %d\n",a,b);
// }

// // 値の入れ替え
// void swap(int* num1,int* num2){
//   int temp = *num1;
//   *num1 = *num2;
//   *num2 = temp;
// }

// #include <stdio.h>

// void main(){
//   // ポインタをNULLで初期化。
//   int *p = NULL;
//   // アドレスを指定しないまま値を代入
//   *p = 1;
// }

// #include <stdio.h>

// #define SIZE  5      // #difineマクロ　SIZEという文字列に5という数値を置き換えている

// void main(){
//   // サイズSIZEの配列を用意する。
//   int ar1[SIZE];
//   char ar2[SIZE];
//   int i;
//   int* p1 = NULL;
//   char* p2 = NULL;
//   // 値を代入
//   for(i = 0; i < SIZE; i++){
//     ar1[i] = i;
//     ar2[i] = 'A'+i;
//   }
//   // ポインタにアドレスを代入
//   p1 = &ar1[0];
//   p2 = &ar2[0];
//   // 値を出力
//   for(i = 0; i < SIZE; i++){
//     printf("ar1[%d]=%d * (p1+%d)=%d ",i,ar1[i],i,*(p1+i));
//     printf("ar2[%d]=%c * (p2+%d)=%c\n ",i,ar2[i],i,*(p2+i));
//   }
// }


// #include <stdio.h>

// void main(){
//   // サイズSIZEの配列を用意する
//   double d[3] = { 0.2 , 0.4 , 0.6 };
//   double *p1 = NULL,*p2 = NULL;
//   int i;
//   p1 = d;
//   p2 = d;
//   for( i = 0; i < 3; i++){
//     printf("%f %f %f\n",*(d+i),p1[i],*p2);
//     p2++;  // p2のアドレスをインクリメント
//   }
// }


// 動的なメモリの生成

// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE  3

// void main(){
//   int* p1 = NULL;
//   double *p2 = NULL;
//   int i;
//   // 配列の生成
//   p1 = (int*)malloc(sizeof(int)*SIZE);
//   p2 = (double*)malloc(sizeof(double)*SIZE);
//   // 値の代入
//   for(i = 0; i < SIZE; i++){
//     p1[i] = i;
//     p2[i] = i / 10.0;
//   }
//   // 結果の出力
//   for(i = 0; i < SIZE; i++){
//     printf("p1[%d]=%d p2[%d]=%f\n",i,p1[i],i,p2[i]);
//   }
//   // メモリの開放
//   free(p1);
//   free(p2);
// }


// 文字列の関数

// #include <stdio.h>
// #include <string.h>

// void main(){
//   char s[10];
//   int len;
//   // 文字列のコピー
//   strcpy(s,"ABC");
//   printf("s=%s\n",s);  // s=ABC
//   // 文字列の結合
//   strcat(s,"DEF");
//   printf("s=%s\n",s);  // S=ABCDEF
//   // 文字列の長さ
//   len = strlen(s);
//   printf("sの最終的な文字列の長さ：%d\n",len);
// }


// 文字列の比較

// #include <stdio.h>
// #include <string.h>

// void main(){
//   char s1[256],s2[256];
//   printf("s1=");
//   scanf("%s",s1);
//   printf("s2=");
//   scanf("%s",s2);
//   if(strcmp(s1,s2)==0){           // strcamp()関数　文字列の比較
//     printf("s1とs2は等しい\n");
//   }else{
//     printf("s1とs2は等しくない\n");
//   }
// }


// 数値・文字列への変換
// #include <stdio.h>
// #include <stdlib.h>

// void main(){
//   char s1[] = "1000";
//   char s2[] = "12.345";
//   int a;
//   double b;
//   a = atoi(s1);     // atoi()関数...文字列を整数(int)に変える
//   b = atof(s2);     // atof()関数...文字列を実数(double)に変える
//   printf("a=%d b=%f\n",a,b);
// }

// 数値から文字列への変換

// #include <stdio.h>
// #include <stdlib.h>

// void main(){
//   char s1[256],s2[256];
//   int a = 100,b = 200;
//   sprintf(s1,"%d",a);
//   sprintf(s2,"bの値は%dです。",b);
//   puts(s1);
//   puts(s2);
// }


// // 構造体
// #include <stdio.h>
// #include <string.h>

// // 学生のデータを入れる構造体
// struct student{    // 構造体の名前がstudent
//   int id;          // 学生番号
//   char name[256];  // 名前
//   int age;         // 年齢
// };                 // ;で終了

// void main(){
//   struct student data;
//   data.id = 1;                    // 学生番号を設定
//   strcpy(data.name,"山田太郎");   // 名前を設定
//   data.age = 18;                  // 年齢を設定
//   // データ上書き
//   data.id = 2;
//   strcpy(data.name,"山田花子");
//   data.age = 17;
//   // データの内訳を表示
//   printf("学生番号：%d\n名前： %s\n年齢：%d\n",data.id,data.name,data.age);
// }

// #include <stdio.h>
// #include <string.h>

// // 学生のデータを入れる構造体
// struct student{
//   int id;
//   char name[256];
//   int age;
// };

// // 構造体の名前をtypedefで定義
// typedef struct student student_data;

// void main(){
//   int i;
//   student_data data[] = {
//     { 1,"山田太郎",18 },
//     { 2,"佐藤良子",19 },
//     { 3,"太田　剛",18 },
//     { 4,"中田裕子",18 }
//   };
//   // データの内訳を表示
//   for(i = 0; i < 4; i++){
//     printf("学生番号：%d 名前：%s 年齢：%d\n",data[i].id,data[i].name,data[i].age);
//   }
// }


// 構造体のポインタ
// #include <stdio.h>
// #include <string.h>

// // 学生のデータを入れる構造体
// typedef struct{
//   int id;
//   char name[256];
//   int age;
// }student_data;

// // 構造体のデータを表示する関数
// void setData(student_data*,int,char*,int);
// void showData(student_data*);

// void main(){
//   student_data data[4];
//   int i;
//   int id[] = { 1,2,3,4 };
//   char name[][256] = { "山田太郎","佐藤良子","太田　剛","中田優子" };
//   int age[] = { 18,19,18,18 };
//   // データの設定
//   for(i = 0; i < 4; i++){
//     setData(&data[i],id[i],name[i],age[i]);
//   }
//   // データの内訳を表示
//   for(i = 0; i < 4; i++){
//     showData(&data[i]);
//   }
//   return;
// }
// // データのセット
// void setData(student_data* data,int id,char* name,int age){
//   data->id = id;            // idのコピー
//   strcpy(data->name,name);  // 名前のコピー
//   data->age = age;          // 年齢のコピー
// }
// // データの表示
// void showData(student_data* data){
//   printf("学生番号：%d 名前：%s 年齢：%d\n",data->id,data->name,data->age);
// }


// ポインタ渡しとデータ渡し
// #include <stdio.h>

// // データを入れる構造体
// typedef struct{
//   int a;
//   double d;
// }num_data;

// // 二種類の値設定関数
// void dealData1(num_data data);    // 値渡し
// void dealData2(num_data* pData);  // ポインタ渡し

// void main(){
//   num_data n1 = { 1, 1.2f },n2 = { 1, 1.2f };
//   printf("n1のアドレス：0x%x n2のアドレス：0x%x\n",&n1,&n2);
//   dealData1(n1);
//   dealData2(&n2);
//   printf("n1.a = %d n2.d = %f\n",n1.a,n1.d);
//   printf("n2.a = %d n2.d = %f\n",n2.a,n2.d);
// }

// void dealData1(num_data data)
// {
//   printf("a=%d f=%f\n",data.a,data.d);
//   printf("dealData1に渡ってきたデータのアドレス：0x%x\n",&data);
//   // 値の変更
//   data.a = 2;
//   data.d = 2.4;
// }
// void dealData2(num_data* pData)
// {
//   printf("a=%d f=%f\n",pData->a,pData->d);
//   printf("dealData2に渡ってきたデータのアドレス：0x%x\n",pData);
//   // 値の変更
//   pData->a = 2;
//   pData->d = 2.4;
// }


// テキストファイルの書き込み
// #include <stdio.h>
// #include <stdlib.h>

// void main(){
//   FILE *file;
//   file = fopen("test/sample.txt","w");
//   if (file == NULL) {
//     printf("ファイルが開けません\n");
//     exit(1);
//   }
//   // ファイルにデータを書き込む
//   fprintf(file,"Hello World.\r\n");
//   fprintf(file,"ABCDEF\r\n");
//   fclose(file);
// }


// 上で作成したファイルを読み込み画面表示する
// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE  256

// void main(){
//   FILE *file;
//   char line[SIZE];
//   line[0] = '\0';
//   file = fopen("test/sample.txt", "r");
//   if (file == NULL){
//     printf("ファイルが開けません。\n");
//     exit(1);
//   }
//   // ファイルのデータを読み込む
//   while ( fgets(line, SIZE, file) != NULL ){
//     printf("%s", line);
//   }
//   fclose(file);
// }


// 1文字ごとにファイルの読み込み
// #include <stdio.h>
// #include <stdlib.h>

// void main(){
//   FILE *file;
//   int c;
//   file = fopen("test/sample.txt", "r");
//   if(file == NULL){
//     printf("ファイルが開けません。\n");
//     exit(1);
//   }
//   // ファイルのデータを読み込む
//   while ( (c=fgetc(file)) != EOF){
//     printf("%c", (char)c);
//   }
//   fclose(file);
// }


// バイナリファイルの読み書き
// #include <stdio.h>
// #include <stdlib.h>

// void main() {
//   FILE* file;
//   int i;
//   // 書き込むデータ
//   char wdata[] = { 0x10 , 0x1a , 0x1e , 0x1f };
//   char rdata[4];
//   // バイナリデータの書き込み
//   file = fopen("test/test.bin", "wb");
//   if( file == NULL ){
//     printf("ファイルオープンに失敗しました。\n");
//     exit(1);
//   }
//   fwrite( wdata, sizeof(char), sizeof(wdata), file);
//   fclose(file);
//   // バイナリデータの書き込み
//   file = fopen("test/test.bin", "rb");
//   if( file == NULL ){
//     printf("ファイルオープンに失敗しました。\n");
//     exit(1);
//   }
//   fread( rdata, sizeof(char), sizeof(rdata), file );
//   fclose(file);
//   // 結果を表示
//   for(i = 0; i < sizeof(rdata) ; i++){
//     printf("%x ",rdata[i]);
//   }
//   printf("\n");
// }



// 大きさのわからないファイルの読み込み
// #include <stdio.h>
// #include <stdlib.h>

// void main(){
//   FILE* file;
//   int i, size;
//   // 書き込むデータ
//   char* rdata;
//   // バイナリデータの書き込み
//   file = fopen("test/test.bin", "rb");
//   if(file == NULL){
//     printf("ファイルオープンに失敗しました。\n");
//     exit(1);
//   }
//   // ファイルの最後までシーク
//   fseek(file, 0, SEEK_END);
//   // ファイルの大きさを取得
//   size = ftell(file);
//   // メモリのサイズだけ、配列を動的に生成
//   rdata = (char*)malloc(sizeof(char)*size);
//   // ファイルの最後までポインタを戻す
//   fseek(file, 0, SEEK_SET);
//   fread(rdata, sizeof(char), size, file);
//   fclose(file);
//   // 結果を表示
//   for(i = 0; i < size; i++){
//     printf("%x ",rdata[i]);
//   }
//   printf("\n");
//   // メモリの開放
//   free(rdata);
// }



// 複雑なファイル分割
// #include <stdio.h>
// #include "studentDatabase.h"
// #include "dataOutput.h"

// void main(){
//   int i;
//   char names[][LENGTH] = {"山田太郎","太田美智子","大山次郎","山口さやか"};
//   int ids[] = { 1,2,2,3 };
//   initDatabase();
//   for(i = 0; i < 4; i++){   // データの登録
//     add(ids[i],names[i]);
//     printf("登録：%d %s\n",ids[i],names[i]);
//     showError();
//   }
//   for(i = 0; i < 3; i++){   // 登録したデータの出力
//     showStudentData(get(i+1));
//   }
// }


// 列挙型 enumの練習
// enum GENDER{  // 性別の定義
//   MALE,       // 男性　値は0
//   FEMALE,     // 女性　値は1
// };

// enum COLOR{ // 色の定義
//   RED=1,    // 赤　値は１
//   BLUE=2,   // 青　値は2
//   GREEN=3,  // 緑　値は3
// };


// static変数
// #include <stdio.h>

// void foo();

// void main(){
//   int i;
//   for(i = 0; i < 4; i++){
//     foo();
//   }
// }

// void foo()
// {
//   static int num = 0;
//   printf("num=%d\n",num);
//   num++;
// }
