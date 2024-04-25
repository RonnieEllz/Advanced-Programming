#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (char c : str) {
        if (vowels.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& str) {
    string result = str;
    for (size_t i = 0; i < result.length(); i++) {
        if (isalpha(result[i]) && (i == 0 || isspace(result[i - 1]))) {
            result[i + 1] = toupper(result[i + 1]);
        }
    }
    return result;
}

int main() {
    ifstream file("testData.txt");
    if (!file.is_open()) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);
    file.close();

    cout << "Number of vowels: " << countVowels(fileData) << endl;

    cout << "Number of words: " << countWords(fileData) << endl;

    cout << "Reversed statement: " << reverseString(fileData) << endl;

    cout << "Statement with second letter capitalized: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
