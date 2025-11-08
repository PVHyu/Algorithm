#include <stdio.h>

int mySqrt(int x) {
    if (x < 2)
        return x;

    long left = 1, right = x / 2, ans = 0;
    while (left <= right) {
        long mid = left + (right - left) / 2;
        long sq = mid * mid;

        if (sq == x)
            return mid;
        else if (sq < x) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Can bac hai (phan nguyen) cua %d la: %d\n", x, mySqrt(x));
    return 0;
}
