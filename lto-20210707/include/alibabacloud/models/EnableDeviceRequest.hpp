// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class EnableDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableDeviceRequest() = default ;
    EnableDeviceRequest(const EnableDeviceRequest &) = default ;
    EnableDeviceRequest(EnableDeviceRequest &&) = default ;
    EnableDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDeviceRequest() = default ;
    EnableDeviceRequest& operator=(const EnableDeviceRequest &) = default ;
    EnableDeviceRequest& operator=(EnableDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->regionId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline EnableDeviceRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableDeviceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
