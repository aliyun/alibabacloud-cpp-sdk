// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICECONTROLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVICECONTROLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeviceControlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceControlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlRequest, controlRequestShrink_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceControlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlRequest, controlRequestShrink_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
    };
    DeviceControlShrinkRequest() = default ;
    DeviceControlShrinkRequest(const DeviceControlShrinkRequest &) = default ;
    DeviceControlShrinkRequest(DeviceControlShrinkRequest &&) = default ;
    DeviceControlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeviceControlShrinkRequest() = default ;
    DeviceControlShrinkRequest& operator=(const DeviceControlShrinkRequest &) = default ;
    DeviceControlShrinkRequest& operator=(DeviceControlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlRequestShrink_ != nullptr
        && this->deviceInfoShrink_ != nullptr; };
    // controlRequestShrink Field Functions 
    bool hasControlRequestShrink() const { return this->controlRequestShrink_ != nullptr;};
    void deleteControlRequestShrink() { this->controlRequestShrink_ = nullptr;};
    inline string controlRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(controlRequestShrink_, "") };
    inline DeviceControlShrinkRequest& setControlRequestShrink(string controlRequestShrink) { DARABONBA_PTR_SET_VALUE(controlRequestShrink_, controlRequestShrink) };


    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline DeviceControlShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


  protected:
    std::shared_ptr<string> controlRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
