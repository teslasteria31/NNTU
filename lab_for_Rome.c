#include <stdio.h>
#include <math.h>

int main () {
    
    float x, y, u, val1, val2, val3;

    for (x = 0; x <= 1; x = x + 0.6) {
        for (y = 1; y <= 2; y = y + 0.7) {
            
            if ((x + y) <= 2) {
                
                val1 = pow(fabs(cos(x)), y);
                val2 = pow(x + 6, 0.2);
            
            }

            else {
                
                val3 = pow(x, 2) + x * pow(y, 2);
            }
            

            u = fminf(val1, val2); 

            //printf("v1=%f v2=%f v3=%f\n", val1, val2, val3);
            printf("x=%f y=%f f(x, y)=%f\n", x, y, u);

            
        }
    }

    return 0;

}