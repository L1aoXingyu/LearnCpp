//
// Created by liaoxingyu on 1/18/18.
//

#include <iostream>
#include "io.h"

int main() {
    double x, y;
    x = readNumber();
    y = readNumber();
    char op;
    op = readOp();
    computeAnswer(x, y, op);
}
