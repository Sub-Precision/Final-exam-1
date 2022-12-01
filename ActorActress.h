//
// Created by Allissa Hertz on 11/26/22.
//

#ifndef FINAL_PROJECT_ACTORACTRESS_H
#define FINAL_PROJECT_ACTORACTRESS_H
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
    AtcorActress(int, string, bool, string, string);
    
    //Getters
    int getYear() const;
    string getAward() const;
    bool getWinner() const;
    string getName() const;
    string getFilm() const;
    
    //Setters
    void setYear(int y);
    void setAward(int a);
    void setWinner(int w);
    void setName(int n);
    void setFilm(int f);
};


#endif //FINAL_PROJECT_ACTORACTRESS_H
