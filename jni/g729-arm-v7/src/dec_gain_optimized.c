/**
 *  g729a codec for iOS,...
 *  Copyright (C) 2009-2012 Samuel <samuelv0304@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
/****************************************************************************************
Portions of this file are derived from the following ITU standard:
   ITU-T G.729A Speech Coder    ANSI-C Source Code
   Version 1.1    Last modified: September 1996

   Copyright (c) 1996,
   AT&T, France Telecom, NTT, Universite de Sherbrooke
****************************************************************************************/

/*---------------------------------------------------------------------------*
 * Function  Dec_gain                                                        *
 * ~~~~~~~~~~~~~~~~~~                                                        *
 * Decode the pitch and codebook gains                                       *
 *                                                                           *
 *---------------------------------------------------------------------------*
 * input arguments:                                                          *
 *                                                                           *
 *   index      :Quantization index                                          *
 *   code[]     :Innovative code vector                                      *
 *   L_subfr    :Subframe size                                               *
 *   bfi        :Bad frame indicator                                         *
 *                                                                           *
 * output arguments:                                                         *
 *                                                                           *
 *   gain_pit   :Quantized pitch gain                                        *
 *   gain_cod   :Quantized codebook gain                                     *
 *                                                                           *
 *---------------------------------------------------------------------------*/
void Dec_gain(
   Word16 index,        /* (i)     :Index of quantization.         */
   Word16 code[],       /* (i) Q13 :Innovative vector.             */
   Word16 L_subfr,      /* (i)     :Subframe length.               */
   Word16 bfi,          /* (i)     :Bad frame indicator            */
   Word16 *gain_pit,    /* (o) Q14 :Pitch gain.                    */
   Word16 *gain_cod     /* (o) Q1  :Code gain.                     */
)
{
   Word16  index1, index2, tmp;
   L_acc = L_shl(L_acc, add( negate(exp_gcode0), 4));
}
