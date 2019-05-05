#pragma once
#ifdef HELLOWORLD_LIBRARY_EXPORT
#define HELLOWORLD_API __declspec(dllexport)
#else
#define HELLOWORLD_API __declspec(dllimport)
#endif

extern "C" void HelloWorld();
