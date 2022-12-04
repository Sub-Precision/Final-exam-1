
//
// Created by Allissa Hertz on 12/3/22.
//

#include "main.h"

vector<Picture> loadFromFilePictureData() {
    string name;
    int year = 0;
    int nominations = 0;
    double rating = 0;
    int duration = 0;
    string genre1;
    string genre2;
    string release;
    int metacritic = 0;
    string synopsis;


    fstream picture_file;
    picture_file.open("/Users/allissahertz/CLionProjects/final-project/pictures.csv");
    vector<Picture> new_picture_vector;
    if(!picture_file){
        cerr<<"File not found\n";
        exit(EXIT_FAILURE);
    } else {
        string line;
        int i = 0;
        while (getline(picture_file, line, '\n')) {
            if (i > 0) { //skipping the first line, because it contains the column names.
                vector<string> temp_picture_record = splitString(line, ',');
                Picture picture(name, year, nominations, rating, duration, genre1, genre2, release, metacritic,synopsis);
                picture.setName(temp_picture_record[0]);
                if (temp_picture_record[1] == "" || temp_picture_record[1] == "-"){
                    picture.setYear(-1);
                }
                else {
                    picture.setYear(stoi(temp_picture_record[1]));
                }
                if (temp_picture_record[2] == "" || temp_picture_record[2] == "-"){
                    picture.setNominations(-1);
                }
                else {
                    picture.setNominations(stoi(temp_picture_record[2]));
                }
                if (temp_picture_record[3] == "" || temp_picture_record[3] == "-"){
                    picture.setRating(-1);
                }
                else {
                    picture.setRating(stod(temp_picture_record[3]));
                }
                if (temp_picture_record[4] == "" || temp_picture_record[4] == "-"){
                    picture.setDuration(-1);
                }
                else {
                    picture.setDuration(stoi(temp_picture_record[4]));
                }
                picture.setGenre1(temp_picture_record[5]);
                picture.setGenre2(temp_picture_record[6]);
                picture.setRelease(temp_picture_record[7]);

                if (temp_picture_record[8] == "" || temp_picture_record[8] == "-"){
                    picture.setMetacritic(-1);
                }
                else {
                    picture.setMetacritic(stoi(temp_picture_record[8]));
                }
                picture.setSynopsis(temp_picture_record[9]);
                new_picture_vector.push_back(picture);
//                cout << picture.print() << endl;
            }
            i++;
        }
    }
    return new_picture_vector;
}

void addPictureRecord() {

    string input_name;
    int input_year;
    int input_nominations;
    double input_rating;
    int input_duration;
    string input_genre1;
    string input_genre2;
    string input_release;
    int input_metacrtic;
    string input_synopsis;

    cout << "What was the name of the film? ";
    cin >> input_name;
    cout << "What year was the award won? Enter a four-digit integer. For example, “1976”.";
    cin >> input_year;
    cout << "How many nominations did the film receive?";
    cin >> input_nominations;
    cout << "What was the rating of the film? Enter a two-digit decimal. For example, “1.4”.";
    cin >> input_rating;
    cout << "What was the duration of the film? Enter a whole number that represents the running time of the film in minutes. For example, “145”.";
    cin >> input_duration;
    cout << "What was the main genre of the film?";
    cin >> input_genre1;
    cout << "What was the secondary genre of the film?";
    cin >> input_genre2;
    cout << "What year was the film released? Enter a two-digit integer to represent the year. For example, “89”.";
    cin >> input_release;
    cout << "What was the metacritic review score?";
    cin >> input_metacrtic;
    cout << "Please enter a short synopsis of the film.";
    cin >> input_synopsis;

    Picture picture(input_name, input_year, input_nominations, input_rating, input_duration, input_genre1, input_genre2, input_release, input_metacrtic, input_synopsis);
    picture.setName(input_name);
    picture.setYear(input_year);
    picture.setNominations(input_nominations);
    picture.setRating(input_rating);
    picture.setDuration(input_duration);
    picture.setGenre1(input_genre1);
    picture.setGenre2(input_genre2);
    picture.setRelease(input_release);
    picture.setMetacritic(input_metacrtic);
    picture.setSynopsis(input_synopsis);

    picture_db.push_back(picture);
    cout << "Added entry to database: \n" << picture.print() << endl;
}

void printPictureDb() {
    for (int i = 0; i < picture_db.size(); i++){
        cout << picture_db[i].print() << endl;
    }
}

void sortPicture() {
    int fieldName;
    cout << "What field would you like to sort by?/n/n1. Name/n2. Year/n3. Nominations/n4.Rating/n5.Duration/n6.Genre/n7.Secondary Genre/n8.Release/n9.Metacritic/n10.Synopisis/n";
    //TODO: Add in logic to actually sort the data
}

void searchPicture(){
    cout << "What would you like to search for?";
}

void saveCSVPicture() {

}
