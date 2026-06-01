#include <iostream>
using namespace std;

string reverseString(string word);

int main()
{
    string word;

    cout << "Enter word: ";
    cin >> word;

    int size = word.length();
    cout << "Length: " << size << endl;

    string reverseWord = reverseString(word);

    cout << "Reversed word: " << reverseWord << endl;

    return 0;
}

string reverseString(string word)
{
    int size = word.length();
    string reverseWord(size, ' ');

    for (int i = 0; i < size; i++)
    {
        reverseWord[i] = word[size - 1 - i];
    }

    return reverseWord;
}