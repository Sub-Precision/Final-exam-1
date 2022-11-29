//
// Created by Allissa Hertz on 11/26/22.
//

#include "Picture.h"
using namespace std;

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
