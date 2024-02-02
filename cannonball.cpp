#include "cannonball.h"

double acclY() {
    return -9.81;
}

double velY(double initVelocityY, double time) {
    return initVelocityY + acclY()*time;
}

double posX(double initPositionX, double initVelocityX, double time) {
    return initPositionX + initVelocityX*time;
}

double posY(double initPositionY, double initVelocityY, double time) {
    return initPositionY + (initVelocityY*time) + ((pow(time, 2)*acclY())/2);
}

void printTime(double time){
    int hours = time / 3600;
    time -= hours * 3600;
    int min = time / 60;
    time -= min * 60;
    
    cout << "Time: " << hours << " hours, " << min << " minutes, " << time << " secounds" << endl;
}

double flightTime(double initVelocityY) {
    return (-2*initVelocityY)/(acclY());
}

// Ber brukeren om en vinkel i grader
double getUserInputTheta() {
    double angle {0};
    cout << "Skriv inn en vinkel i gader: ";
    cin >> angle;
    return angle;
}

//Ber brukeren om en startfart
double getUserInputInitVelocity() {
    double initVelocity {0};
    cout << "Skriv inn startfart: ";
    cin >> initVelocity;
    return initVelocity;
}
// Konverterer fra grader til radianer
double degToRad(double deg) {
    return (deg*M_PI)/180;
}
// Returnerer henholdsvis farten i x-, og y-retning, gitt en vinkel
// theta i grader og en startfart initVelocity.
double getVelocityX(double theta, double initVelocity){
    return initVelocity * cos(degToRad(theta));
}
double getVelocityY(double theta, double initVelocity){
    return initVelocity * sin(degToRad(theta));
}
// Dekomponerer farten gitt av initVelocity, i x- og y-komponentene
// gitt vinkelen theta. Det første elementet i vectoren skal være
//x-komponenten, og det andre elementet skal være y-komponenten.
// "Vector" i funksjonsnavnet er vektor-begrepet i geometri
vector<double> getVelocityVector(double theta, double initVelocity){
    vector<double> VelocityVector;
    double initVelocityX = getVelocityX(theta, initVelocity);
    double initVelocityY = getVelocityY(theta, initVelocity);
    VelocityVector.push_back(initVelocityX);
    VelocityVector.push_back(initVelocityY);
    return VelocityVector;
    //Kan man bruke array her og?
}

double getDistanceTraveled(double velocityX, double velocityY){
    return posX(0, velocityX, flightTime(velocityY));
}

double targetPractice(double distanceToTarget, double velocityX, double velocityY){
    return (distanceToTarget - getDistanceTraveled(velocityX, velocityY));
}
