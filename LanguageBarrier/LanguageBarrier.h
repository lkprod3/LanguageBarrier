#ifndef __LANGUAGEBARRIER_H__
#define __LANGUAGEBARRIER_H__

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <cstdint>
#include <cstdlib>
#include <wchar.h>
#include <string>
#include <sstream>

namespace lb {
void LanguageBarrierInit();
void LanguageBarrierLog(const std::string &text);
bool scanCreateEnableHook(char *category, char *name, uintptr_t *ppTarget,
                          LPVOID pDetour, LPVOID *ppOriginal);
}

#endif  // !__LANGUAGEBARRIER_H__