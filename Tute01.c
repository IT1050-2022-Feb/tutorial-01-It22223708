/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark_1,mark_2;
   float totalMarks,Average;
   
      printf("Enter the first subject marks:");
      scanf("%d",&mark_1);
         
      printf("Enter the second subject marks:");
      scanf("%d",&mark_2);
         
         totalMarks=mark_1+mark_2;
         Average=totalMarks/2.0;
         
         printf("Average of the two subject is:%.2f",Average);
         
  return 0;
}

