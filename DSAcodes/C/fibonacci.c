#include <stdio.h>
int main() {
 int n,i,a=0,b=1,c;
 printf("enter number of terms:");
 scanf("%d",&n);
 printf("%d\t%d\t",a,b);
 for (i=1;i<n-1;i++)
 {
 c=a+b;
 printf("%d\t",c);
 a=b;
 b=c;
 
 }
 
 return 0;
}