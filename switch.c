#include <stdio.h>

void main(){
    int num;
    printf("1~3の値を入力してください：");
    scanf("%d",&num);
    // 入力した値が正の数かどうかを調べる
    switch(num){
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        default:
            printf("不適切な値です。\n");
    }
}
