#include "studentDatabase.h"
#include <string.h>

// エラーメッセージの文字列の最大の長さ
#define MESSAGE_LENGTH 256
// データベースに登録されている学生の数
int num = 0;
// 学生のデータベース
student student_database[MAX_STUDENT];
// エラーメッセージ
int Error = MESSAGE_OK;

// データベースの初期化
void initDatabase()
{
  int i;
  for(i = 0; i < MAX_STUDENT; i++){
    student_database[i].id = -1;
    strcpy(student_database[i].name,"");
  }
  Error = MESSAGE_OK;
  num = 0;
}

// データベースへのデータ登録（学生番号、名前）
int add(int id,char* name)
{
  // 既に登録されているidであれば、登録しない
  if(get(id) == NULL && num < MAX_STUDENT){
    student_database[num].id = id;
    strcpy(student_database[num].name,name);
    num++;
    Error = MESSAGE_OK;
    // 登録出来たら、1を返す
    return 1;
  }
  Error = MESSAGE_ERROR;
  // 登録できなければ、0を返す
  return 0;
}
// 学生のデータの取得
student* get(int id)
{
  int i;
  for(i = 0; i < num; i++){
    if(student_database[i].id == id){
      return &student_database[i];
    }
  }
  return NULL;
}
