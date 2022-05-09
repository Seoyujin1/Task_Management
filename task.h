#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char className[10];
    char date[10];
    int state;
}Task;

int selectMenu();
int addTask(Task *t); // 새로운 과제 추가
void updateTask(Task *t); // 과제 정보 수정
int deleteTask(Task *t); // 과제 삭제
void listTask(Task *t[], int count); //과제 목록 조회
void readTask(Task t); // 과제 조회
int selectDataNo(Task *t[], int count); // 과제 삭제나 수정 시에 과제 번호 선택

