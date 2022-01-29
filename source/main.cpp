#include "MicroBit.h"
#include "commandLine.h"

MicroBit uBit;

int 
main()
{
    uBit.init();

    appcommon::CommandLine cli;
    cli.showCommands();

    while(1)
        uBit.display.scroll("What Ho!");
}