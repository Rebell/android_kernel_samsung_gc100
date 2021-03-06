#ifndef __S6E63M0_PARAM_H__
#define __S6E63M0_PARAM_H__

#define GAMMA_PARAM_SIZE	23
#define ELVSS_PARAM_SIZE	5

enum {
	ELVSS_MIN = 0,
	ELVSS_1,
	ELVSS_2,
	ELVSS_MAX,
	ELVSS_STATUS_MAX,
};

enum {
	GAMMA_20CD,
	GAMMA_30CD = GAMMA_20CD,
	GAMMA_40CD,
	GAMMA_50CD,
	GAMMA_60CD,
	GAMMA_70CD,
	GAMMA_80CD,
	GAMMA_90CD,
	GAMMA_100CD,
	GAMMA_110CD,
	GAMMA_120CD,
	GAMMA_130CD,
	GAMMA_140CD,
	GAMMA_150CD,
	GAMMA_160CD,
	GAMMA_170CD,
	GAMMA_180CD,
	GAMMA_190CD,
	GAMMA_200CD,
	GAMMA_210CD,
	GAMMA_220CD,
	GAMMA_230CD,
	GAMMA_240CD,
	GAMMA_250CD,
	GAMMA_290CD,
	GAMMA_300CD = GAMMA_290CD,
	GAMMA_MAX
};


static const unsigned char SEQ_SW_RESET[] = {
	0x01,
	0x00, 0x00
};

static const unsigned char SEQ_APPLY_LEVEL2_KEY_ENABLE[] = {
	0xF0,
	0x5A, 0x5A
};

static const unsigned char SEQ_APPLY_MTP_KEY_ENABLE[] = {
	0xF1,
	0x5A, 0x5A
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

static const unsigned char SEQ_GAMMA_CONDITION_SET[] = {
	0xFA,
	0x02, 0x18, 0x08, 0x24, 0x6B, 0x76, 0x57, 0xBD, 0xC3, 0xB5,
	0xB4, 0xBB, 0xAC, 0xC5, 0xC9, 0xC0, 0x00, 0xB7, 0x00, 0xAB,
	0x00, 0xCF,
};

const unsigned char SEQ_PANEL_CONDITION_SET[] = {
	0xF8,
	0x01, 0x2D, 0x2D, 0x08, 0x08, 0x61, 0xB7, 0x72,
	0x9A, 0x1E, 0x3B, 0x0F, 0x00, 0x00,
};

const unsigned char SEQ_DISPLAY_CONDITION_SET1[] = {
	0xF2,
	0x02, 0x03, 0x1C, 0x10, 0x10,
};

const unsigned char SEQ_DISPLAY_CONDITION_SET2[] = {
	0xF7,
	0x00, 0x00, 0x00,
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xFA, 0x03,
};

static const unsigned char SEQ_ETC_SOURCE_CONTROL[] = {
	0xF6,
	0x00, 0x8E, 0x0F,
};

static const unsigned char SEQ_ETC_CONTROL_B3h[] = {
	0xB3, 0x0C,
};

const unsigned char SEQ_STANDBY_ON[] = {
	0x10,
	0x00, 0x00
};

const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};

const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

const unsigned char SEQ_ELVSS_SET[] = {
	0xB2,
	0x17, 0x17, 0x17, 0x17,
};

const unsigned char SEQ_ELVSS_ON[] = {
	0xB1, 0x0B,
	0x00,
};


static const unsigned char SEQ_ACL_ON[] = {
	0xC0, 0x01,
	0x00
};

static const unsigned char SEQ_ACL_OFF[] = {
	0xC0, 0x00,
	0x00
};

static const unsigned char SEQ_ELVSS_20[] = {
	0xB2,
	0x20, 0x20, 0x20, 0x20,
};

static const unsigned char SEQ_ELVSS_26[] = {
	0xB2,
	0x26, 0x26, 0x26, 0x26,
};

static const unsigned char SEQ_ELVSS_28[] = {
	0xB2,
	0x28, 0x28, 0x28, 0x28,
};

static const unsigned char SEQ_ELVSS_29[] = {
	0xB2,
	0x29, 0x29, 0x29, 0x29,
};

static const unsigned char *ELVSS_TABLE[] = {
	SEQ_ELVSS_20,
	SEQ_ELVSS_26,
	SEQ_ELVSS_28,
	SEQ_ELVSS_29,
};

static const unsigned char SEQ_PREPARE_MTP_READ1[] = {
	0xF0,
	0x5A, 0x5A
};

static const unsigned char SEQ_PREPARE_ID_READ[] = {
	0xD5,
	0xE7, 0x14, 0x60, 0x17, 0x0A, 0x49, 0xC3, 0x8F,
	0x19, 0x64, 0x91, 0x84, 0x76, 0x20, 0x43, 0x00,
};

static const unsigned char SEQ_PREPARE_MTP_READ2[] = {
	0xF1,
	0x5A, 0x5A
};

static const unsigned char SEQ_CONTENTION_ERROR_REMOVE[] = {
	0xD5,
	0xE7, 0x14, 0x60, 0x17, 0x0A,
	0x49, 0xC3, 0x8F, 0x19, 0x64,
	0x91, 0x84, 0x76, 0x20, 0x43,
	0x00,
};
#endif /* __S6E63M0_PARAM_H__ */
