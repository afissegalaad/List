#ifndef TRACE
#define TRACE

#include <string.h>

#ifdef DEBUG		    
#define TRACE_DEBUG(out) fprintf(out,"%s:%d (%s)\n",__FILE__,__LINE__,__func__);
#define TRACE_DEBUG_MSG(out,msg) fprintf(out,"%s:%d (%s) %s\n",__FILE__,__LINE__,__func__,msg);
#else
#define TRACE_DEBUG(out)
#define TRACE_DEBUG_MSG(out,msg)
#endif

#endif
