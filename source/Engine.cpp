#include "Engine.h"

using namespace appcommon;

EnginePtr Engine::engine = nullptr;

void Engine::resetAll()
{
    MicroBitPtr(uBitPtr).reset();
    CommandLinePtr(cliPtr).reset();
}

Engine::Engine()
{
    uBitPtr = MicroBitPtr(new MicroBit);
    uBit = uBitPtr.get();

    cliPtr = CommandLinePtr(new CommandLine);
    cli = cliPtr.get();
}

Engine::~Engine()
{
    resetAll();
}


EnginePtr Engine::getEngine()
{
    if (Engine::engine == nullptr) {
        Engine::engine = EnginePtr(new Engine());
    }

    return Engine::engine;
}

void Engine::destroyEngine()
{
    delete Engine::engine.get();
    Engine::engine = nullptr;
}



void Engine::initialize()
{
    uBit->init();
}

void Engine::start()
{

}

void Engine::stop()
{

}

void Engine::off()
{
    resetAll();
}

CommandLine* Engine::getCli()
{
    return cli;
}

MicroBit* Engine::getUBit()
{
    return uBit;
}
