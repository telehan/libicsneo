#ifndef __VALUECAN4_2_H_
#define __VALUECAN4_2_H_

#include "icsneo/device/valuecan4/valuecan4.h"
#include "icsneo/device/valuecan4/settings/valuecan4-2settings.h"
#include <string>

namespace icsneo {

class ValueCAN4_2 : public ValueCAN4 {
public:
	// Serial numbers start with V2 for 4-2
	static constexpr DeviceType::Enum DEVICE_TYPE = DeviceType::VCAN4_2;
	static std::vector<std::shared_ptr<Device>> Find() {
		std::vector<std::shared_ptr<Device>> found;

		for(auto neodevice : STM32::FindByProduct(PRODUCT_ID)) {
			if(std::string(neodevice.serial).substr(0, 2) == "V2")
				found.emplace_back(new ValueCAN4_2(neodevice));
		}

		return found;
	}

private:
	ValueCAN4_2(neodevice_t neodevice) : ValueCAN4(neodevice) {
		initialize<STM32, ValueCAN4_2Settings>();
		getWritableNeoDevice().type = DEVICE_TYPE;
	}
};

}

#endif