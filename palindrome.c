#include <stdio.h>
int main() {
    int num;
    int original_num;
    int rev_num = 0;
    int remainder;

    printf("\n Enter The Number :");
    scanf("%d",&num);
    original_num = num;
    while (num !=0) {
        remainder = num%10;
        rev_num = rev_num*10 + remainder;
        num /=10;
    }
    printf("\n Your Input was: %d",original_num);
    
    printf ("\n Processing...");
    
    if (original_num == rev_num) {
        printf("\n The Number Is Palindrome!");
    }else {
        printf("The Number Is Not Palindrome!");  
        }
    



}