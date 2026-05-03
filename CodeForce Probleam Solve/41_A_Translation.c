/*
============================================================================
 Name        : Translation
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-May-2026
 modified    : 03-May-2026
 link        : https://codeforces.com/problemset/problem/41/A
============================================================================
*/  


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>



int main()
{
    char S[101];  //to store the 1st string of the question. As the question is given not they don't exceed more than 100 symbol means we have to take 101 range in string
    scanf("%s", S);
    int n = strlen(S); //finding the length of the 1st string of the question as the lengof the 2nd string of the question is equal to 1st string
    
    
    char t[101]; //to store the 2nd string of the question 
    scanf("%s", t);
    
    
    //here we use for loop to find the reverse string of "S" string 
    char rev[101]; //to store the reverse string of the 1st string 
    for(int i=0, j=n-1; i<n; i++, j--) //without using for loop we can solve the question using "strrev" function in windows as it is only windows function 
    {
        rev[j] = S[i];
    }
    
    rev[n] = '\0';  
    
    
    //If part will compare "rev" string with "t" string
    if(strcmp(rev,t)) //printf("%d", strcmp(rev,t)); will print 0 as output 
    {
        printf("NO");
    }else{
        printf("YES");
    }
    
    return 0;
}
