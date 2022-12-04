//
// Created by Allissa Hertz on 12/3/22.
//

#ifndef FINAL_PROJECT_MAIN_H
#define FINAL_PROJECT_MAIN_H

#include "ActorActress.h"
#include "stdio.h"
#include "ActorActressDb.h"
#include <fstream>
#include <iostream>
#include <vector>
//#include "Picture.h"
//#include "PictureDb.h"

using namespace std;
int main();
void mainMenu(bool isActorDatabase);
vector<string> splitString(string input, char delim);

inline vector<ActorActress> actor_actress_db;
//inline vector<Picture> picture_db;


#endif //FINAL_PROJECT_MAIN_H
