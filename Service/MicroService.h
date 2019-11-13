
#ifndef __ELASTOS_MICRO_SERVICE_H__
#define __ELASTOS_MICRO_SERVICE_H__

#include <memory>
#include <string>
#include "Service.h"
#include "Transmitter.h"

namespace elastos {

class MicroService : public Service {

public:
    MicroService(const std::string& path, const std::string& publicKey)
        : Service(path, publicKey)
    {
        Init();
    }

    ~MicroService()
    {}

    virtual int Start();

    virtual int Stop();

    virtual int HandleMessage(const std::string& did, const std::string& msg);

private:
    void Init();

private:

    std::shared_ptr<Transmitter> mTransmitter;

};

}

#endif //__ELASTOS_MICRO_SERVICE_H__
