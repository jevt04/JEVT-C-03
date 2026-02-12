#include <string>

class Turtle{
    
    bool isBedLover;
    long long coolnessRating;
public: 
    Turtle(bool isBedLover, int coolnessRating ){
        if (!isBedLover || coolnessRating< 500000){
            // Turtles are so cool, they love beds!
            throw new std::bad_alloc;
        }
        this->isBedLover = isBedLover;
        this->coolnessRating = coolnessRating;
    };
};
