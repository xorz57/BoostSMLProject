#include "Logger.hpp"
#include "Transitions.hpp"

#include <cassert>

int main() {
    Logger logger;
    sml::sm<Transitions, sml::logger<Logger>> sm{logger};
    sm.process_event(Event1{true});
    sm.process_event(Event2{true});
    sm.process_event(EventX{true});
}
