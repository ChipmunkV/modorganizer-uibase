#ifndef UIBASE_ERRORCODES_H
#define UIBASE_ERRORCODES_H

#include <cstdint>
#include "dllimport.h"
//#include <Windows.h>

using DWORD = uint32_t;

namespace MOBase
{

QDLLEXPORT const wchar_t* errorCodeName(DWORD code);

} // namespace

#endif // UIBASE_ERRORCODES_H
