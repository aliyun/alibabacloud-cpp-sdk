// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPENSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPENSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateOpenSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpenSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Zone2, zone2_);
      DARABONBA_PTR_TO_JSON(Zone3, zone3_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpenSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageSpace, storageSpace_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Zone2, zone2_);
      DARABONBA_PTR_FROM_JSON(Zone3, zone3_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateOpenSearchRequest() = default ;
    CreateOpenSearchRequest(const CreateOpenSearchRequest &) = default ;
    CreateOpenSearchRequest(CreateOpenSearchRequest &&) = default ;
    CreateOpenSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpenSearchRequest() = default ;
    CreateOpenSearchRequest& operator=(const CreateOpenSearchRequest &) = default ;
    CreateOpenSearchRequest& operator=(CreateOpenSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->clientToken_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBNodeClass_ == nullptr && this->engineVersion_ == nullptr && this->instanceSpec_ == nullptr
        && this->nodeCount_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->storageSpace_ == nullptr && this->storageType_ == nullptr && this->topologyType_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr
        && this->vSwitchId_ == nullptr && this->zone2_ == nullptr && this->zone3_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateOpenSearchRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateOpenSearchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateOpenSearchRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline CreateOpenSearchRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateOpenSearchRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline CreateOpenSearchRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline CreateOpenSearchRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateOpenSearchRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateOpenSearchRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOpenSearchRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateOpenSearchRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageSpace Field Functions 
    bool hasStorageSpace() const { return this->storageSpace_ != nullptr;};
    void deleteStorageSpace() { this->storageSpace_ = nullptr;};
    inline int32_t getStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(storageSpace_, 0) };
    inline CreateOpenSearchRequest& setStorageSpace(int32_t storageSpace) { DARABONBA_PTR_SET_VALUE(storageSpace_, storageSpace) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateOpenSearchRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline CreateOpenSearchRequest& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateOpenSearchRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateOpenSearchRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateOpenSearchRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zone2 Field Functions 
    bool hasZone2() const { return this->zone2_ != nullptr;};
    void deleteZone2() { this->zone2_ = nullptr;};
    inline string getZone2() const { DARABONBA_PTR_GET_DEFAULT(zone2_, "") };
    inline CreateOpenSearchRequest& setZone2(string zone2) { DARABONBA_PTR_SET_VALUE(zone2_, zone2) };


    // zone3 Field Functions 
    bool hasZone3() const { return this->zone3_ != nullptr;};
    void deleteZone3() { this->zone3_ = nullptr;};
    inline string getZone3() const { DARABONBA_PTR_GET_DEFAULT(zone3_, "") };
    inline CreateOpenSearchRequest& setZone3(string zone3) { DARABONBA_PTR_SET_VALUE(zone3_, zone3) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateOpenSearchRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to enable auto-renewal. Default value: true.
    // 
    // - **true**: enabled.
    // - **false**: disabled.
    shared_ptr<bool> autoRenew_ {};
    // The client token used to ensure the idempotence of the request. Use a different value for each creation request.
    shared_ptr<string> clientToken_ {};
    // The description of the instance.
    shared_ptr<string> DBInstanceDescription_ {};
    // The node specifications code of PolarDBX Search data nodes. Available specifications depend on the region and sales configuration. Use a PolarDBX Search specification code that is available for purchase in the current region.
    // 
    // This parameter is required.
    shared_ptr<string> DBNodeClass_ {};
    // The PolarDBX Search DPI engine version. The value is fixed to 3.0. If this parameter is not specified, the default value 3.0 is used.
    shared_ptr<string> engineVersion_ {};
    // A compatible parameter that does not take effect. Use DBNodeClass to specify the PolarDBX Search data node specifications.
    shared_ptr<string> instanceSpec_ {};
    // The number of PolarDBX Search data nodes. The value must be a positive integer and a multiple of the number of selected zones.
    // 
    // This parameter is required.
    shared_ptr<int32_t> nodeCount_ {};
    // The billing method of the instance.
    // 
    // - **PREPAY**: subscription.
    // - **POSTPAY**: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The billing cycle. Valid values for subscription: Year and Month. Default value for pay-as-you-go: Hour.
    shared_ptr<string> period_ {};
    // The region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. This parameter can be left empty. This parameter is not supported.
    shared_ptr<string> resourceGroupId_ {};
    // The storage space per node, in GB. The value must be a positive integer.
    shared_ptr<int32_t> storageSpace_ {};
    // The storage type. Default value: cloud_auto.
    shared_ptr<string> storageType_ {};
    // The topology type. Valid values:
    // 
    // - **1azone**: single active zone.
    // - **3azones**: three active zones.
    shared_ptr<string> topologyType_ {};
    // The subscription duration. Specify the number of months or years for prepaid instances.
    // 
    // > When Period is set to Year, valid values for this parameter are 1, 2, and 3.
    shared_ptr<int32_t> usedTime_ {};
    // VPC ID。
    // 
    // This parameter is required.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The second zone. This parameter is required when TopologyType is set to 3azones. The value cannot be the same as other zones.
    shared_ptr<string> zone2_ {};
    // The third zone. This parameter is required when TopologyType is set to 3azones. The value cannot be the same as other zones.
    shared_ptr<string> zone3_ {};
    // The zone of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
