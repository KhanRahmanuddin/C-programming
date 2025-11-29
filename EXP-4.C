/*NAME: KHAN RAHMANUDDIN AJAUDDIN , UIN: 251P049 , BRANCH: COMPUTER SCIENCE , DIC:C*/
#include<stdio.h>
int prime(int , int );
int main() { 
    int a,b,z;
    printf("ENTER A FIRST NUMBER:");
    scanf("%d",&a);
    printf("ENTER A SECOND NUMBER:");
    scanf("%d",&b);
    if(a>b){   
        z=a;
        a=b;
        b=z;
    }
     prime(a,b);
     return 0;
}
int prime(int x, int y){
    int b;
  for (int j=x; j <=y; j++) {
    int i=1;
    do
    {   i++;
        b= j%i;
        if(j==i)
        printf("%d \n",j);
    } while ( b!=0);
  }
  }