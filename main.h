//
// Created by Allissa Hertz on 12/3/22.
//

#ifndef FINAL_PROJECT_MAIN_H
#define FINAL_PROJECT_MAIN_H

#include "BST.h"
#include <fstream>
#include <iostream>
#include <vector>
#include "ActorActress.h"
#include "ActorActressDb.h"
#include "Picture.h"
#include "PictureDb.h"

using namespace std;

void mainMenu(bool isActorDatabase);
vector<string> splitString(string input, char delim);

inline BinarySearchTree<ActorActress> actor_actress_db;
inline BinarySearchTree<Picture> picture_db;

#endif //FINAL_PROJECT_MAIN_H
