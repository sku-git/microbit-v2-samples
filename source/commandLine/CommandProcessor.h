#ifndef __COMMANDPROCESSOR_H__
#define __COMMANDPROCESSOR_H__

#include <vector>
#include "CommandInterface.h"

namespace appcommon
{
    class CommandProcessor {
    protected:
        std::vector<CommandHandler*> entries;

    public:
        CommandProcessor();
        ~CommandProcessor();
        bool registerEntry(CommandHandler* entry);
    };
}
#endif // __COMMANDPROCESSOR_H__