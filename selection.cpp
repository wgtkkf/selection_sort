#include "selection.h"
#include <iostream>
using namespace std;

// constructor
cselection::cselection()
{
    cout << "cselection object generation:\n" << endl;
}

// destructor
cselection::~cselection()
{
    cout << "cselection object destruction:" << endl;
}

// display
void cselection::show(int *num)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(i<size-1)
        {
            printf("%d ", *num);
            num++;
        }else if(i==size-1)
        {
            printf("%d end\n\n", *num);
        }
    }
}

// exchange
void cselection::swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

// selection sort
void cselection::ssort(int *num)
{
    int i, j;
    int min_index;

    for(i=0;i<size;i++) // i: 0 to size-1
    {
        min_index = i; // assume index i is the minimum

        for(j=i+1;j<size;j++) // j: i+1 to size-1
        {
            if(num[j] < num[min_index])
            {
                min_index = j;
            }
        }
        swap(&num[min_index], &num[i]);
    }
}