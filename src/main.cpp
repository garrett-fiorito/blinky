#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main() {
    bn::core::init();
    bn::backdrop::set_color(bn::color(0, 0, 31));

    bn::keypad::a_pressed();

    while(true) {
        if (bn::keypad::a_pressed()) {
            bn::backdrop::set_color(bn::color(0, 31, 0));
        }
        if (bn::keypad::b_pressed()) {
            bn::backdrop::set_color(bn::color(31, 0, 0));
        }


        bn::core::update();
    
    }

}
