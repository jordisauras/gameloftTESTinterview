#include <iostream>
#include <stdio.h>

class Card{
public:
    std::string Name;
    std::string image;
    int damage;
    int type; // each type will be represented with a number
    int element;////each element will be represented with a number
    bool isHealing;
    int heal;
private:
    int numberOfCopies;
};

class Character{
    int uniqueIdentifier;
    std::string name;
    int typeOfCardsThatCanUseMe{}; //array whith the type of cards that can be used for this character

};

class Deck{
    Card* deck{}; //array of cards

};

class Player{
    std::string name;
    int uniqueIdentifier;
    Card* allMyCards{}; //array with cards
    Deck deck; // the player deck
    Character character; //the player chosen Character
};
