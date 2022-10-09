#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    assert(size>0); //precondition: size of array must be larger than 0.
    int i;//counter variable counting up to position of last number in array.
    int maximum=numbers[0];//variable holds maximum number of array, starting with first value of array.
    for(i=0;i<size;i++) //loop runs until last number of array.
    {
        if(numbers[i]>=maximum)//checks if number of array is larger than maximum.
        maximum=numbers[i];//if number if "i" position of the array is larger than maximum, maximum is redefined
    }
    return maximum; //postcondition: maximum integer number of array is returned.
}
