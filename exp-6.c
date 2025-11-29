#include<stdio.h>

void counter() {
    static int count = 0;
    count;
    count++;
    printf (" Number of time the fuction is called is %d\n", count);
}
// Khan Rahmanuddin UIN 251P049.
int main (){
    counter ();
    counter ();
    counter ();
    counter ();
    return 0;
}