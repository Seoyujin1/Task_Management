#include "task.h"

int selectMenu(){
    int menu;
    printf("\n*** Task ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}

int addTask(Task *t){
    printf("과제의 과목 이름은? ");
    getchar();
    fgets(t->className, 100, stdin);
    printf("과제의 마감 기한은? ");
    scanf("%s", t->date);
    printf("과제의 상태는? (안함:0 완료:1 진행중:2) ");
    scanf("%d", &t->state);
    return 1;
}

void updateTask(Task *t){
    printf("과제의 과목 이름은? ");
    getchar();
    fgets(t->className, 100, stdin);
    printf("과제의 마감 기한은? ");
    scanf("%s", t->date);
    printf("과제의 상태는? (안함:0 완료:1 진행중:2) ");
    scanf("%d", &t->state);
    printf("=> 수정성공!");
}
int deleteTask(Task *t){
    t->state = -1;
    return 1;
}

void listTask(Task *t[], int count){
    printf("---------------------------------\n");
    for(int i=0; i<count; i++){
        if(t[i] == NULL) continue;
        printf("\n번호 : %d\n", i+1);
        readTask(*t[i]);
    }
    printf("\n");
}
void readTask(Task t){
    printf("과목이름 : %s마감기한 : %s\n현황 : ",t.className, t.date);
    if(t.state == 0) printf("안함");
    else if(t.state == 1) printf("진행중");
    else printf("완료");
}

int selectDataNo(Task *t[], int count){
    int no;
    listTask(t, count);
    printf("번호는 (취소 :0)? ");
    scanf("%d", &no);
    return no;
}
