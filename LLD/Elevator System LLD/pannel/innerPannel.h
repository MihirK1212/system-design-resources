#ifndef INNER_PANNEL_H
#define INNER_PANNEL_H

#include<vector>

#include "./pannel.h"
#include "../button/innerFloorButton.h"
#include "../button/innerDoorActionButton.h"
#include "../enum.h"

class InnerPannel: public Pannel {
    public:
        InnerPannel();
        void pressFloorButton(int floorNumber);
        void pressDoorActionButton(DoorAction doorAction);
    private:
        std::vector<InnerFloorButton> floorButtons;
        std::vector<InnerDoorActionButton> doorActionButtons;
};

#endif
