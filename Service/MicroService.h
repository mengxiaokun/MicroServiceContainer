
#ifndef __ELASTOS_MICRO_SERVICE_H__
#define __ELASTOS_MICRO_SERVICE_H__

#include <memory>
#include <string>
#include "IMicroService.h"
#include "Transmitter.h"

namespace elastos {

class MicroService : public IMicroService {

public:
    MicroService(const std::string& path, const std::string& publicKey)
        : mPath(path)
        , mPublicKey(publicKey)
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


protected:
    std::string mPath;
    std::string mPublicKey;

private:
    std::shared_ptr<Transmitter> mTransmitter;

};

}

#endif //__ELASTOS_MICRO_SERVICE_H__
