#include "txtlib.cpp"


int main() {
    string stateDecide;
    int menuChoice;
    bool progRun = true;

    cout << "Ahlan ya user ya habibi, Welcome to your favorite Text Editor . \n";
    getName();

    while (true) {
        if (!progRun) {
            break;
        }
        cout << "\nChoose what you want to apply : \n"
                "1. Add new text to the end of the file \n"
                "2. Display the content of the file \n"
                "3. Empty the file \n"
                "4. Encrypt the file content \n"
                "5. Decrypt the file content \n"
                "6. Merge another file \n"
                "7. Count the number of words in the file \n"
                "8. Count the number of characters in the file \n"
                "9. Count the number of lines in the file \n"
                "10. Search for a word in the file \n"
                "11. Count the number of times a word exists in the file \n"
                "12. Turn the file content to upper case \n"
                "13. Turn the file content to lower case \n"
                "14. Turn file content to 1st caps (1st character of each word is capital) \n"
                "15. Save \n"
                "16. Exit \n"
                "\n>>";

        cin >> menuChoice;
        switch (menuChoice) {
            case 1:
                addTxt();
                break;
            case 2:
                displayContent();
                break;
            case 3:
                emptyFile();
                break;
            case 4:
                encryptFile();
                break;
            case 5 :
                decryptFile();
                break;
            case 6:
                mergeFile();
                break;
            case 7:
                cntWords();
                break;
            case 8:
                cntChar();
                break;
            case 9:
                cntLines();
                break;
            case 10:
                searchWord();
                break;
            case 11:
                cntExistence();
                break;
            case 12:
                upperCase();
                break;
            case 13 :
                lowerCase();
                break;
            case 14 :
                firstCaps();
                break;
            case 15 :
                save();
                break;

            case 16:
                progRun = false;
                break ;
            default:
                cout << "Enter a valid choice or 16 to exit\n";
                break;
        }
    }
    return 0;
}
