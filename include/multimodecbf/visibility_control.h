#ifndef MULTIMODECBF__VISIBILITY_CONTROL_H_
#define MULTIMODECBF__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define MULTIMODECBF_EXPORT __attribute__ ((dllexport))
    #define MULTIMODECBF_IMPORT __attribute__ ((dllimport))
  #else
    #define MULTIMODECBF_EXPORT __declspec(dllexport)
    #define MULTIMODECBF_IMPORT __declspec(dllimport)
  #endif
  #ifdef MULTIMODECBF_BUILDING_LIBRARY
    #define MULTIMODECBF_PUBLIC MULTIMODECBF_EXPORT
  #else
    #define MULTIMODECBF_PUBLIC MULTIMODECBF_IMPORT
  #endif
  #define MULTIMODECBF_PUBLIC_TYPE MULTIMODECBF_PUBLIC
  #define MULTIMODECBF_LOCAL
#else
  #define MULTIMODECBF_EXPORT __attribute__ ((visibility("default")))
  #define MULTIMODECBF_IMPORT
  #if __GNUC__ >= 4
    #define MULTIMODECBF_PUBLIC __attribute__ ((visibility("default")))
    #define MULTIMODECBF_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define MULTIMODECBF_PUBLIC
    #define MULTIMODECBF_LOCAL
  #endif
  #define MULTIMODECBF_PUBLIC_TYPE
#endif
#endif  // MULTIMODECBF__VISIBILITY_CONTROL_H_
// Generated 21-Oct-2026 13:35:38
// Copyright 2019-2020 The MathWorks, Inc.
