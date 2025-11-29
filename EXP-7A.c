/*NAME: KHAN RAHMANUDDIN AJAUDDIN , UIN: 251P049 , BRANCH: COMPUTER SCIENCE , DIC:C*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    for(i=0; i<n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for(i=1; i<n; i++)
        if(a[i] > max)
            max = a[i];

    printf("Largest = %d", max);
    return 0;
}