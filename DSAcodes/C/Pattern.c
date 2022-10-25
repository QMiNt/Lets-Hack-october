#include<stdio.h>
int main() {
    char prnt = '*';
    int i, j, k, s, p, r, nos = 7;

    for (i = 1; i <= 5; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            if ((i % 2) != 0 && (j % 2) != 0) 
            {
                printf("%3c", prnt);
            }
            else if ((i % 2) == 0 && (j % 2) == 0) 
            {
                printf("%3c", prnt);
            }
            else 
            {
                printf("   ");
            }
        }
        for (s = nos; s >= 1; s--) 
        {  // for the spacing factor
            printf("   ");
        }
        for (k = 1; k <= i; k++) 
        { //Joining seperate figures
            if (i == 5 && k == 1) 
            {
                continue;
            }
            else if ((k % 2) != 0)
            {
                printf("%3c", prnt);
            }
            else 
            {
                printf("   ");
            }
        }
        printf("\n");
        nos = nos - 2;   // space control
    }  
    nos = 1;  // remaining half..
    for (p = 4; p >= 1; p--)
    {
        for (r = 1; r <= p; r++)
        {
            if ((p % 2) != 0 && (r % 2) != 0) 
            {
                printf("%3c", prnt);
            }
            else if ((p % 2) == 0 && (r % 2) == 0) 
            {
                printf("%3c", prnt);
            }
            else
            {
                printf("   ");
            }
        }
        for (s = nos; s >= 1; s--)
        {
            printf("   ");
        }
        for (k = 1; k <= p; k++)
        {
            if ((k % 2) != 0)
            {
                printf("%3c", prnt);
            }
            else 
            {
                printf("   ");
            }
        }
        nos = nos + 2;  // space control
        printf("\n");
    }
    return 0;
}