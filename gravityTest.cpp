#include "mathConstants.h"
#include <iostream>

double getUserMetersInput() {
    double userMeters;
    std::cin >> userMeters;
    return userMeters;
}

double calculateBallHeight(double initialHeight ,double seconds) {
    double distanceFallen = GRAVITY * ((seconds * seconds) / 2);
    double currentHeight = initialHeight - distanceFallen;

    return currentHeight;
}

void printHeight(double height, int seconds) {
    if (height > 0.0)
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
    else
        std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

void calculateAndPrintHeight(double initialHeight, int seconds)
{
    double height = calculateBallHeight(initialHeight, seconds);
    printHeight(height, seconds);
}

void gravityTest() {
    double initialHeight = getUserMetersInput();
    calculateAndPrintHeight(initialHeight, 0);
    calculateAndPrintHeight(initialHeight, 1);
    calculateAndPrintHeight(initialHeight, 2);
    calculateAndPrintHeight(initialHeight, 3);
    calculateAndPrintHeight(initialHeight, 4);
    calculateAndPrintHeight(initialHeight, 5);
}