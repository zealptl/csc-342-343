#include <stdio.h>

int factorial(int N)
{
if(N==1)
return 1;
return(N*factorial(N-1));

}

int main()
{
    int N_fact=factorial(5);
}