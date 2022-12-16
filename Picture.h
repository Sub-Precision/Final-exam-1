//
// Created by Allissa Hertz on 11/26/22.
//

#ifndef FINAL_PROJECT_PICTURE_H
#define FINAL_PROJECT_PICTURE_H
using namespace std;


class Picture {
public:
    //constructors
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
    explicit Picture(const string& picture_name) {//Constructor to set the name field
        name = picture_name;
    }
    bool operator < (const Picture &picture) const {
        return (this->name < picture.getName());
    }
    friend  ostream& operator << (ostream& out, Picture& picture) {//friend function to print the sorted output.
        out << "Name : " << picture.getName()<< "\n";
        out << "Year : " << picture.year << "\n";
        out << "Nominations: " << picture.nominations << "\n";
        out << "Rating : " << picture.rating << "\n";
        out << "Duration : " << picture.duration << "\n";
        out << "Genre1 : " << picture.genre1 << "\n";
        out << "Genre2 : " << picture.genre2 << "\n";
        out << "Release : " << picture.release << "\n";
        out << "Metacritic : " << picture.metacritic << "\n";
        out << "Synopsis : " << picture.synopsis << "\n";
        out << "-------------------------------------------------------" << "\n";
        return out;
    }
    
};


#endif //FINAL_PROJECT_PICTURE_H

