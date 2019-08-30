/*Coded by Pedro Augusto Danna 2019*/
#include <stdio.h>

//Function to test if a number is multiple of 3 or 5
int isMultiple(int x)
{
    if (x % 3 == 0 || x % 5 == 0)
    {
        return 1;
    }

    return 0;
}

int main()
{
    //Variable declarations 'ans' and 'i'
    int ans = {0}, i = {1};

    //Loop to indentify the multiples of 3 and 5 below 1000
    while (i < 1000)
    {
        if (isMultiple(i))
        {
            ans += i;
        }
        i++;
    }

    //Output of the problem
    printf("The answer of Problem 1 is: %d", ans);
    return 0;
}
/*Coded by Pedro Augusto Danna 2019*/