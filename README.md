# **TextEditorApplication**

This project is a simple text editor program that allows users to perform different operations on a text file. The program is implemented using structured programming and divided into functions. It is also designed using separate compilation and divided into header file, cpp library file, and main cpp program file.

## **Installation**

To use the TextEditorApplication, simply download or clone the project from the GitHub repository and include the txtheader.h header file in your C++ code.

## **Functionalities**

The program provides the following functionalities on the given file:

  1- Add new text to the end of the file

  2- Display the content of the file

  3- Empty the file

  4- Encrypt the file content

  5- Decrypt the file content

  6- Merge another file

  7- Count the number of words in the file

  8- Count the number of characters in the file

  9- Count the number of lines in the file

  10- Search for a word in the file

  11- Count the number of times a word exists in the file

  12- Turn the file content to upper case

  13- Turn the file content to lower case

  14- Turn file content to 1st caps (1st character of each word is capital)

  15- Save the changes made to the file

  16- Exit the program
  
  ### **Adding text to the file**
  
The user can add new text to the end of the file by choosing option 1 from the menu. The program opens the file in append mode, allowing the user to type in text until they press EOF character (Ctrl+z), which ends the writing and returns the user to the menu.

  ### **Displaying file content**
To display the content of the file, the user can choose option 2 from the menu. The program will display the current file content to the user and return them to the menu.

  ### **Emptying the file**
To empty the file, the user can choose option 3 from the menu. The program will clear the file and erase its content, returning to the main menu.

  ### **Encrypting and Decrypting file content**
Option 4 is used to encrypt the file content by re-writing the file content, shifted one ASCII character. Each character is replaced by the character following it in the ASCII table.

Option 5 is used to decrypt the file content by re-writing the original content from the encrypted file.

Merging another file
Option 6 allows the user to merge another file. The program will take the name of another file from the user. If this file does not exist, it will display a message "Invalid File Name." If the file exists, the program will add the given file to the end of the current file and return to the main menu.

  ### **Counting the number of words, characters and lines**
Option 7 is used to count the number of words in the file. A word is any sequence of characters not separated by white spaces (space, tab, new line, etc.).

Option 8 is used to count the number of characters in the file.

Option 9 is used to count the number of lines in the file.

  ### **Searching for a word**
Option 10 allows the user to search for a word in the file. The program will take a word from the user and print either "Word was not found in the file 🙁" or "Word was found in the file 🙂". The search is case-insensitive.

  ### **Counting the number of times a word exists in the file**
Option 11 is used to count the number of times a word exists in the file. The program will take a word from the user and print the number of times the word exists in the file as a separate word. The search is case-insensitive.

  ### **Changing the case of the file content**
Option 12, 13, and 14 are used to change the case of the file content. Option 12 turns the file content to uppercase, option 13 turns
