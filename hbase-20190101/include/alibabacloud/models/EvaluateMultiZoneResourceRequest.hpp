// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEMULTIZONERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEMULTIZONERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class EvaluateMultiZoneResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluateMultiZoneResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_TO_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_TO_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_TO_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_TO_JSON(CoreNodeCount, coreNodeCount_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(LogDiskSize, logDiskSize_);
      DARABONBA_PTR_TO_JSON(LogDiskType, logDiskType_);
      DARABONBA_PTR_TO_JSON(LogInstanceType, logInstanceType_);
      DARABONBA_PTR_TO_JSON(LogNodeCount, logNodeCount_);
      DARABONBA_PTR_TO_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_TO_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluateMultiZoneResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_FROM_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CoreDiskSize, coreDiskSize_);
      DARABONBA_PTR_FROM_JSON(CoreDiskType, coreDiskType_);
      DARABONBA_PTR_FROM_JSON(CoreInstanceType, coreInstanceType_);
      DARABONBA_PTR_FROM_JSON(CoreNodeCount, coreNodeCount_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(LogDiskSize, logDiskSize_);
      DARABONBA_PTR_FROM_JSON(LogDiskType, logDiskType_);
      DARABONBA_PTR_FROM_JSON(LogInstanceType, logInstanceType_);
      DARABONBA_PTR_FROM_JSON(LogNodeCount, logNodeCount_);
      DARABONBA_PTR_FROM_JSON(MasterInstanceType, masterInstanceType_);
      DARABONBA_PTR_FROM_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    EvaluateMultiZoneResourceRequest() = default ;
    EvaluateMultiZoneResourceRequest(const EvaluateMultiZoneResourceRequest &) = default ;
    EvaluateMultiZoneResourceRequest(EvaluateMultiZoneResourceRequest &&) = default ;
    EvaluateMultiZoneResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluateMultiZoneResourceRequest() = default ;
    EvaluateMultiZoneResourceRequest& operator=(const EvaluateMultiZoneResourceRequest &) = default ;
    EvaluateMultiZoneResourceRequest& operator=(EvaluateMultiZoneResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arbiterVSwitchId_ == nullptr
        && this->arbiterZoneId_ == nullptr && this->archVersion_ == nullptr && this->autoRenewPeriod_ == nullptr && this->clientToken_ == nullptr && this->clusterName_ == nullptr
        && this->coreDiskSize_ == nullptr && this->coreDiskType_ == nullptr && this->coreInstanceType_ == nullptr && this->coreNodeCount_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->logDiskSize_ == nullptr && this->logDiskType_ == nullptr && this->logInstanceType_ == nullptr && this->logNodeCount_ == nullptr
        && this->masterInstanceType_ == nullptr && this->multiZoneCombination_ == nullptr && this->payType_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->primaryVSwitchId_ == nullptr && this->primaryZoneId_ == nullptr && this->regionId_ == nullptr && this->securityIPList_ == nullptr && this->standbyVSwitchId_ == nullptr
        && this->standbyZoneId_ == nullptr && this->vpcId_ == nullptr; };
    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string getArbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline EvaluateMultiZoneResourceRequest& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string getArbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline EvaluateMultiZoneResourceRequest& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // archVersion Field Functions 
    bool hasArchVersion() const { return this->archVersion_ != nullptr;};
    void deleteArchVersion() { this->archVersion_ = nullptr;};
    inline string getArchVersion() const { DARABONBA_PTR_GET_DEFAULT(archVersion_, "") };
    inline EvaluateMultiZoneResourceRequest& setArchVersion(string archVersion) { DARABONBA_PTR_SET_VALUE(archVersion_, archVersion) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline EvaluateMultiZoneResourceRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline EvaluateMultiZoneResourceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline EvaluateMultiZoneResourceRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // coreDiskSize Field Functions 
    bool hasCoreDiskSize() const { return this->coreDiskSize_ != nullptr;};
    void deleteCoreDiskSize() { this->coreDiskSize_ = nullptr;};
    inline int32_t getCoreDiskSize() const { DARABONBA_PTR_GET_DEFAULT(coreDiskSize_, 0) };
    inline EvaluateMultiZoneResourceRequest& setCoreDiskSize(int32_t coreDiskSize) { DARABONBA_PTR_SET_VALUE(coreDiskSize_, coreDiskSize) };


    // coreDiskType Field Functions 
    bool hasCoreDiskType() const { return this->coreDiskType_ != nullptr;};
    void deleteCoreDiskType() { this->coreDiskType_ = nullptr;};
    inline string getCoreDiskType() const { DARABONBA_PTR_GET_DEFAULT(coreDiskType_, "") };
    inline EvaluateMultiZoneResourceRequest& setCoreDiskType(string coreDiskType) { DARABONBA_PTR_SET_VALUE(coreDiskType_, coreDiskType) };


    // coreInstanceType Field Functions 
    bool hasCoreInstanceType() const { return this->coreInstanceType_ != nullptr;};
    void deleteCoreInstanceType() { this->coreInstanceType_ = nullptr;};
    inline string getCoreInstanceType() const { DARABONBA_PTR_GET_DEFAULT(coreInstanceType_, "") };
    inline EvaluateMultiZoneResourceRequest& setCoreInstanceType(string coreInstanceType) { DARABONBA_PTR_SET_VALUE(coreInstanceType_, coreInstanceType) };


    // coreNodeCount Field Functions 
    bool hasCoreNodeCount() const { return this->coreNodeCount_ != nullptr;};
    void deleteCoreNodeCount() { this->coreNodeCount_ = nullptr;};
    inline int32_t getCoreNodeCount() const { DARABONBA_PTR_GET_DEFAULT(coreNodeCount_, 0) };
    inline EvaluateMultiZoneResourceRequest& setCoreNodeCount(int32_t coreNodeCount) { DARABONBA_PTR_SET_VALUE(coreNodeCount_, coreNodeCount) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline EvaluateMultiZoneResourceRequest& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline EvaluateMultiZoneResourceRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // logDiskSize Field Functions 
    bool hasLogDiskSize() const { return this->logDiskSize_ != nullptr;};
    void deleteLogDiskSize() { this->logDiskSize_ = nullptr;};
    inline int32_t getLogDiskSize() const { DARABONBA_PTR_GET_DEFAULT(logDiskSize_, 0) };
    inline EvaluateMultiZoneResourceRequest& setLogDiskSize(int32_t logDiskSize) { DARABONBA_PTR_SET_VALUE(logDiskSize_, logDiskSize) };


    // logDiskType Field Functions 
    bool hasLogDiskType() const { return this->logDiskType_ != nullptr;};
    void deleteLogDiskType() { this->logDiskType_ = nullptr;};
    inline string getLogDiskType() const { DARABONBA_PTR_GET_DEFAULT(logDiskType_, "") };
    inline EvaluateMultiZoneResourceRequest& setLogDiskType(string logDiskType) { DARABONBA_PTR_SET_VALUE(logDiskType_, logDiskType) };


    // logInstanceType Field Functions 
    bool hasLogInstanceType() const { return this->logInstanceType_ != nullptr;};
    void deleteLogInstanceType() { this->logInstanceType_ = nullptr;};
    inline string getLogInstanceType() const { DARABONBA_PTR_GET_DEFAULT(logInstanceType_, "") };
    inline EvaluateMultiZoneResourceRequest& setLogInstanceType(string logInstanceType) { DARABONBA_PTR_SET_VALUE(logInstanceType_, logInstanceType) };


    // logNodeCount Field Functions 
    bool hasLogNodeCount() const { return this->logNodeCount_ != nullptr;};
    void deleteLogNodeCount() { this->logNodeCount_ = nullptr;};
    inline int32_t getLogNodeCount() const { DARABONBA_PTR_GET_DEFAULT(logNodeCount_, 0) };
    inline EvaluateMultiZoneResourceRequest& setLogNodeCount(int32_t logNodeCount) { DARABONBA_PTR_SET_VALUE(logNodeCount_, logNodeCount) };


    // masterInstanceType Field Functions 
    bool hasMasterInstanceType() const { return this->masterInstanceType_ != nullptr;};
    void deleteMasterInstanceType() { this->masterInstanceType_ = nullptr;};
    inline string getMasterInstanceType() const { DARABONBA_PTR_GET_DEFAULT(masterInstanceType_, "") };
    inline EvaluateMultiZoneResourceRequest& setMasterInstanceType(string masterInstanceType) { DARABONBA_PTR_SET_VALUE(masterInstanceType_, masterInstanceType) };


    // multiZoneCombination Field Functions 
    bool hasMultiZoneCombination() const { return this->multiZoneCombination_ != nullptr;};
    void deleteMultiZoneCombination() { this->multiZoneCombination_ = nullptr;};
    inline string getMultiZoneCombination() const { DARABONBA_PTR_GET_DEFAULT(multiZoneCombination_, "") };
    inline EvaluateMultiZoneResourceRequest& setMultiZoneCombination(string multiZoneCombination) { DARABONBA_PTR_SET_VALUE(multiZoneCombination_, multiZoneCombination) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline EvaluateMultiZoneResourceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline EvaluateMultiZoneResourceRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline EvaluateMultiZoneResourceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string getPrimaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline EvaluateMultiZoneResourceRequest& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline EvaluateMultiZoneResourceRequest& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EvaluateMultiZoneResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline EvaluateMultiZoneResourceRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline EvaluateMultiZoneResourceRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline EvaluateMultiZoneResourceRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline EvaluateMultiZoneResourceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The vSwitch ID of the arbitration zone. The vSwitch must be in the zone specified by **ArbiterZoneId**.
    // 
    // This parameter is required.
    shared_ptr<string> arbiterVSwitchId_ {};
    // The zone ID of the arbitration zone.
    // 
    // This parameter is required.
    shared_ptr<string> arbiterZoneId_ {};
    // The version of the deployment architecture. Currently, only the hbaseue engine type is supported. Set the value to **2.0**.
    // 
    // This parameter is required.
    shared_ptr<string> archVersion_ {};
    // The auto-renewal period of the instance. Unit: months.
    // 
    // > <ul><li>The default value is 0, which indicates that the instance is not automatically renewed after the instance expires.</li>
    // <li>For example, if the auto-renewal period is set to 2, the instance is automatically renewed for two months after the instance expires.</li></ul>
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value. Make sure that the value is unique among different requests. The value cannot exceed 64 ASCII characters in length and cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The cluster name. The following rules apply:
    // 
    // - The name must be 2 to 128 characters in length.
    // - The name must start with an uppercase letter, a lowercase letter, or a Chinese character.
    // - The name can contain digits or special characters, including periods (.), hyphens (-), and underscores (_).
    shared_ptr<string> clusterName_ {};
    // The disk size of the node. Valid values: 400 to 64000. Unit: GB. The value must be a multiple of 40.
    // 
    // This parameter is required.
    shared_ptr<int32_t> coreDiskSize_ {};
    // The disk type of the core node. Valid values:
    // - **cloud_efficiency**: ultra cloud disk.
    // - **cloud_ssd**: standard SSD.
    // - **local_hdd_pro**: throughput-intensive local disk.
    // - **local_ssd_pro**: I/O-intensive local disk.
    // 
    // This parameter is required.
    shared_ptr<string> coreDiskType_ {};
    // The node specifications of the core node. You can invoke the [DescribeInstanceType](https://help.aliyun.com/document_detail/145796.html) operation to query the node specifications.
    // 
    // This parameter is required.
    shared_ptr<string> coreInstanceType_ {};
    // The number of core nodes. Valid values: 2 to 20. The value must be an even number.
    // 
    // This parameter is required.
    shared_ptr<int32_t> coreNodeCount_ {};
    // The service type. Currently, only ApsaraDB for HBase Performance-enhanced Edition is supported. Set the value to **hbaseue**.
    // 
    // This parameter is required.
    shared_ptr<string> engine_ {};
    // The version of the engine type. Set the value to **2.0**.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The disk size of the log node. Valid values: 400 to 64000. Unit: GB. The value must be a multiple of 40.
    shared_ptr<int32_t> logDiskSize_ {};
    // The disk type of the log node. Valid values:
    // - **cloud_efficiency**: ultra cloud disk.
    // - **cloud_ssd**: standard SSD.
    // - **local_hdd_pro**: throughput-intensive local disk.
    // - **local_ssd_pro**: I/O-intensive local disk.
    shared_ptr<string> logDiskType_ {};
    // The node specifications of the log node. You can invoke the [DescribeInstanceType](https://help.aliyun.com/document_detail/145796.html) operation to query the node specifications.
    shared_ptr<string> logInstanceType_ {};
    // The number of log nodes. Valid values: 4 to 400. The value must be a multiple of 4.
    shared_ptr<int32_t> logNodeCount_ {};
    // The node specifications of the master node. You can invoke the [DescribeInstanceType](https://help.aliyun.com/document_detail/145796.html) operation to query the node specifications.
    // 
    // This parameter is required.
    shared_ptr<string> masterInstanceType_ {};
    // <props="china">The zone combination. The following combinations are supported. You can go to the buy page or call the [DescribeMultiZoneAvailableRegions](https://help.aliyun.com/document_detail/203039.html) operation to view the supported zone combinations.
    // <props="intl">The zone combination. The following combinations are supported. You can go to the buy page to view the supported zone combinations..
    // 
    // This parameter is required.
    shared_ptr<string> multiZoneCombination_ {};
    // The billing method of the instance. Valid values:
    // 
    // - **Prepaid**: subscription.
    // - **Postpaid**: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The subscription duration of the subscription instance. Valid values:
    // 
    // - If PeriodUnit is set to year, valid values are 1 to 3.
    // - If PeriodUnit is set to month, valid values are 1 to 9.
    // 
    // > This parameter is required only when PayType is set to Prepaid.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration for the subscription instance. Valid values:
    // 
    // - **year**
    // - **month**
    // 
    // > This parameter is required only when PayType is set to Prepaid.
    shared_ptr<string> periodUnit_ {};
    // The vSwitch ID of the primary zone instance. The vSwitch must be in the zone specified by **PrimaryZoneId**.
    // 
    // This parameter is required.
    shared_ptr<string> primaryVSwitchId_ {};
    // The zone ID of the primary zone instance.
    // 
    // This parameter is required.
    shared_ptr<string> primaryZoneId_ {};
    // The ID of the region in which the instance resides. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/144489.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IP addresses in the whitelist of the instance. Separate multiple IP addresses with commas (,).
    // 
    // > If the IP address is set to 127.0.0.1, all addresses are denied access to the instance. For example, 192.168.0.0/24 indicates that all IP addresses in the 192.168.0.XX range are allowed to access the instance.
    shared_ptr<string> securityIPList_ {};
    // The vSwitch ID of the secondary zone instance. The vSwitch must be in the zone specified by **StandbyZoneId**.
    // 
    // This parameter is required.
    shared_ptr<string> standbyVSwitchId_ {};
    // The zone ID of the secondary zone instance.
    // 
    // This parameter is required.
    shared_ptr<string> standbyZoneId_ {};
    // The ID of the virtual private cloud (VPC). The VPC must be in the region specified by **RegionId**.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
