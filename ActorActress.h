//
// Created by Allissa Hertz on 11/26/22.
//

#ifndef FINAL_PROJECT_ACTORACTRESS_H
#define FINAL_PROJECT_ACTORACTRESS_H
using namespace std;

class ActorActress {
public:
    int year;
    string award;
    bool winner;
    string name;
    string film;

    int getYear() const;
    string getAward() const;
    bool getWinner() const;
    string getName() const;
    string getFilm() const;
};


#endif //FINAL_PROJECT_ACTORACTRESS_H
