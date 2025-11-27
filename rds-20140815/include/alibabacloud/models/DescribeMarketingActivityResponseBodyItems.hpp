// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMARKETINGACTIVITYRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMARKETINGACTIVITYRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMarketingActivityResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMarketingActivityResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIombps, maxIombps_);
      DARABONBA_PTR_TO_JSON(MaxIops, maxIops_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(UpgradeCategory, upgradeCategory_);
      DARABONBA_PTR_TO_JSON(UpgradeClassCode, upgradeClassCode_);
      DARABONBA_PTR_TO_JSON(UpgradeClassGroup, upgradeClassGroup_);
      DARABONBA_PTR_TO_JSON(UpgradeCpu, upgradeCpu_);
      DARABONBA_PTR_TO_JSON(UpgradeDescContent, upgradeDescContent_);
      DARABONBA_PTR_TO_JSON(UpgradeDiskSize, upgradeDiskSize_);
      DARABONBA_PTR_TO_JSON(UpgradeMaxConnections, upgradeMaxConnections_);
      DARABONBA_PTR_TO_JSON(UpgradeMaxIombps, upgradeMaxIombps_);
      DARABONBA_PTR_TO_JSON(UpgradeMaxIops, upgradeMaxIops_);
      DARABONBA_PTR_TO_JSON(UpgradeMemory, upgradeMemory_);
      DARABONBA_PTR_TO_JSON(UpgradeReferencePrice, upgradeReferencePrice_);
      DARABONBA_PTR_TO_JSON(UpgradeStorageType, upgradeStorageType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMarketingActivityResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(ClassGroup, classGroup_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIombps, maxIombps_);
      DARABONBA_PTR_FROM_JSON(MaxIops, maxIops_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(UpgradeCategory, upgradeCategory_);
      DARABONBA_PTR_FROM_JSON(UpgradeClassCode, upgradeClassCode_);
      DARABONBA_PTR_FROM_JSON(UpgradeClassGroup, upgradeClassGroup_);
      DARABONBA_PTR_FROM_JSON(UpgradeCpu, upgradeCpu_);
      DARABONBA_PTR_FROM_JSON(UpgradeDescContent, upgradeDescContent_);
      DARABONBA_PTR_FROM_JSON(UpgradeDiskSize, upgradeDiskSize_);
      DARABONBA_PTR_FROM_JSON(UpgradeMaxConnections, upgradeMaxConnections_);
      DARABONBA_PTR_FROM_JSON(UpgradeMaxIombps, upgradeMaxIombps_);
      DARABONBA_PTR_FROM_JSON(UpgradeMaxIops, upgradeMaxIops_);
      DARABONBA_PTR_FROM_JSON(UpgradeMemory, upgradeMemory_);
      DARABONBA_PTR_FROM_JSON(UpgradeReferencePrice, upgradeReferencePrice_);
      DARABONBA_PTR_FROM_JSON(UpgradeStorageType, upgradeStorageType_);
    };
    DescribeMarketingActivityResponseBodyItems() = default ;
    DescribeMarketingActivityResponseBodyItems(const DescribeMarketingActivityResponseBodyItems &) = default ;
    DescribeMarketingActivityResponseBodyItems(DescribeMarketingActivityResponseBodyItems &&) = default ;
    DescribeMarketingActivityResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMarketingActivityResponseBodyItems() = default ;
    DescribeMarketingActivityResponseBodyItems& operator=(const DescribeMarketingActivityResponseBodyItems &) = default ;
    DescribeMarketingActivityResponseBodyItems& operator=(DescribeMarketingActivityResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->chargeType_ == nullptr && return this->classCode_ == nullptr && return this->classGroup_ == nullptr && return this->cpu_ == nullptr && return this->diskSize_ == nullptr
        && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->maxConnections_ == nullptr
        && return this->maxIombps_ == nullptr && return this->maxIops_ == nullptr && return this->memory_ == nullptr && return this->storageType_ == nullptr && return this->upgradeCategory_ == nullptr
        && return this->upgradeClassCode_ == nullptr && return this->upgradeClassGroup_ == nullptr && return this->upgradeCpu_ == nullptr && return this->upgradeDescContent_ == nullptr && return this->upgradeDiskSize_ == nullptr
        && return this->upgradeMaxConnections_ == nullptr && return this->upgradeMaxIombps_ == nullptr && return this->upgradeMaxIops_ == nullptr && return this->upgradeMemory_ == nullptr && return this->upgradeReferencePrice_ == nullptr
        && return this->upgradeStorageType_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // classGroup Field Functions 
    bool hasClassGroup() const { return this->classGroup_ != nullptr;};
    void deleteClassGroup() { this->classGroup_ = nullptr;};
    inline string classGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIombps Field Functions 
    bool hasMaxIombps() const { return this->maxIombps_ != nullptr;};
    void deleteMaxIombps() { this->maxIombps_ = nullptr;};
    inline int32_t maxIombps() const { DARABONBA_PTR_GET_DEFAULT(maxIombps_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setMaxIombps(int32_t maxIombps) { DARABONBA_PTR_SET_VALUE(maxIombps_, maxIombps) };


    // maxIops Field Functions 
    bool hasMaxIops() const { return this->maxIops_ != nullptr;};
    void deleteMaxIops() { this->maxIops_ = nullptr;};
    inline int32_t maxIops() const { DARABONBA_PTR_GET_DEFAULT(maxIops_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setMaxIops(int32_t maxIops) { DARABONBA_PTR_SET_VALUE(maxIops_, maxIops) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeMarketingActivityResponseBodyItems& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // upgradeCategory Field Functions 
    bool hasUpgradeCategory() const { return this->upgradeCategory_ != nullptr;};
    void deleteUpgradeCategory() { this->upgradeCategory_ = nullptr;};
    inline string upgradeCategory() const { DARABONBA_PTR_GET_DEFAULT(upgradeCategory_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeCategory(string upgradeCategory) { DARABONBA_PTR_SET_VALUE(upgradeCategory_, upgradeCategory) };


    // upgradeClassCode Field Functions 
    bool hasUpgradeClassCode() const { return this->upgradeClassCode_ != nullptr;};
    void deleteUpgradeClassCode() { this->upgradeClassCode_ = nullptr;};
    inline string upgradeClassCode() const { DARABONBA_PTR_GET_DEFAULT(upgradeClassCode_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeClassCode(string upgradeClassCode) { DARABONBA_PTR_SET_VALUE(upgradeClassCode_, upgradeClassCode) };


    // upgradeClassGroup Field Functions 
    bool hasUpgradeClassGroup() const { return this->upgradeClassGroup_ != nullptr;};
    void deleteUpgradeClassGroup() { this->upgradeClassGroup_ = nullptr;};
    inline string upgradeClassGroup() const { DARABONBA_PTR_GET_DEFAULT(upgradeClassGroup_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeClassGroup(string upgradeClassGroup) { DARABONBA_PTR_SET_VALUE(upgradeClassGroup_, upgradeClassGroup) };


    // upgradeCpu Field Functions 
    bool hasUpgradeCpu() const { return this->upgradeCpu_ != nullptr;};
    void deleteUpgradeCpu() { this->upgradeCpu_ = nullptr;};
    inline string upgradeCpu() const { DARABONBA_PTR_GET_DEFAULT(upgradeCpu_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeCpu(string upgradeCpu) { DARABONBA_PTR_SET_VALUE(upgradeCpu_, upgradeCpu) };


    // upgradeDescContent Field Functions 
    bool hasUpgradeDescContent() const { return this->upgradeDescContent_ != nullptr;};
    void deleteUpgradeDescContent() { this->upgradeDescContent_ = nullptr;};
    inline string upgradeDescContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeDescContent_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeDescContent(string upgradeDescContent) { DARABONBA_PTR_SET_VALUE(upgradeDescContent_, upgradeDescContent) };


    // upgradeDiskSize Field Functions 
    bool hasUpgradeDiskSize() const { return this->upgradeDiskSize_ != nullptr;};
    void deleteUpgradeDiskSize() { this->upgradeDiskSize_ = nullptr;};
    inline int32_t upgradeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeDiskSize_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeDiskSize(int32_t upgradeDiskSize) { DARABONBA_PTR_SET_VALUE(upgradeDiskSize_, upgradeDiskSize) };


    // upgradeMaxConnections Field Functions 
    bool hasUpgradeMaxConnections() const { return this->upgradeMaxConnections_ != nullptr;};
    void deleteUpgradeMaxConnections() { this->upgradeMaxConnections_ = nullptr;};
    inline int32_t upgradeMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(upgradeMaxConnections_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeMaxConnections(int32_t upgradeMaxConnections) { DARABONBA_PTR_SET_VALUE(upgradeMaxConnections_, upgradeMaxConnections) };


    // upgradeMaxIombps Field Functions 
    bool hasUpgradeMaxIombps() const { return this->upgradeMaxIombps_ != nullptr;};
    void deleteUpgradeMaxIombps() { this->upgradeMaxIombps_ = nullptr;};
    inline int32_t upgradeMaxIombps() const { DARABONBA_PTR_GET_DEFAULT(upgradeMaxIombps_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeMaxIombps(int32_t upgradeMaxIombps) { DARABONBA_PTR_SET_VALUE(upgradeMaxIombps_, upgradeMaxIombps) };


    // upgradeMaxIops Field Functions 
    bool hasUpgradeMaxIops() const { return this->upgradeMaxIops_ != nullptr;};
    void deleteUpgradeMaxIops() { this->upgradeMaxIops_ = nullptr;};
    inline int32_t upgradeMaxIops() const { DARABONBA_PTR_GET_DEFAULT(upgradeMaxIops_, 0) };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeMaxIops(int32_t upgradeMaxIops) { DARABONBA_PTR_SET_VALUE(upgradeMaxIops_, upgradeMaxIops) };


    // upgradeMemory Field Functions 
    bool hasUpgradeMemory() const { return this->upgradeMemory_ != nullptr;};
    void deleteUpgradeMemory() { this->upgradeMemory_ = nullptr;};
    inline int64_t upgradeMemory() const { DARABONBA_PTR_GET_DEFAULT(upgradeMemory_, 0L) };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeMemory(int64_t upgradeMemory) { DARABONBA_PTR_SET_VALUE(upgradeMemory_, upgradeMemory) };


    // upgradeReferencePrice Field Functions 
    bool hasUpgradeReferencePrice() const { return this->upgradeReferencePrice_ != nullptr;};
    void deleteUpgradeReferencePrice() { this->upgradeReferencePrice_ = nullptr;};
    inline string upgradeReferencePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradeReferencePrice_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeReferencePrice(string upgradeReferencePrice) { DARABONBA_PTR_SET_VALUE(upgradeReferencePrice_, upgradeReferencePrice) };


    // upgradeStorageType Field Functions 
    bool hasUpgradeStorageType() const { return this->upgradeStorageType_ != nullptr;};
    void deleteUpgradeStorageType() { this->upgradeStorageType_ = nullptr;};
    inline string upgradeStorageType() const { DARABONBA_PTR_GET_DEFAULT(upgradeStorageType_, "") };
    inline DescribeMarketingActivityResponseBodyItems& setUpgradeStorageType(string upgradeStorageType) { DARABONBA_PTR_SET_VALUE(upgradeStorageType_, upgradeStorageType) };


  protected:
    // The RDS edition of the instance. Valid values:
    // 
    // *   **Basic**: RDS Basic Edition
    // *   **HighAvailability**: RDS High-availability Edition
    // *   **AlwaysOn**: RDS Cluster Edition
    // *   **Finance**: RDS Enterprise Edition
    std::shared_ptr<string> category_ = nullptr;
    // The payment type. Valid values:
    // 
    // *   POSTPAY: pay-as-you-go
    // *   PREPAY: subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The instance type. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html) and [Read-only ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/145759.html).
    std::shared_ptr<string> classCode_ = nullptr;
    // The instance family. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/57184.html).
    std::shared_ptr<string> classGroup_ = nullptr;
    // The number of CPU cores that are supported by the instance type. Unit: cores.
    std::shared_ptr<string> cpu_ = nullptr;
    // The disk capacity per node. Unit: GB.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The database engine of the instance. Valid values:
    // 
    // *   MySQL
    // *   SQLServer
    // *   PostgreSQL
    // *   PPAS
    // *   MariaDB
    std::shared_ptr<string> engine_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // The maximum I/O throughput. Unit: Mbit/s.
    std::shared_ptr<int32_t> maxIombps_ = nullptr;
    // The maximum IOPS.
    std::shared_ptr<int32_t> maxIops_ = nullptr;
    // The memory size.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **local_ssd**: local SSD
    // *   **cloud_ssd**: standard SSD
    // *   **cloud_essd**: performance level 1 (PL1) enhanced SSD (ESSD)
    // *   **cloud_essd2**: PL2 ESSD
    // *   **cloud_essd3**: PL3 ESSD
    std::shared_ptr<string> storageType_ = nullptr;
    // The RDS edition after the upgrade.
    std::shared_ptr<string> upgradeCategory_ = nullptr;
    // The instance type after the upgrade.
    std::shared_ptr<string> upgradeClassCode_ = nullptr;
    // The instance family after the upgrade.
    std::shared_ptr<string> upgradeClassGroup_ = nullptr;
    // The number of CPU cores after the upgrade.
    std::shared_ptr<string> upgradeCpu_ = nullptr;
    // The description of the upgrade.
    std::shared_ptr<string> upgradeDescContent_ = nullptr;
    // The disk capacity after the upgrade.
    std::shared_ptr<int32_t> upgradeDiskSize_ = nullptr;
    // The maximum number of concurrent connections after the upgrade.
    std::shared_ptr<int32_t> upgradeMaxConnections_ = nullptr;
    // The maximum I/O throughput after the upgrade. Unit: Mbit/s.
    std::shared_ptr<int32_t> upgradeMaxIombps_ = nullptr;
    // The maximum IOPS after the upgrade.
    std::shared_ptr<int32_t> upgradeMaxIops_ = nullptr;
    // The memory size after the upgrade.
    std::shared_ptr<int64_t> upgradeMemory_ = nullptr;
    // The reference price of the upgrade.
    std::shared_ptr<string> upgradeReferencePrice_ = nullptr;
    // The storage type after the upgrade.
    std::shared_ptr<string> upgradeStorageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
