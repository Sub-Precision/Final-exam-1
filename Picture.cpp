/*
//
// Created by Allissa Hertz on 11/26/22.
//

#include <string>
#include "Picture.h"
using namespace std;

Picture::Picture() {

}

Picture::Picture(string n, int yr, int nom, double rate, int dur, string gen1, string gen2, int rel, int mc, string syn) {

}

//Getters Implemented
string Picture::getName() const {
    return name;
}
int Picture::getYear() const {
    return year;
}
int Picture::getNominations() const {
    return nominations;
}
double Picture::getRating() const {
    return rating;
}
int Picture::getDuration() const {
    return duration;
}
string Picture::getGenre1() const {
    return genre1;
}
string Picture::getGenre2() const {
    return genre2;
}
int Picture::getRelease() const {
    return release;
}
int Picture::getMetacritic() const {
    return metacritic;
}
string Picture::getSynopsis() const {
    return synopsis;
}

//Setters implemented
void Picture::setName(string na) { 
    name = na; 
}
void Picture::setYear(int ye) { 
    year = ye; 
}
void Picture::setNominations(int no) { 
    nominations = no; 
}
void Picture::setRating(double ra) { 
    rating = ra; 
}
void Picture::setDuration(int du) {
    duration = du; 
}
void Picture::setGenre1(string one) {
    genre1 = one; 
}
void Picture::setGenre2(string two) {
    genre2 = two; 
}
void Picture::setRelease(int re) { 
    release = re; 
}
void Picture::setMetacritic(int me) { 
    metacritic = me; 
}
void Picture::setSynopsis(string sy) { 
    synopsis = sy; 
}

string Picture::print() const {
    string returnString;
    returnString +=this->getName()+",";
    if (this->getYear() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getYear()) + ",";
    }
    if (this->getYear() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getYear()) + ",";
    }
    if (this->getNominations() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getNominations()) + ",";
    }
    if (this->getRating() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getRating()) + ",";
    }
    if (this->getDuration() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getDuration()) + ",";
    }
    returnString +=this->getGenre1()+",";
    returnString +=this->getGenre2()+",";
    if (this->getRelease() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getRelease()) + ",";
    }
    if (this->getMetacritic() == -1){
        returnString += ",";
    } else {
        returnString += to_string(this->getMetacritic()) + ",";
    }
    returnString +=this->getMetacritic()+",";
    returnString +=this->getSynopsis()+",";
}

*/
