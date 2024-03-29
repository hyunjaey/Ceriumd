//Copyright (c) 2021 Heewon Cho

#ifndef _CERIUM_NET_PROTOCOL_PROTOCOL
#define _CERIUM_NET_PROTOCOL_PROTOCOL

#include "net/Socket.hpp"
#include "net/protocol/NetByte.hpp"
#include "tools/TimeStamp.hpp"
#include "crypto/Crypto.hpp"
#include "constant/Version.hpp"

class Protocol {
    public:
        static NetByte::header HeaderBuilder(short type, void *payload, size_t size);
        static int Version(Socket *socket);
};

#endif