/*Write a program that will count the number of characters, words, and 
lines, in a file. Words are separated by spaces, tabs, or carriage 
return characters. The file name should be entered by the user.*/

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]){
    // example of how argc and argv can be used to provide command line arguments
    
    //argc contains the number of arguments (including the program name itself), 
    //and argv is an array of C-strings containing the actual arguments. 
    //The program checks if there is exactly one argument (the filename) and prints it out.

    if(/*The number passed to argv is not equal to two arguments the program name as well as another argument*/argc != 2){
        cout << "<Usage>\n\twc <input file>\n";
        exit(-1);
    }
    ifstream inFile;
   //Use the inFile variable to open the filed passed through the command line inFile.open(argv[1]);

    if(inFile.fail()){
        //Print that the (FILE NAME) was not found
        exit(-1);
    }

    char temp; // temporary character that reads the content of the file
    int chars = 0, words = 0, lines = 0;

    while(/*true condition and the file has not been read fully*/){
        // get a temporary character inFile.get(temp);
        if(/*end of file reached*/) break;

        //increase the number of characters being read 
        if(/*The character read indicates the beginning of a word*/) words++;
        else if(/*The character read indicates the beginning of a line*/){
            //Update the word count 
            // Update the line count 
        }
    }  

    // Display the number of characters in the file 
    // Display the number of words in the file
    // Display the number of lines in the file 
    return 0;
}
