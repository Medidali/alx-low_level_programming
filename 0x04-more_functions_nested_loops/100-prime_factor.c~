#include "main.h"

long long largestPrimeFactor(long long number) {
    long long largestFactor = 2;

    // While the number is divisible by 2, divide it by 2
    while (number % 2 == 0) {
        number /= 2;
    }

    // Start checking prime factors from 3 onwards
    long long factor = 3;

    // Continue looping until the factor exceeds the square root of the number
    while (factor * factor <= number) {
        // Check if the number is divisible by the current factor
        if (number % factor == 0) {
            // If it is, divide the number by the factor
            number /= factor;
            // Update the largest prime factor
            largestFactor = factor;
        } 
              factor += 2;
        
    }

  
    return largestFactor;}

int main() {
    long long number = 612852475143;
    long long result = largestPrimeFactor(number);
    printf("The largest prime factor of %lld is: %lld\n", number, result);

    return 0;
}


