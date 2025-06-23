#include <iostream>
#include <string>
using namespace std;

// B�i 1: �?m k? t? in hoa
int countUppercase(string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

// B�i 2: Ki?m tra chu?i �?i x?ng
bool isPalindromeString(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

// B�i 3: �?o ng�?c chu?i
string reverseString(string s) {
    for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return s;
}

// B�i 4: �?m s? t?
int countWords(string s) {
    int count = 0;
    bool inWord = false; // C? �? ki?m tra �ang trong t?
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ' && !inWord) {
            count++; // B?t �?u t? m?i
            inWord = true;
        } else if (s[i] == ' ') {
            inWord = false; // K?t th�c t?
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
    
    // B�i 1
    int kq = countUppercase(s);
    cout << "So ki tu in hoa la: " << kq << endl;
    
    // B�i 2
    bool rs = isPalindromeString(s);
    if (rs) {
        cout << "Ki tu doi xung" << endl;
    } else {
        cout << "Ki tu khong doi xung" << endl;
    }
    
    // B�i 3
    string kq1 = reverseString(s);
    cout << "Day ki tu dao nguoc la: " << kq1 << endl;
    
    // B�i 4
    int kq2 = countWords(s);
    cout << "So tu: " << kq2 << endl;
    
    return 0;
}
