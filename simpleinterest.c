/*Calculation of simple interest */
/*NAME:KENDI EDWIN KIMATHI
REG NO:CT101/G/22309/24*/





#include<stdio.h>


     int main(){
        float principal, rate , time, simpleInterest;

        //input the principal amount, rate of interest, and time in years 
        printf("Enter the principal amount: ");
        scanf("%f", &principal);

        printf("Enter the rate of interest(in percentage): ");
        scanf("%f", &rate);
      
       printf("Enter time(in years): ");
       scanf("%f", &time);

       //calculate the simple Interest
       simpleInterest = (principal * rate * time) / 100; 

       //print the result
       printf("Simple Interest = %.2f\n", simpleInterest);

       return 0;

     }