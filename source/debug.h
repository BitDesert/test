#define MAX_DEBUG_LEVEL 1000

#define DEBUG( level, body ) \
  (void)( ((level) <= MAX_DEBUG_LEVEL) && (dbgtext body) )

int dbgtext( const char *, ... );
