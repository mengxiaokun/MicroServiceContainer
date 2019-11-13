
#ifndef _ELASTOS_TRANSMITTER_H__
#define _ELASTOS_TRANSMITTER_H__

#include <memory>
#include <string>
#include "Service.h"

namespace elastos {

class Transmitter {
public:
    ~Transmitter()
    {
        s_instance = NULL;
    }

    static std::shared_ptr<Transmitter> Instance(const std::string& path, const std::string& publicKey, Service* service);

    int Start();

    int Stop();

    int SendMessage(const std::string& did, const std::string& msg);

private:
    Transmitter(Service* service)
        : mService(service)
    {
    }

private:
    static Transmitter* s_instance;

    Service* mService;
};

}

#endif //_ELASTOS_TRANSMITTER_H__
