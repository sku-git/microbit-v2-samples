#ifndef __COMMANDLINE_H__
#define __COMMANDLINE_H__

#include <string>
#include "CommandInterface.h"
#include "CommandProcessor.h"

namespace appcommon
{
    class CommandLine : public CommandProcessor
    {
    private:
        std::string * cmd;
    public:
        CommandLine();
        ~CommandLine();
        void showCommands();
        bool processCommand(const char *cmd);
        
    };

}
// namespace appcommon

#endif // __COMMANDLINE_H__