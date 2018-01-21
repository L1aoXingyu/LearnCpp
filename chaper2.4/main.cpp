#include "func.h"

int main() {
    const double height = getInitialHeight();
    double fall_height;
    int time = 0;
    fall_height = computeDistanceFall(time);
    outputResult(height, fall_height, time);
    time += 1;
    fall_height = computeDistanceFall(time);
    outputResult(height, fall_height, time);
    time += 1;
    fall_height = computeDistanceFall(time);
    outputResult(height, fall_height, time);
    time += 1;
    fall_height = computeDistanceFall(time);
    outputResult(height, fall_height, time);
    time += 1;
    fall_height = computeDistanceFall(time);
    outputResult(height, fall_height, time);
    time += 1;
    fall_height = computeDistanceFall(time);
    outputResult(height, fall_height, time);
    return 0;
}