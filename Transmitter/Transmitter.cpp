
#include "Transmitter.h"

namespace elastos {

Transmitter* Transmitter::s_instance = NULL;

std::shared_ptr<Transmitter> Transmitter::Instance(const std::string& path, const std::string& publicKey, Service* service)
{
    if (s_instance == NULL) {
        s_instance = new Transmitter(service);

    }

    return std::shared_ptr<Transmitter>(s_instance);
}

int Transmitter::Start()
{
    printf("Transmitter start!\n");
    return 0;
}

int Transmitter::Stop()
{
    printf("Transmitter stop!\n");
    return 0;
}

int Transmitter::SendMessage(const std::string& did, const std::string& msg)
{
    printf("Transmitter SendMessage!\n");
    return 0;
}

}
