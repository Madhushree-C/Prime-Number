#include "prime.h"
int prime(int n)
{

int i, flag=0;
if(n<1)
return -1;
for(i=1;i<=n;i++)
{
    if(n%i==0)
    flag=flag+1;
}

if(flag<3)
    return 1;
else
    return 0;
}
