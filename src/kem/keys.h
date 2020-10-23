/**
 * \file kem.h
 * \brief Key encapsulation mechanisms
 *
 * The file `src/kem/example_kem.c` contains two examples on using the OQS_KEM API.
 *
 * The first example uses the individual scheme's algorithms directly and uses
 * no dynamic memory allocation -- all buffers are allocated on the stack, with
 * sizes indicated using preprocessor macros.  Since algorithms can be disabled at
 * compile-time, the programmer should wrap the code in \#ifdefs.
 *
 * The second example uses an OQS_KEM object to use an algorithm specified at
 * runtime.  Therefore it uses dynamic memory allocation -- all buffers must be
 * malloc'ed by the programmer, with sizes indicated using the corresponding length
 * member of the OQS_KEM object in question.  Since algorithms can be disabled at
 * compile-time, the programmer should check that the OQS_KEM object is not `NULL`.
 *
 * SPDX-License-Identifier: MIT
 */

#ifndef OQS_KEY_H
#define OQS_KEY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <oqs/oqs.h>

#if defined(__cplusplus)
extern "C" {
#endif

#define MAX(X, Y) (((strlen(X)) > (strlen(Y))) ? (strlen(X)) : (strlen(Y)))
#define MIN(X, Y) (((strlen(X)) < (strlen(Y))) ? (strlen(X)) : (strlen(Y)))

OQS_API OQS_STATUS OQS_KEM_get_static_key(const OQS_KEM *kem, uint8_t *public_key, uint8_t *secret_key);



#if defined(__cplusplus)
} // extern "C"
#endif

#endif // OQS_KEM_H
