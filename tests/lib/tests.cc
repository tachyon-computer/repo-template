/**
 * Copyright (c) 2022, Filip Demski <glamhoth@protonmail.com>
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <StubLib/lib.hh>

TEST_CASE("stub lib", "[lib]") {
    std::string testString = "test_string";

    SECTION("capitalize works") {
        lib::Lib::capitalize(testString);
        REQUIRE(testString == "TEST_STRING");
    }
}
