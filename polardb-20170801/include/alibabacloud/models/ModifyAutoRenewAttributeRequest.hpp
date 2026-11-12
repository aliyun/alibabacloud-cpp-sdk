// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTORENEWATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTORENEWATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyAutoRenewAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoRenewAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(DBClusterIds, DBClusterIds_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RenewalStatus, renewalStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyAutoRenewAttributeRequest() = default ;
    ModifyAutoRenewAttributeRequest(const ModifyAutoRenewAttributeRequest &) = default ;
    ModifyAutoRenewAttributeRequest(ModifyAutoRenewAttributeRequest &&) = default ;
    ModifyAutoRenewAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoRenewAttributeRequest() = default ;
    ModifyAutoRenewAttributeRequest& operator=(const ModifyAutoRenewAttributeRequest &) = default ;
    ModifyAutoRenewAttributeRequest& operator=(ModifyAutoRenewAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudProvider_ == nullptr
        && this->DBClusterIds_ == nullptr && this->duration_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->periodUnit_ == nullptr
        && this->regionId_ == nullptr && this->renewalStatus_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string getCloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline ModifyAutoRenewAttributeRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // DBClusterIds Field Functions 
    bool hasDBClusterIds() const { return this->DBClusterIds_ != nullptr;};
    void deleteDBClusterIds() { this->DBClusterIds_ = nullptr;};
    inline string getDBClusterIds() const { DARABONBA_PTR_GET_DEFAULT(DBClusterIds_, "") };
    inline ModifyAutoRenewAttributeRequest& setDBClusterIds(string DBClusterIds) { DARABONBA_PTR_SET_VALUE(DBClusterIds_, DBClusterIds) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline ModifyAutoRenewAttributeRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyAutoRenewAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAutoRenewAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyAutoRenewAttributeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAutoRenewAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // renewalStatus Field Functions 
    bool hasRenewalStatus() const { return this->renewalStatus_ != nullptr;};
    void deleteRenewalStatus() { this->renewalStatus_ = nullptr;};
    inline string getRenewalStatus() const { DARABONBA_PTR_GET_DEFAULT(renewalStatus_, "") };
    inline ModifyAutoRenewAttributeRequest& setRenewalStatus(string renewalStatus) { DARABONBA_PTR_SET_VALUE(renewalStatus_, renewalStatus) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyAutoRenewAttributeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAutoRenewAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAutoRenewAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The cloud service provider to which the instance belongs.
    shared_ptr<string> cloudProvider_ {};
    // The IDs of the database clusters. The billing method of the clusters must be subscription. If you call this operation for a pay-as-you-go cluster, the OperationDenied.DBClusterPayType error may be returned. You can first call the TransformDBClusterPayType operation to change the billing method. Usage notes: The billing method of the cluster must be subscription. Calling this operation for a pay-as-you-go cluster returns the OperationDenied.DBClusterPayType error.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterIds_ {};
    // The auto-renewal duration for the instance. Valid values: 
    // 
    // - If **PeriodUnit** is set to **Month**, valid values are `1`, `2`, `3`, `6`, and `12`.
    // - If **PeriodUnit** is set to **Year**, valid values are `1`, `2`, and `3`.
    //  
    // Default value: **1**.
    shared_ptr<string> duration_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The unit of the renewal duration. Valid values: 
    // 
    // - **Year**: Year.
    // - **Month**: Month.
    //  
    // Default value: **Month**.
    shared_ptr<string> periodUnit_ {};
    // The region ID. The value can be up to 50 characters in length.
    // 
    // > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2319134.html) operation to query available regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The auto-renewal status. Valid values: 
    // 
    // - **AutoRenewal**: Auto-renewal.
    // - **Normal**: Manual renewal. 
    // - **NotRenewal**: No renewal. 
    // 
    // Default value: **AutoRenewal**. 
    // 
    // > If you set this parameter to **NotRenewal**, the system no longer sends expiration reminders and only sends a non-renewal reminder three days before expiration.
    shared_ptr<string> renewalStatus_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
