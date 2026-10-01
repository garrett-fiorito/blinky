#include <bn_backdrop.h>
#include <bn_color.h>
#include <bn_core.h>
#include <bn_keypad.h>

int main()
{
    bn::core::init();
    bn::backdrop::set_color(bn::color(0, 0, 31));

    bn::keypad::a_pressed();

    while (true)
    {
        if (bn::keypad::a_held())
        { // Green when A is held
            bn::backdrop::set_color(bn::color(0, 31, 0));
        }
        else if (bn::keypad::b_held())
        { // Red when B is held
            bn::backdrop::set_color(bn::color(31, 0, 0));
        }
        else
        { // Blue when neither of those buttons are pressed
            bn::backdrop::set_color(bn::color(0, 0, 31));
        }

        bn::core::update();
    }
}
