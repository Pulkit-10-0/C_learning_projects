#include <stdio.h>
int main() {
    int n,i ;
    int firstTerm = 0, secondTerm =1;
    int nextTerm = 0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series : %d, %d",firstTerm, secondTerm );
    for (i=3; i<=n; i++) {
        nextTerm = firstTerm + secondTerm;
    printf(",%d", nextTerm);
    firstTerm = secondTerm;
    secondTerm = nextTerm;

    }
    printf("\n");
}