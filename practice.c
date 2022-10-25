// 練習問題

// 練習1～6
// #include <stdio.h>

// void main(){
//     int num;
//     printf("好きな数字を入力してください。\n");
//     scanf("%d",&num);

// 練習1
    // if(num >= 5){
    //     printf("5以上です\n");
    // }else{
    //     printf("5以上ではありません。\n");
    // }

// 練習2
    // if(!(num == 1)){
    //     printf("1ではありません\n");
    // }

// 練習3
    // if(num < 50){
    //     printf("50未満です\n");
    // }

// 練習4
    // if(num <= 10 || num >= 90){
    //     printf("10以下か90以上の値です\n");
    // }

// 練習5
    // if(num >= 20 && num < 80){
    //     printf("20以上80未満です\n");
    // }
// }

// 練習6
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main(void){
//     int n;
//     srand((unsigned)time(NULL));
//     n = rand() % 6 + 1;
//     printf("数値：%d\n", n);
//     if(n >= 3){
//         printf("3以上です。\n");
//     }
// }


// 練習7~13
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main(void){
//     int n;
//     srand((unsigned)time(NULL));
//     n = rand() % 3 + 1;
//     printf("数値：%d\n", n);

// 練習7(1~10)
    // if(n >= 5){
    //     printf("5以上です\n");
    // }else{
    //     printf("5未満です\n");
    // }

// 練習8(1~10)
    // if(!(n == 1)){
    //     printf("1ではありません\n");
    // }else{
    //     printf("1です。\n");
    // }

// 練習9(1~100)
    // if(n < 50){
    //     printf("50未満です\n");
    // }else{
    //     printf("50以上です\n");
    // }

// 練習10(1~100)
    // if(n <= 10 || n >= 90){
    //     printf("10以下か90以上の値です\n");
    // }else{
    //     printf("10より大きく90未満です\n");
    // }

// 練習11(1~100)
    // if(n >= 20 && n < 80){
    //     printf("20以上80未満です\n");
    // }else{
    //     printf("20未満か80以上です\n");
    // }

// 練習12(-10~10)
    // if(n < 0){
    //     printf("負の値です\n");
    // }else if(n > 0){
    //     printf("正の値です\n");
    // }else{
    //     printf("0です\n");
    // }

// 練習13(1~3)
    // switch(n){
    //     case 1:
    //         printf("グー\n");
    //         break;
    //     case 2:
    //         printf("パー\n");
    //         break;
    //     case 3:
    //         printf("チョキ\n");
    //         break;
    // }
// }

// 練習14
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main(void){
//     int a;
//     int b;
//     srand((unsigned)time(NULL));
//     a = rand() % 10 + 1;
//     b = rand() % 10 + 1;
//     printf("数値a：%d\n", a);
//     printf("数値b：%d\n", b);

//     if(a > b){
//         printf("aのほうが大きいです。\n");
//     }else if(a < b){
//         printf("bのほうが大きいです。\n");
//     }else{
//         printf("等しいです\n");
//     }
// }


// 練習15～17
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main(void){
//     int n;
//     srand((unsigned)time(NULL));
//     n = rand() % 100 + 1;
//     printf("数値：%d\n", n);

// 練習15(1~100)
    // if(n >= 80){
    //     printf("優\n");
    // }else if(n < 80 && n >= 70){
    //     printf("良\n");
    // }else if(n < 70 && n >= 60){
    //     printf("可\n");
    // }else{
    //     printf("不可\n");
    // }

// 練習16(1~100)
    // if(n%6 == 0){
    //     printf("2と3の公倍数です。\n");
    // }else if(n%3 == 0){
    //     printf("3の倍数です。\n");
    // }else if(n%2 == 0){
    //     printf("2の倍数です。\n");
    // }else{
    //     printf("2と3の倍数ではありません。\n");
    // }

// 練習17
    // if(n <= 50 && n%2 == 0){
    //     printf("50以下の偶数です。\n");
    // }else if(n <= 50){
    //     printf("50以下です。\n");
    // }else if(n%2 == 0){
    //     printf("偶数です。\n");
    // }
// }


// 練習18(-10~35)
// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main(void){
//     int n;
//     srand((unsigned)time(NULL));
//     n = rand() % 46 + (-10);
//     printf("摂氏%d度\n", n);

//     if(n >= 30){
//         printf("真夏日です。\n");
//     }else if(n >= 25 && n < 30){
//         printf("夏日です。\n");
//     }else if(n < 0){
//         printf("真冬日です。\n");
//     }
// }

// 練習19
// #include <stdio.h>

// void main(){
//     printf("西暦を入力してください。\n");
//     int year;
//     scanf("%d", &year);
//     if(year%400 == 0){
//         printf("閏年です。\n");
//     }else if(year%100 == 0){
//         printf("閏年ではありません。\n");
//     }else if(year%4 == 0){
//         printf("閏年です。\n");
//     }
// }


// 練習 ポイント計算とランク表示システム
// #include <stdio.h>

// int main(void){

    /*　練習1
        ポイント計算(商品単価は均一)
        100円毎に１ポイント加算
        購入個数を入力で取得する */

    // int price = 100; // 商品の単価
    // int quantity; // 商品の個数
    // int total; // 合計金額

    // printf("お買い上げ個数を入力してください。\n");
    // scanf("%d", &quantity);
    // total = price * quantity;
    // int point = total/100;

    // printf("お買い上げ金額：%d円\n加算ポイント：%dポイント\n", total, point);



    /*　練習2
        合計金額を入力しポイントを計算
        何円で何ポイントか設定可能
        金額ごとにランク設定可能　*/

    // int total; // 合計金額
    // int subject = 100; // ポイントの対象金額
    // int point = 1; // 加算ポイント数


    // printf("合計金額を入力：");
    // scanf("%d", &total);
    // int addPoint = (total/subject) * point;
    // printf("合計金額：%d円\n加算ポイント：%dポイント\n", total, addPoint);
    // printf("(※%d円ごとに%dポイント付与)\n", subject, point);

    // char obj1[] = "現在お客様は「";
    // char obj3[] = "」です。";

    // int rank1 = 3000;
    // int rank2 = 6000;
    // int rank3 = 10000;

    // if(total >= rank3){
    //     char obj2[] = "プラチナ会員";
    //     printf("%s%s%s\n", obj1, obj2, obj3);
    // }else if(total >= rank2 && total < rank3){
    //     char obj2[] = "シルバー会員";
    //     printf("%s%s%s\n", obj1, obj2, obj3);
    // }else{
    //     char obj2[] = "ブロンズ会員";
    //     if(total >= rank1 && total < rank2){
    //         printf("%s%s%s\n", obj1, obj2, obj3);
    //     }else{
    //         printf("合計金額%d円以上で「%s」になれます。\n", rank1, obj2);
    //     }
    // }


    // if(total >= 3000 && total < 6000){
    //     printf("ブロンズ会員\n");
    // }else if(total >= 6000 && total < 10000){
    //     printf("シルバー会員\n");
    // }else if(total >= 10000){
    //     // printf("プラチナ会員\n");
    //     printf("%s\n", cliche);
    // }else{
    //     printf("合計金額3000円以上でブロンズ会員になれます。\n");
    // }
// }


// #include <stdio.h>

// // 演算子を用いた計算のプログラム

// void main(){
//     // 足し算
//     printf("%d + %d = %d\n", 5, 2, 5+2);
//     // 引き算
//     printf("%d - %d = %d\n", 5, 2, 5-2);
//     // 掛け算
//     printf("%d * %d = %d\n", 5, 2, 5*2);
//     // 割り算
//     printf("%d / %d = %d 余り %d\n", 5, 2, 5/2, 5%2);
// }

// #include <stdio.h>
// /*
//     変数を用いた計算
//     ・変数は何度も値を変えられる
//     ・変数は必ず{}の先頭の部分で行う必要がある
//     (何らかの処理後に変数を定義するとエラーになる)
//     (C言語の上位互換C++では撤廃されている規則)
//     ・変数名は予約語以外であれば、ルールにのっとり自由につけられる
// */

// void main() {
//     int a;        // 変数の宣言
//     int b = 3;    // 初期化と導入を同時に行う
//     int add, sub; // 複数の変数を同時に宣言
//     double avg;   // int以外の変数を宣言
//     a = 6;        // 代入　（最初に値を入れることを"初期化"という）
//     add = a + b;  // 和
//     sub = a - b;  // 差
//     avg = (a + b) / 2.0; //平均値
//     printf("%d + %d = %d\n", a, b, add);
//     printf("%d - %d = %d\n", a, b, sub);
//     printf("%dと%dの平均値：%f\n", a, b, avg);
// }


// #include <stdio.h>
// // 代入演算子を用いた計算
// void main() {
//     int a1=2, b1=2, c1=2, d1=2;
//     int a2=2, b2=2, c2=2, d2=2;
//     // 普通の演算による計算と代入
//     a1 = a1 + 1;
//     b1 = b1 - 1;
//     c1 = c1 * 2;
//     d1 = d1 / 2;

//     // 代入演算による計算
//     a2 += 1;
//     b2 -= 1;
//     c2 *= 2;
//     d2 /= 2;
//     printf("a1=%d b1=%d c1=%d d1=%d\n", a1, b1, c1, d1);
//     printf("a2=%d b2=%d c2=%d d2=%d\n", a2, b2, c2, d2);
// }


// // 型変換(キャスト)
// #include <stdio.h>

// void main() {
//     int i1, i2, j1, j2;
//     double d1, d2, e1, e2;
//     j1 = 3;
//     j2 = 3;
//     d1 = 1.23;
//     d2 = 1.23;
//     i1 = d1;        // 普通に代入
//     i2 = (int)d2;   // キャストして代入(double → int)
//     /*  d2をi2に代入。doubleからintになるので小数点以下は切り捨てて1になる
//         桁落ちなどデータの一部が損なわれる可能性があるためキャストが必要
//         キャストがなくても同じ結果だが警告が出る(doubleからintの変換の場合) */
//     e1 = j1;
//     e2 = (double)j2; // キャストして代入(int → double)
//     printf("d1 = %f d2 = %f\n", d1, d2);
//     printf("i1 = %d i2 = %d\n", i1, i2);
//     printf("j1 = %d j2 = %d\n", j1, j2);
//     printf("e1 = %f e2 = %f\n", e1, e2);
// }

// 練習2-1
// #include <stdio.h>

// void main() {
//     int a, b;
//     printf("a=");
//     scanf("%d", &a);
//     printf("b=");
//     scanf("%d", &b);
//     printf("a + b = %d\n", a+b);
//     printf("a - b = %d\n", a-b);
//     printf("a * b = %d\n", a*b);
//     printf("a / b = %d\n", a/b);
//     printf("a %% b = %d\n", a%b);
// }

// 練習2-2
// #include <stdio.h>
// void main() {
//     int a, b;
//     printf("長方形の長さ：");
//     scanf("%d", &a);
//     printf("長方形の高さ:");
//     scanf("%d", &b);
//     printf("長方形の面積は、%dm2です。\n", a*b);
// }

// 繰り返し処理
// for文
// #include <stdio.h>

// void main() {
//     int i;
//     for(i = 1;i <= 5; i++){
//         printf("%d ", i);
//     }
//     printf("\n");
// }

// 二重ループ 3回x2回での6回ループ(多重ループ)
// #include <stdio.h>

// void main() {
//     int i, j;
//     for(i = 1; i <= 2; i++) {
//         for(j = 1; j <= 3; j++) {
//             printf("%d+%d=%d ", i, j, i+j);
//         }
//         printf("\n");
//     }
// }

// while(ホワイル)文
// #include <stdio.h>

// void main() {
//     int i = 0;
//     while(i <= 5) {
//         printf("%d ",i);
//         i++;
//     }
//     printf("\n");
// }

/* for文とwhile文の違い
インクリメント・デクリメントの処理や
初期値を設定する処理がループ内に存在しないこと */

// do ~ while文
// #include <stdio.h>

// // iを用いたループ
// void main() {
//     int i = 0;
//     do{
//         printf("%d ", i);
//         i++;
//     } while(i <= 5);
//     printf("\n");
// }

// #include <stdio.h>

// void main() {
//     int i, num;
//     printf("回数を入力：");
//     scanf("%d", &num); // キーボードからループ回数入力
//     // whileループで実行
//     printf("whileで実行\n");
//     i = 1;
//     while(i <= num){
//         printf("*");
//         i++;
//     }
//     printf("\n");
//     // do ~ whileループで実行
//     printf("do~whileで実行\n");
//     i = 1;
//     do{
//         printf("*");
//         i++;
//     }while(i <= num);
//     printf("\n");
// }

/* whileとdo~while文の違いは条件を確認するタイミングが違うため、
do~while文は仮に条件を満たしていなくても最低１回は処理が実行される。*/
// do~while文は上記コードで0回ループを指定しても1回実行される

// 無限ループ
// #include <stdio.h>

// // iを用いたループ
// void main() {
//     int num;
//     printf("負の値で、ループから抜けます。\n");
//     while(1) {
//         printf("数値を入力：");
//         scanf("%d", &num);
//         if(num < 0 ){
//             // ループから抜ける処理
//             break;
//         }
//     }
//     printf("終了\n");
// }

// 乱数の練習
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("RAND_MAX: %d\n", RAND_MAX);

    // 0から214748364までの乱数を発生
    for(int i = 0; i < 3; i++) {
        printf("%d\n", rand());
    }

    // 1から10までの乱数を発生
    for(int i = 0; i < 3; i++){
        printf("%d\n", rand() % 10 + 1);
    }
    return 0;
}
