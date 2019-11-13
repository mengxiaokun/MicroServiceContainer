

#ifndef __ELASTOS_SERVICE_H__
#define __ELASTOS_SERVICE_H__


namespace elastos {

class Service {
public:
    Service(const std::string& path, const std::string& publicKey)
        : mPath(path)
        , mPublicKey(publicKey)
    {}

    virtual int Start() = 0;

    virtual int Stop() = 0;

    virtual int HandleMessage(const std::string& did, const std::string& msg) = 0;

protected:
    std::string mPath;
    std::string mPublicKey;
};

}

#endif //__ELASTOS_SERVICE_H__
