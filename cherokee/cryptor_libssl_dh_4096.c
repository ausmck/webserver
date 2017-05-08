/* openssl dhparam -C -2 4096 */
#ifndef HEADER_DH_H
#include <openssl/dh.h>
#endif
static DH *get_dh4096()
{
	static unsigned char dhp_4096[]={
		0xD2,0xB2,0x5E,0x24,0x83,0x8E,0x04,0x17,0x39,0xAB,0x99,0x5A,
		0xAB,0x0C,0x15,0x3C,0x95,0xE0,0xE4,0x48,0x3F,0xE4,0x22,0x48,
		0xCA,0x19,0xCA,0xD0,0x9E,0xA7,0x09,0xD0,0x97,0x0F,0x31,0x49,
		0xD3,0xC7,0x6C,0x58,0xA6,0x37,0x13,0x63,0x0E,0x5F,0xE5,0xDE,
		0x16,0x8E,0xB6,0xEE,0x1B,0x12,0xB3,0x25,0x90,0x2D,0x51,0xBF,
		0xEE,0x91,0x69,0x93,0x7E,0x83,0xF1,0x02,0xD0,0xDC,0xD9,0x2C,
		0xFC,0xF6,0x3E,0x34,0xB3,0x45,0x29,0xB8,0x4F,0x73,0x68,0xE9,
		0x39,0x6E,0xFC,0xC1,0x5A,0x16,0xB8,0xC4,0x30,0x0A,0x29,0x05,
		0x31,0x6F,0x93,0x09,0x31,0x67,0x98,0xA0,0x12,0x97,0x5D,0x8A,
		0x13,0xFF,0x7D,0x4A,0x51,0xA3,0x82,0x88,0xFA,0x6A,0xEF,0x08,
		0x7A,0xB8,0xA0,0x67,0x5B,0xB8,0x0F,0x2D,0x4A,0x84,0x0E,0x85,
		0x94,0xB7,0x90,0x0D,0x61,0x65,0x89,0x80,0xF6,0xF7,0xF2,0x28,
		0xF3,0x69,0x8C,0x4C,0xCD,0x4F,0x16,0xD4,0x7B,0x23,0x1A,0xBF,
		0x5A,0xFC,0x36,0xD3,0x39,0x14,0xA2,0x17,0xFA,0x65,0x79,0xFC,
		0x8D,0xD0,0x67,0x6A,0x36,0x72,0x30,0x47,0x2F,0x23,0xB0,0x2F,
		0xEA,0x1F,0x60,0xBD,0x20,0xA1,0x38,0x6C,0xE7,0x6B,0xF1,0x14,
		0x2E,0x41,0x39,0xEB,0x87,0x91,0xE2,0x88,0x17,0x88,0x55,0x07,
		0x1C,0x2D,0xA7,0xBB,0x5E,0x97,0x0A,0x10,0x4A,0x17,0xD6,0x60,
		0x27,0xCB,0xC4,0xF9,0x07,0xAD,0xA2,0x58,0x0F,0xBE,0xE3,0x0A,
		0xC8,0xCA,0xEB,0x5D,0x2E,0xD7,0x02,0xE1,0x2F,0xFC,0x7C,0xD1,
		0x4F,0xB0,0x65,0xF0,0x6A,0xED,0xDE,0xEE,0xD1,0x45,0x69,0x89,
		0xB6,0x70,0x7D,0x32,0x73,0x62,0x46,0xE4,0x91,0x0D,0x59,0xFD,
		0xB1,0x38,0x83,0x69,0xA8,0xAF,0xCF,0x24,0x10,0xD2,0x11,0x6B,
		0xC3,0x42,0xF0,0xF8,0xB6,0xC2,0xB9,0xF0,0xB1,0x0D,0x1C,0x5D,
		0xA5,0x22,0x40,0xA0,0xCB,0x3A,0x26,0xD7,0xD3,0x48,0xB1,0xA4,
		0x18,0x96,0xED,0xF0,0xEB,0x39,0x41,0x5D,0x1C,0xEE,0xC4,0xCA,
		0x23,0x57,0x91,0xBE,0x1E,0x5E,0x78,0xE7,0xE4,0x1B,0x75,0xB5,
		0x7C,0x28,0x41,0x2D,0xAE,0x9F,0xE7,0xD3,0xFD,0xE6,0x8D,0xE7,
		0x75,0x7F,0x8C,0xFE,0x6F,0x8F,0xEF,0x29,0xB9,0x51,0xAB,0xCB,
		0x37,0x12,0x10,0xD6,0x60,0xE8,0xD1,0xB2,0x9C,0x3E,0xA9,0xF5,
		0x6A,0x4E,0x43,0x12,0x46,0x3E,0x23,0x43,0x26,0x2C,0x9D,0xEB,
		0x73,0x7A,0x0C,0xD1,0x40,0x58,0x5F,0xE5,0x2C,0xE5,0x0E,0xFF,
		0xA8,0x61,0xBD,0x88,0x87,0x29,0x13,0x75,0x31,0xAA,0x78,0x8D,
		0xAD,0x59,0x8C,0x9D,0x8C,0xB1,0x14,0xC5,0xC5,0x60,0x80,0xB7,
		0x4C,0xAE,0x82,0xA5,0xC4,0x5A,0xEE,0x76,0x4D,0x7C,0xF0,0x1B,
		0x97,0x70,0x53,0xCE,0x4E,0x38,0x46,0x15,0xAF,0x0D,0x09,0xD0,
		0xCB,0x48,0x26,0xA8,0x88,0xA4,0x78,0x31,0xCC,0x24,0x57,0x68,
		0x52,0x52,0x27,0x4F,0x75,0xA0,0x59,0xD3,0x8F,0x34,0x02,0xB5,
		0xD5,0x9C,0xF7,0x6B,0xD7,0xC2,0x43,0x67,0x6D,0x01,0xFD,0xA2,
		0xB6,0xD9,0x32,0xD5,0xB9,0x4A,0x1B,0xB8,0xC8,0x44,0x81,0x37,
		0x30,0xDB,0xB5,0xDC,0x2C,0x3A,0x5C,0xCE,0xF5,0x5A,0xAB,0x00,
		0xE9,0xD3,0x8C,0x4A,0x7C,0x49,0x36,0x84,0xBF,0xD0,0xE0,0x45,
		0x2C,0x74,0xC9,0x6D,0x09,0xDE,0xA1,0x33,
	};
	static unsigned char dhg_4096[]={
		0x02,
	};
	DH *dh;
	BIGNUM *dhp_bn, *dhg_bn;

	if ((dh=DH_new()) == NULL) return(NULL);
	dhp_bn = BN_bin2bn(dhp_4096, sizeof (dhp_4096), NULL);
	dhg_bn = BN_bin2bn(dhg_4096, sizeof (dhg_4096), NULL);
	if (dhp_bn == NULL || dhg_bn == NULL ||
		!DH_set0_pqg(dh, dhp_bn, NULL, dhg_bn)) {
		DH_free(dh);
		BN_free(dhp_bn);
		BN_free(dhg_bn);
		return(NULL);
	}
	return(dh);
}
/*
-----BEGIN DH PARAMETERS-----
MIICCAKCAgEA0rJeJIOOBBc5q5laqwwVPJXg5Eg/5CJIyhnK0J6nCdCXDzFJ08ds
WKY3E2MOX+XeFo627hsSsyWQLVG/7pFpk36D8QLQ3Nks/PY+NLNFKbhPc2jpOW78
wVoWuMQwCikFMW+TCTFnmKASl12KE/99SlGjgoj6au8IerigZ1u4Dy1KhA6FlLeQ
DWFliYD29/Io82mMTM1PFtR7Ixq/Wvw20zkUohf6ZXn8jdBnajZyMEcvI7Av6h9g
vSChOGzna/EULkE564eR4ogXiFUHHC2nu16XChBKF9ZgJ8vE+QetolgPvuMKyMrr
XS7XAuEv/HzRT7Bl8Grt3u7RRWmJtnB9MnNiRuSRDVn9sTiDaaivzyQQ0hFrw0Lw
+LbCufCxDRxdpSJAoMs6JtfTSLGkGJbt8Os5QV0c7sTKI1eRvh5eeOfkG3W1fChB
La6f59P95o3ndX+M/m+P7ym5UavLNxIQ1mDo0bKcPqn1ak5DEkY+I0MmLJ3rc3oM
0UBYX+Us5Q7/qGG9iIcpE3UxqniNrVmMnYyxFMXFYIC3TK6CpcRa7nZNfPAbl3BT
zk44RhWvDQnQy0gmqIikeDHMJFdoUlInT3WgWdOPNAK11Zz3a9fCQ2dtAf2ittky
1blKG7jIRIE3MNu13Cw6XM71WqsA6dOMSnxJNoS/0OBFLHTJbQneoTMCAQI=
-----END DH PARAMETERS-----
*/
