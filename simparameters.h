
/*
 * 
 * Simulation of A Single Server Queueing System
 * 
 * Copyright (C) 2014 Terence D. Todd Hamilton, Ontario, CANADA,
 * todd@mcmaster.ca
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/******************************************************************************/

#ifndef _SIMPARAMETERS_H_
#define _SIMPARAMETERS_H_

/******************************************************************************/

#define FAST_RUN
//#define NO_CSV_OUTPUT

#ifdef FAST_RUN

#define PACKET_ARRIVAL_RATE 1000, 3000, 5000, 8000, 1e4  /* packets per second */
#define PACKET_LENGTH 2000 /* bits */
#define LINK_BIT_RATE 1e6 /* bits per second */
#define RUNLENGTH 2e1 /* packets */

/* Comma separated list of random seeds to run. */
#define RANDOM_SEED_LIST 400050636, 400099173, 225, 766, 590, 309, 519, 430, 638, 126 

#else

#define PACKET_ARRIVAL_RATE 400, 500, 600 /* packets per second */
#define PACKET_LENGTH 500 /* bits */
#define LINK_BIT_RATE 1e6 /* bits per second */
#define RUNLENGTH 10e6 /* packets */

/* Comma separated list of random seeds to run. */
#define RANDOM_SEED_LIST 400050636, 400099173, 225, 766, 590, 309, 519, 430, 638, 126 

#endif //FAST_RUN

#define PACKET_XMT_TIME exponential_generator((double) PACKET_LENGTH/LINK_BIT_RATE)
#define BLIPRATE (RUNLENGTH/1000)

/******************************************************************************/

#endif /* simparameters.h */



