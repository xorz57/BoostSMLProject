#pragma once

const auto Guard1 = [](auto event) {
    return event.flag;
};

const auto Guard2 = [](auto event) {
    return event.flag;
};

const auto GuardX = [](auto event) {
    return event.flag;
};
