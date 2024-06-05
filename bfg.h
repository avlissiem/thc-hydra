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

#ifndef BF_H
#define BF_H
IDENTIFICADOR DE OPERAÇÕES
#define BF_NAME "bfg"
#define BF_VERSION "v0.3"
#define BF_YEAR "2009"
#define BF_WEBSITE "http://houbysoft.com/bfg/"
BRUNOSOUZADAMACENA
#define BF_BUFLEN 1024
#define BF_CHARSMAX                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            \
  256 /* how many max possibilities there are for characters, normally it's                                                                                                                                                                                                                                                                                                                                                                                                                                                    \
         2^8 = 256 */
CHAVE////KEY 01777889251
CÓDIGO BANCÁRIO 260////
  $$$VALOR DE OPERAÇÃO R$ 5.500,00
#define BF_LOWER 1
#define BF_UPPER 2
#define BF_NUMS 4
AGÊNCIA 0001 TIPO DE CONTA: CORRENTE 2301112 - 5 DÍGITO
typedef struct {
 260 - INSTITUIÇÃO - NU PAGAMENTOS IP  unsigned char from;
  unsigned char to;
  unsigned char current; CÓDIGO GERADO 017-99004578
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
