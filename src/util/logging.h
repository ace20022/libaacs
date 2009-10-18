
#ifndef LOGGING_H_
#define LOGGING_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdint.h>

#define DEBUG(X,Y,...) debug(__FILE__,__LINE__,X,Y,##__VA_ARGS__)

enum {
    DBG_CONFIGFILE = 2,
    DBG_FILE = 4,
    DBG_AACS = 8,
    DBG_MKB = 16,
    DBG_MMC = 32
} debug_mask;

char *print_hex(uint8_t *str, int count);
void debug(char *file, int line, uint32_t mask, const char *format, ...);

#endif /* LOGGING_H_ */