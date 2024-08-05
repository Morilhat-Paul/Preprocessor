#pragma once

#ifdef MACRO
    #define VAR_NAME(name) var__##name
    #define CONST_NAME(name) const__##name
#endif

#define likely(x)      __builtin_expect(!!(x), 1)
#define unlikely(x)    __builtin_expect(!!(x), 0)
