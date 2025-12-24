#include <stdio.h>
#include <string.h>

struct student {
    int roll_no;
    char name[30];
    int marks;
};
    int main() {
        struct student s1;
        s1.roll_no=125;
        strcpy(s1.name,"PRASHANT PANDEY");
        s1.marks=99;
        printf("name=%s\n",s1.name);
        printf("roll_no=%d\n",s1.roll_no);
        printf("marks=%d\n",s1.marks);
    }
