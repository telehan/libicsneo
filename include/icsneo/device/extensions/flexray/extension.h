#ifndef __FLEXRAYEXTENSION_H_
#define __FLEXRAYEXTENSION_H_

#include <mutex>
#include <memory>
#include <utility>
#include "icsneo/device/extensions/flexray/erayregister.h"
#include "icsneo/communication/message/flexray/control/flexraycontrolmessage.h"
#include "icsneo/device/extensions/deviceextension.h"

namespace icsneo {

namespace FlexRay {

class Controller;

class Extension : public DeviceExtension {
public:
	Extension(Device& device, uint8_t controllerCount);
	const char* getName() const override { return "FlexRay"; }
	void handleMessage(const std::shared_ptr<Message>& message) override;

	std::shared_ptr<Controller> getController(uint8_t index) const {
		if(index >= controllers.size())
			return nullptr;
		return controllers[index];
	}

private:
	std::vector<std::shared_ptr<Controller>> controllers;
};

} // namespace FlexRay

} // namespace icsneo


#endif // __FLEXRAYEXTENSION_H_