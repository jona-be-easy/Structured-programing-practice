#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var_a, var_b, var_c;
    printf("Enter variable B:");
    scanf("%d",&var_b);

    printf("Enter variable C:");
    scanf("%d",&var_c);
    var_a = var_b + var_c;

    printf("Variable C and variable B is variable A which is %d",var_a);
        return 0;
}
