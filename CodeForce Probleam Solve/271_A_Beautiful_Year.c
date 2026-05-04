/*
============================================================================
 Name        : 271 A Beautiful_Year
 Author      : S. M. shakiful Alam
 Language    : C
 Created     : 03-May-2026
 Modified    : 03-May-2026
 Link        : https://codeforces.com/problemset/problem/271/A
============================================================================
*/

/*
    distinct digits are 0,1,2,3,4,5,6,7,8,9. A year with only distinct 
    digits means all digits of the year are different.
    
    2013 and 2014 are distinct years because all 4 digits are unique.
    1988 is NOT a distinct year because '8' repeats.
*/




#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int is_distinct_year(int year)
{
    int count_digits_of_number=0; //to count the number of digits in the code 
    int temp = year;     //storing the year in temp for counting the number of digits in the code 
    
    while(temp != 0)
    {
        temp/=10;
        count_digits_of_number++;
    }
    
    
    int digits[count_digits_of_number]; //taking a array 
    
    int i=0; 
    while(year>0) //converting the dogita into a array
    {
        digits[i] = year % 10;
        year/=10;
        i++;
    }
    
    int n = sizeof(digits)/sizeof(digits[0]);     //size of the array
    
    for(int i=0; i<n-1; i++) //cheak is any digits have 2 or more time in the number 
    {
        for(int j=i+1; j<n; j++)
        {
            if(digits[i] == digits[j])
            return 0;
        }
    }
    
    return 1;
}



int main()
{
    int year;
    scanf("%d", &year); //taking jnpuof yeR
    
    if(1000<=year && year<=9000) //if the 1000<=year<=9000 the it will increase the year 1 time with +1 
    {
        year++;
    }
    
    
    //যদি is_distinct_year function zero return করে তাহলে ! এর কারণে 1 হয়ে যাবে while loop always চলবে
    while(!is_distinct_year(year)){  
        year++;
    }
    
    printf("%d",year);
    
    return 0;
}
