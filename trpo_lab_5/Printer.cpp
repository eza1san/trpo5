#include "Printer.h"

Printer::Printer() {
    isOn = false;
    hasPaper = false;
    isPrinting = false;
}

Printer::Printer(bool newIsOn, bool newHasPaper, bool newIsPrinting) {
    isOn = newIsOn;
    hasPaper = newHasPaper;
    isPrinting = newIsPrinting;
}

bool Printer::getIsOn() {
    return isOn;
}
bool Printer::getHasPaper() {
    return hasPaper;
}
bool Printer::getIsPrinting() {
    return isPrinting;
}

void Printer::setIsOn(bool newIsOn) {
    isOn = newIsOn;
}
void Printer::setHasPaper(bool newHasPaper) {
    hasPaper = newHasPaper;
}
void Printer::setIsPrinting(bool newIsPrinting) {
    isPrinting = newIsPrinting;
}

void Printer::changeIsOn() {
    isOn = !isOn;
}
void Printer::changeHasPaper() {
    hasPaper = !hasPaper;
}
void Printer::changeIsPrinting() {
    isPrinting = !isPrinting;
}

