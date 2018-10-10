#ifndef __NEOMESSAGE_H_
#define __NEOMESSAGE_H_

#include <stdint.h>
#include <stddef.h>

#pragma pack(push, 1)

typedef union {
	struct {
		uint32_t globalError : 1;
		uint32_t transmitMessage : 1;
		uint32_t extendedFrame : 1;
		uint32_t remoteFrame : 1;
		uint32_t crcError : 1;
		uint32_t canErrorPassive : 1;
		uint32_t incompleteFrame : 1;
		uint32_t lostArbitration : 1;
		uint32_t undefinedError : 1;
		uint32_t canBusOff : 1;
		uint32_t canErrorWarning : 1;
		uint32_t canBusShortedPlus : 1;
		uint32_t canBusShortedGround : 1;
		uint32_t checksumError : 1;
		uint32_t badMessageBitTimeError : 1;
		uint32_t ifrData : 1;
		uint32_t hardwareCommError : 1;
		uint32_t expectedLengthError : 1;
		uint32_t incomingNoMatch : 1;
		uint32_t statusBreak : 1;
		uint32_t avsiRecOverflow : 1;
		uint32_t testTrigger : 1;
		uint32_t audioComment : 1;
		uint32_t gpsData : 1;
		uint32_t analogDigitalInput : 1;
		uint32_t textComment : 1;
		uint32_t networkMessageType : 1;
		uint32_t vsiTXUnderrun : 1;
		uint32_t vsiIFRCRCBit : 1;
		uint32_t initMessage : 1;
		//uint32_t highSpeedMessage : 1; // Occupies the same space as flexraySecondStartupFrame
		uint32_t flexraySecondStartupFrame : 1;
		uint32_t extended : 1;
		// ~~~ End of bitfield 1 ~~~
		uint32_t hasValue : 1;
		uint32_t valueIsBoolean : 1;
		uint32_t highVoltage : 1;
		uint32_t longMessage : 1;
		uint32_t : 12;
		uint32_t globalChange : 1;
		uint32_t errorFrame : 1;
		uint32_t : 2;
		uint32_t endOfLongMessage : 1;
		uint32_t linErrorRXBreakNotZero : 1;
		uint32_t linErrorRXBreakTooShort : 1;
		uint32_t linErrorRXSyncNot55 : 1;
		uint32_t linErrorRXDataGreaterEight : 1;
		uint32_t linErrorTXRXMismatch : 1;
		uint32_t linErrorMessageIDParity : 1;
		//isoFrameError
		uint32_t linSyncFrameError : 1;
		//isoOverflowError
		uint32_t linIDFrameError : 1;
		//isoParityError
		uint32_t linSlaveByteError : 1;
		uint32_t rxTimeoutError : 1;
		uint32_t linNoSlaveData : 1;
		// mostPacketData
		// mostStatus
		// mostLowLevel
		// mostControlData
		// mostMHPUserData
		// mostMHPControlData
		// mostI2SDump
		// mostTooShort
		// most50
		// most150
		// mostChangedParameter
		// ethernetCRCError
		// ethernetFrameTooShort
		// ethernetFCSAvailable
		// ~~~ End of bitfield 2 ~~~
		//uint32_t linJustBreakSync : 1;
		//uint32_t linSlaveDataTooShort : 1;
		//uint32_t linOnlyUpdateSlaveTableOnce : 1;
		uint32_t canfdESI : 1;
		uint32_t canfdIDE : 1;
		uint32_t canfdRTR : 1;
		uint32_t canfdFDF : 1;
		uint32_t canfdBRS : 1;
	};
	uint32_t statusBitfield[4];
} neomessage_statusbitfield_t;

typedef struct {
	neomessage_statusbitfield_t status;
	uint64_t timestamp;
	const uint8_t* data;
	size_t length;
	uint8_t header[4];
	uint16_t netid;
	uint8_t type;
	uint8_t reserved[9];
} neomessage_t;

typedef struct {
	neomessage_statusbitfield_t status;
	uint64_t timestamp;
	const uint8_t* data;
	size_t length;
	uint32_t arbid;
	uint16_t netid;
	uint8_t type;
	char reserved[9];
} neomessage_can_t;
static_assert(sizeof(neomessage_can_t) == sizeof(neomessage_t), "All types of neomessage_t must be the same size!");

#pragma pack(pop)

#ifdef __cplusplus
#include "communication/message/include/message.h"

namespace icsneo {

neomessage_t CreateNeoMessage(const Message& message);

}
#endif

#endif