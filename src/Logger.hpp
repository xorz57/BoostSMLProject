#pragma once

#include <boost/sml.hpp>

#include <cstdio>

namespace sml = boost::sml;

struct Logger {
    template <class SM, class TEvent>
    void log_process_event(const TEvent&) const {
        auto state_machine = sml::aux::get_type_name<SM>();
        auto event = sml::aux::get_type_name<TEvent>();
        std::printf("[%s][process_event] %s\n", state_machine, event);
    }

    template <class SM, class TGuard, class TEvent>
    void log_guard(const TGuard&, const TEvent&, bool result) const {
        auto sm = sml::aux::get_type_name<SM>();
        auto guard = sml::aux::get_type_name<TGuard>();
        auto event = sml::aux::get_type_name<TEvent>();
        std::printf("[%s][guard] %s %s %s\n", sm, guard, event, (result ? "[OK]" : "[Reject]"));
    }

    template <class SM, class TAction, class TEvent>
    void log_action(const TAction&, const TEvent&) const {
        auto sm = sml::aux::get_type_name<SM>();
        auto action = sml::aux::get_type_name<TAction>();
        auto event = sml::aux::get_type_name<TEvent>();
        std::printf("[%s][action] %s %s\n", sm, action, event);
    }

    template <class SM, class TSrcState, class TDstState>
    void log_state_change(const TSrcState& src, const TDstState& dst) const {
        auto sm = sml::aux::get_type_name<SM>();
        std::printf("[%s][transition] %s -> %s\n", sm, src.c_str(), dst.c_str());
    }
};
