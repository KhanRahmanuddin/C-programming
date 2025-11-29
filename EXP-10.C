/*NAME: KHAN RAHMANUDDIN AJAUDDIN , UIN: 251P049 , BRANCH: COMPUTER SCIENCE , DIC:C*/
#include <stdio.h>
int main() {
    int a, b, *p, *q;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    p = &a;
    q = &b;
    printf("Sum = %d", (*p + *q));
    
    return 0;
}