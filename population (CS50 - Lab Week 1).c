#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size;
    int ss = get_int("What is the start size llamas?\n");
    if(ss >= 9)
    {
        printf("Start size stored: %i llamas.\n", ss);
    }
    else
    {
        do
        {
            ss = get_int("Please, choose a start size bigger than or equal to nine!\n");
        }
        while(ss < 9);
            printf("Start size stored: %i llamas.\n", ss);
    }
    // TODO: Prompt for end size
    int es = get_int("What is the desired size of llamas?\n");
    if(es > ss)
    {
        printf("Desired value: %i llamas.\n", es);
    }
    else
    {
        do
        {
            es = get_int("Please, choose an end size larger than the start size.\n");
        }
        while (es <= ss);
            printf("Desired value: %i llamas.\n", es);
    }
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    do
    {
        ss = ss + (ss / 3) - (ss / 4);
        years = years + 1; //or years++
    }
    while (ss < es);
    // TODO: Print number of years
        printf("You are going to have %i llamas in %i years.\n", es, years);
}