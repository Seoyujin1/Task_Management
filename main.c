#include "task.h"

int main(){
    int menu;
    int count=0, index=0;
    Task *tlist[100];
  
    while (1){
        menu = selectMenu();
        if(menu == 0) break;
        else if (menu == 1){
            if(count > 0) listTask(tlist, count);
        }else if (menu == 2){
            tlist[index] = (Task *)malloc(sizeof(Task));
            count += addTask(tlist[index++]);
        }
        else if(menu == 3){
            int no = selectDataNo(tlist, index);
            if(no == 0){
                printf("=> 취소됨!\n");
                continue;
            }
            updateTask(tlist[no-1]);
        }
        else if(menu == 4){
            int no = selectDataNo(tlist, index);
            if(no == 0){
                printf("=> 취소됨!\n");
                continue;
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제 :1)");
            scanf("%d", &deleteok);
            if(deleteok == 1) {
                if(tlist[no-1]) free(tlist[no-1]);
                tlist[no-1] = NULL;
                count --;
                printf("=> 삭제됨!\n");
                }
            }
    }
        printf("=> 종료됨!\n");
        return 0;
}
