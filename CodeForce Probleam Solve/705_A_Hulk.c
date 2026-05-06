/*
============================================================================
 Name        : Hulk 
 Author      : S. M. shakiful Alam
 language    : C
 created     : 05-May-2026
 modified    : 05-May-2026
 link        :https://codeforces.com/problemset/problem/705/A
============================================================================
*/  



#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main()
{
    int n; //the number of layer of love and hate.
    scanf("%d", &n);
    
    
    if(1<=n && n<=100)
    {
        if(n>=2)
        {
            for(int i=1; i<=n-1; i++)
            {
                if(i%2 != 0)
                {
                    printf("I hate that ");
                }else{
                    printf("I love that ");
                }
            }
        }
        
        if(n==2)
        {
            printf("I love it");
        }else if(n>2 && n%2==0){
            printf("I love it");
        }else{
            printf("I hate it");
        }
    }
    
    return 0;
}
