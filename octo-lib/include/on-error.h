//
// Created by bernard on 15/05/2020.
//

#ifndef OCTO_CTOOLS_ON_ERROR_H
#define OCTO_CTOOLS_ON_ERROR_H

typedef enum {
  ERR_NOEROR,
  ERR_ALLOC,
  ERR_UNKNOWN
} ErrType;

void on_error(ErrType type, char *message);

#endif // OCTO_CTOOLS_ON_ERROR_H
