/*
============================================================================
 Name        : Stones on the Table
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-May-2026
 modified    : 01-May-2026
 link        : https://codeforces.com/problemset/problem/617/A
============================================================================
*/  

#include<stdio.h>
#include <ctype.h> 
#include<string.h>

//creating a function to cheak the proper distance of the house 
int proper_distance(int x)
{
    if (1<=x && x<=1000000)
    {
        return 1;
    }else{
        printf("Enter a proper interger number from 1 to 1,000,000");
    }
    
}


int main()
{
    int x; // to store the distance 
    scanf("%d", &x); //taking input of total distance 


    int total_steps = 0; //we initialize al total_steps zero at the begenining 
    int mod; 

    int step5, step4, step3, step2, step1; //to store all types of steps 

    if (proper_distance(x))
    {
        step5 = x/5;
        mod = x%5; 

        step4 = mod/4;
        mod = mod%4; 

        step3 = mod/3;
        mod = mod%3;

        step2 = mod/2;
        mod = mod%2;

        step1 = mod/1;
    }

    total_steps = step1 + step2 + step3 + step4 + step5;
    
    printf("%d", total_steps); //will print all the steps to reach the distance 

    return 0;
}
