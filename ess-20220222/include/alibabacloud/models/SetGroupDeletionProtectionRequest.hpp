// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETGROUPDELETIONPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETGROUPDELETIONPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class SetGroupDeletionProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetGroupDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, SetGroupDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupDeletionProtection, groupDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
    };
    SetGroupDeletionProtectionRequest() = default ;
    SetGroupDeletionProtectionRequest(const SetGroupDeletionProtectionRequest &) = default ;
    SetGroupDeletionProtectionRequest(SetGroupDeletionProtectionRequest &&) = default ;
    SetGroupDeletionProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetGroupDeletionProtectionRequest() = default ;
    SetGroupDeletionProtectionRequest& operator=(const SetGroupDeletionProtectionRequest &) = default ;
    SetGroupDeletionProtectionRequest& operator=(SetGroupDeletionProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupDeletionProtection_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->scalingGroupId_ == nullptr; };
    // groupDeletionProtection Field Functions 
    bool hasGroupDeletionProtection() const { return this->groupDeletionProtection_ != nullptr;};
    void deleteGroupDeletionProtection() { this->groupDeletionProtection_ = nullptr;};
    inline bool groupDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(groupDeletionProtection_, false) };
    inline SetGroupDeletionProtectionRequest& setGroupDeletionProtection(bool groupDeletionProtection) { DARABONBA_PTR_SET_VALUE(groupDeletionProtection_, groupDeletionProtection) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetGroupDeletionProtectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetGroupDeletionProtectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetGroupDeletionProtectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline SetGroupDeletionProtectionRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


  protected:
    // Specifies whether to enable deletion protection for the scaling group. Valid values:
    // 
    // *   true: enables deletion protection. In this case, you cannot delete the scaling group by using the Auto Scaling console or calling an API operation. You must disable deletion protection before you can delete the scaling group.
    // *   false: disables deletion protection.
    // 
    // Default value: false.
    // 
    // This parameter is required.
    std::shared_ptr<bool> groupDeletionProtection_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID.
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
