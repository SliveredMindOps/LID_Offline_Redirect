#include "stdafx.h"
HANDLE stdHandle = NULL;
void ConsoleWrite(const char *lpBuffer) {
#ifdef LID_DEBUG
	if (stdHandle == NULL)
		stdHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	WriteConsole(stdHandle, lpBuffer, strlen(lpBuffer), NULL, NULL);
#endif // DEBUG
}