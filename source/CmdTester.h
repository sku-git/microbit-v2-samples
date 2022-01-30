#ifndef __CMDTESTER_H__
#define __CMDTESTER_H__

#include <string>
#include <vector>
#include "CommandInterface.h"
#include "CommandProcessor.h"

using namespace appcommon;

class CmdTester : public CommandHandler
{
private:
public:
    CmdTester(CommandProcessor* processor);
    ~CmdTester();
    CommandData* getEntry();
    ProcessResponse process(std::vector<std::string> tokens);
};



#endif // __CMDTESTER_H__