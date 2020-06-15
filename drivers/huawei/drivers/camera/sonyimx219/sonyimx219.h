/*
 *  sonyimx219 camera driver head file
 *
 *Author: 	Hanjunhui (hanjh_hit@163.com)
 *  Date:  	    2014/01/23
 *  Version:	1.0
 *  History:	2014/01/23      Frist add driver for sonyimx219
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _SONYIMX219_H
#define _SONYIMX219_H

 /*sonyimx219 init sensor registers lis*/
const struct _sensor_reg_t sonyimx219_init_regs[] = {
{0x0100, 0x00},
{0x30EB, 0x05},
{0x30EB, 0x0C},
{0x300A, 0xFF},
{0x300B, 0xFF},
{0x30EB, 0x05},
{0x30EB, 0x09},
{0x0114, 0x03},
{0x0128, 0x00},
{0x012A, 0x14},
{0x012B, 0x00},
{0x0160, 0x05},
{0x0161, 0xC9},
{0x0162, 0x0E},
{0x0163, 0x10},
{0x0164, 0x00},
{0x0165, 0x28},
{0x0166, 0x0C},
{0x0167, 0xA7},
{0x0168, 0x00},
{0x0169, 0x20},
{0x016A, 0x09},
{0x016B, 0x7F},
{0x016C, 0x06},
{0x016D, 0x40},
{0x016E, 0x04},
{0x016F, 0xB0},
{0x0170, 0x01},
{0x0171, 0x01},
{0x0172, 0x03},
{0x0174, 0x01},
{0x0175, 0x01},
{0x018C, 0x0A},
{0x018D, 0x0A},
{0x0301, 0x05},
{0x0303, 0x01},
{0x0304, 0x02},
{0x0305, 0x02},
{0x0306, 0x00},
{0x0307, 0x28},
{0x0309, 0x0A},
{0x030B, 0x01},
{0x030C, 0x00},
{0x030D, 0x28},
{0x455E, 0x00},
{0x471E, 0x4B},
{0x4767, 0x0F},
{0x4750, 0x14},
{0x4540, 0x00},
{0x47B4, 0x14},
{0x4713, 0x30},
{0x478B, 0x10},
{0x478F, 0x10},
{0x4793, 0x10},
{0x4797, 0x0E},
{0x479B, 0x0E},
{0x0100, 0x00}
};


/* 1600*1200@30fps */
const struct _sensor_reg_t sonyimx219_framesize_1600x1200[] = {
{0x0100, 0x00},
{0x30EB, 0x05},
{0x30EB, 0x0C},
{0x300A, 0xFF},
{0x300B, 0xFF},
{0x30EB, 0x05},
{0x30EB, 0x09},
{0x0114, 0x03},
{0x0128, 0x00},
{0x012A, 0x14},
{0x012B, 0x00},
{0x0160, 0x05},
{0x0161, 0xC9},
{0x0162, 0x0E},
{0x0163, 0x10},
{0x0164, 0x00},
{0x0165, 0x28},
{0x0166, 0x0C},
{0x0167, 0xA7},
{0x0168, 0x00},
{0x0169, 0x20},
{0x016A, 0x09},
{0x016B, 0x7F},
{0x016C, 0x06},
{0x016D, 0x40},
{0x016E, 0x04},
{0x016F, 0xB0},
{0x0170, 0x01},
{0x0171, 0x01},
{0x0172, 0x03, 0x03},
{0x0174, 0x01},
{0x0175, 0x01},
{0x018C, 0x0A},
{0x018D, 0x0A},
{0x0301, 0x05},
{0x0303, 0x01},
{0x0304, 0x02},
{0x0305, 0x02},
{0x0306, 0x00},
{0x0307, 0x28},
{0x0309, 0x0A},
{0x030B, 0x01},
{0x030C, 0x00},
{0x030D, 0x28},
{0x455E, 0x00},
{0x471E, 0x4B},
{0x4767, 0x0F},
{0x4750, 0x14},
{0x4540, 0x00},
{0x47B4, 0x14},
{0x4713, 0x30},
{0x478B, 0x10},
{0x478F, 0x10},
{0x4793, 0x10},
{0x4797, 0x0E},
{0x479B, 0x0E},
{0x0100, 0x01}
};

