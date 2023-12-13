#ifndef QKEYCHAIN_EXPORT_H
#define QKEYCHAIN_EXPORT_H

#include <QtCore/qglobal.h>
#ifdef QKEYCHAIN_STATICLIB
    #undef QKEYCHAIN_SHAREDLIB
    #define QKEYCHAIN_EXPORT
#else
    #if defined(QKEYCHAIN_SHAREDLIB)
        #define QKEYCHAIN_EXPORT Q_DECL_EXPORT
    #else
        #define QKEYCHAIN_EXPORT Q_DECL_IMPORT
    #endif
#endif

#endif //QKEYCHAIN_EXPORT_H
