#include<stdio.h>

int main () {
 int num1;
 int num2;
 int sum =0;
 printf("Enter number1\n");
 scanf("%d", &num1);
 printf("Enter number2\n");
 scanf("%d", &num2);
 int i = num1;
 for (i; i<=num2; i++ ) {
    if (i%2 != 0) {
        sum = sum + i;
    } 
 }
 printf("The sum of odd numnber is %d", sum);
 return 0;
}