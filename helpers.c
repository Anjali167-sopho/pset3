/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int i,c=0;
    if(n<0)
    {
        return false;
    }
    else
    {
        for (i=0;i<n;i++)
        {
            if(values[i]==value)
            {
                c=1;
            }
        }
        if(c==1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    return ;
}