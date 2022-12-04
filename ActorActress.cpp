//
// Created by Allissa Hertz on 11/26/22.
//

#include "ActorActress.h"
using namespace std;

ActorActress::ActorActress(int yr, string aw, bool win, string n, string f)
{
}
    
//Implemented Getters
int ActorActress::getYear() const {
    return year;
}
string ActorActress::getAward() const {
    return award;
}
bool ActorActress::getWinner() const {
    return winner;
}
string ActorActress::getName() const {
    return name;
}
string ActorActress::getFilm() const {
    return film;
}

//Implemented Setters
void ActorActress::setYear(int y) {
    year = y;
}
void ActorActress::setAward(string a) {
    award = a;
}
void ActorActress::setWinner(bool w) {
    winner = w;
}
void ActorActress::setName(string n) {
    name = n;
}
void ActorActress::setFilm(string f) {
    film = f;
}

string ActorActress::print() const {
    string returnString;
    if (this->getYear() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getYear()) + ",";
    }
    returnString +=this->getAward()+",";
    if (this->getWinner())
        returnString += "yes,";
    else
        returnString += "no,";
    returnString += this->getName()+","+this->getFilm();
    return returnString;
}
