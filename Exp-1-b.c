#include<stdio.h> 

int main (){

    int Physics;
    printf("Enter Marks For Physics\n");
    scanf("%d", &Physics);
    /*The above three lines of code are used of variable declaration,
     printing the sentence inside string and taking an input from user*/
    int Chemistry; 
    printf("Enter Marks For Chemistry\n");
    scanf("%d", &Chemistry);
    int Maths;
    printf("Enter Marks For Maths\n");
    scanf("%d", &Maths);
    float Total = (Physics + Chemistry + Maths); 
    printf("Total For PCM Is %.2f \n", Total);
    int Average = (Total / 3);
    printf("Your Average Is %d \n",Average);
    float Percentage;
    Percentage = ((Total * 100)/300);
    printf("Your Percentage For PCM Is %.2f \n",Percentage);
    (Percentage>50)? printf("The student is eligible"): printf("The student is not eligible");

    return 0;
}