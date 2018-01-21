//
// Created by liaoxingyu on 1/21/18.
//

#include <iostream>
#include "constants.h"

double getInitialHeight() {
    std::cout << "Enter the initial height of the tower in meters: ";
    double height;
    std::cin >> height;
    return height;
}

double computeDistanceFall(int time) {
    double fall_height;
    fall_height = 0.5 * myConstants::gravity * time * time;
    return fall_height;
}

void outputResult(double height, double fall_height, int time) {
    if (fall_height > height)
        std::cout << "At " << time << " seconds, the ball is on the ground." << '\n';
    else
        std::cout << "At " << time << " seconds, the ball is at height: " << height - fall_height << " meters" << '\n';
}