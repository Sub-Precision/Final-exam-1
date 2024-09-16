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
static vector<ActorActress> actor_actress_vector_for_file_input;//Make them to inline if it works like the for you, It didn't work for me so i made them static
static vector<Picture> picture_vector_for_file_input;//Both these vectors are for printing input to a csv file.
static BinarySearchTree<ActorActress> actor_actress_db;
static BinarySearchTree<Picture> picture_db;

#endif //FINAL_PROJECT_MAIN_H
