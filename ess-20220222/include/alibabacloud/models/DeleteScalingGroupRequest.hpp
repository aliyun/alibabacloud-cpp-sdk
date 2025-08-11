// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCALINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCALINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DeleteScalingGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScalingGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceDelete, forceDelete_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScalingGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceDelete, forceDelete_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    DeleteScalingGroupRequest() = default ;
    DeleteScalingGroupRequest(const DeleteScalingGroupRequest &) = default ;
    DeleteScalingGroupRequest(DeleteScalingGroupRequest &&) = default ;
    DeleteScalingGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScalingGroupRequest() = default ;
    DeleteScalingGroupRequest& operator=(const DeleteScalingGroupRequest &) = default ;
    DeleteScalingGroupRequest& operator=(DeleteScalingGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forceDelete_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->scalingGroupId_ != nullptr; };
    // forceDelete Field Functions 
    bool hasForceDelete() const { return this->forceDelete_ != nullptr;};
    void deleteForceDelete() { this->forceDelete_ = nullptr;};
    inline bool forceDelete() const { DARABONBA_PTR_GET_DEFAULT(forceDelete_, false) };
    inline DeleteScalingGroupRequest& setForceDelete(bool forceDelete) { DARABONBA_PTR_SET_VALUE(forceDelete_, forceDelete) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteScalingGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteScalingGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteScalingGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteScalingGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DeleteScalingGroupRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // Specifies whether to enforce the deletion of the scaling group, including the removal of the current ECS instances or elastic container instances from the scaling group and their subsequent release, even if the scaling group is actively undergoing scaling activities. Valid values:
    // 
    // *   true: enforces the deletion of the scaling group. In this case, the scaling group first enters the Disabled state, ceasing acceptance of new scaling requests. Auto Scaling awaits the conclusion of all ongoing scaling activities in the scaling group before it automatically removes the current ECS instances or elastic container instances from the scaling group and enforces the deletion operation. Note that manually added instances are merely removed from the scaling group, whereas auto-provisioned instances are removed and deleted.
    // 
    // *   false: does not enforce the deletion of the scaling group. The scaling group will be disabled and then deleted once all the following requirements are satisfied:
    // 
    //     *   The scaling group has no ongoing scaling activities.
    //     *   The scaling group contains no ECS instances or elastic container instances (Total Capacity=0).
    // 
    // Default value: false.
    std::shared_ptr<bool> forceDelete_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the scaling group.
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
