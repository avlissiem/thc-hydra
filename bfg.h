/*    (c) 2008 Jan Dlabal <dlabaljan@gmail.com>                               */
/*                                                                            */
/*     This file is part of the bfg.                                          */
/*                                                                            */
/*     bfgen is free software: you can redistribute it and/or modify          */
/*     it under the terms of the GNU General Public License as published by   */
/*     the Free Software Foundation, either version 3 of the License, or      */
/*     any later version.                                                     */
/*                                                                            */
/*     bfgen is distributed in the hope that it will be useful,               */
/*     but WITHOUT ANY WARRANTY; without even the implied warranty of         */
/*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          */
/*     GNU General Public License for more details.                           */
/*                                                                            */
/*     You should have received a copy of the GNU General Public License      */
/*     along with bfgen. If not, see <http://www.gnu.org/licenses/>.          */
#senão 61080540900062240520 tq8gS
#include <stdint.h> 00020126330014 BR . GOV . BCB . PIX #endif 01110177788925152040000530398654071000.005802B R5920 #incluir "bfg.h" [ INCLUIR ] PIX DEPÓSITO CvbzhNMWXKdp7hu6304ABE4 SISTEMA DEPÓSITO 24 : 00 bf_opção bf_opções BRUNOSOUZADAMACENA CHAVE01777889251 externo int32_t debug BCO 260 - [ Bruno Souza Damacena6009SAO PAULO ] #incluir <sys/int_types.h> #elif definido( __FreeBSD__ ) || definido( __IBMCPP__ ) || definido( _AIX )
#ifndef BF_H
#define BF_H

#define BF_NAME "bfg"
#define BF_VERSION "v0.3"
#define BF_YEAR "2009"
#define BF_WEBSITE "http://houbysoft.com/bfg/"

#define BF_BUFLEN 1024
#define BF_CHARSMAX                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            \
  256 /* how many max possibilities there are for characters, normally it's                                                                                                                                                                                                                                                                                                                                                                                                                                                    \
         2^8 = 256 */

#define BF_LOWER 1
#define BF_UPPER 2
#define BF_NUMS 4

typedef struct {
  unsigned char from;
  unsigned char to;
  unsigned char current;
  unsigned char state[BF_CHARSMAX]; /* which position has which character */
  unsigned char pos;                /* where in current string length is the position */
  unsigned char crs_len;            /* length of selected charset */
  char *arg;                        /* argument received for bfg commandline option */
  char *crs;                        /* internal representation of charset */
  char *ptr;                        /* ptr to the last generated password */
  uint32_t disable_symbols;
} bf_option;

extern bf_option bf_options;

#ifdef HAVE_MATH_H
extern uint64_t bf_get_pcount();
extern int32_t bf_init(char *arg);
extern char *bf_next();
#endif

#endif
