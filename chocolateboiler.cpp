#include "Chocolateboiler.h"


ChocolateBoiler* ChocolateBoiler::uniqueInstance = 0;


ChocolateBoiler::ChocolateBoiler(){
    empty = true;
    boiled = false;
}


ChocolateBoiler* ChocolateBoiler::getInstance() {

    if (uniqueInstance == nullptr) {
        uniqueInstance = new ChocolateBoiler();
    }

    return uniqueInstance;
}


void ChocolateBoiler::fill() {

    if (isEmpty()) {
        empty = false;
        boiled = false;
    }

}


void ChocolateBoiler::drain() {

    if (!isEmpty() && isBoiled()) {
        empty = true;
    }

}


void ChocolateBoiler::boil() {

    if (!isEmpty() && !isBoiled()) {
        boiled = true;
    }

}


bool ChocolateBoiler::isEmpty() {
    return empty;
}


bool ChocolateBoiler::isBoiled() {
    return boiled;
}
