/******************************************************************************
 *
 * Copyright(c) 2009-2010  Realtek Corporation.
 *
 *****************************************************************************/

#include <drv_types.h>

#ifdef CONFIG_IOCTL_CFG80211

#include <rtw_wifi_regd.h>

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(4, 7, 0))
#define ieee80211_band nl80211_band
#define IEEE80211_BAND_2GHZ NL80211_BAND_2GHZ
#define IEEE80211_BAND_5GHZ NL80211_BAND_5GHZ
#define IEEE80211_NUM_BANDS NUM_NL80211_BANDS
#endif


void rtw_reg_notify_by_driver(_adapter *adapter)
{
	return;
}

int rtw_regd_init(_adapter * padapter)
{
	return 0;
}
#endif //CONFIG_IOCTL_CFG80211
