//
// Created by Allissa Hertz on 11/26/22.
//

#include "Picture.h"
using namespace std;

Picture::Picture()
{
}

Picture::Picture(string, int, int, double, int, int, int, int, int, string)
{
}

//Getters Implemented
int Picture::getName() const {
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
int Picture::getMetacrtic() const {
    return metacrtic;
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
void Picture::setGenre1(int one) { 
    genre1 = one; 
}
void Picture::setGenre2(int two) { 
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
