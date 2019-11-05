// **********************************************************************
//
// Copyright (c) 2003-2006 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.1.1
// Generated from file `RouterF.ice'

#ifndef __Glacier2_RouterF_h__
#define __Glacier2_RouterF_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 301
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef GLACIER2_API
#   ifdef GLACIER2_API_EXPORTS
#       define GLACIER2_API ICE_DECLSPEC_EXPORT
#   else
#       define GLACIER2_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IceProxy
{

namespace Glacier2
{

class Router;
GLACIER2_API bool operator==(const Router&, const Router&);
GLACIER2_API bool operator!=(const Router&, const Router&);
GLACIER2_API bool operator<(const Router&, const Router&);
GLACIER2_API bool operator<=(const Router&, const Router&);
GLACIER2_API bool operator>(const Router&, const Router&);
GLACIER2_API bool operator>=(const Router&, const Router&);

}

}

namespace Glacier2
{

class Router;
GLACIER2_API bool operator==(const Router&, const Router&);
GLACIER2_API bool operator!=(const Router&, const Router&);
GLACIER2_API bool operator<(const Router&, const Router&);
GLACIER2_API bool operator<=(const Router&, const Router&);
GLACIER2_API bool operator>(const Router&, const Router&);
GLACIER2_API bool operator>=(const Router&, const Router&);

}

namespace IceInternal
{

GLACIER2_API void incRef(::Glacier2::Router*);
GLACIER2_API void decRef(::Glacier2::Router*);

GLACIER2_API void incRef(::IceProxy::Glacier2::Router*);
GLACIER2_API void decRef(::IceProxy::Glacier2::Router*);

}

namespace Glacier2
{

typedef ::IceInternal::Handle< ::Glacier2::Router> RouterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::Router> RouterPrx;

GLACIER2_API void __write(::IceInternal::BasicStream*, const RouterPrx&);
GLACIER2_API void __read(::IceInternal::BasicStream*, RouterPrx&);
GLACIER2_API void __write(::IceInternal::BasicStream*, const RouterPtr&);
GLACIER2_API void __patch__RouterPtr(void*, ::Ice::ObjectPtr&);

}

namespace Glacier2
{

}

namespace IceProxy
{

namespace Glacier2
{

}

}

namespace IceDelegate
{

namespace Glacier2
{

}

}

namespace IceDelegateM
{

namespace Glacier2
{

}

}

namespace IceDelegateD
{

namespace Glacier2
{

}

}

#endif
