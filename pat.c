#include <stdio.h>

int main () {
    int num;
    printf("enter the number of lines:");
    scanf("%d",&num);
    for (int i =0; i <=num; i++){
        for (int j =0; j <= num-i; j ++) {
            printf(" ");
        }
        for (int k=0; k <= i ; k++) {
            printf("* ");

        }
    printf("\n");
    }
    


   
    for (int i =  1; i <=num; i++) {
        for (int j=1; j<=i;j++){
            printf("*");
        }
       printf("\n");
    }
    

}