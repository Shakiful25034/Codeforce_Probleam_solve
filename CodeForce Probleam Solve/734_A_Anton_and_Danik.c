/*
============================================================================
 Name        : Anton_and_Danik
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-May-2026
 modified    : 03-May-2026
 link        : https://codeforces.com/problemset/problem/734/A
============================================================================
*/  


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>



int main()
{
    int n; //store the number of time they are going to play
    scanf("%d", &n); 
    
    char S[n]; //to store the string of how much time who wins 
    
    if(1<=n && n<= 100000) //if the total number of games is in 1<=n<=1,00,000 then the string will take input
    {
        scanf("%s", S);
    }else
    {
        printf("Invalid input of number of games. please input a number from 1 to 1,00,000");
        return 0;
    }
    
    int j=0; 
    while( S[j] != '\0') //to make the strings all index uppercase.. we can do that using strupr(S)
    {
        S[j] = toupper(S[j]);
        j++;
    }
    
    int count_A=0, count_D=0; //initializing the total numbers of wining of Anton and Danik is zero
    
    for(int i=0; i<n; i++)
    {
        if(S[i] == 'A')
        {
             count_A++;   
        }else if(S[i] == 'D')
        {
            count_D++;
        }
    }
    
    
    if(count_A > count_D)
    {
        printf("Anton");
    }else if(count_A < count_D){
        printf("Danik");
    }else{
        printf("Friendship");
    }
    
    
    return 0;
}
