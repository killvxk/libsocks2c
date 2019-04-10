#pragma once

#if defined(PROTOCOL_CHACHA20) 
const char* ENCRYPTION_METHOD = "PROTOCOL_CHACHA20";
#elif defined(PROTOCOL_CHACHA20POLY1305)
const char* ENCRYPTION_METHOD = "PROTOCOL_CHACHA20POLY1305";
#elif defined(PROTOCOL_AES256GCM)
const char* ENCRYPTION_METHOD = "PROTOCOL_AES256GCM";
#endif