# hxZip

This is a C++ wrapper for accessing the 7-zip API in 7z.dll and 7za.dll. This code is heavily based on the LZMA SDK.

# Basic usage

1. Load the 7zip-dll into the memory

```
#include <hxZip/hxZipLibrary.hpp>

hxZip::hxZipLibrary lib;
lib.load(); // Load 7z.dll
```

If the library is not stored in the target-directory be sure to enter the path to the 7-zip dll.
Attention: Be careful with 64-bit and 32-bit versions.

```lib.Load(_T("path\\to\\7za.dll"));```
