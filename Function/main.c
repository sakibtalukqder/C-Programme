#include <stdio.h>

int addNum(int,int);
void swapbyValue(int n1, int n2);
void swapbyRef(int *n1, int *n2);

int main(){
    int a,b,Sum;
    printf("Erter Two Number : ");
    scanf("%d %d", &a, &b);
    Sum = addNum(a,b);
    printf("%d + %d = %d \n",a,b,Sum);

    swapbyValue(a,b);
    printf("a = %d , b = %d \n",a,b);
    swapbyRef(&a,&b);
    printf("a = %d , b = %d \n",a,b);

}
    
//  Add Two Numbers
int addNum(int n1, int n2){
    return (n1+n2);
}

// Call By Value --Swap Number
void swapbyValue(int n1, int n2){
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

// Call By Refrence --Swap Number
void swapbyRef(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}