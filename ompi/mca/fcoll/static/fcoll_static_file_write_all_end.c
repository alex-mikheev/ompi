/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2008-2011 University of Houston. All rights reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#include "ompi_config.h"
#include "fcoll_static.h"

#include "mpi.h"
#include "ompi/constants.h"
#include "ompi/mca/fcoll/fcoll.h"


int
mca_fcoll_static_file_write_all_end (mca_io_ompio_file_t *fh, 
                                    void *buf,
                                    ompi_status_public_t *status)
{
    printf ("STATIC WRITE ALL END\n");
    return OMPI_SUCCESS;
}
