# CSCI 2421 - 001 
* Final Programming Assignment 
* Cade Nichols, Allissa Hertz, Susmitha Wilson
* Cade.nichols@UCDenver.edu, susmitha.wilson@ucdenver.edu

# Project Files
* ActorActress.h - Contains definition of ActorActress class
* ActorActress.cpp - Contains implementation of ActorActress class
* ActorActressDb.h - Contains definition of ActorActressDb class (Database class)
* ActorActressDb.cpp - Contains implementation of ActorActress class
* BST.h - Contains definition and implementation of BinarySearchTree class
* Exceptions.h - Contains Exception handling functions for invalid inputs
* Picture.h - Contains definition of Picture class
* Picture.cpp - Contains implementation of Picture class
* PictureDb.h - Contains definition of PictureDb class
* PictureDb.cpp = Contains implementation of PictureDb class
* main.h - Contains definitions of vector functions
* main.cpp - Implements functionality to add and delete records, calls all necessary functions, calls to create objects, calls the sorting algorithms, takes the users input to make a choice, as well as accepts input to run search functions, allows the user to search via actress/actor
* Makefile - g++ command to compile project
* actor_actress.csv - File that contains all the information about actors and actresses to be sorted
* pictures.csv - File that contains all the information about the films to be sorted

# Compilation
The project can be compiled be issuing the 'make' command on a linux terminal. Upon successful 
compilation, an executable named 'AHertzCnicholsSWilson.exe' will be created in the current directory

# Running
Issue './AHertzCNicholsSWilson.exe' on the command line to run the program

# Sample Output

**Menu 1: Choose your database**
Please choose the database you would like to view:
1. Actor/Actress 
2. Movie

**Main menu**
1. Add a new record
2. Sort Records aphabetically by a certain field
3. Search for an entry by a name. This also allows you to modify or delete a particular picture of actor/actress.
4. Print a csv file of the latest database
5. Quit

**Actor/Actress options section**

**Actor/Actress - 1. Add a new record**
you selected option: 1
What year was the award won? Enter a four-digit integer. For example, “1976”.
>>1978
What was the name of the award?
>>bob
Did the actor/actress win the award? Enter yes or no.
>>yes
What was the name of the actor/actress?
>>bob
What was the name of the film the actor/actress starred in?
>>bob
Added entry to database: 
1978,bob,yes,bob,bob

**Actor/Actress - Sort records alphabetically by name**

[Prints a sorted list of all actor/actress objects]

Name : Abigail Breslin
Film : Little Miss Sunshine
Year: 2006
Award : Actress in a Supporting Role
Winner : 0
-------------------------------------------------------
 Name : Adolph Caesar
Film : A Soldier's Story
Year: 1984
Award : Actor in a Supporting Role
Winner : 0
-------------------------------------------------------
 Name : Adolphe Menjou
Film : The Front Page
Year: 1931
Award : Actor in a Leading Role
Winner : 0

ect.. 

**3. Actor/Actress - Search for an entry by a name. This also allows you to modify or delete a particular picture or actor/actress.**

You selected option: 3
What would you like to search for?
Enter the name of the Actor/Actress. This can be a first or last name: 
>> Emil
0:
Name : Emil Jannings
Film : The Last Command
Year: 1928
Award : Actor in a Leading Role
Winner : 1
-------------------------------------------------------

1:
Name : Emily Watson
Film : Breaking the Waves
Year: 1996
Award : Actress in a Leading Role
Winner : 0
-------------------------------------------------------

Would you like to
1. Modify
2. Delete 
3. Continue

**Modify**
Which record would you like to modify?
Enter a the number that corresponds with the record you want to modify.
>>0
Would you like to modify this records win?:
1. Yes
2.No
>>Yes.

**Delete**
Which record would you like to Delete?
>>0
The entry has been removed.

**Continue**

[Returns to main menu]

**4. Print a CSV file of the latest database.**

you selected option: 4
What would you like to name your file?
newdatabase
Your file has been saved as a csv to the current directory.
[New file saved to directory with user input name]


**Picture options section**

**Picture - 1. Add a new record**
you selected option: 1
What was the name of the film? 
>>bob
What year was the award won? Enter a four-digit integer. For example, “1976”.
>>1976
How many nominations did the film receive?
>>1
What was the rating of the film? Enter a two-digit decimal. For example, “1.4”
>>1.4
What was the duration of the film? Enter a whole number that represents the running time of the film in minutes. For example, “145”
>>145
What was the main genre of the film?
>>bob
What was the secondary genre of the film?
>>bob
What year was the film released? Enter a two-digit integer to represent the year. For example, “89”.
>>89
What was the metacritic review score? For example, For example, “89”.
>>89
Please enter a short synopsis of the film.
>>bob

Added entry to database: 
bob,1976,1976,1,1.400000,145,bob,bob,89,89,bob,

**Picture - Sort records alphabetically by name**

[Prints a sorted list of all picture objects]

Name : 12 Years a Slave
Year : 2013
Nominations: 9
Rating : 8.1
Duration : 134
Genre1 : Biography
Genre2 : Drama
Release : November
Metacritic : 97
Synopsis : In the antebellum United States Solomon Northup a free black man from upstate New York is abducted and sold into slavery.
-------------------------------------------------------
 Name : A Beautiful Mind
Year : 2001
Nominations: 8
Rating : 8.2
Duration : 135
Genre1 : Biography
Genre2 : Drama
Release : January
Metacritic : 72
Synopsis : After a brilliant but asocial mathematician John Nash accepts secret work in cryptography his life takes a turn for the nightmarish.
-------------------------------------------------------
 Name : A Man for All Seasons
Year : 1966
Nominations: 8
Rating : 7.9
Duration : 120
Genre1 : Biography
Genre2 : Drama
Release : May
Metacritic : -1
Synopsis : The story of Thomas More who stood up to King Henry VIII when the King rejected the Roman Catholic Church to obtain a divorce and remarriage.
-------------------------------------------------------

ect.. 

**3. Picture - Search for an entry by a name. This also allows you to modify or delete a particular picture or actor/actress.**

You selected option: 3
What would you like to search for?
Enter the name of the Movie. This must be an exact match: 
>>bob
0:
Name : bob
Year : 1976
Nominations: 1
Rating : 1.4
Duration : 145
Genre1 : bob
Genre2 : bob
Release : 89
Metacritic : 89
Synopsis : bob
-------------------------------------------------------

Would you like to
1. Modify
2. Delete 
3. Continue

**Modify**

What would you like to modify this rating to? Please enter a two-digit double from 1 to 10. For example, 1.2, 9.7, ect..

Record modified!
Name : Birdman
Year : 2014
Nominations: 9
Rating : 1.7
Duration : 119
Genre1 : Comedy
Genre2 : Drama
Release : November
Metacritic : 88
Synopsis : Illustrated upon the progress of his latest Broadway play a former popular actors struggle to cope with his current life as a wasted actor is shown.
-------------------------------------------------------

**Delete**

Enter the name of the Movie. This must be an exact match: 
>> Crash
The entry has been removed.

[Run search again and there is no match]

**Continue**

[Back to main menu]


**4. Print a CSV file of the latest database.**

you selected option: 4
What would you like to name your file?
newdatabase
Your file has been saved as a csv to the current directory.
[New file saved to directory with user input name]



# Errors
As far as we can tell the program works completely
