#include <stdio.h>

int main( void )
{ 
   int month1; 
   int day1;   
   int year1;  
   int month2; 
   int day2;   
   int year2; 
   
   printf( "%s", "Enter a date in the form mm-dd-yyyy: " );
   scanf( "%d%*c%d%*c%d", &month1, &day1, &year1 );//*c表任何字元(萬用字元) 

   printf( "month = %d  day = %d  year = %d\n\n", month1, day1, year1 );
   
   printf( "%s", "Enter a date in the form mm/dd/yyyy: " );
   scanf( "%d%*c%d%*c%d", &month2, &day2, &year2 );
   
   printf( "month = %d  day = %d  year = %d\n", month2, day2, year2 );
} // end main


