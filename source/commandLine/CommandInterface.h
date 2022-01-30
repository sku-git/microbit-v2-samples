#ifndef __COMMANDINTERFACE_H__
#define __COMMANDINTERFACE_H__

#include <stdint.h>
#include <string>
#include <vector>

namespace appcommon
{
    struct CommandData_s {
        const std::string title;
        const std::string description;
        const std::string options;
    };

    typedef struct CommandData_s CommandData;

    enum ProcessResponse_e {
        COMMAND_DONE,
        COMMAND_REPEAT,
        COMMAND_ERROR
    };

    typedef enum ProcessResponse_e ProcessResponse;

    class CommandHandler {
    public:
        virtual CommandData* getEntry();
        virtual ProcessResponse process(std::vector<std::string> cmds);
    };

} // namespace appcommon

#endif // __COMMANDINTERFACE_H__