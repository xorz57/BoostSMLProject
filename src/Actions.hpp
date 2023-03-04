#pragma once

#include <cstdio>

const auto Action1 = [](auto) {
    std::printf("Action1\n");
};

const auto Action2 = [](auto) {
    std::printf("Action2\n");
};

const auto ActionX = [](auto) {
    std::printf("ActionX\n");
};
