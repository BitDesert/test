#include <stdio.h>
#include <stdarg.h>

#define DBGC_MAX_FIXED 22

int DEBUGLEVEL_CLASS[DBGC_MAX_FIXED + 1] = { 0 , 0 };

int dbgtext(const char *format, ...) 
{
	va_list args;
	va_start(args,format);
	vprintf(format,args);
	va_end(args);
	return 0;
};
