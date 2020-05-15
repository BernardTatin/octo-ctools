//
// Created by bernard on 15/05/2020.
//

#ifndef OCTO_CTOOLS_PRIVATE_FILE_H
#define OCTO_CTOOLS_PRIVATE_FILE_H

#include <string.h>

extern const int stdin_no;
extern const int stdout_no;
extern const int stderr_no;

static inline void write_string(const int file_no, char *message) {
  write(file_no, message, strlen(message));
}
#endif // OCTO_CTOOLS_PRIVATE_FILE_H
