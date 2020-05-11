/*
 * file-reader.h
 *
 *  Created on: 29 févr. 2016
 *      Author: bernard
 */
/*
    The MIT License (MIT)

    Copyright (c) 2016 Bernard TATIN <bernard dot tatin at outlook dot org>

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.

 */


#ifndef FILE_READER_H_
#define FILE_READER_H_


/**
 * memory allocation for a file-reader structure
 */
void *fr_alloc(void);
/**
 * open a file-reader
 */
void *fr_open(const char *file_name, void *fr_block);
/**
 * open a file-reader for stdin
 */
void *fr_open_stdin(void *fr_block);
/**
 * read data
 */
int fr_read(void *fr_block, uint8_t *buffer, size_t len);
/**
 * close a file-reader
 */
void fr_close(void *fr_block);
/**
 * position in the file stream
 */
int64_t fr_before_position(void *fr_block);
int64_t fr_position(void *fr_block);

#endif /* FILE_READER_H_ */
