/*
============================================================================
 Name        : Vanya and Fence
 Author      : S. M. shakiful Alam
 language    : C
 created     : 03-May-2026
 modified    : 03-May-2026
 link        : https://codeforces.com/problemset/problem/677/A
============================================================================
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(void)
{
    int n;  //To store "the number of friends" 
    int h;  //To store "the height of fench(bera)"
    scanf("%d", &n);
    scanf("%d", &h);


    int height_of_friends[n]; //to store "the individual height of all friends"

    if (1<=n && n<=1000 && 1<=h && h<=1000)
    {
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &height_of_friends[i]);  //taking input of the hoght of all friends
        }
        
    }

    int width_of_road = 0; //initializing "the width of road to pass all the friends in a row" is zero 

    for (int i = 0; i < n; i++)
    {
        if (height_of_friends[i] < h) //"height_of_friends[i] < h" then the friends his width will be 1; (h = height of fence(bera))
        {
            width_of_road++;
        }else if (height_of_friends[i] == h) //"height_of_friends[i] == h" then the friends his width will be 1; (h = height of fence(bera))
        {
            width_of_road++;
        }else //"height_of_friends[i] > h" then the friend have to bend and his width will be 2
        {
            width_of_road+=2;
        }
        
    }

    printf("%d", width_of_road); //printing the width of row to pass all the friends in a row
    
    
    return 0;
}
