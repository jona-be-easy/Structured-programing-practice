#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var_a, var_b, var_c, sum_AB;
    printf("Enter variable A:");
    scanf("%d",&var_a);

    printf("Enter variable B:");
    scanf("%d",&var_b);

    if(var_a>var_b){
        var_c = var_a - var_b;
        printf("Variable C is %d",var_c);
    }else{
        sum_AB = var_a + var_b;
    printf("The sum is %d",sum_AB);
    }
    return 0;
}
