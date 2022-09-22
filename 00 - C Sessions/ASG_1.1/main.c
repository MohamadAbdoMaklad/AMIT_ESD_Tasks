/*
Name	Mohamed Abdo Abdallah Ali Maklad
Email	mohamedabdo75200@gmail.com
Mobile	01551754160
Level	Undergraduate
Diploma	Embedded Systems Diploma
Group	Emb - Maadi 517
Training days	Saturday, Friday
Group end date	2022-12-23
ASG 1.1
*/
#include <stdio.h>
void main()
{

    while (1)
    {
        double x;
        printf("Enter the number:");
        scanf("%lf", &x);
        if (((long long int)(x / 2) * 2 == x) && ((float)(x - (int)x) == 0))
        {
            printf("The number is odd = 0\nThe number is even = 1\n");
        }
        else if (((long long int)(x / 2) * 2 != x) && ((float)(x - (int)x) == 0))
        {
            printf("The number is odd = 1\nThe number is even = 0\n");
        }
        else if ((float)(x - (long long int)x) != 0)
        {
            printf("decimal number can't be classified\n");
        }
        else if (x >= 9999999990)
        {
            printf("Max No. 9999999990\n");
        }

    }
}
