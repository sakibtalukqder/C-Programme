#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    float cgpa;
    char gender;
};
// ST01 = {"Sakib", 1102, 3.94, 'M'};

int main() {

    // struct Student ST01 = {"Sakib", 1102, 3.94, 'M'};
    struct Student ST01; 
    strcpy(ST01.name,"Sakib");
    ST01.roll = 1102;
    ST01.cgpa = 3.94;
    ST01.gender = 'M';

    printf("Name \t Roll \t CGPA \t Gender \n");
    printf("%s \t %d \t %.2f \t %c \n", ST01.name, ST01.roll, ST01.cgpa,
           ST01.gender);
}