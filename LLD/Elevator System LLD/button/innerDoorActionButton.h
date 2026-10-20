#ifndef INNER_DOOR_ACTION_BUTTON_H
#define INNER_DOOR_ACTION_BUTTON_H

#include "./button.h"
#include "../enum.h"

class InnerDoorActionButton: public Button {
    public:
        InnerDoorActionButton();
    private:
        DoorAction doorAction;
};

#endif
