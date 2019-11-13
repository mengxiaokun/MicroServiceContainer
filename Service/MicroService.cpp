
#include "MicroService.h"

namespace elastos {

extern "C" MicroService* CreateService(const std::string& path, const std::string& publicKey)
{
    return new MicroService(path, publicKey);
}

void MicroService::Init()
{
    mTransmitter = Transmitter::Instance(mPath, mPublicKey, this);
}

int MicroService::Start()
{
    if (mTransmitter.get() == NULL) return -1;
    printf("Service start!\n");

    return mTransmitter->Start();
}

int MicroService::Stop()
{
    if (mTransmitter.get() == NULL) return -1;
    printf("Service stop!\n");

    return mTransmitter->Stop();
}

int MicroService::HandleMessage(const std::string& did, const std::string& msg)
{
    return 0;
}

}
