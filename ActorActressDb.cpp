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
                 actor_actress_vector_for_file_input.push_back(actorActress);
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



void searchActorActress(){
    //partial search is done based on the name of the actor/actress
    string actoractress_search_name;

    cout << "What would you like to search for?" << endl;
    cout<<"Enter the name of the Actor/Actress: ";
    cin.ignore();
    getline(cin, actoractress_search_name);

    vector<ActorActress> allNodes = actor_actress_db.getAllNodes();
    vector<ActorActress> foundNodes;
    int i = 0;
    for(ActorActress AA : allNodes)
    {
        if (AA.getName().find(actoractress_search_name) != std::string::npos)
        {
            int modify_or_delete_input;
            cout <<  i << ":" << endl;
            i++;
            cout << AA << endl;
            foundNodes.push_back(AA);
        }

    }

    if(foundNodes.size() > 0) {
        cout << "Would you like to\n1. Modify\n2. Delete \n3. Continue" << endl;
        string input;
        cin >> input;

        if (input == "1") {
            cout << "Which record would you like to modify?";
            cin >> input;
            int index = std::stoi(input);
            try {
                cout << "What would you like to modify this record to?: \n" << foundNodes[index].getName()
                     << endl;
                cin.ignore();
                getline(cin, input);

                ActorActress mod = foundNodes[index];
                mod.setName(input);
                actor_actress_db.Modify(foundNodes[index],mod);
            }
            catch (int e) {
                cout << "invalid option" << endl;
            }
        }
        else if(input == "2")
        {
            cout << "Which record would you like to Delete?";
            cin >> input;
            int index = std::stoi(input);

            try {
                actor_actress_db.Remove(foundNodes[index]);
            }
            catch(int e)
            {
                cout << "invalid input" << endl;
            }
        }
    }
    //the tree needs to be resorted after a modification or else the binary tree functions break down
    return;
}

void sortActorActress(){
    //Sorting from left most sub tree to right to get the output sorted by name is done.
    actor_actress_db.PrintTree();
}


void saveCSVActorActress() {
    //Save csv to file is done but I didn't add any header. I did using vector and iterator.
    //Don't forget to add the header
    string user_file_name;
    cout << "What would you like to name your file?";
    cin >> user_file_name;
    ofstream outfile(user_file_name);
     //the first line headings have to be print out separately because they are ignored when creating the BST
    outfile << "Name,Film,Year,Award,Winner" << endl;;
    for (auto& actoractress : actor_actress_vector_for_file_input)
        outfile << actoractress.name << "," << actoractress.film << "," << actoractress.year << "," << actoractress.award << "," << actoractress.winner << endl;
    outfile.close();

}
