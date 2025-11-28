// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDEVICEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDEVICEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class EnableDeviceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDeviceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDeviceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableDeviceGroupRequest() = default ;
    EnableDeviceGroupRequest(const EnableDeviceGroupRequest &) = default ;
    EnableDeviceGroupRequest(EnableDeviceGroupRequest &&) = default ;
    EnableDeviceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDeviceGroupRequest() = default ;
    EnableDeviceGroupRequest& operator=(const EnableDeviceGroupRequest &) = default ;
    EnableDeviceGroupRequest& operator=(EnableDeviceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupId_ == nullptr
        && return this->regionId_ == nullptr; };
    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string deviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline EnableDeviceGroupRequest& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableDeviceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceGroupId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
