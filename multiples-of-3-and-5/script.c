#include <stdio.h>

int main()
{
    
    int max = 9;
    int current = 0;
    int total = 0;
    
    while (current < max) {
        current++;
        if ( current % 3 != 0 && current % 5 != 0  ) continue;
        printf("%d\n", current);
        total += current;      
    }
    
    printf("Max: %d Sum Total: %d\n", max, total);
}
