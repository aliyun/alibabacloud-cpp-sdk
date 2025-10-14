// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(coldStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(enableServerlessComputing, enableServerlessComputing_);
      DARABONBA_PTR_TO_JSON(gatewayCount, gatewayCount_);
      DARABONBA_PTR_TO_JSON(initialDatabases, initialDatabases_);
      DARABONBA_PTR_TO_JSON(instanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(leaderInstanceId, leaderInstanceId_);
      DARABONBA_PTR_TO_JSON(pricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
      DARABONBA_PTR_TO_JSON(storageType, storageType_);
      DARABONBA_PTR_TO_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(autoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(coldStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(enableServerlessComputing, enableServerlessComputing_);
      DARABONBA_PTR_FROM_JSON(gatewayCount, gatewayCount_);
      DARABONBA_PTR_FROM_JSON(initialDatabases, initialDatabases_);
      DARABONBA_PTR_FROM_JSON(instanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(leaderInstanceId, leaderInstanceId_);
      DARABONBA_PTR_FROM_JSON(pricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
      DARABONBA_PTR_FROM_JSON(storageType, storageType_);
      DARABONBA_PTR_FROM_JSON(vSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->chargeType_ == nullptr && return this->coldStorageSize_ == nullptr && return this->cpu_ == nullptr && return this->duration_ == nullptr
        && return this->enableServerlessComputing_ == nullptr && return this->gatewayCount_ == nullptr && return this->initialDatabases_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr
        && return this->leaderInstanceId_ == nullptr && return this->pricingCycle_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->storageSize_ == nullptr
        && return this->storageType_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateInstanceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateInstanceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline int64_t coldStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, 0L) };
    inline CreateInstanceRequest& setColdStorageSize(int64_t coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline CreateInstanceRequest& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateInstanceRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enableServerlessComputing Field Functions 
    bool hasEnableServerlessComputing() const { return this->enableServerlessComputing_ != nullptr;};
    void deleteEnableServerlessComputing() { this->enableServerlessComputing_ = nullptr;};
    inline bool enableServerlessComputing() const { DARABONBA_PTR_GET_DEFAULT(enableServerlessComputing_, false) };
    inline CreateInstanceRequest& setEnableServerlessComputing(bool enableServerlessComputing) { DARABONBA_PTR_SET_VALUE(enableServerlessComputing_, enableServerlessComputing) };


    // gatewayCount Field Functions 
    bool hasGatewayCount() const { return this->gatewayCount_ != nullptr;};
    void deleteGatewayCount() { this->gatewayCount_ = nullptr;};
    inline int64_t gatewayCount() const { DARABONBA_PTR_GET_DEFAULT(gatewayCount_, 0L) };
    inline CreateInstanceRequest& setGatewayCount(int64_t gatewayCount) { DARABONBA_PTR_SET_VALUE(gatewayCount_, gatewayCount) };


    // initialDatabases Field Functions 
    bool hasInitialDatabases() const { return this->initialDatabases_ != nullptr;};
    void deleteInitialDatabases() { this->initialDatabases_ = nullptr;};
    inline string initialDatabases() const { DARABONBA_PTR_GET_DEFAULT(initialDatabases_, "") };
    inline CreateInstanceRequest& setInitialDatabases(string initialDatabases) { DARABONBA_PTR_SET_VALUE(initialDatabases_, initialDatabases) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateInstanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // leaderInstanceId Field Functions 
    bool hasLeaderInstanceId() const { return this->leaderInstanceId_ != nullptr;};
    void deleteLeaderInstanceId() { this->leaderInstanceId_ = nullptr;};
    inline string leaderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(leaderInstanceId_, "") };
    inline CreateInstanceRequest& setLeaderInstanceId(string leaderInstanceId) { DARABONBA_PTR_SET_VALUE(leaderInstanceId_, leaderInstanceId) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageSize Field Functions 
    bool hasStorageSize() const { return this->storageSize_ != nullptr;};
    void deleteStorageSize() { this->storageSize_ = nullptr;};
    inline int64_t storageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, 0L) };
    inline CreateInstanceRequest& setStorageSize(int64_t storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateInstanceRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to enable auto-payment. Default value: true. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  The default value is true. If the balance of your account is insufficient, you can set this parameter to false. In this case, an unpaid order is generated. You can log on to the Expenses and Costs console to pay for the order.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable monthly auto-renewal. The default value is false. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription
    // *   PostPaid: pay-as-you-go
    // 
    // >  This parameter is invalid for Hologres Shared Cluster instances. Hologres Shared Cluster instances have fixed specifications and are pay-as-you-go instances.
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The infrequent access (IA) storage space of the instance. Unit: GB.
    // 
    // >  This parameter is invalid for pay-as-you-go instances.
    std::shared_ptr<int64_t> coldStorageSize_ = nullptr;
    // The instance specifications. Valid values:
    // 
    // *   8-core 32GB (number of compute nodes: 1)
    // *   32-core 128GB (number of compute nodes: 2)
    // *   64-core 256GB (number of compute nodes: 4)
    // *   96-core 384GB (number of compute nodes: 6)
    // *   128-core 512GB (number of compute nodes: 8)
    // *   Others
    // 
    // > 
    // 
    // *   Set this parameter to the number of cores.
    // 
    // *   If you want to set this parameter to specifications with more than 1,024 GB, you must submit a ticket.
    // 
    // *   This parameter is invalid for Hologres Shared Cluster instances.
    // 
    // *   The specifications of 8-core 32GB (number of compute nodes: 1) are for trial use only and cannot be used for production.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // The validity period of the instance that you want to purchase. For example, you can specify a validity period of two months.
    // 
    // >  You do not need to configure this parameter for pay-as-you-go instances.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // Specifies whether to enable the Serverless Computing feature.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> enableServerlessComputing_ = nullptr;
    // The number of gateways. Valid values: 2 to 50.
    // 
    // >  This parameter is required only for virtual warehouse instances.
    std::shared_ptr<int64_t> gatewayCount_ = nullptr;
    // The initial database.
    std::shared_ptr<string> initialDatabases_ = nullptr;
    // The name of the instance. The name must be 2 to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The category of the instance. Valid values:
    // 
    // *   Standard: general-purpose instance
    // *   Follower: read-only secondary instance
    // *   Warehouse: virtual warehouse instance
    // *   Shared: Hologres Shared Cluster instance
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the primary instance. This parameter is required for read-only secondary instances.
    // 
    // >  The primary and secondary instances must meet the following requirements:
    // 
    // *   The primary instance is in the Running state.
    // 
    // *   The primary instance and secondary instances are deployed in the same region.
    // 
    // *   The primary instance and secondary instances are deployed in the same zone.
    // 
    // *   Less than 10 secondary instances are associated with the primary instance.
    // 
    // *   The primary instance and secondary instances belong to the same Alibaba Cloud account.
    std::shared_ptr<string> leaderInstanceId_ = nullptr;
    // The billing cycle. Valid values:
    // 
    // *   Month
    // *   Hour
    // 
    // > 
    // 
    // *   This parameter can only be set to Month for subscription instances.
    // 
    // *   This parameter can only be set to Hour for pay-as-you-go instances.
    // 
    // *   By default, this parameter is set to Hour for Hologres Shared Cluster instances.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The ID of the region. You can obtain region IDs in [Endpoints](https://www.alibabacloud.com/help/en/maxcompute/user-guide/endpoints).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. If you do not specify this parameter, the default resource group of the account is used.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The standard storage space of the instance. Unit: GB.
    // 
    // >  This parameter is invalid for pay-as-you-go instances.
    std::shared_ptr<int64_t> storageSize_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    // The ID of the vSwitch. The zone in which the vSwitch resides must be the same as the zone in which the Hologres instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC). The region in which the VPC resides must be the same as the region in which the Hologres instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone. For more information, see the "Operation description" section in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
