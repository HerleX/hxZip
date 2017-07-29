// ===================================================================
// Project: hxZip - C++ wrapper for 7-zip LZMA SDK
// Copyright (c) 2017 herlex
// ===================================================================

// ===================================================================
#ifndef hxZip_hxZipLibrary
#define hxZip_hxZipLibrary
// ===================================================================
#include <string>
#include <Windows.h>
// ===================================================================


namespace hxZip
{
    class hxZipLibrary
    {
    public:
        hxZipLibrary();
        ~hxZipLibrary();

        void load(const std::string& libraryPath = "7z.dll");
        void release();

    private:
        typedef UINT32(WINAPI* CreateObjectFunc)(const GUID* clsID, const GUID* interfaceID, void** outObject);

        HMODULE m_library;
        CreateObjectFunc m_func;
    };
}


#endif
