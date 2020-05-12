//
// Created by bernard on 12/05/2020.
//

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

#include "basedef.h"
#include "version.h"

static const int version_name_len = 256;
static char *version_buffer = NULL;

static void free_version(void) {
  if (version_buffer != NULL) {
    free(version_buffer);
    version_buffer = NULL;
  }
}

char *get_version(void) {

  if (version_buffer == NULL) {
    version_buffer = (char *)malloc(version_name_len);
    if (version_buffer == NULL) {
      exit (FAILURE_ALLOC);
    }
    atexit(free_version);
    sprintf(version_buffer, "octo-tools %d.%d.%d", octo_ctools_VERSION_MAJOR,
            octo_ctools_VERSION_MINOR, octo_ctools_VERSION_PATCH);
  }
  return version_buffer;
}
