/**
 * Name: Thomas Herr
 * Student Number: 200325519
 * OS: OSX 10.11.6
 * IDE: CLion 2017.1.1
 *
 * I really hate timed programming exams, just encourages bad/hardcoded garbage code
 */

#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <cmath>


using namespace std;

class room;
class account;

int idCounter = 1;
//Using dynamic memory (your choice) to expand the number of rooms/accounts (4 marks)
vector<account> accounts;
enum displayUnits { ft, m };
displayUnits activeUnit;

double metersToFeet(double meters) {
    return (meters * 3.28084);
}

double feetToMeters(double feet) {
    return (feet * 0.3048);
}

double gallonsPerSqMeter(double sqm) {
    return sqm/37.162;
}

double gallonsPerSqFoot(double sqft) {
    return sqft/400;
}


//Create a strut/class (or similar mechanism of your choice) for the room fn (case 2)      (2 marks)
class room {
    private:
        double length;
        double width;
        double height;
        int colour;
        displayUnits unitType;

    public:
        double getLength() const {
            return length;
        }

        void setLength(double length) {
            room::length = length;
        }

        double getWidth() const {
            return width;
        }

        void setWidth(double width) {
            room::width = width;
        }

        double getHeight() const {
            return height;
        }

        void setHeight(double height) {
            room::height = height;
        }

        int getColour() const {
            return colour;
        }

        void setColour(int colour) {
            room::colour = colour;
        }

    displayUnits getUnitType() const {
        return unitType;
    }

    void setUnitType(displayUnits unitType) {
        room::unitType = unitType;
    }
    /**
     * L*H + L*H + W*H + W*H
     * @return
     */
    double getArea() {
        return (this->getLength() * this->getHeight()) + (this->getLength() * this->getHeight())
                + (this->getWidth() * this->getHeight()) + (this->getWidth() * this->getHeight());
    }

    double getAreaInCurrent(displayUnits current) {
        if(current==this->getUnitType()) {
            //No conversion required
            return this->getArea();
        } else {
            if(current==ft && this->getUnitType()==m) {
                return feetToMeters(this->getArea());
            }

            if(current==m && this->getUnitType()==ft) {
                return metersToFeet(this->getArea());
            }
        }
    }

    void display(displayUnits current) {
        cout << "Working with current units: " << current << endl;
        cout << "  Dimensions LxWxH";

        if(current==this->getUnitType()) {
            //No conversion is required
            if(current==ft) {
                cout << " (ft): ";
            } else if(current==m) {
                cout << " (m): ";
            }

            cout << this->getLength() << " x " << this->getWidth()
                    << " x " << this->getHeight() << endl;

            if(current==ft) {
                cout << "Area (ft2): ";
            } else if(current==m) {
                cout << "Area (m2): ";
            }

            cout << this->getArea() << endl;
        } else {
            //Current units are different than what we have stored, conversion is required

            if(current==ft && this->getUnitType()==m) {
                cout << " (m): " << feetToMeters(this->getLength()) << " x " << feetToMeters(this->getWidth())
                        << " x " << feetToMeters(this->getHeight()) << endl;

                cout << "Area (m2):" << feetToMeters(this->getArea()) << endl;
            }

            if(current==m && this->getUnitType()==ft) {
                cout << " (ft): " << metersToFeet(this->getLength()) << " x " << metersToFeet(this->getWidth())
                     << " x " << metersToFeet(this->getHeight()) << endl;

                cout << "Area (ft2):" << metersToFeet(this->getArea()) << endl;
            }
        }

        cout << "Colour: " << this->getColour();
    }
};

//-	Create a class for Account Info that contains the data in the example (case 1) (1 mark)
class account {
    private:
        int id;
        string name;
        string address;
        string phone;
        vector<room> rooms;

    public:
        account() {
            id = idCounter;
        }

        account(int id) : id(id) {}

        friend bool operator== (account &a1, account &a2) {
            return (a1.id == a2.id);
        };

        friend bool operator!= (account &a1, account &a2) {
            return !(a1 == a2);
        };

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

        const vector<room> &getRooms() const {
            return rooms;
        }

        void addRoom(room toAdd) {
            account::rooms.push_back(toAdd);
        }
};

/**
 * The functionality to change between metric/imperial (case 3) (4 marks)
 * @param unit
 */
void setActiveDisplayUnit(displayUnits unit) {
    activeUnit = unit;
}

displayUnits getActiveDisplayUnit() {
    return activeUnit;
}

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
 * Generic function to get a double from user input
 * @return double
 */
