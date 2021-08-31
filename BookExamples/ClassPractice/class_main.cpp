#include <iostream>
#include <string>
#include "class_hfile.h"

int main() {

    BigBilly cal(23, "Callum");
    cal.get_name();
    cal.get_age();
    cal.set_job("SEO Executive");
    cal.set_fave_sport("Athletics");
    cal.say_cunt();

    BigBilly kurt(23, "Kurtis", "Programmer", "Banging NJ");
    kurt.get_name();
    kurt.get_age();
    kurt.say_cunt();


    return {0};
}