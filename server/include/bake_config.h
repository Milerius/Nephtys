/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef NEPHTYS_SERVER_BAKE_CONFIG_H
#define NEPHTYS_SERVER_BAKE_CONFIG_H

/* Generated includes are specific to the bake environment. If a project is not
 * built with bake, it will have to provide alternative methods for including
 * its dependencies. */
#ifdef __BAKE__
/* Headers of public dependencies */
/* No dependencies */

/* Headers of private dependencies */
#ifdef NEPHTYS_SERVER_IMPL
/* No dependencies */
#endif
#endif

/* Convenience macro for exporting symbols */
#ifndef NEPHTYS_SERVER_STATIC
  #if NEPHTYS_SERVER_IMPL && defined _MSC_VER
    #define NEPHTYS_SERVER_EXPORT __declspec(dllexport)
  #elif NEPHTYS_SERVER_IMPL
    #define NEPHTYS_SERVER_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define NEPHTYS_SERVER_EXPORT __declspec(dllimport)
  #else
    #define NEPHTYS_SERVER_EXPORT
  #endif
#else
  #define NEPHTYS_SERVER_EXPORT
#endif

#endif
