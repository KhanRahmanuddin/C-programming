#include<stdio.h>
int main(){
    /*
    NAME:-KHAN RAHMANUDDIN
    CLASS:- F.E COMPS DIVISION:- C-3
    UIN:- 251P049
    */
    int n,x,y,r,q;
    start:
        printf("OPERATORS");
        printf("\nSelect the function\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Quit\n");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Enter the first number:\n");
            scanf("%d",&x);
            printf("Enter the second number:\n");
            scanf("%d",&y);
            r=x+y;
            printf("%d+%d=%d\n",x,y,r);
            goto start;
            break;
            case 2:
            printf("Enter the first number:\n");
            scanf("%d",&x);
            printf("Enter the second number:\n");
            scanf("%d",&y);
            r=x-y;
            printf("%d-%d=%d\n",x,y,r);
            goto start;
            break;
            case 3:
            printf("Enter the first number:\n");
            scanf("%d",&x);
            printf("Enter the second number:\n");
            scanf("%d",&y);
            r=x*y;
            printf("%d*%d=%d\n",x,y,r);
            goto start;
            break;
            case 4:
            printf("Enter the first number:\n");
            scanf("%d",&x);
            printf("Enter the second number:\n");
            scanf("%d",&y);
            r=x/y;
            printf("%d/%d=%d\n",x,y,r);
            goto start;
            break;
            case 5:
            printf("Enter the first number:\n");
            scanf("%d",&x);
            printf("Enter the second number:\n");
            scanf("%d",&y);
            r=x%y;
            printf("%d%%%d=%d\n",x,y,r);
            goto start;
            break;
            case 6:
            break;
            default:
            printf("INVALID CODE...!\n");
            goto start;}
    printf("THANK YOU...%c,",1);
    return 0;}
