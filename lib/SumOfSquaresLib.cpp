#define LIB_EXPORT
#include "SumOfSquaresLib.h"

int SumOfSquaresFunc(int count)
{
    int sum=0;
    for (int i = 1; i<=count ; ++i ) {
        sum+=i*i;
    }
    return sum;
}