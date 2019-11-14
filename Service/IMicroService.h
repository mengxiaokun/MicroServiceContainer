

#ifndef __ELASTOS_IMICROSERVICE_H__
#define __ELASTOS_IMICROSERVICE_H__


namespace elastos {

class IMicroService {

public:
    virtual int Start() = 0;

    virtual int Stop() = 0;

    virtual int HandleMessage(const std::string& did, const std::string& msg) = 0;

};

}

#endif //__ELASTOS_IMICROSERVICE_H__
