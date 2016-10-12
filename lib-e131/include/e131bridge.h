/**
 * @file e131bridge.h
 *
 */
/* Copyright (C) 2016 by Arjan van Vught mailto:info@raspberrypi-dmx.nl
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef E131BRIDGE_H_
#define E131BRIDGE_H_

#include <stdint.h>

#include "e131.h"
#include "lightset.h"

#include "sys_time.h"

class E131Bridge {
public:
	E131Bridge(void);
	~E131Bridge(void);

	void SetOutput(LightSet *);

	const uint8_t *GetSoftwareVersion(void);

	void Start(void);
	void Stop(void);

	const uint16_t getUniverse(void);
	void setUniverse(const uint16_t);

	int HandlePacket(void);

private:
	bool IsValid(void);
	void SetNetworkDataLossCondition(void);
	void CheckNetworkDataLoss(void);
	void HandleDmx(void);

private:
	LightSet *m_pLightSet;
	uint16_t m_nUniverse;
	uint8_t m_nLastSequenceNumber;
	time_t m_nLastPacketTimeStamp;
	bool m_bNetworkDataLoss;
	uint8_t m_nPriority;

	struct TE131Packet m_E131Packet;
};

#endif /* E131BRIDGE_H_ */
