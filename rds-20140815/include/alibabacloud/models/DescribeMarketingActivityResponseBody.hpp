// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMARKETINGACTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMARKETINGACTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeMarketingActivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMarketingActivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(Bid, bid_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMarketingActivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(Bid, bid_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMarketingActivityResponseBody() = default ;
    DescribeMarketingActivityResponseBody(const DescribeMarketingActivityResponseBody &) = default ;
    DescribeMarketingActivityResponseBody(DescribeMarketingActivityResponseBody &&) = default ;
    DescribeMarketingActivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMarketingActivityResponseBody() = default ;
    DescribeMarketingActivityResponseBody& operator=(const DescribeMarketingActivityResponseBody &) = default ;
    DescribeMarketingActivityResponseBody& operator=(DescribeMarketingActivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->category_ == nullptr
        && this->chargeType_ == nullptr && this->classCode_ == nullptr && this->classGroup_ == nullptr && this->cpu_ == nullptr && this->diskSize_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->maxConnections_ == nullptr
        && this->maxIombps_ == nullptr && this->maxIops_ == nullptr && this->memory_ == nullptr && this->storageType_ == nullptr && this->upgradeCategory_ == nullptr
        && this->upgradeClassCode_ == nullptr && this->upgradeClassGroup_ == nullptr && this->upgradeCpu_ == nullptr && this->upgradeDescContent_ == nullptr && this->upgradeDiskSize_ == nullptr
        && this->upgradeMaxConnections_ == nullptr && this->upgradeMaxIombps_ == nullptr && this->upgradeMaxIops_ == nullptr && this->upgradeMemory_ == nullptr && this->upgradeReferencePrice_ == nullptr
        && this->upgradeStorageType_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Items& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Items& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // classCode Field Functions 
      bool hasClassCode() const { return this->classCode_ != nullptr;};
      void deleteClassCode() { this->classCode_ = nullptr;};
      inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
      inline Items& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


      // classGroup Field Functions 
      bool hasClassGroup() const { return this->classGroup_ != nullptr;};
      void deleteClassGroup() { this->classGroup_ = nullptr;};
      inline string getClassGroup() const { DARABONBA_PTR_GET_DEFAULT(classGroup_, "") };
      inline Items& setClassGroup(string classGroup) { DARABONBA_PTR_SET_VALUE(classGroup_, classGroup) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline string getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
      inline Items& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // diskSize Field Functions 
      bool hasDiskSize() const { return this->diskSize_ != nullptr;};
      void deleteDiskSize() { this->diskSize_ = nullptr;};
      inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
      inline Items& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Items& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // engineVersion Field Functions 
      bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
      void deleteEngineVersion() { this->engineVersion_ = nullptr;};
      inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
      inline Items& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Items& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Items& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // maxConnections Field Functions 
      bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
      void deleteMaxConnections() { this->maxConnections_ = nullptr;};
      inline int32_t getMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
      inline Items& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


      // maxIombps Field Functions 
      bool hasMaxIombps() const { return this->maxIombps_ != nullptr;};
      void deleteMaxIombps() { this->maxIombps_ = nullptr;};
      inline int32_t getMaxIombps() const { DARABONBA_PTR_GET_DEFAULT(maxIombps_, 0) };
      inline Items& setMaxIombps(int32_t maxIombps) { DARABONBA_PTR_SET_VALUE(maxIombps_, maxIombps) };


      // maxIops Field Functions 
      bool hasMaxIops() const { return this->maxIops_ != nullptr;};
      void deleteMaxIops() { this->maxIops_ = nullptr;};
      inline int32_t getMaxIops() const { DARABONBA_PTR_GET_DEFAULT(maxIops_, 0) };
      inline Items& setMaxIops(int32_t maxIops) { DARABONBA_PTR_SET_VALUE(maxIops_, maxIops) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline Items& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Items& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // upgradeCategory Field Functions 
      bool hasUpgradeCategory() const { return this->upgradeCategory_ != nullptr;};
      void deleteUpgradeCategory() { this->upgradeCategory_ = nullptr;};
      inline string getUpgradeCategory() const { DARABONBA_PTR_GET_DEFAULT(upgradeCategory_, "") };
      inline Items& setUpgradeCategory(string upgradeCategory) { DARABONBA_PTR_SET_VALUE(upgradeCategory_, upgradeCategory) };


      // upgradeClassCode Field Functions 
      bool hasUpgradeClassCode() const { return this->upgradeClassCode_ != nullptr;};
      void deleteUpgradeClassCode() { this->upgradeClassCode_ = nullptr;};
      inline string getUpgradeClassCode() const { DARABONBA_PTR_GET_DEFAULT(upgradeClassCode_, "") };
      inline Items& setUpgradeClassCode(string upgradeClassCode) { DARABONBA_PTR_SET_VALUE(upgradeClassCode_, upgradeClassCode) };


      // upgradeClassGroup Field Functions 
      bool hasUpgradeClassGroup() const { return this->upgradeClassGroup_ != nullptr;};
      void deleteUpgradeClassGroup() { this->upgradeClassGroup_ = nullptr;};
      inline string getUpgradeClassGroup() const { DARABONBA_PTR_GET_DEFAULT(upgradeClassGroup_, "") };
      inline Items& setUpgradeClassGroup(string upgradeClassGroup) { DARABONBA_PTR_SET_VALUE(upgradeClassGroup_, upgradeClassGroup) };


      // upgradeCpu Field Functions 
      bool hasUpgradeCpu() const { return this->upgradeCpu_ != nullptr;};
      void deleteUpgradeCpu() { this->upgradeCpu_ = nullptr;};
      inline string getUpgradeCpu() const { DARABONBA_PTR_GET_DEFAULT(upgradeCpu_, "") };
      inline Items& setUpgradeCpu(string upgradeCpu) { DARABONBA_PTR_SET_VALUE(upgradeCpu_, upgradeCpu) };


      // upgradeDescContent Field Functions 
      bool hasUpgradeDescContent() const { return this->upgradeDescContent_ != nullptr;};
      void deleteUpgradeDescContent() { this->upgradeDescContent_ = nullptr;};
      inline string getUpgradeDescContent() const { DARABONBA_PTR_GET_DEFAULT(upgradeDescContent_, "") };
      inline Items& setUpgradeDescContent(string upgradeDescContent) { DARABONBA_PTR_SET_VALUE(upgradeDescContent_, upgradeDescContent) };


      // upgradeDiskSize Field Functions 
      bool hasUpgradeDiskSize() const { return this->upgradeDiskSize_ != nullptr;};
      void deleteUpgradeDiskSize() { this->upgradeDiskSize_ = nullptr;};
      inline int32_t getUpgradeDiskSize() const { DARABONBA_PTR_GET_DEFAULT(upgradeDiskSize_, 0) };
      inline Items& setUpgradeDiskSize(int32_t upgradeDiskSize) { DARABONBA_PTR_SET_VALUE(upgradeDiskSize_, upgradeDiskSize) };


      // upgradeMaxConnections Field Functions 
      bool hasUpgradeMaxConnections() const { return this->upgradeMaxConnections_ != nullptr;};
      void deleteUpgradeMaxConnections() { this->upgradeMaxConnections_ = nullptr;};
      inline int32_t getUpgradeMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(upgradeMaxConnections_, 0) };
      inline Items& setUpgradeMaxConnections(int32_t upgradeMaxConnections) { DARABONBA_PTR_SET_VALUE(upgradeMaxConnections_, upgradeMaxConnections) };


      // upgradeMaxIombps Field Functions 
      bool hasUpgradeMaxIombps() const { return this->upgradeMaxIombps_ != nullptr;};
      void deleteUpgradeMaxIombps() { this->upgradeMaxIombps_ = nullptr;};
      inline int32_t getUpgradeMaxIombps() const { DARABONBA_PTR_GET_DEFAULT(upgradeMaxIombps_, 0) };
      inline Items& setUpgradeMaxIombps(int32_t upgradeMaxIombps) { DARABONBA_PTR_SET_VALUE(upgradeMaxIombps_, upgradeMaxIombps) };


      // upgradeMaxIops Field Functions 
      bool hasUpgradeMaxIops() const { return this->upgradeMaxIops_ != nullptr;};
      void deleteUpgradeMaxIops() { this->upgradeMaxIops_ = nullptr;};
      inline int32_t getUpgradeMaxIops() const { DARABONBA_PTR_GET_DEFAULT(upgradeMaxIops_, 0) };
      inline Items& setUpgradeMaxIops(int32_t upgradeMaxIops) { DARABONBA_PTR_SET_VALUE(upgradeMaxIops_, upgradeMaxIops) };


      // upgradeMemory Field Functions 
      bool hasUpgradeMemory() const { return this->upgradeMemory_ != nullptr;};
      void deleteUpgradeMemory() { this->upgradeMemory_ = nullptr;};
      inline int64_t getUpgradeMemory() const { DARABONBA_PTR_GET_DEFAULT(upgradeMemory_, 0L) };
      inline Items& setUpgradeMemory(int64_t upgradeMemory) { DARABONBA_PTR_SET_VALUE(upgradeMemory_, upgradeMemory) };


      // upgradeReferencePrice Field Functions 
      bool hasUpgradeReferencePrice() const { return this->upgradeReferencePrice_ != nullptr;};
      void deleteUpgradeReferencePrice() { this->upgradeReferencePrice_ = nullptr;};
      inline string getUpgradeReferencePrice() const { DARABONBA_PTR_GET_DEFAULT(upgradeReferencePrice_, "") };
      inline Items& setUpgradeReferencePrice(string upgradeReferencePrice) { DARABONBA_PTR_SET_VALUE(upgradeReferencePrice_, upgradeReferencePrice) };


      // upgradeStorageType Field Functions 
      bool hasUpgradeStorageType() const { return this->upgradeStorageType_ != nullptr;};
      void deleteUpgradeStorageType() { this->upgradeStorageType_ = nullptr;};
      inline string getUpgradeStorageType() const { DARABONBA_PTR_GET_DEFAULT(upgradeStorageType_, "") };
      inline Items& setUpgradeStorageType(string upgradeStorageType) { DARABONBA_PTR_SET_VALUE(upgradeStorageType_, upgradeStorageType) };


    protected:
      // The RDS edition of the instance. Valid values:
      // 
      // *   **Basic**: RDS Basic Edition
      // *   **HighAvailability**: RDS High-availability Edition
      // *   **AlwaysOn**: RDS Cluster Edition
      // *   **Finance**: RDS Enterprise Edition
      shared_ptr<string> category_ {};
      // The payment type. Valid values:
      // 
      // *   POSTPAY: pay-as-you-go
      // *   PREPAY: subscription
      shared_ptr<string> chargeType_ {};
      // The instance type. For more information, see [Primary ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/26312.html) and [Read-only ApsaraDB RDS instance types](https://help.aliyun.com/document_detail/145759.html).
      shared_ptr<string> classCode_ {};
      // The instance family. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/57184.html).
      shared_ptr<string> classGroup_ {};
      // The number of CPU cores that are supported by the instance type. Unit: cores.
      shared_ptr<string> cpu_ {};
      // The disk capacity per node. Unit: GB.
      shared_ptr<int32_t> diskSize_ {};
      // The database engine of the instance. Valid values:
      // 
      // *   MySQL
      // *   SQLServer
      // *   PostgreSQL
      // *   PPAS
      // *   MariaDB
      shared_ptr<string> engine_ {};
      // The version of the database engine.
      shared_ptr<string> engineVersion_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // The maximum number of concurrent connections.
      shared_ptr<int32_t> maxConnections_ {};
      // The maximum I/O throughput. Unit: Mbit/s.
      shared_ptr<int32_t> maxIombps_ {};
      // The maximum IOPS.
      shared_ptr<int32_t> maxIops_ {};
      // The memory size.
      shared_ptr<int64_t> memory_ {};
      // The storage type of the instance. Valid values:
      // 
      // *   **local_ssd**: local SSD
      // *   **cloud_ssd**: standard SSD
      // *   **cloud_essd**: performance level 1 (PL1) enhanced SSD (ESSD)
      // *   **cloud_essd2**: PL2 ESSD
      // *   **cloud_essd3**: PL3 ESSD
      shared_ptr<string> storageType_ {};
      // The RDS edition after the upgrade.
      shared_ptr<string> upgradeCategory_ {};
      // The instance type after the upgrade.
      shared_ptr<string> upgradeClassCode_ {};
      // The instance family after the upgrade.
      shared_ptr<string> upgradeClassGroup_ {};
      // The number of CPU cores after the upgrade.
      shared_ptr<string> upgradeCpu_ {};
      // The description of the upgrade.
      shared_ptr<string> upgradeDescContent_ {};
      // The disk capacity after the upgrade.
      shared_ptr<int32_t> upgradeDiskSize_ {};
      // The maximum number of concurrent connections after the upgrade.
      shared_ptr<int32_t> upgradeMaxConnections_ {};
      // The maximum I/O throughput after the upgrade. Unit: Mbit/s.
      shared_ptr<int32_t> upgradeMaxIombps_ {};
      // The maximum IOPS after the upgrade.
      shared_ptr<int32_t> upgradeMaxIops_ {};
      // The memory size after the upgrade.
      shared_ptr<int64_t> upgradeMemory_ {};
      // The reference price of the upgrade.
      shared_ptr<string> upgradeReferencePrice_ {};
      // The storage type after the upgrade.
      shared_ptr<string> upgradeStorageType_ {};
    };

    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bid_ == nullptr && this->items_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeMarketingActivityResponseBody& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bid Field Functions 
    bool hasBid() const { return this->bid_ != nullptr;};
    void deleteBid() { this->bid_ = nullptr;};
    inline string getBid() const { DARABONBA_PTR_GET_DEFAULT(bid_, "") };
    inline DescribeMarketingActivityResponseBody& setBid(string bid) { DARABONBA_PTR_SET_VALUE(bid_, bid) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeMarketingActivityResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeMarketingActivityResponseBody::Items>) };
    inline vector<DescribeMarketingActivityResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeMarketingActivityResponseBody::Items>) };
    inline DescribeMarketingActivityResponseBody& setItems(const vector<DescribeMarketingActivityResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMarketingActivityResponseBody& setItems(vector<DescribeMarketingActivityResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMarketingActivityResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMarketingActivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Alibaba Cloud account.
    shared_ptr<int64_t> aliUid_ {};
    // *   China site: 26842
    // *   International site: 26888
    shared_ptr<string> bid_ {};
    // The activity parameters
    shared_ptr<vector<DescribeMarketingActivityResponseBody::Items>> items_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    // 
    // This parameter is required.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
