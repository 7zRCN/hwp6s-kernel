/*
 * Definitions for akm09911 compass chip.
 */
#ifndef AKM09911_H
#define AKM09911_H

#include <linux/ioctl.h>
//#include <linux/regulator/consumer.h>

/* Device specific constant values */
#define AK09911_REG_WIA1			0x00
#define AK09911_REG_WIA2			0x01
#define AK09911_REG_INFO1			0x02
#define AK09911_REG_INFO2			0x03
#define AK09911_REG_ST1				0x10
#define AK09911_REG_HXL				0x11
#define AK09911_REG_HXH				0x12
#define AK09911_REG_HYL				0x13
#define AK09911_REG_HYH				0x14
#define AK09911_REG_HZL				0x15
#define AK09911_REG_HZH				0x16
#define AK09911_REG_TMPS			0x17
#define AK09911_REG_ST2				0x18
#define AK09911_REG_CNTL1			0x30
#define AK09911_REG_CNTL2			0x31
#define AK09911_REG_CNTL3			0x32

#define AK09911_FUSE_ASAX			0x60
#define AK09911_FUSE_ASAY			0x61
#define AK09911_FUSE_ASAZ			0x62

#define AK09911_MODE_SNG_MEASURE	0x01
#define AK09911_MODE_SELF_TEST		0x10
#define AK09911_MODE_FUSE_ACCESS	0x1F
#define AK09911_MODE_POWERDOWN		0x00
#define AK09911_RESET_DATA			0x01

#define AK09911_REGS_SIZE		13
#define AK09911_WIA1_VALUE		0x48
#define AK09911_WIA2_VALUE		0x05
/* To avoid device dependency, convert to general name */
#define AKM_I2C_NAME			"akm09911"
#define AKM_MISCDEV_NAME		"akm09911_dev"
#define AKM_SYSCLS_NAME			"compass"
#define AKM_SYSDEV_NAME			"akm09911"
#define AKM_REG_MODE			AK09911_REG_CNTL2
#define AKM_REG_RESET			AK09911_REG_CNTL3
#define AKM_REG_STATUS			AK09911_REG_ST1
#define AKM_WIA_VALE			0x48
#define AKM_MEASURE_TIME_US		10000
#define AKM_DRDY_IS_HIGH(x)		((x) & 0x01)
#define AKM_SENSOR_INFO_SIZE	2
#define AKM_SENSOR_CONF_SIZE	3
#define AKM_SENSOR_DATA_SIZE	9

#define AKM_YPR_DATA_SIZE		26
#define AKM_YPR_DATA_SIZE_NPG		12

#define AKM_RWBUF_SIZE			16

#define AKM_MODE_SNG_MEASURE	AK09911_MODE_SNG_MEASURE
#define AKM_MODE_SELF_TEST		AK09911_MODE_SELF_TEST
#define AKM_MODE_FUSE_ACCESS	AK09911_MODE_FUSE_ACCESS
#define AKM_MODE_POWERDOWN		AK09911_MODE_POWERDOWN
#define AKM_RESET_DATA			AK09911_RESET_DATA

#define ACC_DATA_FLAG		0
#define MAG_DATA_FLAG		1
#define ORI_DATA_FLAG		2
#define AKM_NUM_SENSORS		3

#define ACC_DATA_READY		(1<<(ACC_DATA_FLAG))
#define MAG_DATA_READY		(1<<(MAG_DATA_FLAG))
#define ORI_DATA_READY		(1<<(ORI_DATA_FLAG))

#define AKMIO				0xA1


struct akm09911_platform_data {
	char layout;
	int gpio_DRDY;
	int gpio_RSTN;
};

#endif

