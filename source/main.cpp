#include "Engine.h"
#include "CmdTester.h"

int
main()
{
    Engine * engine = Engine::getEngine().get();
    engine->initialize();

    CmdTester tester(engine->getCli());

    while (1)
    {
        engine->getUBit()->display.scroll("What Ho Jeeves!");
        engine->getCli()->processCommand("Test Command");
    }
}


// #include "MicroBit.h"
// #include "CommandLine.h"
// #include "CmdTester.h"

// MicroBit uBit;

// int
// main1()
// {
//     uBit.init();

//     appcommon::CommandLine cli;
//     cli.showCommands();

//     CmdTester tester(&cli);

//     while (1)
//     {
//         uBit.display.scroll("What Ho!");
//         cli.processCommand("Test Command");
//     }
// }

