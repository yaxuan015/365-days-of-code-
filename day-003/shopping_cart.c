#include <stdio.h>
#include <string.h>

int main() {

// shopping cart program 

char item[50] = "";
float price = 0.0f;
int quantity = 0;
char currency[10] = "";
float total = 0.0f;

printf("What item would you like to buy?: ");
fgets(item, sizeof(item), stdin);
item[strlen(item) - 1] = '\0';

printf("What is the price for each?: ");
scanf("%f", &price);

printf("How many would you like?: ");
scanf("%d", &quantity);

printf("What is the currency?: ");
scanf("%9s", currency);

total = price * quantity;
printf("Total: %s%.2f\n", currency, total);




}