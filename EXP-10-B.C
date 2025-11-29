/*NAME: KHAN RAHMANUDDIN AJAUDDIN , UIN: 251P049 , BRANCH: COMPUTER SCIENCE , DIC:C*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
    
        scanf("%d", &a[i]);
        int *p = a + n - 1;
        printf("Reverse: ");
        for(int i=0;i<n;i++)
        printf("%d ", *(p - i));

    return 0;
}