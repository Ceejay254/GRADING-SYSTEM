
#include <stdlib.h>

int main(){
   int score;


    printf("enter score(0-70");
    scanf("%d",&score);
    if(score== 70)
        printf("grade A");
    else if(score>=60 && score<=69)
        printf("grade B");
    else if (score>=50 && score<=59)
        printf("grade C");
    else if (score>=40 && score<=49)
        printf("grade D");
        else if (score>=30 && score<=39)
        printf("grade E");
    return 0;
}
