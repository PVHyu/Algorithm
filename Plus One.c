#include <stdio.h>
#include <stdlib.h>


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for(int i = digitsSize - 1; i >= 0; --i) {
        if(digits[i] < 9) {
            digits[i]++; 
            *returnSize = digitsSize;
            return digits; 
        }
        digits[i] = 0;
    }

    int* result = (int*)calloc((digitsSize + 1), sizeof(int));
    result[0] = 1;
    *returnSize =  digitsSize + 1;
    return result; 
}

int main() {
    int digits[] = {9, 9, 9};
    int digitsSize = sizeof(digits) / sizeof(digits[0]);
    int returnSize;

    int* result = plusOne(digits, digitsSize, &returnSize);

    printf("Result: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    if (returnSize > digitsSize)
        free(result);

    return 0;
}
