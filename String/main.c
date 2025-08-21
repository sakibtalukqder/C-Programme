#include <stdio.h>
#include <string.h>

int main() {
    // char c[100];
    // printf("Enter String : ");
    // // scanf("%[^\n]s",c);
    // gets(c);
    // printf("The String : %c \n",c[2]);
    // printf(c);

    char str[] = "***String_01";
    char str2[] = "__String_02";

    printf("%s\n",str);
    printf(
        "%s\n",strrev(str)
    );
    int size = strlen(str);
    printf("The Size = %d \n", size);

    char str3[20];
    strcpy(str, "str *");
    strcpy(str3, str);
    printf("str[] = %s \n", str);
    printf("str2[] = %s \n", str2);
    printf("str3[] = %s \n", str3);

    char str4[] = "Hello ";
    strcat(str4, str3);
    printf("%s\n",str4);

    int result = strcmp(str4,str2);
    printf("Compare Result = %d",result);
}
