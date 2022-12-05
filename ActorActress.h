//
// Created by Allissa Hertz on 11/26/22.
//

#ifndef FINAL_PROJECT_ACTORACTRESS_H
#define FINAL_PROJECT_ACTORACTRESS_H

#include <string>

using namespace std;

class ActorActress {
    //ActorActress Private variables
public:
    int year;
    string award;
    bool winner;
    string name;
    string film;

    //constructors
    ActorActress();
    ActorActress(int yr, string aw, bool win, string n, string f);
    
    //Getters
    int getYear() const;
    string getAward() const;
    bool getWinner() const;
    string getName() const;
    string getFilm() const;
    
    //Setters
    void setYear(int y);
    void setAward(string a);
    void setWinner(bool w);
    void setName(string n);
    void setFilm(string f);
    string print() const;

    bool operator < (const ActorActress &actor) const {
        return (this->name < actor.getName());
    }
};


#endif //FINAL_PROJECT_ACTORACTRESS_H
