/*NAME: KHAN RAHMANUDDIN AJAUDDIN , UIN: 251P049 , BRANCH: COMPUTER SCIENCE , DIC:C*/
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct student s[5];
    int i, topper = 0;
    for(i=0; i<5; i++) {
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }
    for(i=1; i<5; i++)
        if(s[i].marks > s[topper].marks)
            topper = i;
    printf("\nTopper = %s (%d marks)\n", s[topper].name, s[topper].marks);
    return 0;
}