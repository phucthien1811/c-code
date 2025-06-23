#include <iostream>
#include <string>
using namespace std;

// Bài 1: Ð?m k? t? in hoa
int countUppercase(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

// Bài 2: Ki?m tra chu?i ð?i x?ng
bool isPalindromeString(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Bài 3: Ð?o ngý?c chu?i
string reverseString(string s) {
    for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}

// Bài 4: Ð?m s? t?
int countWords(string s) {
    int count = 0;
    bool inWord = false; // C? ð? ki?m tra ðang trong t?
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && !inWord) {
            count++; // B?t ð?u t? m?i
            inWord = true;
        } else if (s[i] == ' ') {
            inWord = false; // K?t thúc t?
        }
    }
    return count;
}

int main() {
    string s;
    cout << "Nhap vao chuoi muon nhap: ";
    getline(cin, s);
    cout << "Chuoi da nhap la: " << s << endl;
    cout << "Do dai la: " << s.length() << endl;
    
    // Bài 1
    int kq = countUppercase(s);
    cout << "So ki tu in hoa la: " << kq << endl;
    
    // Bài 2
    bool rs = isPalindromeString(s);
    if (rs) {
        cout << "Ki tu doi xung" << endl;
    } else {
        cout << "Ki tu khong doi xung" << endl;
    }
    
    // Bài 3
    string kq1 = reverseString(s);
    cout << "Day ki tu dao nguoc la: " << kq1 << endl;
    
    // Bài 4
    int kq2 = countWords(s);
    cout << "So tu: " << kq2 << endl;
    
    return 0;
}
