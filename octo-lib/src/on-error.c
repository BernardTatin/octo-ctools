//
// Created by bernard on 15/05/2020.
//

#include <unistd.h>
#include <string.h>

#include "on-error.h"
#include "private-file.h"

void on_error(ErrType type, char *message) {
  switch (type) {
  case ERR_NOEROR:
    write_string(stderr_no, "WARNING: ");
    break;
  case ERR_ALLOC:
    write_string(stderr_no, "ALLOCATION ERROR: ");
    break;
  case ERR_UNKNOWN:
    write_string(stderr_no, "UNKNOWN ERROR: ");
    break;
  }
  write_string(stderr_no, message);
}
