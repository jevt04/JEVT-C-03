#include <string>
#include <iostream>
using namespace std;

class Turtle{
    
    bool isBedLover;
    long long coolnessRating;
public: 
    Turtle(bool isBedLover, int coolnessRating ){
        if (!isBedLover || coolnessRating< 500000){
            // Turtles are so cool, they love beds!
            throw new std::bad_alloc;
        }
        else {
            cout << "Turtle " << this->coolnessRating << " is not comfy in the bed :(" << endl;
        }
        this->isBedLover = isBedLover;
        this->coolnessRating = coolnessRating;
    };
};
