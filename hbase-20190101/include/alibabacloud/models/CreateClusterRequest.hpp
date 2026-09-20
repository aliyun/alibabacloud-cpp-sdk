// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ColdStorageSize, coldStorageSize_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewPeriod_ == nullptr
        && this->clientToken_ == nullptr && this->clusterName_ == nullptr && this->coldStorageSize_ == nullptr && this->coreInstanceType_ == nullptr && this->diskSize_ == nullptr
        && this->diskType_ == nullptr && this->encryptionKey_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->masterInstanceType_ == nullptr
        && this->nodeCount_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->securityIPList_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateClusterRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // coldStorageSize Field Functions 
    bool hasColdStorageSize() const { return this->coldStorageSize_ != nullptr;};
    void deleteColdStorageSize() { this->coldStorageSize_ = nullptr;};
    inline int32_t getColdStorageSize() const { DARABONBA_PTR_GET_DEFAULT(coldStorageSize_, 0) };
    inline CreateClusterRequest& setColdStorageSize(int32_t coldStorageSize) { DARABONBA_PTR_SET_VALUE(coldStorageSize_, coldStorageSize) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string getCoreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline CreateClusterRequest& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreateClusterRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreateClusterRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline CreateClusterRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline CreateClusterRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateClusterRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string getMasterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline CreateClusterRequest& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline CreateClusterRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateClusterRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateClusterRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateClusterRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateClusterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateClusterRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateClusterRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateClusterRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Settings for the auto-renewal period of the instance. Unit: months.
    // 
    // > - The default value is **0**, which indicates that the instance is not automatically renewed after the instance expires.
    // - For example, if the value is set to **2**, the instance is automatically renewed for two months after the instance expires.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token that is used to ensure the idempotence of the request. The value is generated by the client and must be unique among different requests. The value can be up to 64 ASCII characters in length and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The name of the instance. The name must meet the following requirements:
    // 
    // - The name must be 2 to 128 characters in length.
    // - The name must start with an uppercase letter, a lowercase letter, or a Chinese character.
    // - The name can contain digits and special characters, including periods (.), hyphens (-), and underscores (_).
    shared_ptr<string> clusterName_ {};
    // The cold storage capacity of the instance. Unit: GB. Valid values:
    // - **0**: Cold storage is disabled.
    // - **800** to **1000000**: Cold storage is enabled.
    // 
    // > Cold storage takes effect only when the engine type is **hbaseue**.
    shared_ptr<int32_t> coldStorageSize_ {};
    // The node specifications of the core node. You can invoke the [DescribeAvailableResource](https://help.aliyun.com/document_detail/188244.html) operation to query the specifications.
    // 
    // This parameter is required.
    shared_ptr<string> coreInstanceType_ {};
    // The disk size of a single core node. Unit: GB.
    // <ul>
    //    <li>If the instance is a single-node instance, the disk size of a single core node ranges from 20 to 500 GB, with a step size of 1 GB.</li>
    //    <li>If the instance uses cloud disks, the disk size of a single core node ranges from 400 to 64,000 GB, with a step size of 40 GB.</li>
    //    <li>If the instance uses local disks, the disk size of a single core node depends on the core node specifications:
    // <ul>
    //   <li>If the core node specifications are hbase.d1.4xlarge, the disk size is 44,000.</li>
    //   <li>If the core node specifications are hbase.d1.6xlarge, the disk size is 66,000.</li>
    //   <li>If the core node specifications are hbase.d1.8xlarge, the disk size is 88,000.</li>
    //   <li>If the core node specifications are hbase.i2.xlarge, the disk size is 894.</li>
    //   <li>If the core node specifications are hbase.i2.2xlarge, the disk size is 1,788.</li>
    //   <li>If the core node specifications are hbase.i2.4xlarge, the disk size is 3,576.</li>
    //   <li>If the core node specifications are hbase.i2.8xlarge, the disk size is 7,152.</li>
    //   <li>If the core node specifications are hbase.d2s.5xlarge, the disk size is 58,400.</li>
    //   <li>If the core node specifications are hbase.d2s.10xlarge, the disk size is 109,500.</li>
    // </ul>
    //   </li>
    // </ul>
    shared_ptr<int32_t> diskSize_ {};
    // The cloud disk type of the core node. Valid values:
    // <ul>
    //  <li>**cloud_efficiency**: ultra cloud disk.</li>
    // <li>**cloud_ssd**: standard SSD.</li>
    // <li>**local_hdd_pro**: local HDD.</li>
    // <li>**local_ssd_pro**: local SSD.</li>
    // <li>**cloud_essd_pl1**: ESSD.</li>
    // </ul>.
    shared_ptr<string> diskType_ {};
    // The encryption key ID. This parameter is empty if encryption is not enabled.
    // 
    // > After cloud disk encryption is enabled, it cannot be disabled.
    shared_ptr<string> encryptionKey_ {};
    // The database engine type. Valid values:
    // - **hbase**: ApsaraDB for HBase Standard Edition or ApsaraDB for HBase single-node edition.
    // - **hbaseue**: ApsaraDB for HBase Performance-enhanced Edition.
    // - **bds**: BDS instance.
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // Database engine version of the instance. The value depends on the engine type. Valid values:
    // - If the engine type is **hbase**, database engine version is **1.1** or **2.0**.
    // - If the engine type is **hbaseue**, database engine version is **2.0**.
    // - If the engine type is **bds**, database engine version is **1.0**.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The node specifications of the master node. You can invoke the [DescribeAvailableResource](https://help.aliyun.com/document_detail/188244.html) operation to query the specifications.
    shared_ptr<string> masterInstanceType_ {};
    // The number of core nodes. Valid values:
    // <ul>
    //    <li>If the instance is a single-node instance, the number of core nodes is fixed to **1**.</li>
    //    <li>If the instance uses cloud disks, the number of core nodes ranges from **2** to **100**.</li>
    //    <li>If the instance uses local disks, the number of core nodes ranges from **4** to **100**.</li>
    // </ul>.
    // 
    // This parameter is required.
    shared_ptr<int32_t> nodeCount_ {};
    // The billing method of the instance. Valid values:
    // - **Prepaid**: subscription.
    // - **Postpaid**: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription period of the subscription instance. Valid values:
    // - If PeriodUnit is set to **year**, the valid values are **1** to **3**.
    // - If PeriodUnit is set to **month**, the valid values are **1** to **9**.
    // 
    // > This parameter is required only when the billing method of the instance is **Prepaid**.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period for the subscription instance. Valid values:
    // - **year**
    // - **month**
    // 
    // > This parameter is required only when the billing method of the instance is **Prepaid**.
    shared_ptr<string> periodUnit_ {};
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/144489.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. For more information about resource groups, see [View basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The IP addresses in the whitelist of the instance. Separate multiple IP addresses with commas (,).
    // 
    // > If the IP address is set to 127.0.0.1, all addresses are denied access to the instance. For example, 192.168.0.0/24 indicates that all IP addresses in the 192.168.0.XX range are allowed to access the instance.
    shared_ptr<string> securityIPList_ {};
    // The vSwitch ID in the VPC.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
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
