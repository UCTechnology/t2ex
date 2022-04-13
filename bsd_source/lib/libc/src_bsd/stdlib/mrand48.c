/*	$OpenBSD: mrand48.c,v 1.3 2005/08/08 08:05:37 espie Exp $ */
/*
 * Copyright (c) 1993 Martin Birgmeier
 * All rights reserved.
 *
 * You may redistribute unmodified or modified versions of this source
 * code provided that the above copyright notice and this and the
 * following conditions are retained.
 *
 * This software is provided ``as is'', and comes with no warranties
 * of any kind. I shall in no event be liable for anything that happens
 * to anyone/anything when using this software.
 */

#include "rand48.h"



long
mrand48_r(struct rand48_data *buffer)
{
	__dorand48_r(buffer->seed, buffer);
	return ((long) buffer->seed[2] << 16) + (long) buffer->seed[1];
}
