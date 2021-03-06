/**
 * @file oscserverconst.h
 *
 */
/* Copyright (C) 2019 by Arjan van Vught mailto:info@raspberrypi-dmx.nl
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

#ifndef OSCSERVERCONST_H_
#define OSCSERVERCONST_H_

class OSCServerConst {
public:
	alignas(uint32_t) static const char PARAMS_FILE_NAME[];
	alignas(uint32_t) static const char PARAMS_INCOMING_PORT[];
	alignas(uint32_t) static const char PARAMS_OUTGOING_PORT[];
	alignas(uint32_t) static const char PARAMS_PATH[];
	alignas(uint32_t) static const char PARAMS_TRANSMISSION[];
	alignas(uint32_t) static const char PARAMS_PATH_INFO[];
	alignas(uint32_t) static const char PARAMS_PATH_BLACKOUT[];
};

#endif /* OSCSERVERCONST_H_ */
