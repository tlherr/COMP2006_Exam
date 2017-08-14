/**
 * Name: Thomas Herr
 * Student Number: 200325519
 * OS: OSX 10.11.6
 * IDE: CLion 2017.1.1
 */

#include <iostream>

using namespace std;

/**
 * Render menu and get user input, if valid input return the result
 * @return int option selected
 */
int getInput() {
    cout << "Your Options" << endl;
    cout << "1. Add an Account" << endl;
    cout << "2. Add a Room" << endl;
    cout << "3. Switch to Metric" << endl;
    cout << "4. Print Account Summary" << endl;
    cout << "5. Exit" << endl;

    int userSelection;
    cout << "Indicate your selection:";
    cin >> userSelection;

    //Error check the user input to ensure it is both an integer and within range (2 marks)
    if(!cin.fail()) {
        if(userSelection<=5 && userSelection >=1) {
            return userSelection;
        } else {
            cout << "Please only enter a number between 1 and 5" << endl;
        }
    } else {
        cout << "Invalid Selection" << endl;
    }

    return 0;
}





int main() {
    //Hardcode your first name, last name, and student number into 3 strings. (1 Mark)
    string firstName = "Thomas";
    string lastName = "Herr";
    string studentNumber = "200325519";

    //Concatenate your first + last + (ID) to display on the output as seen in the sample (1 Mark)
    cout << "Implemented by: " << firstName << " " << lastName << "(" << studentNumber << ")" << endl;

    int userInput = 0;

    //Loop continuously as per the below example to allow the user to make a selection (1 Mark)
    for(;;) {
        userInput = getInput();
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(userInput!=0) {
            break;
        }
    }


    //Use a switch statement to determine the user input (1 mark)
    switch(userInput) {
        case 1:
            //Add an Account
            break;
        case 2:
            //Add a Room
            break;
        case 3:
            //Switch to Metric
            break;
        case 4:
            //Print Account Summary
            break;
        default:break;
    }




    return 0;
}