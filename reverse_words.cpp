#include <iostream>
#include <string>
using namespace std;

void reverseWord(string& word) {
    int start = 0;
    int end = word.length() - 1;
    
    while (start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(string& str) {
    string word = "";
    string result = "";

    for (int i = 0; i <= str.size(); i++) {
        if (i == str.size() || str[i] == ' ') {
            reverseWord(word);
            result += word + " ";
            word = "";
        } else {
            word += str[i];
        }
    }
    str = result;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    reverseWords(input);

    cout << "String with reversed words: " << input << endl;
    return 0;
}
