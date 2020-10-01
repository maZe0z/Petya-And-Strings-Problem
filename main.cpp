#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


int main() {

    string str1, str2;
    cin >> str1;
    cin >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), [](unsigned char c){ return std::tolower(c); });
    transform(str2.begin(), str2.end(), str2.begin(), [](unsigned char c){ return std::tolower(c); });
    if (str1==str2){
        cout << "0";
    }
    else if (str1<str2){
        cout << "-1";
    }
    else {
        cout << "1";
    }
    return 0;
}