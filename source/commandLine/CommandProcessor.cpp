#include "CommandProcessor.h"
#include "CommandInterface.h"

using namespace appcommon;

CommandProcessor::CommandProcessor()
{

}

CommandProcessor::~CommandProcessor()
{

}

bool CommandProcessor::registerEntry(CommandHandler* entry)
{
    entries.push_back(entry);
    return true;
}
