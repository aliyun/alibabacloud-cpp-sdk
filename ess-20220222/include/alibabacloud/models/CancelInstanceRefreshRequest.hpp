// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELINSTANCEREFRESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELINSTANCEREFRESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CancelInstanceRefreshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelInstanceRefreshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelInstanceRefreshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRefreshTaskId, instanceRefreshTaskId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    CancelInstanceRefreshRequest() = default ;
    CancelInstanceRefreshRequest(const CancelInstanceRefreshRequest &) = default ;
    CancelInstanceRefreshRequest(CancelInstanceRefreshRequest &&) = default ;
    CancelInstanceRefreshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelInstanceRefreshRequest() = default ;
    CancelInstanceRefreshRequest& operator=(const CancelInstanceRefreshRequest &) = default ;
    CancelInstanceRefreshRequest& operator=(CancelInstanceRefreshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceRefreshTaskId_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr; };
    // instanceRefreshTaskId Field Functions 
    bool hasInstanceRefreshTaskId() const { return this->instanceRefreshTaskId_ != nullptr;};
    void deleteInstanceRefreshTaskId() { this->instanceRefreshTaskId_ = nullptr;};
    inline string instanceRefreshTaskId() const { DARABONBA_PTR_GET_DEFAULT(instanceRefreshTaskId_, "") };
    inline CancelInstanceRefreshRequest& setInstanceRefreshTaskId(string instanceRefreshTaskId) { DARABONBA_PTR_SET_VALUE(instanceRefreshTaskId_, instanceRefreshTaskId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CancelInstanceRefreshRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CancelInstanceRefreshRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CancelInstanceRefreshRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CancelInstanceRefreshRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // The ID of the instance refresh task.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceRefreshTaskId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The ID of the scaling group.
    // 
    // This parameter is required.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
