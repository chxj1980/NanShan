// **********************************************************************
//
// Copyright (c) 2003-2006 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.1.1
// Generated from file `Identity.ice'

#ifndef __Ice_Identity_h__
#define __Ice_Identity_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 301
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Ice
{

struct Identity
{
    ::std::string name;
    ::std::string category;

    ICE_API bool operator==(const Identity&) const;
    ICE_API bool operator!=(const Identity&) const;
    ICE_API bool operator<(const Identity&) const;
    ICE_API bool operator<=(const Identity& __rhs) const
    {
	return operator<(__rhs) || operator==(__rhs);
    }
    ICE_API bool operator>(const Identity& __rhs) const
    {
	return !operator<(__rhs) && !operator==(__rhs);
    }
    ICE_API bool operator>=(const Identity& __rhs) const
    {
	return !operator<(__rhs);
    }

    ICE_API void __write(::IceInternal::BasicStream*) const;
    ICE_API void __read(::IceInternal::BasicStream*);
};

typedef ::std::map< ::Ice::Identity, ::Ice::ObjectPtr> ObjectDict;

typedef ::std::vector< ::Ice::Identity> IdentitySeq;

class __U__IdentitySeq { };
ICE_API void __write(::IceInternal::BasicStream*, const ::Ice::Identity*, const ::Ice::Identity*, __U__IdentitySeq);
ICE_API void __read(::IceInternal::BasicStream*, IdentitySeq&, __U__IdentitySeq);

}

#endif
