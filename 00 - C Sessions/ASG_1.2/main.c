/*
Name	Mohamed Abdo Abdallah Ali Maklad
Email	mohamedabdo75200@gmail.com
Mobile	01551754160
Level	Undergraduate
Diploma	Embedded Systems Diploma
Group	Emb - Maadi 517
Training days	Saturday, Friday
Group end date	2022-12-23
ASG 1.2
*/
#include <stdio.h>
void main()
{
    while (1)
    {
        int n, k;
        printf("Enter any number: ");
        scanf("%d", &n);
        printf("Enter nth Bit to togglr (1-31): ");
        scanf("%d", &k);
        printf("Number before toggling %d bit : %d (in decimal)\n", k, n);
        n = n ^ (1 << (k));
        printf("Number after toggling %d bit : %d (in decimal)\n", k, n);
    }
}
