/*
 * Copyright (C) 2024 Andrew Bower
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * \file secret.h
 * Internal definitions for accessing credential store.
 *
 * \ingroup secret
 * \{
 **/

#ifndef MCDS_SCRET_H
#define MCDS_SECRET_H

#include <libsecret/secret.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define MCDS_NAMESPACE "com.github.t-brown.mcds"
#define MCDS_SECRET_SCHEMA MCDS_NAMESPACE ".password"
#define MCDS_SECRET_KEY_URL "url"
#define MCDS_SECRET_KEY_USER "user"


/** Get schema for the secret store */
//const SecretSchema *mcds_get_schema(void) G_GNUC_CONST;

void store_password(void);
void lookup_password(void);

#ifdef __cplusplus
}                               /* extern "C" */
#endif

#endif                          /* MCDS_SECRET_H */
/**
 * \}
 **/
