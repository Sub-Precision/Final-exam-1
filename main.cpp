#include <fstream>
#include <iostream>
#include "Picture.h"
using namespace std;
void mainMenu(bool isActorDatabase);
void addPictureRecord();
void addActorActressRecord();
void sortActorActress();
void sortPicture();

int main() {
    int database_selection;
    cout << "Hello, Welcome to the Academy Award Database!\n\nPlease choose the database you would like to view:\n1. Actor\n2. Movie\n" << std::endl;

    cin >> database_selection;
    if (database_selection == 1) {
        mainMenu(true);
    } else if (database_selection == 2) {
        mainMenu(false);
    } else {
            cout << R"(You must enter either "actor/actress" or "movie".)";
    }
    return 0;
}

void mainMenu(bool isActorDatabase) {
    int main_menu_selection;
    cout << "What would you like to do? Enter a number 1-4 to select one of the options below. \n\nYou can:\n\n1. Add a new record\n2. Sort records alphabetically by a certain field\n3. Search for an entry by a field. This also allows you to modify or delete a particular field.\n4. Print a CSV file of the latest database.\n";
    cin >> main_menu_selection;
    switch(main_menu_selection) {
        //Add a new record
        case 1 :
            if (isActorDatabase == true){
                addActorActressRecord();
            } else {
                addPictureRecord();
            }
            break;
        //Sort records alphabetically by a certain field
        case 2 :
            if (isActorDatabase == true){
                sortActorActress();
            } else {
                sortPicture();
            }
        //Search for an entry by a field
        case 3 :
            cout << "Well done" << endl;
            break;
        //Print a CSV file of the latest database
        case 4 :
            cout << "You passed" << endl;
            break;
        default :
            cout << "Invalid input. You must enter a number 1-4 to select the corresponding menu option." << endl;
    }
}

void addActorActressRecord() {

    int year;
    string award;
    bool winner;
    string name;
    string film;

    cout << "What year was the award won? Enter a four-digit integer. For example, “1976”.\n";
    cin >> year;
    cout << "What was the name of the award?\n";
    cin >> award;
    cout << "Did the actor/actress win the award?\n";
    cin >> winner;
    cout << "What was the name of the actor/actress?\n";
    cin >> name;
    cout << "What was the name of the film the actor/actress starred in?\n";
    cin >> film;

    fstream actor_actress_file;
    actor_actress_file.open("actor_actress.csv");
    if(!actor_actress_file){
        cerr<<"File not found\n";
        exit(EXIT_FAILURE);
    } else{
        // TODO: Add logic to actually write the data to the file
    }


}

void addPictureRecord() {

    string name;
    int year;
    int nominations;
    double rating;
    int duration;
    string genre1;
    string genre2;
    int release;
    int metacrtic;
    string synopsis;

    cout << "What was the name of the film? ";
    cin >> name;
    cout << "What year was the award won? Enter a four-digit integer. For example, “1976”.";
    cin >> year;
    cout << "How many nominations did the film receive?";
    cin >> nominations;
    cout << "What was the rating of the film? Enter a two-digit decimal. For example, “1.4”.";
    cin >> rating;
    cout << "What was the duration of the film? Enter a whole number that represents the running time of the film in minutes. For example, “145”.";
    cin >> duration;
    cout << "What was the main genre of the film?";
    cin >> genre1;
    cout << "What was the secondary genre of the film?";
    cin >> genre2;
    cout << "What year was the film released? Enter a two-digit integer to represent the year. For example, “89”.";
    cin >> release;
    cout << "What was the metacritic review score?";
    cin >> metacrtic;
    cout << "Please enter a short synopsis of the film.";
    cin >> synopsis;

    fstream pictures_file;
    pictures_file.open("pictures.csv");
    if(!pictures_file){
        cerr<<"File not found\n";
        exit(EXIT_FAILURE);
    } else{
        // TODO: Add logic to actually write the data to the file
    }
}

void sortActorActress(){
    int fieldName;
    cout << "What field would you like to sort by?/n/n1. Year/n2. Award/n3. Winner/n4.Name/n5.Film";
    //TODO: Add in logic to actually sort the data

};

void sortPicture() {
    int fieldName;
    cout << "What field would you like to sort by?/n/n1. Name/n2. Year/n3. Nominations/n4.Rating/n5.Duration/n6.Genre/n7.Secondary Genre/n8.Release/n9.Metacritic/n10.Synopisis/n";
    //TODO: Add in logic to actually sort the data
}




