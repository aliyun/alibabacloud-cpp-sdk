// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTORENEWATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyInstanceAutoRenewAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyInstanceAutoRenewAttributeRequest() = default ;
    ModifyInstanceAutoRenewAttributeRequest(const ModifyInstanceAutoRenewAttributeRequest &) = default ;
    ModifyInstanceAutoRenewAttributeRequest(ModifyInstanceAutoRenewAttributeRequest &&) = default ;
    ModifyInstanceAutoRenewAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAutoRenewAttributeRequest() = default ;
    ModifyInstanceAutoRenewAttributeRequest& operator=(const ModifyInstanceAutoRenewAttributeRequest &) = default ;
    ModifyInstanceAutoRenewAttributeRequest& operator=(ModifyInstanceAutoRenewAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->duration_ == nullptr && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->periodUnit_ == nullptr
        && this->regionId_ == nullptr && this->renewalStatus_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ModifyInstanceAutoRenewAttributeRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ModifyInstanceAutoRenewAttributeRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceAutoRenewAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyInstanceAutoRenewAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyInstanceAutoRenewAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyInstanceAutoRenewAttributeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceAutoRenewAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline ModifyInstanceAutoRenewAttributeRequest& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyInstanceAutoRenewAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyInstanceAutoRenewAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to automatically renew the instance before it expires.
    // 
    // - true: enables auto-renewal.
    // - false: disables auto-renewal.
    // 
    // Default value: false.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration of the instance.
    // 
    // <props="china">
    // - When `PeriodUnit` is set to `Year`, the valid values of `Duration` are: {"1", "2", "3", "4", "5"}
    // - When `PeriodUnit` is set to `Month`, the valid values of `Duration` are: {"1", "2", "3", "6", "12", "24", "36", "48", "60"}
    // - When `PeriodUnit` is set to `Week`, the valid values of `Duration` are: {"1", "2", "3", "4"}
    // 
    // 
    // 
    // <props="intl">
    // - When `PeriodUnit` is set to `Year`, the valid values of `Duration` are: {"1", "2", "3", "4", "5"}
    // - When `PeriodUnit` is set to `Month`, the valid values of `Duration` are: {"1", "2", "3", "6", "12", "24", "36", "48", "60"}
    // 
    // 
    // 
    // <props="partner">
    // - When `PeriodUnit` is set to `Year`, the valid values of `Duration` are: {"1", "2", "3", "4", "5"}
    // - When `PeriodUnit` is set to `Month`, the valid values of `Duration` are: {"1", "2", "3", "6", "12", "24", "36", "48", "60"}
    shared_ptr<int32_t> duration_ {};
    // Instance ID. You can specify up to 100 subscription instances at a time. Separate multiple instance IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The unit of the renewal duration, that is, the unit of the `Duration` parameter. Valid values:
    // 
    // <props="china">
    // - Week
    // - Month (default)
    // - Year
    // 
    // 
    // 
    // <props="intl">
    // - Month (default)
    // - Year
    // 
    // 
    // 
    // <props="partner">
    // - Month (default)
    // - Year
    shared_ptr<string> periodUnit_ {};
    // The region ID of the instance. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to view the latest list of Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The auto-renewal status of the instance. Valid values:
    // 
    // - AutoRenewal: enables auto-renewal.
    // 
    // - Normal: disables auto-renewal.
    // 
    // - NotRenewal: does not renew the instance. After this value is set, the system no longer sends expiration reminders and only sends a non-renewal reminder three days before the instance expires. ECS instances that are set to not renew can be changed to pending renewal (`Normal`), and then manually renewed or set to auto-renewal.
    // 
    // > The `RenewalStatus` parameter takes precedence over the `AutoRenew` parameter. If the `RenewalStatus` parameter is not specified, the `AutoRenew` parameter takes effect by default.
    shared_ptr<string> renewalStatus_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
