
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

ProcessResponse CmdTester::process(std::string* cmds, uint8_t len)
{
    return ProcessResponse::COMMAND_ERROR;
}

