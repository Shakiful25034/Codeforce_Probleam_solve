/*
============================================================================
 Name        : Word
 Author      : S. M. shakiful Alam
 language    : C
 created     : 02-May-2026
 modified    : 02-May-2026
 link        : https://codeforces.com/problemset/problem/59/A
============================================================================
*/  

#include<stdio.h>
#include <ctype.h> //to use the function toupper()
#include<string.h>



int main()
{
    char S[100];   //To store the input 
    scanf("%s", S); //To take the string input from the user 

    int n = strlen(S);

    int small=0, capital=0; //initially we are storing the total number of capital and small letters are zero

    for (int i = 0; i < n; i++) //we are using a loop to access all the element of the string 
    {
        if (S[i] >= 'A' && S[i] <= 'Z') //if the index is from A-Z then it will add 1 in the total count of "capital"
        {
            capital++;
        }
        else if (S[i] >= 'a' && S[i] <= 'z') //if the index is from a-z then it will add 1 in the total count of "small"
        {
            small++;
        }
        else  //else it will stop the code 
        {
            printf("Enter a proper string");
            return 0;
        }
        
    }


    if (capital > small) // if the total number of capital word is greater than the small one the we will make the whole string capital using "strupr"
    {
        printf("%s", strupr(S));
    }else if (capital == small) // if the total number of capital word is equal to the total number of small word than it will make the whole string lower using "strlwr"
    {
        printf("%s", strlwr(S));
    }else 
    {
        printf("%s", strlwr(S));
    }


    return 0;
}