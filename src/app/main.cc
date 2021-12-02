#include <iostream>

#include "app.hh"

int
main(int argc, char** argv)
{
    if(argc != 2)
    {
        std::cerr << "Usage: ./app <name>\n";
        return EXIT_FAILURE;
    }

    auto application = std::make_unique<app::App>(argv[1]);
    return application->run();
}
