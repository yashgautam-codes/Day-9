#include <stdio.h>
int main()
{
    float n;
    printf("Enter the Percentage :- ");
    scanf("%f",&n);
    if(n>=90 && n<=100){
        printf("Grade 'A'");
    }
    if(n>=80 && n<90){
        printf("Grade 'B'");
    }
    if(n>=70 && n<80){
        printf("Grade 'C'");
    }
    if(n>=60 && n<70){
        printf("Grade 'D'");
    }
    if(n<60){
        printf("Grade 'F'");
    }
    return 0;
}