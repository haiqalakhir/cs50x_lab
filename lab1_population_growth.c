#include <cs50.h>  //afiq
#include <stdio.h>

int main(void)
{
    
    //start size
    int start;
    do
    {
        start = get_int("start: ");
    }
    while (start < 9);

    //end size
    int end;
    do
    {
        end = get_int("end: ");
    }
    while (end < start);


    //formula = gain n/3, lose n/4
    int years = 0;
    while (start < end)
    {
        int born = start / 3;
        int pass = start / 4;

        start += born;
        start -= pass;

        years++;
    }

    //print
    printf("Years: %i\n", years);
}
