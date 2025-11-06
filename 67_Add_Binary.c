#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int lenA = strlen(a), lenB = strlen(b);
    int maxLen = (lenA > lenB ? lenA : lenB);
    char* result = (char*)calloc(maxLen + 2, sizeof(char));

    int i = lenA - 1, j = lenB - 1;
    int carry = 0, pos = maxLen + 1; 
    result[pos] = '\0'; // kết thúc chuỗi

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result[--pos] = (sum % 2) + '0';
        carry = sum / 2;
    }

    return result + pos; // trỏ đến phần đầu thực sự của kết quả
}

int main() {
    char a[] = "1010";
    char b[] = "1011";

    char* sum = addBinary(a, b);
    printf("Sum = %s\n", sum);

    // Không cần free(sum) trực tiếp vì trỏ lệch, chỉ free gốc:
    free(sum - (strlen(a) > strlen(b) ? strlen(a) : strlen(b)) - 2);
    return 0;
}
