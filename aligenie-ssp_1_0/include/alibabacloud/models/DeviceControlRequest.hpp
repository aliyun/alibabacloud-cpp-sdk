// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVICECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeviceControlRequestControlRequest.hpp>
#include <alibabacloud/models/DeviceControlRequestDeviceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeviceControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlRequest, controlRequest_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlRequest, controlRequest_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
    };
    DeviceControlRequest() = default ;
    DeviceControlRequest(const DeviceControlRequest &) = default ;
    DeviceControlRequest(DeviceControlRequest &&) = default ;
    DeviceControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeviceControlRequest() = default ;
    DeviceControlRequest& operator=(const DeviceControlRequest &) = default ;
    DeviceControlRequest& operator=(DeviceControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlRequest_ != nullptr
        && this->deviceInfo_ != nullptr; };
    // controlRequest Field Functions 
    bool hasControlRequest() const { return this->controlRequest_ != nullptr;};
    void deleteControlRequest() { this->controlRequest_ = nullptr;};
    inline const DeviceControlRequestControlRequest & controlRequest() const { DARABONBA_PTR_GET_CONST(controlRequest_, DeviceControlRequestControlRequest) };
    inline DeviceControlRequestControlRequest controlRequest() { DARABONBA_PTR_GET(controlRequest_, DeviceControlRequestControlRequest) };
    inline DeviceControlRequest& setControlRequest(const DeviceControlRequestControlRequest & controlRequest) { DARABONBA_PTR_SET_VALUE(controlRequest_, controlRequest) };
    inline DeviceControlRequest& setControlRequest(DeviceControlRequestControlRequest && controlRequest) { DARABONBA_PTR_SET_RVALUE(controlRequest_, controlRequest) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const DeviceControlRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, DeviceControlRequestDeviceInfo) };
    inline DeviceControlRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, DeviceControlRequestDeviceInfo) };
    inline DeviceControlRequest& setDeviceInfo(const DeviceControlRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline DeviceControlRequest& setDeviceInfo(DeviceControlRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


  protected:
    std::shared_ptr<DeviceControlRequestControlRequest> controlRequest_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeviceControlRequestDeviceInfo> deviceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
