
/*
 * xstress - xk0derz SMTP Stress Tester
 *
 * (c) Amit Singh, amitcz@yahoo.com
 * xk0der.wordpress.com
 *
 * This software and related files are licensed under GNU GPL version 2
 * Please visit the following webpage for more details
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
 */

#ifndef __USERINTERFACE_H__
#define __USERINTERFACE_H__

#include "config.h"

using namespace std;

class UserInterface
{
   unsigned int uiOverride;
   public:
   string sConfigFile;
   
   int uiServerPort;
   string sServerIP;
   string sLogFile;
   int uiThreads;
   int uiMailsPerThread;
   int uiTimeout;

   UserInterface();
   int processOptions(int argc, char *argv[]);
   unsigned int override();
   void setConfig(Config &configObj);
};

#endif