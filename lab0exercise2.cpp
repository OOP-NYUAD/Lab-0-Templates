/*Design a software that prints a menu for the user to select which arithmetic operation
to use (‘a’ for addition, ‘s’ for subtraction, ‘m’ for multiplication, and ‘d’ for 
division. The software prompts the user for two numbers and perform the selected 
arithmetic operation. The software should print “Invalid selection” if the user choices 
any other character.

Example snapshot:
    Press ‘a’ for addition
    Press ‘s’ for subtraction
    Press ‘m’ for multiplication
    Press ‘d’ for division
    
    Your selection is: d
    Give me two numbers to divide:
    5 10
    5/10 = 0.5
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    char selection;
    double op1, op2;

    cout << "Select one of the following options\n";
    cout << "\tPress ‘a’ for addition\n";
    cout << "\tPress ‘s’ for subtraction\n";
    cout << "\tPress ‘m’ for multiplication\n";
    cout << "\tPress ‘d’ for division\n";

    cin >> selection;

    
    switch (/*Fill in the variable for selection*/){
    case 'a': case 'A':
       // Prompt the user for the two operands op1 and op2
       // Save the operands into variables op1 and op2

       // Print the output for the addition operation
        break;
    // write the case for the substraction
       // Prompt the user for the two operands op1 and op2
       // Save the operands into variables op1 and op2

       // Print the output for the addition operation
    // Finish the case
   // write the case for the multiplication
       // Prompt the user for the two operands op1 and op2
       // Save the operands into variables op1 and op2

       // Print the output for the addition operation
    // Finish the case
    // write the case for the division
       // Prompt the user for the two operands op1 and op2
       // Save the operands into variables op1 and op2

       // Print the output for the addition operation
    // Finish the case
    //Write the default case
        //Inform the user that they have printed an invalid option
        //break the case
    }

    return 0;
}
