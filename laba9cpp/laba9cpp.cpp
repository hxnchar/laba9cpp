#include <iostream>
#include <cstring>
#include <string>
#include "Header.h"

using namespace std;


string getString();
string sortString(string);
void output(string);

int main()
{
    string myStr;

    myStr = getString();
    output(sortString(myStr));

    system("pause");
}

string getString() {
    string myStr;
    cout << "Input your string!\n";
    getline(cin, myStr);
    return myStr;
}

string sortString(string myStr) {
    for (int i = 0; i < myStr.length(); i++) {
        for (int j = 1; j < myStr.length() - i; j++) {
            if (myStr[j - 1] > myStr[j]) {
                swap(myStr[j - 1], myStr[j]);
            }
        }
    }
    return myStr;
}

void output(string myStr) {
    int letter = 0;
    int count = 0;
    for (int i = 0; i <= myStr.length(); i++) {
        if (myStr[i] != myStr[letter]) {
            cout << myStr[letter] << ": " << count << endl;
            letter = i;
            count = 0;
        }
        count++;
    }
}