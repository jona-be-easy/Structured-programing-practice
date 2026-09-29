#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, value, sum;
    printf("Enter number of values to be added:");
    scanf("%d",&count);

    for(int i=1; i<=count; i++){
    printf("Enter value %d:",i);
    scanf("%d",&value);
    sum = sum + value;
    }
    return 0;
}
