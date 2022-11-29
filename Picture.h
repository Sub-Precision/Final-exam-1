//
// Created by Allissa Hertz on 11/26/22.
//

#ifndef FINAL_PROJECT_PICTURE_H
#define FINAL_PROJECT_PICTURE_H
using namespace std;


class Picture {
public:
    string name;
    int year;
    int nominations;
    double rating;
    int duration;
    string genre1;
    string genre2;
    int release;
    int metacrtic;
    string synopsis;

    int getName() const;
    int getYear() const;
    int getNominations() const;
    double getRating() const;
    int getDuration() const;
    string getGenre1() const;
    string getGenre2() const;
    int getRelease() const;
    int getMetacrtic() const;
    string getSynopsis() const;
};


#endif //FINAL_PROJECT_PICTURE_H
