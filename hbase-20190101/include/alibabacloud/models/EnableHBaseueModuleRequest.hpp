// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEHBASEUEMODULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEHBASEUEMODULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class EnableHBaseueModuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableHBaseueModuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(BdsId, bdsId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(HbaseueClusterId, hbaseueClusterId_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_TO_JSON(ModuleClusterName, moduleClusterName_);
      DARABONBA_PTR_TO_JSON(ModuleTypeName, moduleTypeName_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableHBaseueModuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(BdsId, bdsId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(HbaseueClusterId, hbaseueClusterId_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_FROM_JSON(ModuleClusterName, moduleClusterName_);
      DARABONBA_PTR_FROM_JSON(ModuleTypeName, moduleTypeName_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    EnableHBaseueModuleRequest() = default ;
    EnableHBaseueModuleRequest(const EnableHBaseueModuleRequest &) = default ;
    EnableHBaseueModuleRequest(EnableHBaseueModuleRequest &&) = default ;
    EnableHBaseueModuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableHBaseueModuleRequest() = default ;
    EnableHBaseueModuleRequest& operator=(const EnableHBaseueModuleRequest &) = default ;
    EnableHBaseueModuleRequest& operator=(EnableHBaseueModuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenewPeriod_ == nullptr
        && this->bdsId_ == nullptr && this->clientToken_ == nullptr && this->coreInstanceType_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr
        && this->hbaseueClusterId_ == nullptr && this->masterInstanceType_ == nullptr && this->moduleClusterName_ == nullptr && this->moduleTypeName_ == nullptr && this->nodeCount_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr && this->vpcId_ == nullptr
        && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline EnableHBaseueModuleRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // bdsId Field Functions 
    bool hasBdsId() const { return this->bdsId_ != nullptr;};
    void deleteBdsId() { this->bdsId_ = nullptr;};
    inline string getBdsId() const { DARABONBA_PTR_GET_DEFAULT(bdsId_, "") };
    inline EnableHBaseueModuleRequest& setBdsId(string bdsId) { DARABONBA_PTR_SET_VALUE(bdsId_, bdsId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EnableHBaseueModuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string getCoreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline EnableHBaseueModuleRequest& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline EnableHBaseueModuleRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline EnableHBaseueModuleRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // hbaseueClusterId Field Functions 
    bool hasHbaseueClusterId() const { return this->hbaseueClusterId_ != nullptr;};
    void deleteHbaseueClusterId() { this->hbaseueClusterId_ = nullptr;};
    inline string getHbaseueClusterId() const { DARABONBA_PTR_GET_DEFAULT(hbaseueClusterId_, "") };
    inline EnableHBaseueModuleRequest& setHbaseueClusterId(string hbaseueClusterId) { DARABONBA_PTR_SET_VALUE(hbaseueClusterId_, hbaseueClusterId) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string getMasterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline EnableHBaseueModuleRequest& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


    // moduleClusterName Field Functions 
    bool hasModuleClusterName() const { return this->moduleClusterName_ != nullptr;};
    void deleteModuleClusterName() { this->moduleClusterName_ = nullptr;};
    inline string getModuleClusterName() const { DARABONBA_PTR_GET_DEFAULT(moduleClusterName_, "") };
    inline EnableHBaseueModuleRequest& setModuleClusterName(string moduleClusterName) { DARABONBA_PTR_SET_VALUE(moduleClusterName_, moduleClusterName) };


    // moduleTypeName Field Functions 
    bool hasModuleTypeName() const { return this->moduleTypeName_ != nullptr;};
    void deleteModuleTypeName() { this->moduleTypeName_ = nullptr;};
    inline string getModuleTypeName() const { DARABONBA_PTR_GET_DEFAULT(moduleTypeName_, "") };
    inline EnableHBaseueModuleRequest& setModuleTypeName(string moduleTypeName) { DARABONBA_PTR_SET_VALUE(moduleTypeName_, moduleTypeName) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline EnableHBaseueModuleRequest& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline EnableHBaseueModuleRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline EnableHBaseueModuleRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline EnableHBaseueModuleRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableHBaseueModuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline EnableHBaseueModuleRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline EnableHBaseueModuleRequest& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline EnableHBaseueModuleRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The auto-renewal period of the instance. Unit: months.
    // 
    // > <ul><li>The default value of the auto-renewal period is 0, which indicates that the instance is not automatically renewed after the instance expires.</li>
    // <li>For example, if the auto-renewal period is set to 2, the instance is automatically renewed for two months after the instance expires.</li></ul>
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The ID of the BDS cluster associated with the ApsaraDB for HBase Performance-enhanced Edition instance.
    shared_ptr<string> bdsId_ {};
    // The client token that is used to ensure the idempotence of the request. The value of this parameter is generated by the client. The value must be unique among different requests, is case-sensitive, and cannot exceed 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The node specifications of the core node. You can invoke the [DescribeAvailableResource](https://help.aliyun.com/document_detail/188244.html) operation to obtain the specification value.
    // 
    // This parameter is required.
    shared_ptr<string> coreInstanceType_ {};
    // The disk size per node. Unit: GB.
    // 
    // - If the instance is a single-node instance, the disk size of a single core node ranges from 20 to 500 GB, with a step size of 1 GB.
    // - If the instance uses cloud disks, the disk size of a single core node ranges from 400 to 64,000 GB, with a step size of 40 GB.
    shared_ptr<int32_t> diskSize_ {};
    // The disk type of the core node. Valid values:
    // 
    // - cloud_efficiency: ultra cloud disk.
    // - cloud_ssd: standard SSD.
    // - local_hdd_pro: local HDD.
    // - local_ssd_pro: local SSD.
    // - cloud_essd_pl1: ESSD.
    shared_ptr<string> diskType_ {};
    // The instance ID of the ApsaraDB for HBase Performance-enhanced Edition database.
    // 
    // This parameter is required.
    shared_ptr<string> hbaseueClusterId_ {};
    // The node specifications of the master node. You can invoke the [DescribeAvailableResource](https://help.aliyun.com/document_detail/188244.html) operation to obtain the specification value.
    shared_ptr<string> masterInstanceType_ {};
    // The name of the extension cluster.
    shared_ptr<string> moduleClusterName_ {};
    // The type of the extension module. Set the value to solr.
    // 
    // This parameter is required.
    shared_ptr<string> moduleTypeName_ {};
    // The number of nodes. Valid values:
    // 
    // - If the instance is a single-node instance, the number of core nodes is fixed to 1.
    // - If the instance uses cloud disks, the number of core nodes ranges from 2 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> nodeCount_ {};
    // The billing method of the instance. Valid values:
    // 
    // - Prepaid: subscription.
    // - Postpaid: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription duration of the subscription instance. Valid values:
    // 
    // - If PeriodUnit is set to year, the valid values are 1 to 3.
    // - If PeriodUnit is set to month, the valid values are 1 to 9.
    // 
    // > This parameter is required only when the billing method is Prepaid.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration for the subscription instance. Valid values:
    // 
    // - **year**
    // - **month**
    // 
    // >  This parameter is required only when the billing method is **Prepaid**.
    shared_ptr<string> periodUnit_ {};
    // The ID of the region in which the instance resides. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/144489.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the virtual private cloud (VPC).
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The ID of the vSwitch in the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vswitchId_ {};
    // The ID of the zone. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/144489.html) operation to obtain the zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
