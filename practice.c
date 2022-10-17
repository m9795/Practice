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
#include <stdio.h>

void main(){
    printf("西暦を入力してください。\n");
    int year;
    scanf("%d", &year);
    if(year%400 == 0){
        printf("閏年です。\n");
    }else if(year%100 == 0){
        printf("閏年ではありません。\n");
    }else if(year%4 == 0){
        printf("閏年です。\n");
    }
}
