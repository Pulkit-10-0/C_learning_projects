#include <stdio.h>
int main() {
    int First_array[3][3];
    int Second_array[3][3];
    
    int choice;
    int i,j;
    for(i =0; i<3;i++) {
        for(j=0;j<3;j++) {
            printf("enter the element");
            scanf("%d",&First_array[i][j]);
        }
    }
    
        for (i=0;i<3;i++){
                for(j=0;j<3;j++){
                printf("Enter the element:");
                scanf("%d",&Second_array[i][j]);
                }
        }
printf("\nthe First array\n");
    for(i =0; i<3;i++) {
        for(j=0;j<3;j++) {
    printf("%d ", First_array[i][j]);
        }
        printf("\n");
    }

printf("\nthe second array\n");
    for(i =0; i<3;i++) {
        for(j=0;j<3;j++) {
    printf("%d ", Second_array[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter choice 1 for sum, 2 for subtraction, 3 for multiplication, 4 for transpose\n");
    scanf("%d",&choice);
    switch (choice) {
    case (1) : {int sum_array [3][3];
for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        sum_array[i][j] =  (First_array[i][j] + Second_array[i][j]);
    }
}
printf("\nthe sum array\n");
    for(i =0; i<3;i++) {
        for(j=0;j<3;j++) {
    printf("%d ", sum_array[i][j]);
        }
        printf("\n");
    }}  

    break;

    case (2):{int subtraction_array[3][3];
    for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        subtraction_array[i][j] =  (First_array[i][j] - Second_array[i][j]);
    }
}
printf("\nthe subtraction array\n");
    for(i =0; i<3;i++) {
        for(j=0;j<3;j++) {
    printf("%d ", subtraction_array[i][j]);
        }
        printf("\n");
    }}
    
    break;

    case (3):{  
        int multiplication_array[3][3];
    for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        multiplication_array[i][j] =  (First_array[i][j]* Second_array[i][j]);
    }
}
printf("\nthe multiplication array\n");
    for(i =0; i<3;i++) {
        for(j=0;j<3;j++) {
    printf("%d ", multiplication_array[i][j]);
        }
        printf("\n");
    }}
  
    break;

    case (4):{int transpose_array[3][3];
    for (i=0;i<3;i++){
    for (j=0;j<3;j++){
        transpose_array[j][i] =  First_array[i][j];
    }
    }
    
printf("\nthe transpose array\n");
    for(i =0; i<3;i++) {
        for(j=0;j<3;j++) {
    printf("%d ",transpose_array[i][j]);
        }
        printf("\n");
    }
    
    break;

        
default : printf("not a valid input");




    }
return 0;
}

}

