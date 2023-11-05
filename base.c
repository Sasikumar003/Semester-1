#include <stdio.h>

int main(){
    int day=0;
    printf("Enter no of days");
    scanf("%d",&day);

    int game[day];
    int rain[day];
    int final[day];
    int count = 0;
    int cri=0,chess=0,noth=0;

    for(int i=0;i<day;i++){
        printf("Enter Game : ");
        scanf("%d",&game[i]);
        printf("Enter Rain : ");
        scanf("%d",&rain[i]);
    }

    for(int i=0;i<day;i++){

        if(game[i] == 1 && rain[i] == 0 && count !=3 ){
            final[i] = 1;
            cri++;
            count=0;
        }else if((rain[i] == 1 || game[i] == 0) && count !=3){
            final[i] = 0;
            chess++;
            count++;
        }else if(count == 3){
            final[i] = -1;
            count = 0;
            noth++;
        }
    }
    for(int i=0;i<day;i++){
        printf("%d\n",final[i]);
    }
    printf("Cricket : %d\nChess : %d\nNothing : %d",cri,chess,noth);
    return 0;
}