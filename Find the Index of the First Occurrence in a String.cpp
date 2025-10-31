#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    size_t pos = haystack.find(needle);
    if (pos != string::npos)
        return pos;    // vị trí tìm thấy
    return -1;         // không tìm thấy
}

int main() {
    string haystack = "hello";
    string needle = "ll";
    cout << strStr(haystack, needle); // Output: 2
    return 0;
}