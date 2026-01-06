// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPSRESPONSEBODY_HPP_
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
  class DescribeCrossRegionBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeCrossRegionBackupsResponseBody() = default ;
    DescribeCrossRegionBackupsResponseBody(const DescribeCrossRegionBackupsResponseBody &) = default ;
    DescribeCrossRegionBackupsResponseBody(DescribeCrossRegionBackupsResponseBody &&) = default ;
    DescribeCrossRegionBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionBackupsResponseBody() = default ;
    DescribeCrossRegionBackupsResponseBody& operator=(const DescribeCrossRegionBackupsResponseBody &) = default ;
    DescribeCrossRegionBackupsResponseBody& operator=(DescribeCrossRegionBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Item, item_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Item, item_);
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
      class Item : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Item& obj) { 
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupSetScale, backupSetScale_);
          DARABONBA_PTR_TO_JSON(BackupSetStatus, backupSetStatus_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_TO_JSON(CrossBackupDownloadLink, crossBackupDownloadLink_);
          DARABONBA_PTR_TO_JSON(CrossBackupId, crossBackupId_);
          DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
          DARABONBA_PTR_TO_JSON(CrossBackupSetFile, crossBackupSetFile_);
          DARABONBA_PTR_TO_JSON(CrossBackupSetLocation, crossBackupSetLocation_);
          DARABONBA_PTR_TO_JSON(CrossBackupSetSize, crossBackupSetSize_);
          DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RestoreRegions, restoreRegions_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupSetScale, backupSetScale_);
          DARABONBA_PTR_FROM_JSON(BackupSetStatus, backupSetStatus_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_FROM_JSON(CrossBackupDownloadLink, crossBackupDownloadLink_);
          DARABONBA_PTR_FROM_JSON(CrossBackupId, crossBackupId_);
          DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
          DARABONBA_PTR_FROM_JSON(CrossBackupSetFile, crossBackupSetFile_);
          DARABONBA_PTR_FROM_JSON(CrossBackupSetLocation, crossBackupSetLocation_);
          DARABONBA_PTR_FROM_JSON(CrossBackupSetSize, crossBackupSetSize_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RestoreRegions, restoreRegions_);
        };
        Item() = default ;
        Item(const Item &) = default ;
        Item(Item &&) = default ;
        Item(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Item() = default ;
        Item& operator=(const Item &) = default ;
        Item& operator=(Item &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RestoreRegions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RestoreRegions& obj) { 
            DARABONBA_PTR_TO_JSON(RestoreRegion, restoreRegion_);
          };
          friend void from_json(const Darabonba::Json& j, RestoreRegions& obj) { 
            DARABONBA_PTR_FROM_JSON(RestoreRegion, restoreRegion_);
          };
          RestoreRegions() = default ;
          RestoreRegions(const RestoreRegions &) = default ;
          RestoreRegions(RestoreRegions &&) = default ;
          RestoreRegions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RestoreRegions() = default ;
          RestoreRegions& operator=(const RestoreRegions &) = default ;
          RestoreRegions& operator=(RestoreRegions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->restoreRegion_ == nullptr; };
          // restoreRegion Field Functions 
          bool hasRestoreRegion() const { return this->restoreRegion_ != nullptr;};
          void deleteRestoreRegion() { this->restoreRegion_ = nullptr;};
          inline const vector<string> & getRestoreRegion() const { DARABONBA_PTR_GET_CONST(restoreRegion_, vector<string>) };
          inline vector<string> getRestoreRegion() { DARABONBA_PTR_GET(restoreRegion_, vector<string>) };
          inline RestoreRegions& setRestoreRegion(const vector<string> & restoreRegion) { DARABONBA_PTR_SET_VALUE(restoreRegion_, restoreRegion) };
          inline RestoreRegions& setRestoreRegion(vector<string> && restoreRegion) { DARABONBA_PTR_SET_RVALUE(restoreRegion_, restoreRegion) };


        protected:
          shared_ptr<vector<string>> restoreRegion_ {};
        };

        virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupMethod_ == nullptr && this->backupSetScale_ == nullptr && this->backupSetStatus_ == nullptr && this->backupStartTime_ == nullptr && this->backupType_ == nullptr
        && this->category_ == nullptr && this->consistentTime_ == nullptr && this->crossBackupDownloadLink_ == nullptr && this->crossBackupId_ == nullptr && this->crossBackupRegion_ == nullptr
        && this->crossBackupSetFile_ == nullptr && this->crossBackupSetLocation_ == nullptr && this->crossBackupSetSize_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->engine_ == nullptr
        && this->engineVersion_ == nullptr && this->instanceId_ == nullptr && this->restoreRegions_ == nullptr; };
        // backupEndTime Field Functions 
        bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
        void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
        inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
        inline Item& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


        // backupMethod Field Functions 
        bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
        void deleteBackupMethod() { this->backupMethod_ = nullptr;};
        inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
        inline Item& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


        // backupSetScale Field Functions 
        bool hasBackupSetScale() const { return this->backupSetScale_ != nullptr;};
        void deleteBackupSetScale() { this->backupSetScale_ = nullptr;};
        inline int32_t getBackupSetScale() const { DARABONBA_PTR_GET_DEFAULT(backupSetScale_, 0) };
        inline Item& setBackupSetScale(int32_t backupSetScale) { DARABONBA_PTR_SET_VALUE(backupSetScale_, backupSetScale) };


        // backupSetStatus Field Functions 
        bool hasBackupSetStatus() const { return this->backupSetStatus_ != nullptr;};
        void deleteBackupSetStatus() { this->backupSetStatus_ = nullptr;};
        inline int32_t getBackupSetStatus() const { DARABONBA_PTR_GET_DEFAULT(backupSetStatus_, 0) };
        inline Item& setBackupSetStatus(int32_t backupSetStatus) { DARABONBA_PTR_SET_VALUE(backupSetStatus_, backupSetStatus) };


        // backupStartTime Field Functions 
        bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
        void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
        inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
        inline Item& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline Item& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline Item& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // consistentTime Field Functions 
        bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
        void deleteConsistentTime() { this->consistentTime_ = nullptr;};
        inline string getConsistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, "") };
        inline Item& setConsistentTime(string consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


        // crossBackupDownloadLink Field Functions 
        bool hasCrossBackupDownloadLink() const { return this->crossBackupDownloadLink_ != nullptr;};
        void deleteCrossBackupDownloadLink() { this->crossBackupDownloadLink_ = nullptr;};
        inline string getCrossBackupDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(crossBackupDownloadLink_, "") };
        inline Item& setCrossBackupDownloadLink(string crossBackupDownloadLink) { DARABONBA_PTR_SET_VALUE(crossBackupDownloadLink_, crossBackupDownloadLink) };


        // crossBackupId Field Functions 
        bool hasCrossBackupId() const { return this->crossBackupId_ != nullptr;};
        void deleteCrossBackupId() { this->crossBackupId_ = nullptr;};
        inline int32_t getCrossBackupId() const { DARABONBA_PTR_GET_DEFAULT(crossBackupId_, 0) };
        inline Item& setCrossBackupId(int32_t crossBackupId) { DARABONBA_PTR_SET_VALUE(crossBackupId_, crossBackupId) };


        // crossBackupRegion Field Functions 
        bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
        void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
        inline string getCrossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
        inline Item& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


        // crossBackupSetFile Field Functions 
        bool hasCrossBackupSetFile() const { return this->crossBackupSetFile_ != nullptr;};
        void deleteCrossBackupSetFile() { this->crossBackupSetFile_ = nullptr;};
        inline string getCrossBackupSetFile() const { DARABONBA_PTR_GET_DEFAULT(crossBackupSetFile_, "") };
        inline Item& setCrossBackupSetFile(string crossBackupSetFile) { DARABONBA_PTR_SET_VALUE(crossBackupSetFile_, crossBackupSetFile) };


        // crossBackupSetLocation Field Functions 
        bool hasCrossBackupSetLocation() const { return this->crossBackupSetLocation_ != nullptr;};
        void deleteCrossBackupSetLocation() { this->crossBackupSetLocation_ = nullptr;};
        inline string getCrossBackupSetLocation() const { DARABONBA_PTR_GET_DEFAULT(crossBackupSetLocation_, "") };
        inline Item& setCrossBackupSetLocation(string crossBackupSetLocation) { DARABONBA_PTR_SET_VALUE(crossBackupSetLocation_, crossBackupSetLocation) };


        // crossBackupSetSize Field Functions 
        bool hasCrossBackupSetSize() const { return this->crossBackupSetSize_ != nullptr;};
        void deleteCrossBackupSetSize() { this->crossBackupSetSize_ = nullptr;};
        inline int64_t getCrossBackupSetSize() const { DARABONBA_PTR_GET_DEFAULT(crossBackupSetSize_, 0L) };
        inline Item& setCrossBackupSetSize(int64_t crossBackupSetSize) { DARABONBA_PTR_SET_VALUE(crossBackupSetSize_, crossBackupSetSize) };


        // DBInstanceStorageType Field Functions 
        bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
        void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
        inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
        inline Item& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline Item& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Item& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int32_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0) };
        inline Item& setInstanceId(int32_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // restoreRegions Field Functions 
        bool hasRestoreRegions() const { return this->restoreRegions_ != nullptr;};
        void deleteRestoreRegions() { this->restoreRegions_ = nullptr;};
        inline const Item::RestoreRegions & getRestoreRegions() const { DARABONBA_PTR_GET_CONST(restoreRegions_, Item::RestoreRegions) };
        inline Item::RestoreRegions getRestoreRegions() { DARABONBA_PTR_GET(restoreRegions_, Item::RestoreRegions) };
        inline Item& setRestoreRegions(const Item::RestoreRegions & restoreRegions) { DARABONBA_PTR_SET_VALUE(restoreRegions_, restoreRegions) };
        inline Item& setRestoreRegions(Item::RestoreRegions && restoreRegions) { DARABONBA_PTR_SET_RVALUE(restoreRegions_, restoreRegions) };


      protected:
        // The time when the cross-region data backup file was generated.
        shared_ptr<string> backupEndTime_ {};
        // The method that is used to generate the cross-region data backup file. Valid values:
        // 
        // *   **L**: logical backup
        // *   **P**: physical backup
        shared_ptr<string> backupMethod_ {};
        // The level at which the cross-region data backup file is generated.
        // 
        // *   **0**: instance-level backup
        // *   **1**: database-level backup
        shared_ptr<int32_t> backupSetScale_ {};
        // The status of the cross-region data backup. Valid values:
        // 
        // *   **0**: The cross-region data backup is successful.
        // *   **1**: The cross-region data backup failed.
        shared_ptr<int32_t> backupSetStatus_ {};
        // The time when the cross-region data backup started.
        shared_ptr<string> backupStartTime_ {};
        // The type of the cross-region data backup. Valid values:
        // 
        // *   **F**: full data backup
        // *   **I**: incremental data backup
        shared_ptr<string> backupType_ {};
        // The RDS edition of the instance. Valid values:
        // 
        // *   **Basic**: RDS Basic Edition.
        // *   **HighAvailability**: RDS High-availability Edition.
        // *   **Finance**: RDS Enterprise Edition. This edition is available only for the China site (aliyun.com).
        shared_ptr<string> category_ {};
        // The point in time that is indicated by the data in the cross-region data backup file.
        shared_ptr<string> consistentTime_ {};
        // The external URL from which you can download the cross-region data backup file.
        shared_ptr<string> crossBackupDownloadLink_ {};
        // The ID of the cross-region data backup file.
        shared_ptr<int32_t> crossBackupId_ {};
        // The ID of the region in which the cross-region backup files of the instance are stored.
        shared_ptr<string> crossBackupRegion_ {};
        // The name of the compressed package that contains the cross-region data backup file.
        shared_ptr<string> crossBackupSetFile_ {};
        // The location where the cross-region data backup file is stored.
        shared_ptr<string> crossBackupSetLocation_ {};
        // The size of the cross-region data backup file. Unit: bytes.
        shared_ptr<int64_t> crossBackupSetSize_ {};
        // The storage type. Valid values:
        // 
        // *   **local_ssd**: local SSDs. This is the recommended storage type.
        // *   **cloud_ssd**: standard SSD.
        // *   **cloud_essd**: enhanced SSD (ESSD).
        shared_ptr<string> DBInstanceStorageType_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version.
        shared_ptr<string> engineVersion_ {};
        // The instance ID. This parameter is used to determine whether the instance that generates the cross-region data backup file is a primary or secondary instance.
        shared_ptr<int32_t> instanceId_ {};
        // The regions to which the cross-region data backup file can be restored.
        shared_ptr<Item::RestoreRegions> restoreRegions_ {};
      };

      virtual bool empty() const override { return this->item_ == nullptr; };
      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline const vector<Items::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Items::Item>) };
      inline vector<Items::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Items::Item>) };
      inline Items& setItem(const vector<Items::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
      inline Items& setItem(vector<Items::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    protected:
      shared_ptr<vector<Items::Item>> item_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr && this->totalRecordCount_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeCrossRegionBackupsResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeCrossRegionBackupsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeCrossRegionBackupsResponseBody::Items) };
    inline DescribeCrossRegionBackupsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeCrossRegionBackupsResponseBody::Items) };
    inline DescribeCrossRegionBackupsResponseBody& setItems(const DescribeCrossRegionBackupsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCrossRegionBackupsResponseBody& setItems(DescribeCrossRegionBackupsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCrossRegionBackupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeCrossRegionBackupsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCrossRegionBackupsResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossRegionBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeCrossRegionBackupsResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeCrossRegionBackupsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The end of the time range to query.
    shared_ptr<string> endTime_ {};
    // The cross-region data backup files.
    shared_ptr<DescribeCrossRegionBackupsResponseBody::Items> items_ {};
    // The page number. Pages start from page 1.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of cross-region data backup files on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range to query.
    shared_ptr<string> startTime_ {};
    // The total number of entries that are returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
