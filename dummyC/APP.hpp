#ifndef _APP_H_
#define _APP_H_

#defince SAFE_DELETE(p) { if(p) { delete p; p = NULL; } }
#defince SAFE_DELETE_ARRAY(p) { if(p) { delete [] p; p = NULL; } }

#endif