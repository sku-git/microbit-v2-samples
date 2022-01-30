
#include <stdint.h>
#include <algorithm>
#include "CommandLine.h"

#include "boost_lib.h"
#include "Engine.h"

using namespace appcommon;

CommandLine::CommandLine()
{
}

CommandLine::~CommandLine()
{

}


void CommandLine::showCommands()
{
}


bool CommandLine::processCommand(const char* cmd)
{

    Engine::getEngine()->getUBit()->serial.printf("Processing : %s \r\n", cmd);

    std::string inCmd(cmd);
    std::string delim = " ";
    size_t pos = 0;
    std::vector<std::string> tokens;

    boost::split(tokens, inCmd, boost::is_any_of("\t"));

    for (size_t i = 0; i < entries.size(); i++)
    {
        entries.at(i)->process(tokens);
    }

    return true;
}

