//
// Created by sztergbaum roman on 2019-04-21.
//

#include <loguru.hpp>
#include <nephtys/utils/pretty_function.hpp>
#include <nephtys/input/sfml.input.hpp>

namespace nephtys::sfml
{
    input::input(sf::RenderWindow &win) noexcept : win_(win)
    {
        VLOG_SCOPE_F(loguru::Verbosity_INFO, pretty_function);
    }
}
