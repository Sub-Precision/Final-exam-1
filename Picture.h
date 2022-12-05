//
// Created by Allissa Hertz on 11/26/22.
//

#ifndef FINAL_PROJECT_PICTURE_H
#define FINAL_PROJECT_PICTURE_H
using namespace std;


class Picture {
public:

    Picture();

    Picture(string n, int yr, int nom, double rate, int dur, string gen1, string gen2, string rel, int mc, string syn);

    //Picture public variables
    string name;
    int year;
    int nominations;
    double rating;
    int duration;
    string genre1;
    string genre2;
    string release;
    int metacritic;
    string synopsis;

    //Getters
    string getName() const;
    int getYear() const;
    int getNominations() const;
    double getRating() const;
    int getDuration() const;
    string getGenre1() const;
    string getGenre2() const;
    string getRelease() const;
    int getMetacritic() const;
    string getSynopsis() const;
    
    //Setters
    void setName(string na);
    void setYear(int ye);
    void setNominations(int no);
    void setRating(double ra);
    void setDuration(int du);
    void setGenre1(string one);
    void setGenre2(string two);
    void setRelease(string re);
    void setMetacritic(int me);
    void setSynopsis(string sy);
    string print() const;

    bool operator < (const Picture &picture) const {
        return (this->name < picture.getName());
    }
};


#endif //FINAL_PROJECT_PICTURE_H

