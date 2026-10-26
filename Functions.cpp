#include <iostream>
#include <vector> 
#include <string>
#include <cctype>
using namespace std;

string wordsList;

string lowercaser(string y) {
    for (auto& x : y) {
        x = tolower(x);
    }
    return y;
}

int GetWordFrequency(vector<string> wordsList, string currWord) {
    int frequency = 0;

    currWord = lowercaser(currWord);

    for (string word : wordsList) {
        if (lowercaser(word) == currWord) {
            frequency++;
        }
    }

    return frequency;
}

int main() {
    int numWords;    
    cout << "Type number of words, then sentance: " << endl;
    cin >> numWords;

    vector<string> wordsList(numWords);

    for(int i = 0; i < numWords; i++) {
        cin >> wordsList[i];
    }

    for (int i = 0; i < numWords; i++) {
        int wordcounter = GetWordFrequency(wordsList, wordsList[i]);
        cout << wordsList[i] << " " << wordcounter << endl;
    }


   return 0;
}