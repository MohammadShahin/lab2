#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    int myint = INT_MAX;
    float fl = FLT_MAX;
    double db = DBL_MAX;
    printf("%d\n%f\n%lf\n", myint, fl, db);
    return 0;
}
