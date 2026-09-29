#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acc, old_limit, bal, new_limit, i, j;
    for (i =1; i<=3; i++){
      printf("Enter Customer acc:");
      scanf("%d",&acc);

        printf("Enter old limit:");
       scanf("%d",&old_limit);

       printf("Enter Balance:");
       scanf("%d",bal);

        new_limit = old_limit/2;

        printf("Customer %d: New Limit %d",acc,new_limit);
        if(bal>new_limit){
            printf(" exceeds limit \n");
        }else{
        printf(" OK \n");
        }
    }
    return 0;
}
