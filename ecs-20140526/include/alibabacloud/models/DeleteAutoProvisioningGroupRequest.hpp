// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTOPROVISIONINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTOPROVISIONINGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteAutoProvisioningGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAutoProvisioningGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TerminateInstances, terminateInstances_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAutoProvisioningGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TerminateInstances, terminateInstances_);
    };
    DeleteAutoProvisioningGroupRequest() = default ;
    DeleteAutoProvisioningGroupRequest(const DeleteAutoProvisioningGroupRequest &) = default ;
    DeleteAutoProvisioningGroupRequest(DeleteAutoProvisioningGroupRequest &&) = default ;
    DeleteAutoProvisioningGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAutoProvisioningGroupRequest() = default ;
    DeleteAutoProvisioningGroupRequest& operator=(const DeleteAutoProvisioningGroupRequest &) = default ;
    DeleteAutoProvisioningGroupRequest& operator=(DeleteAutoProvisioningGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoProvisioningGroupId_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->terminateInstances_ == nullptr; };
    // autoProvisioningGroupId Field Functions 
    bool hasAutoProvisioningGroupId() const { return this->autoProvisioningGroupId_ != nullptr;};
    void deleteAutoProvisioningGroupId() { this->autoProvisioningGroupId_ = nullptr;};
    inline string autoProvisioningGroupId() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupId_, "") };
    inline DeleteAutoProvisioningGroupRequest& setAutoProvisioningGroupId(string autoProvisioningGroupId) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DeleteAutoProvisioningGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteAutoProvisioningGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAutoProvisioningGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DeleteAutoProvisioningGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DeleteAutoProvisioningGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // terminateInstances Field Functions 
    bool hasTerminateInstances() const { return this->terminateInstances_ != nullptr;};
    void deleteTerminateInstances() { this->terminateInstances_ = nullptr;};
    inline bool terminateInstances() const { DARABONBA_PTR_GET_DEFAULT(terminateInstances_, false) };
    inline DeleteAutoProvisioningGroupRequest& setTerminateInstances(bool terminateInstances) { DARABONBA_PTR_SET_VALUE(terminateInstances_, terminateInstances) };


  protected:
    // The ID of the auto provisioning group.
    // 
    // This parameter is required.
    std::shared_ptr<string> autoProvisioningGroupId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the auto provisioning group.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to release instances in the auto provisioning group. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  By default, this parameter inherits the value of `TerminateInstances` that you specified when you call the `CreateAutoProvisioningGroup` operation to create an auto provisioning group. You can also change the value of `TerminateInstances` when you call the DeleteAutoProvisioningGroup operation to delete the auto provisioning group.
    std::shared_ptr<bool> terminateInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
