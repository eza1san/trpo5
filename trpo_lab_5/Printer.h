#include <iostream>
using namespace std;

class Printer {
private:
    bool isOn;
    bool hasPaper;
    bool isPrinting;

public:
    Printer();
    Printer(bool newIsOn, bool newHasPaper, bool newIsPrinting);

    bool getIsOn();
    bool getHasPaper();
    bool getIsPrinting();

    void setIsOn(bool newIsOn);
    void setHasPaper(bool newHasPaper);
    void setIsPrinting(bool newIsPrinting);

    void changeIsOn();
    void changeHasPaper();
    void changeIsPrinting();
};
