/*
============================================================================
 Name        : 1templet.c
 Author      : S. M. shakiful Alam
 language    : C
 modified    : 28-April-2026
 link        : https://codeforces.com/problemset/problem/791/A

*/  

#include<stdio.h>

//is_take_able_number is a function to cheak is 1<=a<=b<=10
int is_take_able_number(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b); //taking input of the weight of Bear adn Limak

    int passing_years = 0; //initially i am taking passing_years = 0



    //we can write it like int n = is_take_able_number(a, b);     if(n==1)
    if(is_take_able_number(a, b)) //Here if 1<=a && a<=b && b<=10 true means the function 1 then if will exicute
    {
        while (a<=b)
        {
            a = a*3;
            b = b*2;
            passing_years++;
        }   
    }

    printf("%d", passing_years);

    return 0;   
}


int is_take_able_number(int a, int b)
{
    if(1<=a && a<=b && b<=10)
    {
        return 1;
    }else
    {
        printf("Enter a number from 1-10");
        return 0;
    }
}