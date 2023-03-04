#include "Logger.hpp"
#include "Transitions.hpp"

#include <cassert>

int main() {
    Logger logger;
    sml::sm<Transitions, sml::logger<Logger>> sm{logger};
    assert(sm.is(sml::state<State0>));

    sm.process_event(Event1{true});
    assert(sm.is(sml::state<State1>));

    sm.process_event(Event2{true});
    assert(sm.is(sml::state<State2>));

    sm.process_event(EventX{true});
    assert(sm.is(sml::X));
}
