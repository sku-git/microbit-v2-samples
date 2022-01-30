
#include "CmdTester.h"


CmdTester::CmdTester(CommandProcessor * processor) 
{
    processor->registerEntry(this);
}

CmdTester::~CmdTester()
{

}

CommandData* CmdTester::getEntry()
{
    return nullptr;
}

ProcessResponse CmdTester::process(std::vector<std::string> tokens)
{
    return ProcessResponse::COMMAND_ERROR;
}

