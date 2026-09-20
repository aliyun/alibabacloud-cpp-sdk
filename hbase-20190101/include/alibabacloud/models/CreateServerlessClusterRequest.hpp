// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERLESSCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERLESSCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class CreateServerlessClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerlessClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServerlessCapability, serverlessCapability_);
      DARABONBA_PTR_TO_JSON(ServerlessSpec, serverlessSpec_);
      DARABONBA_PTR_TO_JSON(ServerlessStorage, serverlessStorage_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerlessClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerlessCapability, serverlessCapability_);
      DARABONBA_PTR_FROM_JSON(ServerlessSpec, serverlessSpec_);
      DARABONBA_PTR_FROM_JSON(ServerlessStorage, serverlessStorage_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateServerlessClusterRequest() = default ;
    CreateServerlessClusterRequest(const CreateServerlessClusterRequest &) = default ;
    CreateServerlessClusterRequest(CreateServerlessClusterRequest &&) = default ;
    CreateServerlessClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerlessClusterRequest() = default ;
    CreateServerlessClusterRequest& operator=(const CreateServerlessClusterRequest &) = default ;
    CreateServerlessClusterRequest& operator=(CreateServerlessClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewPeriod_ == nullptr
        && this->clientToken_ == nullptr && this->clientType_ == nullptr && this->clusterName_ == nullptr && this->diskType_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serverlessCapability_ == nullptr && this->serverlessSpec_ == nullptr && this->serverlessStorage_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateServerlessClusterRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServerlessClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline string getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, "") };
    inline CreateServerlessClusterRequest& setClientType(string clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateServerlessClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateServerlessClusterRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateServerlessClusterRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateServerlessClusterRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateServerlessClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateServerlessClusterRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateServerlessClusterRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServerlessClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServerlessClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverlessCapability Field Functions 
    bool hasServerlessCapability() const { return this->serverlessCapability_ != nullptr;};
    void deleteServerlessCapability() { this->serverlessCapability_ = nullptr;};
    inline int32_t getServerlessCapability() const { DARABONBA_PTR_GET_DEFAULT(serverlessCapability_, 0) };
    inline CreateServerlessClusterRequest& setServerlessCapability(int32_t serverlessCapability) { DARABONBA_PTR_SET_VALUE(serverlessCapability_, serverlessCapability) };


    // serverlessSpec Field Functions 
    bool hasServerlessSpec() const { return this->serverlessSpec_ != nullptr;};
    void deleteServerlessSpec() { this->serverlessSpec_ = nullptr;};
    inline string getServerlessSpec() const { DARABONBA_PTR_GET_DEFAULT(serverlessSpec_, "") };
    inline CreateServerlessClusterRequest& setServerlessSpec(string serverlessSpec) { DARABONBA_PTR_SET_VALUE(serverlessSpec_, serverlessSpec) };


    // serverlessStorage Field Functions 
    bool hasServerlessStorage() const { return this->serverlessStorage_ != nullptr;};
    void deleteServerlessStorage() { this->serverlessStorage_ = nullptr;};
    inline int32_t getServerlessStorage() const { DARABONBA_PTR_GET_DEFAULT(serverlessStorage_, 0) };
    inline CreateServerlessClusterRequest& setServerlessStorage(int32_t serverlessStorage) { DARABONBA_PTR_SET_VALUE(serverlessStorage_, serverlessStorage) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateServerlessClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateServerlessClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateServerlessClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The auto-renewal period of the instance. Unit: months.
    // 
    // > <ul><li>The default value of the auto-renewal period is 0, which indicates that the instance is not automatically renewed after the instance expires.</li>
    // <li>For example, if the auto-renewal period is set to 2, the instance is automatically renewed for two months after the instance expires.</li></ul>
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The token can be up to 64 ASCII characters in length and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The parameter that identifies the source of the creation request. For public cloud, leave this parameter empty.
    shared_ptr<string> clientType_ {};
    // The name of the instance.
    shared_ptr<string> clusterName_ {};
    // The disk type of the instance. Valid values:
    // 
    // - **cloud_efficiency**: ultra cloud disk.
    // - **cloud_ssd**: standard SSD.
    // - **local_hdd_pro**: local HDD.
    // - **local_ssd_pro**: local SSD.
    // - **cloud_essd_pl1**: ESSD.
    shared_ptr<string> diskType_ {};
    // The engine type of the HBase Serverless instance. Set the value to **serverlesshbase**.
    shared_ptr<string> engine_ {};
    // The DPI engine version.
    shared_ptr<string> engineVersion_ {};
    // The billing method of the instance. Valid values:
    // 
    // - **Prepaid**: subscription.
    // - **Postpaid**: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription duration of the subscription instance. Valid values:
    // 
    // - If PeriodUnit is set to year, valid values are **1** to **3**.
    // - If PeriodUnit is set to month, valid values are **1** to **9**.
    // 
    // > This parameter is required only when the billing method of the instance is **Prepaid**.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration for the subscription instance. Valid values:
    // 
    // - **year**: year.
    // - **month**: month.
    // 
    // > This parameter is required only when the billing method of the instance is **Prepaid**.
    shared_ptr<string> periodUnit_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/144489.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. For more information about resource groups, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The processing capability per unit. Unit: CU.
    shared_ptr<int32_t> serverlessCapability_ {};
    // The specification type. Valid values: leave empty or **serverless.small**.
    shared_ptr<string> serverlessSpec_ {};
    // The storage size. Unit: GB.
    shared_ptr<int32_t> serverlessStorage_ {};
    // The vSwitch ID within the VPC.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC).
    // 
    // > If both this parameter and the VswitchId parameter are left empty, the network type of the instance is classic network.
    shared_ptr<string> vpcId_ {};
    // The zone ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/144489.html) operation to query the zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
