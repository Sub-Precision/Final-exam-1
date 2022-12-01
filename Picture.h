//
// Created by Allissa Hertz on 11/26/22.
//

#ifndef FINAL_PROJECT_PICTURE_H
#define FINAL_PROJECT_PICTURE_H
using namespace std;


class Picture {
public:
    //Picture private variables
    string name;
    int year;
    int nominations;
    double rating;
    int duration;
    string genre1;
    string genre2;
    int release;
    int metacritic;
    string synopsis;

    //Getters
    int getName() const;
    int getYear() const;
    int getNominations() const;
    double getRating() const;
    int getDuration() const;
    string getGenre1() const;
    string getGenre2() const;
    int getRelease() const;
    int getMetacritic() const;
    string getSynopsis() const;
    
    //Setters
    void setName(string na);
    void setYear(int ye);
    void setNominations(int no);
    void setRating(double ra);
    void setDuration(int du);
    void setGenre1(int one);
    void setGenre2(int two);
    void setRelease(int re);
    void setMetacritic(int me);
    void setSynopsis(string sy);
};


#endif //FINAL_PROJECT_PICTURE_H
