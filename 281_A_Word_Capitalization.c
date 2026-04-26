/*
============================================================================
 Name        : 281_A_Word_Capitalization.c
 Author      : S. M. shakiful Alam
 language    : C
 modified    : 2024-06-01
 link        : https://codeforces.com/problemset/problem/281/A

*/  

#include<stdio.h>
#include <ctype.h> //to use the function toupper()
#include<string.h>


//To chreak is all the inputs are character
int cheaking_character(char *S, int length)
{
    int i=0;

    while (S[i]!='\0')
    {
        if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z'))
        {
            
        }else{
            return 0; // Return 0 if we find a number or symbol 
        }
        
        i++;
    }

    return 1;
    
    
    
}

int main()
{
    char str[1000];
    int n, i=0;

    scanf("%s", str); //taking input of string without space


    n = strlen(str); //finding the length of input


    if (cheaking_character(str, n)) //function calling and if all the inputs are true then the code will exicute
    {
        str[0] = toupper(str[0]);
        printf("%s", str);
    }else{
        printf("Enter on;y character");
    }
    
    
    return 0;   
}