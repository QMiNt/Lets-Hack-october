#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    int n=0,flag=0,i=0;
    printf("enter string:");
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%s is not a palindrome",str);
    }
    else
    {
        printf("%s is  a palindrome",str);
    }
    return 0;
}
