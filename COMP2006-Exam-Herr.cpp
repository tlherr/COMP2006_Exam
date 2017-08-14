/**
 * Name: Thomas Herr
 * Student Number: 200325519
 * OS: OSX 10.11.6
 * IDE: CLion 2017.1.1
 */

#include <iostream>
#include <map>
#include <vector>


using namespace std;

class room;
class account;

int idCounter = 1;
//Using dynamic memory (your choice) to expand the number of rooms/accounts (4 marks)
vector<account> accounts;
map<int, room> rooms;

//Create a strut/class (or similar mechanism of your choice) for the room fn (case 2)      (2 marks)
class room {
    private:
        int length;
        int width;
        int height;
        int colour;

    public:
        int getLength() const {
            return length;
        }

        void setLength(int length) {
            room::length = length;
        }

        int getWidth() const {
            return width;
        }

        void setWidth(int width) {
            room::width = width;
        }

        int getHeight() const {
            return height;
        }

        void setHeight(int height) {
            room::height = height;
        }

        int getColour() const {
            return colour;
        }

        void setColour(int colour) {
            room::colour = colour;
        }
};

//-	Create a class for Account Info that contains the data in the example (case 1) (1 mark)
class account {
    private:
        int id;
        string name;
        string address;
        string phone;

    public:
        account() {
            id = idCounter;
            idCounter++;
        }

    int getId() const {
        return id;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        account::name = name;
    }

    const string &getAddress() const {
        return address;
    }

    void setAddress(const string &address) {
        account::address = address;
    }

    const string &getPhone() const {
        return phone;
    }

    void setPhone(const string &phone) {
        account::phone = phone;
    }
};
/**
 * Generic function that gets a string from the user, checks to make sure it is not empty and a valid string
 * @return string
 */
string getUserInputString() {
    bool isValid = false;
    string inputString;

    while(!isValid) {
        cin >> inputString;

        if(inputString.size()>0 && cin.good()) {
            isValid = true;
        } else {
            cout << "Invalid Input, please try again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return inputString;
}
/**
 * Generic function to get an integer input from the user
 * @return int
 */
int getUserInputInt() {
    bool isValid = false;
    int inputInt;

    while(!isValid) {
        cin >> inputInt;

        if(inputInt>0 && cin.good()) {
            isValid = true;
        } else {
            cout << "Invalid Input, please try again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return inputInt;
}

/**
 * Creates a new account object and populates fields with user input
 * @return account object
 */
account createNewAccount() {
    account newAccount = account();

    cout << "Account number: " << idCounter << endl;
    cout << "Name: ";
    newAccount.setName(getUserInputString());

    cout << "Address: ";
    newAccount.setAddress(getUserInputString());

    cout << "Phone: ";
    newAccount.setPhone(getUserInputString());

    return newAccount;
}

/**
 * Create a new room and associate an account with it
 * @return room object
 */
room createNewRoom() {
    room newRoom = room();

}

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
    cout << "Welcome to Painter Pro!" << endl;

    int userInput = 0;

    //Loop continuously as per the below example to allow the user to make a selection (1 Mark)
    for(;;) {
        userInput = getInput();
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //Use a switch statement to determine the user input (1 mark)
        switch(userInput) {
            case 1:
                //Create an account
                accounts.push_back(createNewAccount());
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
            case 5:
                //Exit
                exit(0);
            default:break;
        }
    }







    return 0;
}