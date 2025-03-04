#ifndef UIBASE_MOASSERT_INCLUDED
#define UIBASE_MOASSERT_INCLUDED

#include "log.h"

namespace MOBase
{

template <class T>
inline void MOAssert(
  T&& t, const char* exp, const char* file, int line, const char* func)
{
  if (!t)
  {
    log::error("assertion failed: {}:{} {}: '{}'", file, line, func, exp);

//    if (IsDebuggerPresent()) {
//      DebugBreak();
//    }
    std::cerr << "FIXME: Not implemented" + std::string(" \e]8;;eclsrc://") + __FILE__ + ":" + std::to_string(__LINE__) + "\a" + __FILE__ + ":" + std::to_string(__LINE__) + "\e]8;;\a\n"; assert(false && "Not implemented");
  }
}

} // namespace

#ifdef _WIN32
#define MO_ASSERT(v) MOAssert(v, #v, __FILE__, __LINE__, __FUNCSIG__)
#else
#define MO_ASSERT(v) MOAssert(v, #v, __FILE__, __LINE__, __PRETTY_FUNCTION__)
#endif

#endif // UIBASE_MOASSERT_INCLUDED
