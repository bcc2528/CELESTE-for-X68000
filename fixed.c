#include"fixed.h"

fixed_t FixedMul(fixed_t a,fixed_t b)
{
    return ((long long) a * (long long) b) >> 16;
}

fixed_t FixedDiv(fixed_t a,fixed_t b)
{
    long long c;
    c = ((long long)a<<16) / ((long long)b);
    return (fixed_t) c;
}