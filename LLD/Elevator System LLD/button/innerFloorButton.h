#ifndef INNNER_FLOOR_BUTTON_H
#define INNNER_FLOOR_BUTTON_H

#include "./button.h"

class InnerFloorButton: public Button {
    public:
        InnerFloorButton();
    private:
        int floorNumber;
};

#endif
