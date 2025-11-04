#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int i = s.size() - 1;
    int length = 0;

    // Bỏ khoảng trắng ở cuối
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Đếm độ dài của từ cuối cùng
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }
    return length;
}

int main() {
    string s = "   fly me   to   the moon  ";
    cout << lengthOfLastWord(s);  // Output: 4
}
