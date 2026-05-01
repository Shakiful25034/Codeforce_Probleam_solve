/*
============================================================================
 Name        : Stones on the Table
 Author      : S. M. shakiful Alam
 language    : C
 created     : 01-May-2026
 modified    : 01-May-2026
 link        : https://codeforces.com/problemset/problem/266/A
============================================================================
*/  

#include<stdio.h>
#include <ctype.h> //to use the function toupper()
#include<string.h>

//creating a function to cheak is the input is a digit and the input stays between 1-50
int is_correct_digit(int n)
{
    if (n>=1 && n<=50)
    {
        return 1;
    }else{
        printf("Please Enter the number of stone from 1<=n<=50");
        return 0;
    }
    
}


//creating a function to cheak is the input is a Proper string and the inputs character's are only R, B, G
int is_correct_string(char *str, int n)
{
    int j=0;

    while (str[j] != '\0')
    {
        if (str[j]=='R' || str[j]=='B' ||str[j]=='G')
        {
            j++;
            continue;
        }else
        {
            printf("The color of the stone's are only 'R', 'G");
            return 0;
        }
    }

    return 1;
    
}    
  

int main()
{
    int n;  //to store the number of stones
    char S[100]; //to store the input string
    char temp[100];

    scanf("%d", &n); //taking the input of "the nimber of stones"


    //cheaking if the number of stone's is interger and it is from 1<=n<=50
    if (is_correct_digit(n))
    {
        scanf("%s", S); //taking input of "Color of the stones like - RRB, RRRG etc..."
    }


    int count = 0; 

    //if the string is a proper string then the for loop is exicute because the function will reaturn 1 which means true
    if (is_correct_string(S, n))
    {
        for (int i = 0; i < n-1; i++)
        {
            if (S[i] == S[i+1]) //// পাশাপাশি দুটো stone একই রঙের হলে একটা সরাতে হবে
            {
                count++; 
            }
            
        }
        
    }
    
    printf("%d", count); //how manny stones we have to move....
    

    return 0;
}