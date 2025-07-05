#include <stdio.h>

int main(){
    int num;

    // Input The Integer
    printf("Enter an intiger number : ");
    scanf("%d", &num);
    
    // Check The Input 
    if (num%2 == 0){
        printf("%d is an Even Number",num);
    } else {
        printf("%d is an Odd Number",num);
    }

    return 0;
}
 