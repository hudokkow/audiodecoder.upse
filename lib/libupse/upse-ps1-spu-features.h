/*
 * UPSE: the unix playstation sound emulator.
 *
 * Filename: upse-ps1-spu-features.h
 * Purpose: libupse: SPU1/SPU2 features.
 *
 * Copyright (c) 2010 William Pitcock <nenolod@dereferenced.org>
 *
 * UPSE is free software, released under the GNU General Public License,
 * version 2.
 *
 * A copy of the GNU General Public License, version 2, is included in
 * the UPSE source kit as COPYING.
 *
 * UPSE is offered without any warranty of any kind, explicit or implicit.
 */

#ifndef __UPSE_LIBUPSE_UPSE_PS1_SPU_FEATURES_H__GUARD
#define __UPSE_LIBUPSE_UPSE_PS1_SPU_FEATURES_H__GUARD

/*
 * FEAT_NYQUIST_MODULATION:
 * Apply nyquist signal variance modulation to the signal generated by the
 * SPU cores.  This feature will alter the signal generated by the SPU core
 * in order to make it sound more suitable on an analog output.  The PS1 has
 * a similar feature that is applied.
 */
#define FEAT_NYQUIST_MODULATION

/*
 * FEAT_CORLETT_IIR_FILTERS:
 * Apply Neill Corlett's frequency response curve to the output of the
 * SPU cores.
 */
#define FEAT_CORLETT_IIR_FILTERS

#endif