#include <stdio.h>

int main(){
    int a[10],n,i,sum=0;

    printf("Enter the number you want to add in array:");
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
        sum = sum+ a[i];
    }
    printf("sum is :%d",sum);   
    }