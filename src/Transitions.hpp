#pragma once

#include "Actions.hpp"
#include "Events.hpp"
#include "Guards.hpp"
#include "States.hpp"

#include <boost/sml.hpp>

namespace sml = boost::sml;

struct Transitions {
    auto operator()() const noexcept {
        using namespace sml;
        return make_transition_table(
            *state<State0> + event<Event1> [Guard1] / Action1 = state<State1>
            ,state<State1> + event<Event2> [Guard2] / Action2 = state<State2>
            ,state<State2> + event<EventX> [GuardX] / ActionX = X
        );
    }
};
