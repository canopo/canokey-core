/* SPDX-License-Identifier: Apache-2.0 */
#ifndef CANOKEY_CORE_OPENPGP_OPENPGP_H
#define CANOKEY_CORE_OPENPGP_OPENPGP_H

#include <apdu.h>

#define OPENPGP_INS_SELECT 0xA4
#define OPENPGP_INS_SELECT_DATA 0xA5
#define OPENPGP_INS_GET_DATA 0xCA
#define OPENPGP_INS_GET_NEXT_DATA 0xCC
#define OPENPGP_INS_VERIFY 0x20
#define OPENPGP_INS_CHANGE_REFERENCE_DATA 0x24
#define OPENPGP_INS_RESET_RETRY_COUNTER 0x2C
#define OPENPGP_INS_INTERNAL_AUTHENTICATE 0x88
#define OPENPGP_INS_PSO 0x2A
#define OPENPGP_INS_PUT_DATA 0xDA
#define OPENPGP_INS_IMPORT_KEY 0xDB
#define OPENPGP_INS_GENERATE_ASYMMETRIC_KEY_PAIR 0x47
#define OPENPGP_INS_TERMINATE 0xE6
#define OPENPGP_INS_ACTIVATE 0x44

#define TAG_AID 0x4F
#define TAG_LOGIN 0x5E
#define TAG_URL 0x5F50
#define TAG_HISTORICAL_BYTES 0x5F52
#define TAG_CARDHOLDER_RELATED_DATA 0x65
#define TAG_NAME 0x5B
#define TAG_LANG 0x5F2D
#define TAG_SEX 0x5F35
#define TAG_APPLICATION_RELATED_DATA 0x6E
#define TAG_DISCRETIONARY_DATA_OBJECTS 0x73
#define TAG_EXTENDED_CAPABILITIES 0xC0
#define TAG_ALGORITHM_ATTRIBUTES_SIG 0xC1
#define TAG_ALGORITHM_ATTRIBUTES_DEC 0xC2
#define TAG_ALGORITHM_ATTRIBUTES_AUT 0xC3
#define TAG_PW_STATUS 0xC4
#define TAG_KEY_FINGERPRINTS 0xC5
#define TAG_CA_FINGERPRINTS 0xC6
#define TAG_KEY_SIG_FINGERPRINT 0xC7
#define TAG_KEY_DEC_FINGERPRINT 0xC8
#define TAG_KEY_AUT_FINGERPRINT 0xC9
#define TAG_KEY_CA1_FINGERPRINT 0xCA
#define TAG_KEY_CA2_FINGERPRINT 0xCB
#define TAG_KEY_CA3_FINGERPRINT 0xCC
#define TAG_KEY_GENERATION_DATES 0xCD
#define TAG_KEY_SIG_GENERATION_DATES 0xCE
#define TAG_KEY_DEC_GENERATION_DATES 0xCF
#define TAG_KEY_AUT_GENERATION_DATES 0xD0
#define TAG_RESETTING_CODE 0xD3
#define TAG_SECURITY_SUPPORT_TEMPLATE 0x7A
#define TAG_DIGITAL_SIG_COUNTER 0x93
#define TAG_CARDHOLDER_CERTIFICATE 0x7F21
#define TAG_EXTENDED_LENGTH_INFO 0x7F66
#define TAG_GENERAL_FEATURE_MANAGEMENT 0x7F74
#define TAG_KEY_INFO 0xDE
#define TAG_UIF_SIG 0xD6
#define TAG_UIF_DEC 0xD7
#define TAG_UIF_AUT 0xD8
#define TAG_UIF_CACHE_TIME 0x0101

void openpgp_poweroff(void);
int openpgp_install(uint8_t reset);
int openpgp_process_apdu(const CAPDU *capdu, RAPDU *rapdu);

#endif // CANOKEY_CORE_OPENPGP_OPENPGP_H
