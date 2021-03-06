
/*
 * Copyright (C) Max Romanov
 * Copyright (C) NGINX, Inc.
 */

#ifndef _NXT_GO_LOG_H_INCLUDED_
#define _NXT_GO_LOG_H_INCLUDED_


#include <stdio.h>
#include <pthread.h>

#include <nxt_auto_config.h>

#if (NXT_DEBUG)

#define nxt_go_debug(fmt, ARGS...) \
    fprintf(stderr, "[go debug] " fmt "\n", ##ARGS)

#else

#define nxt_go_debug(fmt, ARGS...)

#endif

#define nxt_go_warn(fmt, ARGS...) \
    fprintf(stderr, "[go warn] " fmt "\n", ##ARGS)

#define nxt_go_error(fmt, ARGS...) \
    fprintf(stderr, "[go error] " fmt "\n", ##ARGS)


#endif /* _NXT_GO_LOG_H_INCLUDED_ */
