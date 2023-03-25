#include <bits/stdc++.h>
#include <fstream>
#include <cctype>

using namespace std;

char fileName[81] ,secondName[81] ,line[100];
vector<string> text;




// Get name of the file from the user.
void getName();

//Adding text at the end of the given file.
void addTxt();

// Display the given file content.
void displayContent();

//Clears given file content
void emptyFile();

// Encrypt the data of the given  file.
void encryptFile();

// Decrypt the data of the given file.
void decryptFile();

// Merge the data of the two given files.
void mergeFile();

// Count words in the given file.
void cntWords();

// Count characters in the given file.
void cntChar();

// Count lines in the given file.
void cntLines();

//Search for a specific word in the given file.
void searchWord();

//Count the number of times a word exists in the given file.
void cntExistence();

//Turn the content to upper case
void upperCase();

//Turn the content to lower case
void lowerCase();

//Turn file content to first caps
void firstCaps();

//Save Program
void save();

