#include <stdio.h>
#include <math.h>

main () {
    
    float x, a, z, val1, val2, val3;

    for (x = 1; x <= 3; x = x + 1.3) {
        for (a = 2; a <= 4; a = a + 1.3) {
            
            val1 = sqrt((a - x) / x);
            val2 = cos(pow(a, 2) / x);
            val3 = 1/tan((x * pow(a, (1/3))) / a + 2.5);

            z = fmaxf(val1, fmaxf(val2, val3));

            //printf("v1=%f v2=%f v3=%f\n", val1, val2, val3);
            printf("x=%f y=%f f(x, y)=%f\n", x, a, z);

            
        }
    }

    return 0;

}