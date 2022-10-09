#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    int i;
    int maximum=0;

    for(i=0;i<size;i++){
        if(numbers[i]>=maximum)
        maximum=numbers[i];
    }

    return maximum;
}
