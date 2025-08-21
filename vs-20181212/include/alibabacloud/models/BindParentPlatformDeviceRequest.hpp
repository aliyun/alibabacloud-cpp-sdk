// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPARENTPLATFORMDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDPARENTPLATFORMDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BindParentPlatformDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindParentPlatformDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParentPlatformId, parentPlatformId_);
    };
    friend void from_json(const Darabonba::Json& j, BindParentPlatformDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParentPlatformId, parentPlatformId_);
    };
    BindParentPlatformDeviceRequest() = default ;
    BindParentPlatformDeviceRequest(const BindParentPlatformDeviceRequest &) = default ;
    BindParentPlatformDeviceRequest(BindParentPlatformDeviceRequest &&) = default ;
    BindParentPlatformDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindParentPlatformDeviceRequest() = default ;
    BindParentPlatformDeviceRequest& operator=(const BindParentPlatformDeviceRequest &) = default ;
    BindParentPlatformDeviceRequest& operator=(BindParentPlatformDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceId_ != nullptr
        && this->ownerId_ != nullptr && this->parentPlatformId_ != nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BindParentPlatformDeviceRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BindParentPlatformDeviceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parentPlatformId Field Functions 
    bool hasParentPlatformId() const { return this->parentPlatformId_ != nullptr;};
    void deleteParentPlatformId() { this->parentPlatformId_ = nullptr;};
    inline string parentPlatformId() const { DARABONBA_PTR_GET_DEFAULT(parentPlatformId_, "") };
    inline BindParentPlatformDeviceRequest& setParentPlatformId(string parentPlatformId) { DARABONBA_PTR_SET_VALUE(parentPlatformId_, parentPlatformId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> parentPlatformId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
