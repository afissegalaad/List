#ifndef TRACE
#define TRACE

#ifdef DEBUG		    
#define TRACE_DEBUG(out,msg) fprintf(out,msg);
#else
#define TRACE_DEBUG(out,msg)
#endif

#endif
