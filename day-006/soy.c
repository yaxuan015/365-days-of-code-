#include<stdio.h>

int main(void)
{
    int soy;
    
    printf("Enter the number of ml of soy sauce you are using:");
    scanf("%d", &soy);

    printf("\nYour receipe will use:\n");
    printf("%d ml of soy sauce\n", soy);
    printf("%d ml of vinegar\n", soy*2);
    printf("%d ml of sugar\n", soy*3);
    printf("%d ml of water\n", soy*4);

    return 0;

}



