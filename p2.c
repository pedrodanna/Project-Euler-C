/*Coded by Pedro Augusto Danna 2019*/
#include <stdio.h>

//Function that tests if a number is even
int is_even(int x)
{
    return x % 2 == 0;
}

//Function to sum all even number from Fibonacci sequence
int sum_even_fib(int limit)
{
    //Variables declaration
    int second_last = 1, last = 2, temp, ans = {2};

    //Loop to generate Fibonacci seqeunce
    while (temp < limit)
    {
        //Creating next number in Fibonacci sequence
        temp = last + second_last;

        //Testing if this new number is even
        if (is_even(temp))
        {
            ans += temp;
        }

        //Moving sequence foward
        second_last = last;
        last = temp;
    }

    //Returning the value of the problem answer
    return ans;
}

int main()
{
    //Generating the answer calling 'sum_even-fib' function
    int ans = sum_even_fib(4000000);

    //Output of the problem
    printf("The answer of Problem 2 is: %d\n", ans);
    getchar();
    return 0;
}
/*Coded by Pedro Augusto Danna 2019*/