#include <stdio.h>
#include <math.h>

int main(){
        long long int min = (long long int) (pow(2,63)-1);
        long long int max = (long long int)(pow(2,63)* -1);
        printf("Highest signed 64-bit number is %lld.\n",max);
        printf("Lowest signed 64-bit number is %lld.\n",min);
        return 0; 
}
