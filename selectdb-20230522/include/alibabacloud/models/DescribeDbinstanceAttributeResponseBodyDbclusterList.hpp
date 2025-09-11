// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEATTRIBUTERESPONSEBODYDBCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DescribeDBInstanceAttributeResponseBodyDBClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceAttributeResponseBodyDBClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(CacheStorageSizeGB, cacheStorageSizeGB_);
      DARABONBA_PTR_TO_JSON(CacheStorageType, cacheStorageType_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterBinding, clusterBinding_);
      DARABONBA_PTR_TO_JSON(ClusterNodeCount, clusterNodeCount_);
      DARABONBA_PTR_TO_JSON(ClusterNodeType, clusterNodeType_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(DbClusterClass, dbClusterClass_);
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbClusterName, dbClusterName_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_TO_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_TO_JSON(ScalingRulesEnable, scalingRulesEnable_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceAttributeResponseBodyDBClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheStorageSizeGB, cacheStorageSizeGB_);
      DARABONBA_PTR_FROM_JSON(CacheStorageType, cacheStorageType_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterBinding, clusterBinding_);
      DARABONBA_PTR_FROM_JSON(ClusterNodeCount, clusterNodeCount_);
      DARABONBA_PTR_FROM_JSON(ClusterNodeType, clusterNodeType_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(DbClusterClass, dbClusterClass_);
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbClusterName, dbClusterName_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ScaleMax, scaleMax_);
      DARABONBA_PTR_FROM_JSON(ScaleMin, scaleMin_);
      DARABONBA_PTR_FROM_JSON(ScalingRulesEnable, scalingRulesEnable_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBInstanceAttributeResponseBodyDBClusterList() = default ;
    DescribeDBInstanceAttributeResponseBodyDBClusterList(const DescribeDBInstanceAttributeResponseBodyDBClusterList &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBClusterList(DescribeDBInstanceAttributeResponseBodyDBClusterList &&) = default ;
    DescribeDBInstanceAttributeResponseBodyDBClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceAttributeResponseBodyDBClusterList() = default ;
    DescribeDBInstanceAttributeResponseBodyDBClusterList& operator=(const DescribeDBInstanceAttributeResponseBodyDBClusterList &) = default ;
    DescribeDBInstanceAttributeResponseBodyDBClusterList& operator=(DescribeDBInstanceAttributeResponseBodyDBClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheStorageSizeGB_ != nullptr
        && this->cacheStorageType_ != nullptr && this->chargeType_ != nullptr && this->clusterBinding_ != nullptr && this->clusterNodeCount_ != nullptr && this->clusterNodeType_ != nullptr
        && this->cpuCores_ != nullptr && this->createdTime_ != nullptr && this->dbClusterClass_ != nullptr && this->dbClusterId_ != nullptr && this->dbClusterName_ != nullptr
        && this->dbInstanceName_ != nullptr && this->memory_ != nullptr && this->modifiedTime_ != nullptr && this->performanceLevel_ != nullptr && this->scaleMax_ != nullptr
        && this->scaleMin_ != nullptr && this->scalingRulesEnable_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->subDomain_ != nullptr
        && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // cacheStorageSizeGB Field Functions 
    bool hasCacheStorageSizeGB() const { return this->cacheStorageSizeGB_ != nullptr;};
    void deleteCacheStorageSizeGB() { this->cacheStorageSizeGB_ = nullptr;};
    inline string cacheStorageSizeGB() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageSizeGB_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setCacheStorageSizeGB(string cacheStorageSizeGB) { DARABONBA_PTR_SET_VALUE(cacheStorageSizeGB_, cacheStorageSizeGB) };


    // cacheStorageType Field Functions 
    bool hasCacheStorageType() const { return this->cacheStorageType_ != nullptr;};
    void deleteCacheStorageType() { this->cacheStorageType_ = nullptr;};
    inline string cacheStorageType() const { DARABONBA_PTR_GET_DEFAULT(cacheStorageType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setCacheStorageType(string cacheStorageType) { DARABONBA_PTR_SET_VALUE(cacheStorageType_, cacheStorageType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterBinding Field Functions 
    bool hasClusterBinding() const { return this->clusterBinding_ != nullptr;};
    void deleteClusterBinding() { this->clusterBinding_ = nullptr;};
    inline string clusterBinding() const { DARABONBA_PTR_GET_DEFAULT(clusterBinding_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setClusterBinding(string clusterBinding) { DARABONBA_PTR_SET_VALUE(clusterBinding_, clusterBinding) };


    // clusterNodeCount Field Functions 
    bool hasClusterNodeCount() const { return this->clusterNodeCount_ != nullptr;};
    void deleteClusterNodeCount() { this->clusterNodeCount_ = nullptr;};
    inline int32_t clusterNodeCount() const { DARABONBA_PTR_GET_DEFAULT(clusterNodeCount_, 0) };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setClusterNodeCount(int32_t clusterNodeCount) { DARABONBA_PTR_SET_VALUE(clusterNodeCount_, clusterNodeCount) };


    // clusterNodeType Field Functions 
    bool hasClusterNodeType() const { return this->clusterNodeType_ != nullptr;};
    void deleteClusterNodeType() { this->clusterNodeType_ = nullptr;};
    inline string clusterNodeType() const { DARABONBA_PTR_GET_DEFAULT(clusterNodeType_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setClusterNodeType(string clusterNodeType) { DARABONBA_PTR_SET_VALUE(clusterNodeType_, clusterNodeType) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline int64_t cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setCpuCores(int64_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // dbClusterClass Field Functions 
    bool hasDbClusterClass() const { return this->dbClusterClass_ != nullptr;};
    void deleteDbClusterClass() { this->dbClusterClass_ = nullptr;};
    inline string dbClusterClass() const { DARABONBA_PTR_GET_DEFAULT(dbClusterClass_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setDbClusterClass(string dbClusterClass) { DARABONBA_PTR_SET_VALUE(dbClusterClass_, dbClusterClass) };


    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbClusterName Field Functions 
    bool hasDbClusterName() const { return this->dbClusterName_ != nullptr;};
    void deleteDbClusterName() { this->dbClusterName_ = nullptr;};
    inline string dbClusterName() const { DARABONBA_PTR_GET_DEFAULT(dbClusterName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setDbClusterName(string dbClusterName) { DARABONBA_PTR_SET_VALUE(dbClusterName_, dbClusterName) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // scaleMax Field Functions 
    bool hasScaleMax() const { return this->scaleMax_ != nullptr;};
    void deleteScaleMax() { this->scaleMax_ = nullptr;};
    inline double scaleMax() const { DARABONBA_PTR_GET_DEFAULT(scaleMax_, 0.0) };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setScaleMax(double scaleMax) { DARABONBA_PTR_SET_VALUE(scaleMax_, scaleMax) };


    // scaleMin Field Functions 
    bool hasScaleMin() const { return this->scaleMin_ != nullptr;};
    void deleteScaleMin() { this->scaleMin_ = nullptr;};
    inline double scaleMin() const { DARABONBA_PTR_GET_DEFAULT(scaleMin_, 0.0) };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setScaleMin(double scaleMin) { DARABONBA_PTR_SET_VALUE(scaleMin_, scaleMin) };


    // scalingRulesEnable Field Functions 
    bool hasScalingRulesEnable() const { return this->scalingRulesEnable_ != nullptr;};
    void deleteScalingRulesEnable() { this->scalingRulesEnable_ = nullptr;};
    inline bool scalingRulesEnable() const { DARABONBA_PTR_GET_DEFAULT(scalingRulesEnable_, false) };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setScalingRulesEnable(bool scalingRulesEnable) { DARABONBA_PTR_SET_VALUE(scalingRulesEnable_, scalingRulesEnable) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBInstanceAttributeResponseBodyDBClusterList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cache size. Unit: GB.
    std::shared_ptr<string> cacheStorageSizeGB_ = nullptr;
    // The cache type.
    std::shared_ptr<string> cacheStorageType_ = nullptr;
    // The billing method of the cluster. Valid values:
    // 
    // *   **Postpaid**: pay-as-you-go.
    // *   **Prepaid**: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> clusterBinding_ = nullptr;
    std::shared_ptr<int32_t> clusterNodeCount_ = nullptr;
    std::shared_ptr<string> clusterNodeType_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<int64_t> cpuCores_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The specifications of the cluster. Valid values:
    // 
    // *   **selectdb.xlarge**: 4 CPU cores and 32 GB of memory.
    // *   **selectdb.2xlarge**: 8 CPU cores and 64 GB of memory.
    // *   **selectdb.4xlarge**: 16 CPU cores and 128 GB of memory.
    // *   **selectdb.8xlarge**: 32 CPU cores and 256 GB of memory.
    // *   **selectdb.16xlarge**: 64 CPU cores and 512 GB of memory.
    // *   **selectdb.24xlarge**: 96 CPU cores and 768 GB of memory.
    // *   **selectdb.32xlarge**: 128 CPU cores and 1,024 GB of memory.
    std::shared_ptr<string> dbClusterClass_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> dbClusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> dbClusterName_ = nullptr;
    // The instance name.
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    // The memory size.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The modified time.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The performance level.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    std::shared_ptr<double> scaleMax_ = nullptr;
    std::shared_ptr<double> scaleMin_ = nullptr;
    std::shared_ptr<bool> scalingRulesEnable_ = nullptr;
    // The time when the cluster started.
    std::shared_ptr<string> startTime_ = nullptr;
    // The state of the cluster. Valid values:
    // 
    // *   **CREATING**: The cluster is being created.
    // *   **ACTIVATION**: The cluster is running.
    // *   **RESOURCE_CHANGING**: The resource configuration of the cluster is being changed.
    // *   **ORDER_PREPARING**: The order is being confirmed.
    // *   **READONLY_RESOURCE_CHANGING**: The resource configuration of the cluster is being changed and the cluster is write-locked.
    // *   **DELETING**: The cluster is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subDomain_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
