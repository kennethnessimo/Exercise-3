#include "utilities.h"

int randomNumberGenerator(){
    random_device rd; //seed
    default_random_engine generator(rd());
    int number = generator();
    return number;
}

int randomWithLimits(int lowerLimit, int upperLimit) {
    random_device rd;
    default_random_engine generator(rd());
    uniform_int_distribution<int> distribution(lowerLimit,upperLimit);
    /*for (int i = 0; i<5; i++){
        int number = distribution(generator);
        cout << number << endl;
    }*/
    int number = distribution(generator);
    return number;
}