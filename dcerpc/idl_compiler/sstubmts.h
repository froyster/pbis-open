/*
 * 
 * (c) Copyright 1992 OPEN SOFTWARE FOUNDATION, INC.
 * (c) Copyright 1992 HEWLETT-PACKARD COMPANY
 * (c) Copyright 1992 DIGITAL EQUIPMENT CORPORATION
 * To anyone who acknowledges that this file is provided "AS IS"
 * without any express or implied warranty:
 *                 permission to use, copy, modify, and distribute this
 * file for any purpose is hereby granted without fee, provided that
 * the above copyright notices and this notice appears in all source
 * code copies, and that none of the names of Open Software
 * Foundation, Inc., Hewlett-Packard Company, or Digital Equipment
 * Corporation be used in advertising or publicity pertaining to
 * distribution of the software without specific, written prior
 * permission.  Neither Open Software Foundation, Inc., Hewlett-
 * Packard Company, nor Digital Equipment Corporation makes any
 * representations about the suitability of this software for any
 * purpose.
 * 
 */
/*
 */
/*
**  NAME:
**
**      sstubmts.h
**
**  FACILITY:
**
**      Interface Definition Language (IDL) Compiler
**
**  ABSTRACT:
**
**  Header file for sstubmts.c
**
*/

void BE_gen_sstub
(
    FILE *fid,              /* Handle for emitted C text */
    AST_interface_n_t *p_interface,     /* Ptr to AST interface node */
    language_k_t language,  /* Language stub is to interface to */
    char header_name[],     /* Name of header file to be included in stub */
    boolean *cmd_opt,
    void **cmd_val,
    DDBE_vectors_t *dd_vip    /* Data driven BE vector information ptr */
);

