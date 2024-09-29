/*LIBRARY PROGRAM
NAME:KENDI EDWIN KIMATHI
REG NO:CT101/G/22309/24 */

#include <stdio.h>
int main() {
    int book_ID,due_date,return_date,days_overdue,charges;
    printf("Enter the book ID: ");
    scanf("%d", &book_ID);

    printf("Enter the return date: ");
    scanf("%d", return_date);

    //Calculating the overdue days
    days_overdue = return_date - due_date;

    printf("days_overdue is %d \n", days_overdue);

    if(days_overdue =7){
        charges = days_overdue * 20;

        printf("The amount charged is %d", charges);

} else {
    charges = days_overdue * 50;

    if(days_overdue = 8 < 15) {

        printf("The amount charged is %d :", charges);
    }

   else {
    charges = days_overdue * 100;
    printf("The amount charged is %d: ",charges);
   }
 
 return 0;
 }













}