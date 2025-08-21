// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODYDEVICECHECKINFOSDEVICECHECKINFO_HPP_
#define ALIBABACLOUD_MODELS_CHECKDEVICESRESPONSEBODYDEVICECHECKINFOSDEVICECHECKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Available, available_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Available, available_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
    };
    CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo() = default ;
    CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo(const CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo &) = default ;
    CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo(CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo &&) = default ;
    CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo() = default ;
    CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo& operator=(const CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo &) = default ;
    CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo& operator=(CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->available_ != nullptr
        && this->deviceId_ != nullptr; };
    // available Field Functions 
    bool hasAvailable() const { return this->available_ != nullptr;};
    void deleteAvailable() { this->available_ = nullptr;};
    inline bool available() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
    inline CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline CheckDevicesResponseBodyDeviceCheckInfosDeviceCheckInfo& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


  protected:
    std::shared_ptr<bool> available_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
