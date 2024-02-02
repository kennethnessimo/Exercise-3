#pragma once
#include "std_lib_facilities.h"
double acclY();
double velY(double initVelocityY, double time);
double posX(double initPositionX, double initVelocityX, double time);
double posY(double initPositionY, double initVelocityY, double time);
void printTime(double time);
double flightTime(double initVelocityY);

// Ber brukeren om en vinkel i grader
double getUserInputTheta();
//Ber brukeren om en startfart
double getUserInputInitVelocity();
// Konverterer fra grader til radianer
double degToRad(double deg);
// Returnerer henholdsvis farten i x-, og y-retning, gitt en vinkel
// theta i grader og en startfart initVelocity.
double getVelocityX(double theta, double initVelocity);
double getVelocityY(double theta, double initVelocity);
// Dekomponerer farten gitt av initVelocity, i x- og y-komponentene
// gitt vinkelen theta. Det første elementet i vectoren skal være
//x-komponenten, og det andre elementet skal være y-komponenten.
// "Vector" i funksjonsnavnet er vektor-begrepet i geometri
vector<double> getVelocityVector(double theta, double initVelocity);
double getDistanceTraveled(double velocityX, double velocityY);
double targetPractice(double distanceToTarget, double velocityX, double velocityY);
void playTargetPractice();


