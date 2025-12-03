// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOADBALANCERMODIFICATIONPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLOADBALANCERMODIFICATIONPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetLoadBalancerModificationProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoadBalancerModificationProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_TO_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoadBalancerModificationProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionReason, modificationProtectionReason_);
      DARABONBA_PTR_FROM_JSON(ModificationProtectionStatus, modificationProtectionStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SetLoadBalancerModificationProtectionRequest() = default ;
    SetLoadBalancerModificationProtectionRequest(const SetLoadBalancerModificationProtectionRequest &) = default ;
    SetLoadBalancerModificationProtectionRequest(SetLoadBalancerModificationProtectionRequest &&) = default ;
    SetLoadBalancerModificationProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoadBalancerModificationProtectionRequest() = default ;
    SetLoadBalancerModificationProtectionRequest& operator=(const SetLoadBalancerModificationProtectionRequest &) = default ;
    SetLoadBalancerModificationProtectionRequest& operator=(SetLoadBalancerModificationProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancerId_ == nullptr
        && return this->modificationProtectionReason_ == nullptr && return this->modificationProtectionStatus_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetLoadBalancerModificationProtectionRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // modificationProtectionReason Field Functions 
    bool hasModificationProtectionReason() const { return this->modificationProtectionReason_ != nullptr;};
    void deleteModificationProtectionReason() { this->modificationProtectionReason_ = nullptr;};
    inline string modificationProtectionReason() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionReason_, "") };
    inline SetLoadBalancerModificationProtectionRequest& setModificationProtectionReason(string modificationProtectionReason) { DARABONBA_PTR_SET_VALUE(modificationProtectionReason_, modificationProtectionReason) };


    // modificationProtectionStatus Field Functions 
    bool hasModificationProtectionStatus() const { return this->modificationProtectionStatus_ != nullptr;};
    void deleteModificationProtectionStatus() { this->modificationProtectionStatus_ = nullptr;};
    inline string modificationProtectionStatus() const { DARABONBA_PTR_GET_DEFAULT(modificationProtectionStatus_, "") };
    inline SetLoadBalancerModificationProtectionRequest& setModificationProtectionStatus(string modificationProtectionStatus) { DARABONBA_PTR_SET_VALUE(modificationProtectionStatus_, modificationProtectionStatus) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetLoadBalancerModificationProtectionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLoadBalancerModificationProtectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLoadBalancerModificationProtectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetLoadBalancerModificationProtectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetLoadBalancerModificationProtectionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The reason why the configuration read-only mode is enabled. The value must be 1 to 80 characters in length. It must start with a letter and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // >  This parameter is valid only if the **ModificationProtectionStatus** parameter is set to **ConsoleProtection**.
    std::shared_ptr<string> modificationProtectionReason_ = nullptr;
    // Specifies whether to enable the configuration read-only mode. Valid values:
    // 
    // *   **NonProtection**: disables the configuration read-only mode. After you disable the configuration read-only mode, the value of **ModificationProtectionReason** is cleared.
    // *   **ConsoleProtection**: enables the configuration read-only mode.
    // 
    // >  If you set this parameter to **ConsoleProtection**, you cannot use the CLB console to modify instance configurations. However, you can call API operations to modify instance configurations.
    // 
    // This parameter is required.
    std::shared_ptr<string> modificationProtectionStatus_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
