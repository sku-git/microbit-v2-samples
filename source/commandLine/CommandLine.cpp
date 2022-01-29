
#include <stdint.h>
#include <algorithm>
#include "CommandLine.h"

#include "MicroBit.h"

#include "boost_lib.h"

extern MicroBit uBit;
using namespace appcommon;

CommandLine::CommandLine()
{
}

CommandLine::~CommandLine()
{

}

static void showDisplay(const char* s)
{
    using namespace boost;

    unsigned int c = boost::lexical_cast<unsigned int>(s, 1);
    unsigned int out = 2 * c;
    const std::string indata = boost::lexical_cast<std::string>(c);
    const std::string os = boost::lexical_cast<std::string>(out);

    uBit.display.scroll(indata.data());
    uBit.display.scroll(":");
    uBit.display.scroll(os.data());
}

void CommandLine::showCommands()
{
    const char* nums[] = { "1", "2", "3" };
    for (int i = 0; i < 3; i++)
    {
        showDisplay(nums[i]);
        uBit.sleep(1000);
    }
}


bool CommandLine::processCommand(const char * cmd) 
{
    std::string cmd1(cmd);

    for(size_t i = 0; i < entries.size(); i++)
    {
        entries.at(i)->process(&cmd1, 1);
    }

    return true;
}


