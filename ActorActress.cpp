//
// Created by Allissa Hertz on 11/26/22.
//

#include "ActorActress.h"
using namespace std;

// Contructor functionality
ActorActress::ActorActress()
{
}
ActorActress::ActorActress(int, string, bool, string, string)
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
void ActorActress::setAward(int a) {
    award = a;
}
void ActorActress::setWinner(int w) {
    winner = w;
}
void ActorActress::setName(int n) {
    name = n;
}
void ActorActress::setFilm(int f) {
    film = f;
}
