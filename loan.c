#include <stdio.h>

 int main() {
    int age;
    float annualincome;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &annualincome);

    if (age > 21,annualincome >= 21000)
    {printf("Congratulations! Your loan has been approved. \n");}


    if (age <21, annualincome<21000){
    printf("Unfortunately, we could not process your loan.\n");
}

   return 0;
 }






  