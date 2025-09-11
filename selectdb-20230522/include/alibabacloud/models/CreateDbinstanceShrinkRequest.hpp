// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class CreateDBInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddVPCIPs, addVPCIPs_);
      DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterNodeCount, clusterNodeCount_);
      DARABONBA_PTR_TO_JSON(ClusterNodeType, clusterNodeType_);
      DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(MultiZone, multiZoneShrink_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddVPCIPs, addVPCIPs_);
      DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterNodeCount, clusterNodeCount_);
      DARABONBA_PTR_FROM_JSON(ClusterNodeType, clusterNodeType_);
      DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DeployScheme, deployScheme_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(MultiZone, multiZoneShrink_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBInstanceShrinkRequest() = default ;
    CreateDBInstanceShrinkRequest(const CreateDBInstanceShrinkRequest &) = default ;
    CreateDBInstanceShrinkRequest(CreateDBInstanceShrinkRequest &&) = default ;
    CreateDBInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceShrinkRequest() = default ;
    CreateDBInstanceShrinkRequest& operator=(const CreateDBInstanceShrinkRequest &) = default ;
    CreateDBInstanceShrinkRequest& operator=(CreateDBInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addVPCIPs_ != nullptr
        && this->cacheSize_ != nullptr && this->chargeType_ != nullptr && this->clientToken_ != nullptr && this->clusterNodeCount_ != nullptr && this->clusterNodeType_ != nullptr
        && this->connectionString_ != nullptr && this->DBInstanceClass_ != nullptr && this->DBInstanceDescription_ != nullptr && this->deployScheme_ != nullptr && this->engine_ != nullptr
        && this->engineVersion_ != nullptr && this->multiZoneShrink_ != nullptr && this->period_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->scaleMax_ != nullptr && this->scaleMin_ != nullptr && this->securityIPList_ != nullptr && this->tagShrink_ != nullptr
        && this->usedTime_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // addVPCIPs Field Functions 
    bool hasAddVPCIPs() const { return this->addVPCIPs_ != nullptr;};
    void deleteAddVPCIPs() { this->addVPCIPs_ = nullptr;};
    inline string addVPCIPs() const { DARABONBA_PTR_GET_DEFAULT(addVPCIPs_, "") };
    inline CreateDBInstanceShrinkRequest& setAddVPCIPs(string addVPCIPs) { DARABONBA_PTR_SET_VALUE(addVPCIPs_, addVPCIPs) };


    // cacheSize Field Functions 
    bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
    void deleteCacheSize() { this->cacheSize_ = nullptr;};
    inline int32_t cacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0) };
    inline CreateDBInstanceShrinkRequest& setCacheSize(int32_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateDBInstanceShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterNodeCount Field Functions 
    bool hasClusterNodeCount() const { return this->clusterNodeCount_ != nullptr;};
    void deleteClusterNodeCount() { this->clusterNodeCount_ = nullptr;};
    inline int32_t clusterNodeCount() const { DARABONBA_PTR_GET_DEFAULT(clusterNodeCount_, 0) };
    inline CreateDBInstanceShrinkRequest& setClusterNodeCount(int32_t clusterNodeCount) { DARABONBA_PTR_SET_VALUE(clusterNodeCount_, clusterNodeCount) };


    // clusterNodeType Field Functions 
    bool hasClusterNodeType() const { return this->clusterNodeType_ != nullptr;};
    void deleteClusterNodeType() { this->clusterNodeType_ = nullptr;};
    inline string clusterNodeType() const { DARABONBA_PTR_GET_DEFAULT(clusterNodeType_, "") };
    inline CreateDBInstanceShrinkRequest& setClusterNodeType(string clusterNodeType) { DARABONBA_PTR_SET_VALUE(clusterNodeType_, clusterNodeType) };


    // connectionString Field Functions 
    bool hasConnectionString() const { return this->connectionString_ != nullptr;};
    void deleteConnectionString() { this->connectionString_ = nullptr;};
    inline string connectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
    inline CreateDBInstanceShrinkRequest& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string DBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string DBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline CreateDBInstanceShrinkRequest& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // deployScheme Field Functions 
    bool hasDeployScheme() const { return this->deployScheme_ != nullptr;};
    void deleteDeployScheme() { this->deployScheme_ = nullptr;};
    inline string deployScheme() const { DARABONBA_PTR_GET_DEFAULT(deployScheme_, "") };
    inline CreateDBInstanceShrinkRequest& setDeployScheme(string deployScheme) { DARABONBA_PTR_SET_VALUE(deployScheme_, deployScheme) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateDBInstanceShrinkRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // multiZoneShrink Field Functions 
    bool hasMultiZoneShrink() const { return this->multiZoneShrink_ != nullptr;};
    void deleteMultiZoneShrink() { this->multiZoneShrink_ = nullptr;};
    inline string multiZoneShrink() const { DARABONBA_PTR_GET_DEFAULT(multiZoneShrink_, "") };
    inline CreateDBInstanceShrinkRequest& setMultiZoneShrink(string multiZoneShrink) { DARABONBA_PTR_SET_VALUE(multiZoneShrink_, multiZoneShrink) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBInstanceShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline double scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0.0) };
    inline CreateDBInstanceShrinkRequest& setScaleMax(double scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline double scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0.0) };
    inline CreateDBInstanceShrinkRequest& setScaleMin(double scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateDBInstanceShrinkRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateDBInstanceShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateDBInstanceShrinkRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateDBInstanceShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to add the virtual private cloud (VPC) CIDR block to the IP address whitelist. Valid values:
    // 
    // *   1: yes.
    // *   0: no.
    std::shared_ptr<string> addVPCIPs_ = nullptr;
    // The reserved cache size.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> cacheSize_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go
    // *   **Prepaid**: subscription
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<int32_t> clusterNodeCount_ = nullptr;
    std::shared_ptr<string> clusterNodeType_ = nullptr;
    // The instance endpoint.
    std::shared_ptr<string> connectionString_ = nullptr;
    // The instance type. You can call the [DescribeAllDBInstanceClass](https://help.aliyun.com/document_detail/2853363.html) operation to query instance types.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceClass_ = nullptr;
    // The instance description.
    std::shared_ptr<string> DBInstanceDescription_ = nullptr;
    // The deployment method of the instance.
    std::shared_ptr<string> deployScheme_ = nullptr;
    // The database engine of the instance. Default value: **selectdb**.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version of the instance. Default value: **3.0**.
    // 
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The configurations of multi-zone deployment.
    // 
    // > 
    // 
    // *   This parameter takes effect and is required only when DeployScheme is set to multi_az.
    std::shared_ptr<string> multiZoneShrink_ = nullptr;
    // The unit of the subscription duration of the cluster. Valid values:
    // 
    // *   **Year**: subscription on a yearly basis.
    // *   **Month**: subscription on a monthly basis.
    // 
    // >  This parameter takes effect and is required only when **ChargeType** is set to **Prepaid**.
    std::shared_ptr<string> period_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<double> scaleMax_ = nullptr;
    std::shared_ptr<double> scaleMin_ = nullptr;
    // The IP addresses in the whitelist of the instance. Separate multiple IP addresses with commas (,).
    std::shared_ptr<string> securityIPList_ = nullptr;
    // The instance tags.
    std::shared_ptr<string> tagShrink_ = nullptr;
    // The subscription duration of the instance. Valid values:
    // 
    // *   If Period is set to Year, valid values of UsedTime are 1, 2, 3, 4, and 5.
    // *   If Period is set to Month, valid values of UsedTime are 1 to 12.
    // 
    // >  This parameter takes effect and is required only when **ChargeType** is set to **Prepaid**.
    std::shared_ptr<int32_t> usedTime_ = nullptr;
    // The vSwitch ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The virtual private cloud (VPC) ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
