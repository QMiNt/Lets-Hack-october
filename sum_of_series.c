#include <stdio.h>

int main() {
    int n,i,f=1,j;
    long long int s=0;
    printf("enter number of terms:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        s=s+f;
        f=1;
    }
    printf("%lld",s);
    return 0;
}