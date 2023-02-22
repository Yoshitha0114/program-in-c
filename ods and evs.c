#include<stdio.h>
main()
{
          int n,evs=0,ods=0,i;
          i=1;
          scanf("%d",&n);//how many nos
    while(i<=n)
    {
        if(i%2==0)
          {
             evs=evs+i;
        }
        else
          {
             ods=ods+i;
         }
      i++;
    }
    printf("%d",evs-ods);
}