/*1920*1088 @30fps*/
const struct _sensor_reg_t sonyimx219_framesize_1080p[] = {
{0x0100, 0x00},
{0x30EB, 0x05},
{0x30EB, 0x0C},
{0x300A, 0xFF},
{0x300B, 0xFF},
{0x30EB, 0x05},
{0x30EB, 0x09}, 
{0x0114, 0x03},
{0x0128, 0x00},
{0x012A, 0x14},
{0x012B, 0x00},
{0x0160, 0x05},
{0x0161, 0xc9},
{0x0162, 0x0E},
{0x0163, 0x10},
{0x0164, 0x02},
{0x0165, 0xA8},
{0x0166, 0x0A},
{0x0167, 0x27},
{0x0168, 0x02},
{0x0169, 0xB0},
{0x016A, 0x06},
{0x016B, 0xEF},
{0x016C, 0x07},
{0x016D, 0x80},
{0x016E, 0x04},
{0x016F, 0x40},
{0x0170, 0x01},
{0x0171, 0x01},
{0x0172, 0x03},
{0x0174, 0x00},
{0x0175, 0x00},
{0x018C, 0x0A},
{0x018D, 0x0A},
{0x0301, 0x05},
{0x0303, 0x01},
{0x0304, 0x02},
{0x0305, 0x02},
{0x0306, 0x00},
{0x0307, 0x28},
{0x0309, 0x0A},
{0x030B, 0x01},
{0x030C, 0x00},
{0x030D, 0x28},
{0x455E, 0x00},
{0x471E, 0x4B},
{0x4767, 0x0F},
{0x4750, 0x14},
{0x4540, 0x00},
{0x47B4, 0x14},
{0x4713, 0x30},
{0x478B, 0x10},
{0x478F, 0x10},
{0x4793, 0x10},
{0x4797, 0x0E},
{0x479B, 0x0E},
{0x0100, 0x01}
};

/*3264*2448 @15fps*/
const struct _sensor_reg_t sonyimx219_framesize_full[] = {
{0x0100, 0x00},
{0x30EB, 0x05},
{0x30EB, 0x0C},
{0x300A, 0xFF},
{0x300B, 0xFF},
{0x30EB, 0x05},
{0x30EB, 0x09},
{0x0114, 0x03},
{0x0128, 0x00},
{0x012A, 0x14},
{0x012B, 0x00},
{0x0160, 0x0E},
{0x0161, 0x2E},
{0x0162, 0x0E},
{0x0163, 0x10},
{0x0164, 0x00},
{0x0165, 0x08},
{0x0166, 0x0C},
{0x0167, 0xC7},
{0x0168, 0x00},
{0x0169, 0x08},
{0x016A, 0x09},
{0x016B, 0x97},
{0x016C, 0x0C},
{0x016D, 0xC0},
{0x016E, 0x09},
{0x016F, 0x90},
{0x0170, 0x01},
{0x0171, 0x01},
{0x0174, 0x00},
{0x0175, 0x00},
{0x018C, 0x0A},
{0x018D, 0x0A},
{0x0301, 0x05},
{0x0303, 0x01},
{0x0304, 0x02},
{0x0305, 0x02},
{0x0306, 0x00},
{0x0307, 0x31},
{0x0309, 0x0A},
{0x030B, 0x01},
{0x030C, 0x00},
{0x030D, 0x34},
{0x455E, 0x00},
{0x471E, 0x4B},
{0x4767, 0x0F},
{0x4750, 0x14},
{0x4540, 0x00},
{0x47B4, 0x14},
{0x4713, 0x30},
{0x478B, 0x10},
{0x478F, 0x10},
{0x4793, 0x10},
{0x4797, 0x0E},
{0x479B, 0x0E},
{0x0100, 0x01}
};

/*3264*2448 full size@30fps for ZSL ONLY*/
const struct _sensor_reg_t sonyimx219_framesize_ZSL_full[] = {
{0x0100, 0x00},
{0x30EB, 0x05},
{0x30EB, 0x0C},
{0x300A, 0xFF},
{0x300B, 0xFF},
{0x30EB, 0x05},
{0x30EB, 0x09},
{0x0114, 0x03},
{0x0128, 0x00},
{0x012A, 0x14},
{0x012B, 0x00},
{0x0160, 0x0A},
{0x0161, 0x21},
{0x0162, 0x0E},
{0x0163, 0x10},
{0x0164, 0x00},
{0x0165, 0x08},
{0x0166, 0x0C},
{0x0167, 0xC7},
{0x0168, 0x00},
{0x0169, 0x08},
{0x016A, 0x09},
{0x016B, 0x97},
{0x016C, 0x0C},
{0x016D, 0xC0},
{0x016E, 0x09},
{0x016F, 0x90},
{0x0170, 0x01},
{0x0171, 0x01},
{0x0172, 0x03},
{0x0174, 0x00},
{0x0175, 0x00},
{0x018C, 0x0A},
{0x018D, 0x0A},
{0x0301, 0x05},
{0x0303, 0x01},
{0x0304, 0x02},
{0x0305, 0x02},
{0x0306, 0x00},
{0x0307, 0x46},
{0x0309, 0x0A},
{0x030B, 0x01},
{0x030C, 0x00},
{0x030D, 0x49},
{0x455E, 0x00},
{0x471E, 0x4B},
{0x4767, 0x0F},
{0x4750, 0x14},
{0x4540, 0x00},
{0x47B4, 0x14},
{0x4713, 0x30},
{0x478B, 0x10},
{0x478F, 0x10},
{0x4793, 0x10},
{0x4797, 0x0E},
{0x479B, 0x0E},
{0x0100, 0x01}
};

