#include <string.h>
#include <stdio.h>

typedef struct{
char className[100];
int date;
int state;
} Task;

int selectMenu();
int addTask(Task *t); // 새로운 과제 추가
int updateTask(Task *t); // 과제 정보 수정
int deleteTask(Task *t); // 과제 삭제
int listTask(Task *t); //과제 목록 조회
void readTask(Task t); // 과제 조회
void updateState(Task *t); // 과제 상태 수정하기 (시작 전 : 1, 진행 중 : 2, 완료 : 3)
int selectDataNo(Task *t, int count); // 과제 삭제나 수정 시에 과제 번호 선택
void saveData(Task *t, int count); // 파일 저장
int loadData(Task *t); // 파일 불러오기
void searchClassName(Task *t, int count); // 과제를 수업 이름으로 검색
void searchDate(Task *t, int count); // 과제를 마감 기한으로 검색
