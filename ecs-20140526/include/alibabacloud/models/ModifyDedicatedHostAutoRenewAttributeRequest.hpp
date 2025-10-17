// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTAUTORENEWATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEDICATEDHOSTAUTORENEWATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDedicatedHostAutoRenewAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDedicatedHostAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewWithEcs, autoRenewWithEcs_);
      DARABONBA_PTR_TO_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDedicatedHostAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewWithEcs, autoRenewWithEcs_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDedicatedHostAutoRenewAttributeRequest() = default ;
    ModifyDedicatedHostAutoRenewAttributeRequest(const ModifyDedicatedHostAutoRenewAttributeRequest &) = default ;
    ModifyDedicatedHostAutoRenewAttributeRequest(ModifyDedicatedHostAutoRenewAttributeRequest &&) = default ;
    ModifyDedicatedHostAutoRenewAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDedicatedHostAutoRenewAttributeRequest() = default ;
    ModifyDedicatedHostAutoRenewAttributeRequest& operator=(const ModifyDedicatedHostAutoRenewAttributeRequest &) = default ;
    ModifyDedicatedHostAutoRenewAttributeRequest& operator=(ModifyDedicatedHostAutoRenewAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->autoRenewWithEcs_ == nullptr && return this->dedicatedHostIds_ == nullptr && return this->duration_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->periodUnit_ == nullptr && return this->regionId_ == nullptr && return this->renewalStatus_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewWithEcs Field Functions 
    bool hasAutoRenewWithEcs() const { return this->autoRenewWithEcs_ != nullptr;};
    void deleteAutoRenewWithEcs() { this->autoRenewWithEcs_ = nullptr;};
    inline string autoRenewWithEcs() const { DARABONBA_PTR_GET_DEFAULT(autoRenewWithEcs_, "") };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setAutoRenewWithEcs(string autoRenewWithEcs) { DARABONBA_PTR_SET_VALUE(autoRenewWithEcs_, autoRenewWithEcs) };


    // dedicatedHostIds Field Functions 
    bool hasDedicatedHostIds() const { return this->dedicatedHostIds_ != nullptr;};
    void deleteDedicatedHostIds() { this->dedicatedHostIds_ = nullptr;};
    inline string dedicatedHostIds() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIds_, "") };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setDedicatedHostIds(string dedicatedHostIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostIds_, dedicatedHostIds) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string renewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDedicatedHostAutoRenewAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to automatically renew the subscription. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // Specifies whether to automatically renew the subscription dedicated hosts along with the subscription ECS instances hosted on the dedicated hosts.
    // 
    // If auto-renewal is enabled for the subscription ECS instances hosted on the subscription dedicated hosts, you can specify this parameter to automatically renew the dedicated hosts along with the subscription ECS instances. When the subscription ECS instances hosted on your dedicated hosts are automatically renewed, the subscription dedicated hosts are also automatically renewed if the expiration time of the dedicated hosts is earlier than the expiration time of the renewed instances. Take note of the following items:
    // 
    // When the subscription dedicated hosts are configured to be automatically renewed along with the subscription ECS instances hosted on the dedicated hosts, the system checks the expiration time of the renewed instances and selects a minimum renewal duration for the dedicated hosts so that the dedicated hosts are renewed by a duration that ends later than the expiration time of the renewed instances. For more information about supported renewal durations, see the descriptions of the `PeriodUnit` and `Duration` parameters.
    // 
    // For example, assume that a dedicated host expires on January 15 of the current year. Subscription ECS instances hosted on the dedicated host are configured to be automatically renewed to November 15 of the same year. The expiration time of the dedicated host is earlier than the expiration time of the ECS instances by 10 months. In this case, the system selects a renewal duration of 12 months (a minimum duration calculated based on a `Duration` value of 12 and a `PeriodUnit` value of Month) for the dedicated host. This ensures that the dedicated host expires later than the ECS instances.
    // 
    // Valid values:
    // 
    // *   AutoRenewWithEcs: automatically renews the subscription dedicated hosts along with the subscription ECS instances hosted on the dedicated hosts.
    // *   StopRenewWithEcs: does not automatically renew the subscription dedicated hosts along with the subscription ECS instances hosted on the dedicated hosts.
    // *   NoOperation: does not change the current settings for the dedicated hosts.
    // 
    // > If you set this parameter to AutoRenewWithEcs, make sure that `AutoRenew` is set to true to enable auto-renewal for the dedicated hosts. Otherwise, the subscription dedicated hosts are not automatically renewed along with the subscription ECS instances hosted on the dedicated hosts.
    // 
    // Default value: NoOperation.
    std::shared_ptr<string> autoRenewWithEcs_ = nullptr;
    // The IDs of dedicated hosts. You can specify up to 100 subscription dedicated host IDs. Separate the IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> dedicatedHostIds_ = nullptr;
    // The renewal duration.
    // 
    // *   Valid values when PeriodUnit is set to Month: 1 and 12
    // *   Valid values when PeriodUnit is set to Year: 1 and 12
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The unit of the renewal period. Valid values:
    // 
    // *   Month
    // *   Year
    // 
    // Default value: Month
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The region ID of the dedicated host.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to automatically renew the subscription dedicated host. The `RenewalStatus` parameter takes precedence over the `AutoRenew` parameter. Valid values:
    // 
    // *   AutoRenewal: The dedicated hosts are automatically renewed.
    // *   Normal: The dedicated hosts are not automatically renewed, and renewal notifications are sent.
    // *   NotRenewal: The dedicated hosts are not automatically renewed, and no expiration notification is sent. A notification of no renewal is automatically sent three days before the end of the current subscription cycle. You can change the value of this parameter from NotRenewal to Normal and manually renew the dedicated hosts by calling the [RenewDedicatedHosts](https://help.aliyun.com/document_detail/134250.html) operation. Alternatively, you can renew the dedicated hosts by setting this parameter to AutoRenewal.
    std::shared_ptr<string> renewalStatus_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
