#ifndef __CMDTESTER_H__
#define __CMDTESTER_H__

#include "CommandInterface.h"
#include "CommandProcessor.h"

using namespace appcommon;

class CmdTester : public CommandHandler
{
private:
public:
    CmdTester(CommandProcessor * processor);
    ~CmdTester();
    CommandData* getEntry();
    ProcessResponse process(std::string* cmds, uint8_t len);
};



#endif // __CMDTESTER_H__