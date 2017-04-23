
#define RDABT_5876			(0)
#define WLAN_VERSION_90_D	(1)
#define WLAN_VERSION_90_E	(2)
#define WLAN_VERSION_91		(3)
#define WLAN_VERSION_91_E	(4)
#define WLAN_VERSION_91_F	(5)
#define WLAN_VERSION_91_G	(6)

#define RDA_BT_IOCTL_MAGIC						'u'
#define RDA_BT_POWER_ON_IOCTL					_IO(RDA_BT_IOCTL_MAGIC ,0x01)
#define RDA_BT_RF_INIT_IOCTL					_IO(RDA_BT_IOCTL_MAGIC ,0x02)
#define RDA_BT_DC_CAL_IOCTL						_IO(RDA_BT_IOCTL_MAGIC ,0x03)
#define RDA_BT_RF_SWITCH_IOCTL					_IO(RDA_BT_IOCTL_MAGIC ,0x04)
#define RDA_BT_POWER_OFF_IOCTL					_IO(RDA_BT_IOCTL_MAGIC ,0x05)
#define RDA_BT_EN_CLK							_IO(RDA_BT_IOCTL_MAGIC ,0x06)
#define RDA_BT_DC_DIG_RESET_IOCTL				_IO(RDA_BT_IOCTL_MAGIC ,0x07)
#define RDA_BT_GET_ADDRESS_IOCTL				_IO(RDA_BT_IOCTL_MAGIC ,0x08)
#define RDA_WLAN_COMBO_VERSION					_IO(RDA_BT_IOCTL_MAGIC ,0x15)
#define RDA_BT_DC_CAL_IOCTL_FIX_5991_LNA_GAIN	_IO(RDA_BT_IOCTL_MAGIC ,0x26)
