/*
 * Copyright (C) 2007 Stig Venaas <venaas@uninett.no>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 */

#define DBG_INFO 16
#define DBG_WARN 32
#define DBG_ERR 64

void debug_init(char *ident);
void debug_set_level(uint8_t level);
uint8_t debug_get_level();
void debug(uint8_t level, char *format, ...);
void debugx(int status, uint8_t level, char *format, ...);
int debug_set_destination(char *dest);