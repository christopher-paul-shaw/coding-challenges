#include <stdio.h>

int main()
{
    
    int max = 1000;
    int current = 1;
    int total = 0;
    
    while (current < max) {
        if ( current % 3 == 0 || current % 5 == 0  ) {
               total += current;
        }
        current++;
    }
    printf("Max: %d Sum Total: %d\n", max, total);
}
