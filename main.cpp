# include "main.h"

//The first menu that the user sees. They use this to choose which db they are interacting with
int main() {
    int database_selection;

    //Ask the user which db they want to use
    cout << "Hello, Welcome to the Academy Award Database!\n\nPlease choose the database you would like to view:\n1. Actor/Actress \n2. Movie\n" << std::endl;
    //store value
    cin >> database_selection;
    //if they type 1, it is the actor database
    if (database_selection == 1) {
        loadFromFileActorActressData();
        mainMenu(true);
    //if they type 2, it is the picture database
    } else if (database_selection == 2) {
        loadFromFilePictureData();
        mainMenu(false);
    //if they type anything else, they get an error message and go back to the main menu
    } else {
        cout << R"(You must enter either "1" or "2".)";
        main();
    }
    return 0;
}

// They have selected which database they want, and now they select what they want to do
void mainMenu(bool isActorDatabase) {
    while (true) {
        int main_menu_selection;
        //ask what they want to do. Have them enter 1-4. Or 0 to cancel.
        cout<< "What would you like to do? Enter a number 1-4 to select one of the options below. \n\nYou can:\n\n1. Add a new record\n2. Sort records alphabetically by name\n3. Search for an entry by a name. This also allows you to modify or delete a particular picture or actor/actress.\n4. Print a CSV file of the latest database.\n0. Quit\n";
        //read in their selection
        cin >> main_menu_selection;
        cout << "You selected option: " << main_menu_selection << endl;
        //run different operations for ActorActress database or picture database based on their selection.
        switch (main_menu_selection) {
            case 1 :
                //Add a new record
                if (isActorDatabase == true) {
                    //Defined in ActorActressDb.cpp
                    addActorActressRecord();
                } else {
                    //Defined in PictureDb.cpp
                    addPictureRecord();
                }
                break;
            case 2 :
                //Sort records alphabetically by a certain field
                if (isActorDatabase == true) {
                    //Defined in ActorActressDb.cpp
                    sortActorActress();
                } else {
                    //Defined in PictureDb.cpp
                    sortPicture();
                }
                break;
            case 3 :
                //Search for an entry by a field
                if (isActorDatabase == true) {
                    //Defined in ActorActressDb.cpp
                    searchActorActress();
                } else {
                    //Defined in PictureDb.cpp
                    searchPicture();
                }
                break;
            case 4 :
                //Print a CSV file of the latest database
                if (isActorDatabase == true) {
                    //Defined in ActorActressDb.cpp
                    saveCSVActorActress();
                } else {
                    //Defined in PictureDb.cpp
                    saveCSVPicture();
                }
                break;
            case 0 :
                // Type 0 at the main menu to
                exit(0);
                break;
            default :
                cout << "Invalid input. You must enter a number 1-4 to select the corresponding menu option." << endl;
        }
        cin.clear();
    }
}
// utility function that takes a string and a delimiter (For example a comma, space, or end of line)
vector<string> splitString(string input, char delim) {
    vector<string> newVector;
    //while you find the delimiter, and it is not the end of the line
    //(this is used with the input file to find all the commas)
    while (input.find(delim) != std::string::npos) {
        //create a token string that is a substring based on the delimiter
        string token = input.substr(0, input.find(delim));
        //erase up to the first delimiter (so it doesn't keep finding the same delimiter)
        input.erase(0, input.find(delim) + 1);
        //add the token to a new vector
        newVector.push_back(token);
        //if it is the end of the line, find that token
        if(input.find(delim) == std::string::npos){
            //also push that to the vector
            //(this is used with the input file to still add the last item even though there is not a comma at the end
            newVector.push_back(input);
        }
    }
    return newVector;
}