double getUserInputDouble() {
    bool isValid = false;
    double inputDbl;

    while(!isValid) {
        cin >> inputDbl;

        if(inputDbl>0 && cin.good()) {
            isValid = true;
        } else {
            cout << "Invalid Input, please try again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return inputDbl;
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
 * Get an account number from the user, the id must exist for it to be valid
 * @return int id number provided
 */
int getUserInputAccountNumber() {
    bool isValid = false;
    bool isMatch = false;
    int inputInt;

    while(!isValid) {
        cin >> inputInt;

        if(cin.good()) {
            for(int i=0; i<accounts.size(); i++) {
                if(accounts.at((unsigned long) i).getId() == inputInt) {
                    isValid = true;
                    isMatch = true;
                }
            }

            if(!isMatch) {
                cout << "No account with that id was found, please try again" << endl;
            }

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

    idCounter++;

    return newAccount;
}

/**
 * Create a new room and associate an account with it
 * @return room object
 */
room createNewRoom() {
    room newRoom = room();

    newRoom.setUnitType(getActiveDisplayUnit());

    if(activeUnit==ft) {
        cout << "Length (ft):";
        newRoom.setLength(getUserInputDouble());

        cout << "Width (ft):";
        newRoom.setWidth(getUserInputDouble());

        cout << "Height (ft):";
        newRoom.setHeight(getUserInputDouble());
    }


    if(activeUnit==m) {
        cout << "Length (m):";
        newRoom.setLength(getUserInputDouble());

        cout << "Width (m):";
        newRoom.setWidth(getUserInputDouble());

        cout << "Height (m):";
        newRoom.setHeight(getUserInputDouble());
    }

    cout << "Colour:";
    newRoom.setColour(getUserInputInt());

    return newRoom;
}

/**
 * Render menu and get user input, if valid input return the result
 * @return int option selected
 */
int getInput() {
    cout << "Your Options" << endl;
    cout << "1. Add an Account" << endl;
    cout << "2. Add a Room" << endl;

    switch(getActiveDisplayUnit()) {
        case ft:
            cout << "3. Switch to Metric" << endl;
            break;

        case m:
            cout << "3. Switch to Imperial" << endl;
            break;
    }

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

void printSummaries() {
    map<int, double> colourSum;
    int roomCounter = 0;
    int cost = 0;
    //Loop through each account
    for(auto account : accounts) {
        cout << "Room Summary" << endl;
        //Check if the account has any rooms
        for(auto room : account.getRooms()) {
            cout << "Room " << roomCounter << ":" << endl;
            room.display(getActiveDisplayUnit());
            roomCounter++;

            //Check if the colour sum map has our colour defined
            if(colourSum.count(room.getColour())) {
                double &clrptr = colourSum.at(room.getColour());
                clrptr+=room.getAreaInCurrent(getActiveDisplayUnit());
            } else {
                //colour does not exist, insert it
                colourSum.insert(
                        pair<int, double>(room.getColour(), room.getAreaInCurrent(getActiveDisplayUnit())));
            }
        }

        cout << "***********************************" << endl;

        //Print out the colour summary after all room info has been displayed
        for(auto const &ent1 : colourSum) {
            cout << "Colour: " << ent1.first << " Area: " << ent1.second << " Gallons Required: ";

            double gallonsNeeded = 0.0;
            if(getActiveDisplayUnit()==ft) {
                gallonsNeeded = gallonsPerSqFoot(ent1.second);
            } else if(getActiveDisplayUnit()==m) {
                gallonsNeeded = gallonsPerSqMeter(ent1.second);
            }

            cout << gallonsNeeded << " Price: " << ceil(gallonsNeeded) * 36.97;
            cost+= ceil(gallonsNeeded) * 36.97;
            cout << endl;
        }
    }
    cout << "Cost (pre tax): " << cost << endl;
    cout << "Cost (after HST): " << cost+(cost*0.13) << endl;
}





int main() {
    //Limit the displayed values to 4 decimals (1 mark)
    setprecision(4);

    //Starting in ft
    activeUnit = ft;

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
                if(accounts.size()>0) {
                    cout << "Account Number:";
                    int accountNum = getUserInputAccountNumber();
                    accounts.at((unsigned long) accountNum-1).addRoom(createNewRoom());
                } else {
                    cout << "Please create an account before adding a room" << endl;
                }
                break;
            case 3:
                //Switch Active Units
                switch(getActiveDisplayUnit()) {
                    case ft:
                            setActiveDisplayUnit(m);
                            cout << "You are now working in Metric." << endl;
                        break;

                    case m:
                            setActiveDisplayUnit(ft);
                            cout << "You are now working in Imperial" << endl;
                        break;
                }
                break;
            case 4:
                //Print Account Summary
                printSummaries();
                break;
            case 5:
                //The ability to exit the application (case 5) (1 mark)
                cout << "Thank you for using Paint Pro!" << endl;
                exit(0);
            default:break;
        }
    }
}