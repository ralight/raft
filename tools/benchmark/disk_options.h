/* Options for the disk benchmark. */

#ifndef DISK_OPTIONS_H_
#define DISK_OPTIONS_H_

#include <stddef.h>

#include "profiler.h"

/* Options for the disk benchmark */
struct diskOptions
{
    char *dir;     /* Directory to use for creating temporary files */
    size_t buf;    /* Write buffer size */
    unsigned size; /* Size of the file to write, must be a multiple of buf */
    struct Profiler profiler; /* Kernel profiling settings */
};

#endif /* DISK_ARGS_H_ */