/*3280*1960@30fps for ZSL ONLY*/
const struct _sensor_reg_t sonyimx219_framesize_3280x1960[] = {
{0x0100, 0x00},
{0x30EB, 0x05},
{0x30EB, 0x0C},
{0x300A, 0xFF},
{0x300B, 0xFF},
{0x30EB, 0x05},
{0x30EB, 0x09},
{0x0114, 0x03},
{0x0128, 0x00},
{0x012A, 0x14},
{0x012B, 0x00},
{0x0160, 0x0A},
{0x0161, 0x21},
{0x0162, 0x0E},
{0x0163, 0x10},
{0x0164, 0x00},
{0x0165, 0x00},
{0x0166, 0x0C},
{0x0167, 0xCF},
{0x0168, 0x00},
{0x0169, 0xFC},
{0x016A, 0x08},
{0x016B, 0xA3},
{0x016C, 0x0C},
{0x016D, 0xD0},
{0x016E, 0x07},
{0x016F, 0xA8},
{0x0170, 0x01},
{0x0171, 0x01},
{0x0172, 0x03},
{0x0174, 0x00},
{0x0175, 0x00},
{0x018C, 0x0A},
{0x018D, 0x0A},
{0x0301, 0x05},
{0x0303, 0x01},
{0x0304, 0x02},
{0x0305, 0x02},
{0x0306, 0x00},
{0x0307, 0x46},
{0x0309, 0x0A},
{0x030B, 0x01},
{0x030C, 0x00},
{0x030D, 0x49},
{0x455E, 0x00},
{0x471E, 0x4B},
{0x4767, 0x0F},
{0x4750, 0x14},
{0x4540, 0x00},
{0x47B4, 0x14},
{0x4713, 0x30},
{0x478B, 0x10},
{0x478F, 0x10},
{0x4793, 0x10},
{0x4797, 0x0E},
{0x479B, 0x0E},
{0x0100, 0x01}
};

/*3280*2464@ 30fps for ZSL ONLY*/
const struct _sensor_reg_t sonyimx219_framesize_3280_2464[] = {
{0x0100, 0x00},
{0x30EB, 0x05},
{0x30EB, 0x0C},
{0x300A, 0xFF},
{0x300B, 0xFF},
{0x30EB, 0x05},
{0x30EB, 0x09},
{0x0114, 0x03},
{0x0128, 0x00},
{0x012A, 0x14},
{0x012B, 0x00},
{0x0160, 0x0A},
{0x0161, 0x21},
{0x0162, 0x0E},
{0x0163, 0x10},
{0x0164, 0x00},
{0x0165, 0x00},
{0x0166, 0x0C},
{0x0167, 0xCF},
{0x0168, 0x00},
{0x0169, 0x00},
{0x016A, 0x09},
{0x016B, 0x9F},
{0x016C, 0x0C},
{0x016D, 0xD0},
{0x016E, 0x09},
{0x016F, 0xA0},
{0x0170, 0x01},
{0x0171, 0x01},
{0x0172, 0x03},
{0x0174, 0x00},
{0x0175, 0x00},
{0x018C, 0x0A},
{0x018D, 0x0A},
{0x0301, 0x05},
{0x0303, 0x01},
{0x0304, 0x02},
{0x0305, 0x02},
{0x0306, 0x00},
{0x0307, 0x46},
{0x0309, 0x0A},
{0x030B, 0x01},
{0x030C, 0x00},
{0x030D, 0x49},
{0x455E, 0x00},
{0x471E, 0x4B},
{0x4767, 0x0F},
{0x4750, 0x14},
{0x4540, 0x00},
{0x47B4, 0x14},
{0x4713, 0x30},
{0x478B, 0x10},
{0x478F, 0x10},
{0x4793, 0x10},
{0x4797, 0x0E},
{0x479B, 0x0E},
{0x0100, 0x01}
};
#endif /* _SONYIMX219_H */

