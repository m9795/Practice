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
#include <stdio.h>

int main(void){

    /*　練習1
        ポイント計算(商品単価は均一)
        100円毎に１ポイント加算
        合計金額を入力で取得する */

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

    int total; // 合計金額
    int subject = 100; // ポイントの対象金額
    int point = 1; // 加算ポイント数


    printf("合計金額を入力：");
    scanf("%d", &total);
    int addPoint = (total/subject) * point;
    printf("合計金額：%d円\n加算ポイント：%dポイント\n", total, addPoint);
    printf("(※%d円ごとに%dポイント付与)\n", subject, point);

    char obj1[] = "現在お客様は「";
    char obj3[] = "」です。";

    int rank1 = 3000;
    int rank2 = 6000;
    int rank3 = 10000;

    if(total >= rank3){
        char obj2[] = "プラチナ会員";
        printf("%s%s%s\n", obj1, obj2, obj3);
    }else if(total >= rank2 && total < rank3){
        char obj2[] = "シルバー会員";
        printf("%s%s%s\n", obj1, obj2, obj3);
    }else{
        char obj2[] = "ブロンズ会員";
        if(total >= rank1 && total < rank2){
            printf("%s%s%s\n", obj1, obj2, obj3);
        }else{
            printf("合計金額%d円以上で%sになれます。\n", rank1, obj2);
        }
    }


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
}
