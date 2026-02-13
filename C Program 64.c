#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct Student {
    char name[50];
    int age;
    char className[10];
    int rollNo;
};
int main() {
    struct Student s[100];
    int choice, count = 0;
    while (1) {
        printf("\n--- Student System ---\n1. Add Student\n2. Search/Display\n3. Exit\nEnter Choice: ");
        scanf("%d", &choice);
        if (choice == 3) break;
        switch (choice) {
            case 1:
                printf("Enter Name: ");
                scanf("%s", s[count].name);
                if (!isalpha(s[count].name[0])) {
                    printf("Invalid Name! Must start with an alphabet.\n");
                } else {
                    printf("Enter Age, Class, Roll No: ");
                    scanf("%d %s %d", &s[count].age, s[count].className, &s[count].rollNo);
                    count++;
                }
                break;
            case 2:
                for (int i = 0; i < count; i++) {
                    printf("\nName: %s, Age: %d, Class: %s, Roll: %d", s[i].name, s[i].age, s[i].className, s[i].rollNo);
                }
                break;
            default:
                printf("Error: Choice must be between 1-3.\n");
        }
    }
    return 0;
}