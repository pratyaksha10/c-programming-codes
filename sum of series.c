#include <stdio.h>
#include <math.h>
int series(int n);
int main()
{
int n;
start:
printf("Enter a +ve number less than 50: ");
scanf("%d",&n);
if(n>0 && n<=50){
series(n);
goto start;
}
else{
printf("Invalid Input");
exit(0);
}
}
int series(int n){
int i,ans=0,m=0;
for(i=1;i<=n;i+=m){
ans+=pow(i,4);
m++;
}
printf("Sum of the series is %d\n\n",ans);
}
