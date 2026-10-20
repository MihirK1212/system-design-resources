#ifndef BUTTON_H
#define BUTTON_H

class Button {
    public:
        Button();
        bool press();
        bool isPressed();
    private:
        bool isPressedStatus;
};

#endif
