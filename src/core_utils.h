#ifndef __CORE_UTILS__
#define __CORE_UTILS__

#include "core.h"
	

/* === 以下方法为一些运行时检查配置方法 === */

// 获取监听端口
#define CORE_LISTEN_PORT() getenv("CORE_LISTEN_PORT")

// 获取当前模式
#define CORE_ENV_MODE() getenv("CORE_ENV_MODE")

#endif