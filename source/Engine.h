#ifndef __ENGINE_H__
#define __ENGINE_H__

#include "boost/shared_ptr.hpp"
#include "MicroBit.h"
#include "CommandLine.h"

namespace appcommon
{
    class Engine;
    typedef boost::shared_ptr<Engine> EnginePtr;
    typedef boost::shared_ptr<MicroBit> MicroBitPtr;
    typedef boost::shared_ptr<CommandLine> CommandLinePtr;

    class Engine
    {
    private:
        // Static
        static EnginePtr engine;

        // Non static
        MicroBitPtr uBitPtr;
        MicroBit * uBit;

        CommandLinePtr cliPtr;
        CommandLine * cli;        

        void resetAll();

    public:
        // Static
        static EnginePtr getEngine();
        static void destroyEngine();

        // non static
        Engine();
        ~Engine();
        void initialize();
        void start();
        void stop();
        void off();

        //Getters
        CommandLine * getCli();
        MicroBit * getUBit();
    };
}

#endif // __ENGINE_H__