/*Coded by Pedro Augusto Danna 2019*/
#include <stdio.h>
#define NUM 600851475143

//Function to test to see if the number is prime
int is_prime(int x)
{
    //This variable store the amount of dividers of a number
    int ndiv = {0};

    //Loop to check how many dividers a number has
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            ndiv++;
        }
    }

    return ndiv == 1;
}

//Function to find the largest prime factor of a number
int find_prime()
{
    int ans = {0};

    //Creating a variable big enough to store 'NUM'
    unsigned long long int temp = NUM;

    //Starting the prime factorization in 3
    int i = 3;

    //Loop to factorize 'NUM'
    while (1)
    {
        //Condition to stop the loop
        if (temp / i == 0)
        {
            break;
        }

        //Condition to factoring
        if (is_prime(i) && temp % i == 0)
        {
            temp /= i;
            ans = i;
        }

        //Channging the prime factor
        else
        {
            i += 2;
        }
    }

    return ans;
}

int main()
{
    //Variable to store the answer by calling 'find_prime' function
    int ans = find_prime();

    //Output of the problem
    printf("The answer of Problem 3 is: %d\n", ans);
    getchar();
    return 0;
}
/*Coded by Pedro Augusto Danna 2019*/