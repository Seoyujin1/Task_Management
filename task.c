#include "task.h" 
#include <stdio.h>

int selectMenu(){
    int menu;
    printf("\n-------------------\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 파일저장\n");
    printf("6. 과제 상태 수정\n");
    printf("7. 과제 이름 검색\n");
    printf("8. 마감 기한 검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}
int addTask(Task *t) { // 새로운 과제 추가
    printf("과제의 과목 이름은? ");
    getchar();
    fgets(t->className, 100, stdin);
    printf("과제의 마감 기한은? ");
    scanf("%d", &t->date);
    printf("과제의 상태는? ");
    scanf("%d", &t->state);
    return 1;
}
int updateTask(Task *t) { // 과제 정보 수정
    printf("과제의 새 과목 이름은? ");
    getchar();
    fgets(t->className, 100, stdin);
    printf("과제의 새 마감 기한은? ");
    scanf("%d", &t->date);
    printf("과제의 새 상태는? ");
    scanf("%d", &t->state);
    printf("=> 수정성공!\n");
    return 1;
}
int deleteTask(Task *t) { // 과제 삭제
    t->date = -1;
    return 1;
}
void listTask(Task *t, int count){ //과제 목록 조회
    printf("-----------------\n");
    for(int i=0; i<count; i++){
        if(t[i].date==-1) continue;
        printf("%2d. ", i+1);
        readTask(t[i]);
    }
    printf("\n");
}
void readTask(Task t){ // 과제 조회
    printf("%s %d %d\n", t.className, t.date, t.state);
}

int selectProdNo(Task *t[], int count){
    int no;
    printf("\n번호는 (취소 :0)? ");
    scanf("%d", &no);
    return no;
}
