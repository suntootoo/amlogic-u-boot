#include <common.h>
#include <odroid-common.h>

#include <amlogic/hdmi.h>

int board_cvbs_probe()
{
	int i;
	int val = 0;
	int tmp = 0;
	int probed;

	/* no probe when HDMI is connected */
	if (hdmitx_device.HWOp.get_hpd_state()) {
		printf("hdmi connected, disable cvbs\n");
		return 0;
	}

	for (i = 0; i < 100; i++) {
		tmp = get_adc_value(0);
		printf("CVBS cable tmp = %d\n", tmp);
		val += tmp;
	}
	val /= i;

	printf("CVBS cable loopback = 0x%X\n", val);

	probed = ((0x10 <= val) && (val <= 0x50));

	printf("set cvbscable = 0x%02X\n", probed);
	setenv_ulong("cvbscable", probed);

	return probed;
}
