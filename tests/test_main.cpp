#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <filesystem>

#include "compare_files.hpp"
#include "capture_output.hpp"

TEST_CASE("Check Program Output", "[compare_output]") {
    const std::filesystem::path root = PROJECT_ROOT_DIR;
    
    const std::filesystem::path cmd = root / "build" / "my_program";
    const std::filesystem::path actual = root / "tests" / "IO" / "program_output.txt";
    const std::filesystem::path expected = root / "tests" / "IO" / "correct_output.txt";

    REQUIRE_NOTHROW(capture_output(cmd.string(), actual.string()));
    REQUIRE_NOTHROW(compare_files(actual.string(), expected.string()));
}