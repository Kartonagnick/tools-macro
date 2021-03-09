// [2021y-02m-15d][23:28:19] Idrisov Denis R.
#pragma once
#ifndef dTOOLS_MACRO_CONFINFO_USED_
#define dTOOLS_MACRO_CONFINFO_USED_ 100
//================================================================================
//================================================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

#ifdef _MSC_VER
    #ifdef STABLE_RELEASE
        #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": STABLE_RELEASE")
    #else
        #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": UNSTABLE_RELEASE")
    #endif

    #ifdef dFULL_VERSION
    #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": " dFULL_VERSION)
    #endif

    #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": enabled -> pch")

    #ifdef _DLL
        #ifdef _DEBUG
            #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": enabled -> MDd (debug-dynamic runtime c++)")
        #else
            #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": enabled -> MD (release-dynamic runtime c++)")
        #endif
    #else
        #ifdef _DEBUG
            #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": enabled -> MTd (debug-static runtime c++)")
        #else
            #pragma message(dSSTRINGIZE(dBUILD_TARGET) ": enabled -> MT (release-static runtime c++)")
        #endif
    #endif

#endif // !_MSC_VER

//================================================================================
//================================================================================
#endif // !dTOOLS_MACRO_CONFINFO_USED_