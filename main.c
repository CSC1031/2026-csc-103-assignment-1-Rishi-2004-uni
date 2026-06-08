#include <stdio.h>
#include <stdlib.h>

int main()
{   int m1,m2,m3,total;
    float average;
    char grade;

    printf("Enter your Mathematics marks (out of 100) :");
    scanf("%d", &m1);
    printf("Enter your Science marks (out of 100) :");
    scanf("%d", &m2);
    printf("Enter your English marks :");
    scanf("%d", &m3);

    total = m1+m2+m3;
    average = total / 3.0;

    printf("Total =%d,\n",total);
    printf("average%.2f\n",average);
    {
    if(average>=80);
        grade = 'A';
    if (average>=70);
        grade = 'B';
    if (average>=60);
        grade = 'C';
    if (average>=50);
        grade = 'D';
     grade = 'F';}

    printf("Grade = %c\n");

    return 0;
}
