// ===================================================================
#include "hxZipLibrary.hpp"
// ===================================================================
using namespace hxZip;
// ===================================================================


hxZipLibrary::hxZipLibrary()
    : m_library( 0 ),
      m_func( 0 )
{
    // Nothing to do...
}

hxZipLibrary::~hxZipLibrary()
{
    release();
}

void hxZipLibrary::load(const std::string& libraryPath /*= "7z.dll"*/)
{
    release();

    m_library = ::LoadLibraryA(libraryPath.c_str());
    if (m_library == 0)
    {
        // ToDo: Throw error
        return;
    }

    m_func = reinterpret_cast< CreateObjectFunc >(::GetProcAddress(m_library, "CreateObject"));
    if (m_func == 0)
    {
        release();
        // ToDo: Throw error
        return;
    }
}

void hxZipLibrary::release()
{
    if (m_library != 0)
    {
        if (!::FreeLibrary(m_library))
        {
            // ToDo: Throw error
        }
        m_library = 0;
    }
}
