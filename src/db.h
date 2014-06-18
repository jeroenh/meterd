/*
 * Copyright (c) 2014 Roland van Rijswijk-Deij
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
 * IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/*
 * Smart Meter Monitoring Daemon (meterd)
 * Database interaction
 */

#ifndef _METERD_DB_H
#define _METERD_DB_H

#include "config.h"
#include "meterd_types.h"

#define TABLE_PREFIX_RAW	"RAW_"
#define TABLE_PREFIX_CONSUMED	"CONSUMED_"

/* Initialise database handling */
meterd_rv meterd_db_init(void);

/* Uninitialise database handling */
void meterd_db_finalize(void);

/* Check if the specified database exists */
meterd_rv meterd_db_exists(const char* db_name);

/* Create and open the specified database */
meterd_rv meterd_db_create(const char* db_name, int force_create, void** db_handle);

/* Open the specified database */
meterd_rv meterd_db_open(const char* db_name, int read_only, void** db_handle);

/* Close the specified database */
void meterd_db_close(void* db_handle);

#endif /* !_METERD_DB_H */

