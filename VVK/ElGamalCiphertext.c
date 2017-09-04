//
//  ElGamalCiphertext.c
//  VVK
//
//  Created on 6/14/17.
//

#import "ElGamalCiphertext.h"
#import <openssl/x509.h>

ASN1_SEQUENCE(ELGAMAL_CIPHERTEXT) = {
    ASN1_SIMPLE(ELGAMAL_CIPHERTEXT, a, ASN1_INTEGER),
    ASN1_SIMPLE(ELGAMAL_CIPHERTEXT, b, ASN1_INTEGER),
} ASN1_SEQUENCE_END(ELGAMAL_CIPHERTEXT)

ASN1_SEQUENCE(ELGAMAL_CIPHER) = {
    ASN1_SIMPLE(ELGAMAL_CIPHER, alg, X509_ALGOR),
    ASN1_SIMPLE(ELGAMAL_CIPHER, cipher, ELGAMAL_CIPHERTEXT),
} ASN1_SEQUENCE_END(ELGAMAL_CIPHER)

IMPLEMENT_ASN1_FUNCTIONS(ELGAMAL_CIPHERTEXT)
IMPLEMENT_ASN1_FUNCTIONS(ELGAMAL_CIPHER)