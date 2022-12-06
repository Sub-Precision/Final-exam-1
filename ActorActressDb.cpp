//
// Created by Allissa Hertz on 12/3/22.
//

#include "main.h"

void loadFromFileActorActressData() {
    actor_actress_db.Clear();
    int year = 0;
    string award;
    bool winner = true;
    string answer;
    string name;
    string film;

    fstream actor_actress_file;
    //Open the actor_actress_file
    actor_actress_file.open("../input/actor_actress.csv");
    vector<ActorActress> new_actor_actress_vector;
    if(!actor_actress_file){
        cerr<<"File not found\n";
        exit(EXIT_FAILURE);
    } else{
        string line;
        int i = 0;
        while (getline(actor_actress_file, line, '\n')){

            if (i > 0){ //skipping the first line, because it contains the column names.
                //splitString utility function is defined in main.cpp
                vector<string> temp_actor_actress_record = splitString(line, ',');
                ActorActress actorActress(year, award, winner, name, film);
                //for values that are integers, you have to check if the line is empty, because it will fail.
                //-1 appears instead of the empty string, but this is change on print
                if (temp_actor_actress_record[0] == ""){
                    actorActress.setYear(-1);
                }
                else {
                    //assign the year to the first token that was split from the string
                    //stoi converst the string into an integer since it is pulled out of the file as a string, but needs to be converted to an integer type
                    actorActress.setYear(stoi(temp_actor_actress_record[0]));
                }
                actorActress.setAward(temp_actor_actress_record[1]);
                if(temp_actor_actress_record[2] == "")
                {
                    actorActress.setWinner(-1);
                }
                else {
                    actorActress.setWinner(stoi(temp_actor_actress_record[2]));
                }
                actorActress.setName(temp_actor_actress_record[3]);
                actorActress.setFilm(temp_actor_actress_record[4]);
                //Add all of the objects to a bst
                actor_actress_db.Insert(actorActress);
//                cout << "Data loaded" << endl;
//                cout << actorActress.print() << endl;
            }
            i++;
        }
    }
}

void addActorActressRecord() {

    int input_year = 0;
    string input_award;
    string input_winner;
    string input_answer;
    string input_name;
    string input_film;
    bool winner;

    cout << "What year was the award won? Enter a four-digit integer. For example, “1976”.\n";
    cin >> input_year;
    cout << "What was the name of the award?\n";
    cin >> input_award;
    cout << "Did the actor/actress win the award? Enter yes or no.\n";
    cin >> input_winner;
    if (input_winner == "yes"){
        winner = true;
    } else if (input_winner == "no"){
        winner = false;
    } else {
        cout << "You must type in yes or no.";
        addActorActressRecord();
    }
    cout << "What was the name of the actor/actress?\n";
    cin >> input_name;
    cout << "What was the name of the film the actor/actress starred in?\n";
    cin >> input_film;
    ActorActress actorActress(input_year, input_award, winner, input_name, input_film);
    actorActress.setYear(input_year);
    actorActress.setAward(input_award);
    actorActress.setWinner(winner);
    actorActress.setName(input_name);
    actorActress.setFilm(input_film);

    actor_actress_db.Insert(actorActress);
    cout << "Added entry to database: \n" << actorActress.print() << endl;
}

void modifyActorActress(){
    //TODO: Once field is found, let them modify if it was the winner or not
    //we don't need to let them modify or delete every field -
    //if actoractress is found modify the winner
    //else return - movie not found

}

void deleteActorActress(){
    //TODO: Once field is found, let them delete the entire object.

}

void searchActorActress(){
    //TODO: Requirement is to have an exact and partial search
    string actoractress_search_input;
    cout << "What would you like to search for? Enter the name of the film";
    cin >> actoractress_search_input;

    //TODO: find function needs to be added to BST. Henok is going to write this and then we can use "picture_db.Find()"
    //need to pass what we found to modify and delete functions


//Menu options once they find a match so they can either modify if the film won or delete the entry
//    int modify_or_delete_input;
//    cout << "Match found. What would you like to do? 1. Modify whether the actor or actress won 2. Delete the entry";
//    cin >> modify_or_delete_input;
//
//    switch (modify_or_delete_input){
//        case 1:
//            modifyActorActress();
//    break;
//        case 2:
//            deleteActorActress();
//        case 0 :
//            // Type 0 at the main menu to
//            exit(0);
//            break;
//        default :
//            cout << "Invalid input. You must enter a number 1-2 to select the corresponding menu option." << endl;
//    }
}

void sortActorActress(){
    //TODO: Sort by name. You need to sort from left most sub tree to right to get the output
}


void saveCSVActorActress() {
    //TODO: Need to save csv to file. This is not fully implemented, I just started some of the logic
    //Don't forget to add the header
    string user_file_name;
    cout << "What would you like to name your file?";
    cin >> user_file_name;
    ofstream outfile(user_file_name);

    //the first line headings have to be print out separately because they are ignored when creating the BST
    outfile<<"Year,Award,Winner,Name,Film"<<endl;
    //This doesn't work. I think we need to use the print function from BST class
    //    outfile<<actoractress_db<<endl;

    outfile.close();

}
