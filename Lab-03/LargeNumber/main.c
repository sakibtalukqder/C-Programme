#include <stdio.h>
int main(){
    int a,b,c;

    printf("Enter 3 Number; A B C : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c){
        printf("Ther Largest Number is (%d) ",a);
    } else if (b>c) {
        printf("Ther Largest Number is (%d) ",b);
    } else {
        printf("Ther Largest Number is (%d) ",c);
    }
    
    return 0;
}