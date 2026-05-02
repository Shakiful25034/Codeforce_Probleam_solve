/*
============================================================================
 Name        : Word
 Author      : S. M. shakiful Alam
 language    : C
 created     : 02-May-2026
 modified    : 02-May-2026
 link        : https://codeforces.com/problemset/problem/977/A
============================================================================
*/  

#include<stdio.h>
#include <ctype.h> //to use the function toupper()
#include<string.h> //to use string function in c 
#include<math.h> //to use pow function in c



int main()
{
    int n, k; //k= how much time tania will substract ot divide the number 

    scanf("%d %d", &n, &k);

    if (2<=n && n<=pow(10, 9) && 1<=k && k<=50) //if the numbers are belongs to 2<=n<=10^9  and  1<=k<=50
    {
        for (int i = 0; i < k; i++)  //we have to exicute a loop where we will substract or divide the number "k" times 
        {
            if (n%10==0) //if the mod of the number is zero means if the last digit of the number is zero then we will divide the number with 10
            {
                n = n/10;
            }else //if the last digit of the number of the last digit of the number is not zero then substract -1 
            {
                n = n-1;
            }   
        }
        
    }else
    {
        printf("Enter a proper number where 2<=n<=10^9  and 1<=k<=50");
    }


    printf("%d", n);
    
    


    return 0;
}