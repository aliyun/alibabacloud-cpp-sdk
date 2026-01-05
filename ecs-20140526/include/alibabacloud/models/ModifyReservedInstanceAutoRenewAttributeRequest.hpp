// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCEAUTORENEWATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRESERVEDINSTANCEAUTORENEWATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyReservedInstanceAutoRenewAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyReservedInstanceAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyReservedInstanceAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(ReservedInstanceId, reservedInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyReservedInstanceAutoRenewAttributeRequest() = default ;
    ModifyReservedInstanceAutoRenewAttributeRequest(const ModifyReservedInstanceAutoRenewAttributeRequest &) = default ;
    ModifyReservedInstanceAutoRenewAttributeRequest(ModifyReservedInstanceAutoRenewAttributeRequest &&) = default ;
    ModifyReservedInstanceAutoRenewAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyReservedInstanceAutoRenewAttributeRequest() = default ;
    ModifyReservedInstanceAutoRenewAttributeRequest& operator=(const ModifyReservedInstanceAutoRenewAttributeRequest &) = default ;
    ModifyReservedInstanceAutoRenewAttributeRequest& operator=(ModifyReservedInstanceAutoRenewAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr && this->renewalStatus_ == nullptr
        && this->reservedInstanceId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // reservedInstanceId Field Functions 
    bool hasReservedInstanceId() const { return this->reservedInstanceId_ != nullptr;};
    void deleteReservedInstanceId() { this->reservedInstanceId_ = nullptr;};
    inline const vector<string> & getReservedInstanceId() const { DARABONBA_PTR_GET_CONST(reservedInstanceId_, vector<string>) };
    inline vector<string> getReservedInstanceId() { DARABONBA_PTR_GET(reservedInstanceId_, vector<string>) };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setReservedInstanceId(const vector<string> & reservedInstanceId) { DARABONBA_PTR_SET_VALUE(reservedInstanceId_, reservedInstanceId) };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setReservedInstanceId(vector<string> && reservedInstanceId) { DARABONBA_PTR_SET_RVALUE(reservedInstanceId_, reservedInstanceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyReservedInstanceAutoRenewAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The auto-renewal cycle.
    // 
    // Valid values: 1 and 3.
    shared_ptr<int32_t> period_ {};
    // The unit of the auto-renewal duration.
    // 
    // Valid values: Year and Month.
    shared_ptr<string> periodUnit_ {};
    // The region ID of the reserved instances. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Specifies whether to automatically renew the reserved instances. Valid values:
    // 
    // *   AutoRenewal: automatically renews the reserved instances.
    // *   Normal: manually renews the reserved instances.
    shared_ptr<string> renewalStatus_ {};
    // The IDs of the reserved instances.
    shared_ptr<vector<string>> reservedInstanceId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
