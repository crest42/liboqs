#include "aes256ctr.h"

void PQCLEAN_MCELIECE348864_CLEAN_aes256ctr(
    uint8_t *out,
    size_t outlen,
    const uint8_t nonce[AESCTR_NONCEBYTES],
    const uint8_t key[AES256_KEYBYTES]) {

    aes256ctx state;
    aes256_keyexp(&state, key);
    aes256_ctr(out, outlen, nonce, &state);
    aes256_ctx_release(&state);
}