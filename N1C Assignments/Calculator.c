//
// Created by Aung Naing Thu on 12/25/2024.
//

#include <stdio.h>
#include <stdlib.h>

//Function Declaration
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divi(int a, int b);

int main() {

  int choice;
  int num1, num2;

  while (1) {
    printf("Press 1: Add numbers\n");
    printf("Press 2: Substract numbers\n");
    printf("Press 3: Multiply numbers\n");
    printf("Press 4: Divide numbers\n");
    printf("Press 0: Exit\n\n");

    printf("Please enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        printf("The sum is: %d\n\n", add(num1, num2));
        break;

      case 2:
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        printf("The substraction is: %d\n\n", sub(num1, num2));
        break;

      case 3:
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        printf("The multiplication is: %d\n\n", mul(num1, num2));
        break;

      case 4:
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        printf("The division is: %d\n\n", divi(num1, num2));
        break;

      case 0:
        printf("Bye!\n");
        exit(0);

      default:
        printf("Invalid Choice! Try again...\n\n");
    }
  }

  return 0;
}

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
  return a * b;
}

int divi(int a, int b) {
  return a / b;
}