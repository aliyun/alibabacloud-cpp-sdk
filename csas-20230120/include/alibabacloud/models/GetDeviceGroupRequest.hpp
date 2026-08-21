// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
    };
    GetDeviceGroupRequest() = default ;
    GetDeviceGroupRequest(const GetDeviceGroupRequest &) = default ;
    GetDeviceGroupRequest(GetDeviceGroupRequest &&) = default ;
    GetDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceGroupRequest() = default ;
    GetDeviceGroupRequest& operator=(const GetDeviceGroupRequest &) = default ;
    GetDeviceGroupRequest& operator=(GetDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupId_ == nullptr; };
    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline GetDeviceGroupRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


  protected:
    // The device label ID. You can obtain this value from:
    // - [ListDeviceGroups](~~ListDeviceGroups~~): Lists device labels.
    // - [CreateDeviceGroup](~~CreateDeviceGroup~~): Creates a device label.
    // 
    // This parameter is required.
    shared_ptr<string> deviceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
