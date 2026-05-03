/*
============================================================================
 Name        : Nearly Lucky Number
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-May-2026
 modified    : 03-May-2026
 link        : https://codeforces.com/problemset/problem/110/A
============================================================================
*/  


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int is_lucky(int count) // the function will receive the total number number of 4 and 7 in the number 
{
    int mod;
    
    if(count==0) 
    {
        return 0;
    }
    
    
    while(count>0) 
    {
        mod = count%10;
        if(mod == 4 || mod == 7)
        {
            count = count/10;
        }else{
            return 0;
        }
    }
    
    return 1;
}


int main()
{
    unsigned long long int n; //to store the input ehich is 1<=n<10^18
    scanf(" %llu", &n); 
     
    int count = 0 ; //to count the total number of 4 and 7 in the input number
 
    unsigned long long int digit; //to store the mod of the number which is the last digit of the number 
    
    //to count total number of 4 and 7 in the digit
    while(n>0) 
    {
        digit = n%10;
        
        if(digit == 4 || digit == 7)
        {
            count++;
        }
        n=n/10;
    }
    
    
    //we are passing the total number of 4 and 7 situated in the digit to find is the count is a lucky number or not 
    if(is_lucky(count)){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}
