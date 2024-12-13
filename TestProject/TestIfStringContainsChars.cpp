// this program prints false if input does not contain all the letters in alpha
// and true if it does contain all the letters in alpha
// also outputs the letters that are not in input and in alpha

#include <iostream>
using namespace std;

int main()
{
    // string that contains needed chars
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    // string to check
    string input = "ABCd efgh ijklmn pQRSTuv WxYz";

    int i = 0;
    
    for (int i = 0; i < input.length(); i++) {
        int j = alpha.length();
        int index = 0;
        while (index < j) {
            if (tolower(input[i]) == alpha[index]) {
                alpha.erase(index, 1);
                index = j;
            }
            else {
                index++;
            }
        }
    }

    cout << alpha << endl;
    if (alpha.length() == 0) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }



}

