#include <stdio.h>

void main() {
  printf("Hello Word.\n");

  printf("こんにちは。私の名前は%sです。\n年齢は%d歳で現在の職業は%sです。\n", "上田花子", 27, "銀行員");
  printf("身長は%.1fcmで体重は%.1fkg、血液型は%c型です。\n", 160.5, 45.7, 'A');

  float height, weight, bmi;
  height = 1.6;
  weight = 45.7;
  bmi = weight/(height*height);

  printf("BMIは%.2fです。\n", bmi);
}
