// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPDBINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSREGIONBACKUPDBINSTANCERESPONSEBODY_HPP_
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
  class DescribeCrossRegionBackupDBInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossRegionBackupDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossRegionBackupDBInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeCrossRegionBackupDBInstanceResponseBody() = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody(const DescribeCrossRegionBackupDBInstanceResponseBody &) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody(DescribeCrossRegionBackupDBInstanceResponseBody &&) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossRegionBackupDBInstanceResponseBody() = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody& operator=(const DescribeCrossRegionBackupDBInstanceResponseBody &) = default ;
    DescribeCrossRegionBackupDBInstanceResponseBody& operator=(DescribeCrossRegionBackupDBInstanceResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BackupEnabled, backupEnabled_);
          DARABONBA_PTR_TO_JSON(BackupEnabledTime, backupEnabledTime_);
          DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
          DARABONBA_PTR_TO_JSON(CrossBackupType, crossBackupType_);
          DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
          DARABONBA_PTR_TO_JSON(LogBackupEnabled, logBackupEnabled_);
          DARABONBA_PTR_TO_JSON(LogBackupEnabledTime, logBackupEnabledTime_);
          DARABONBA_PTR_TO_JSON(RetentType, retentType_);
          DARABONBA_PTR_TO_JSON(Retention, retention_);
        };
        friend void from_json(const Darabonba::Json& j, Item& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupEnabled, backupEnabled_);
          DARABONBA_PTR_FROM_JSON(BackupEnabledTime, backupEnabledTime_);
          DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
          DARABONBA_PTR_FROM_JSON(CrossBackupType, crossBackupType_);
          DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
          DARABONBA_PTR_FROM_JSON(LogBackupEnabled, logBackupEnabled_);
          DARABONBA_PTR_FROM_JSON(LogBackupEnabledTime, logBackupEnabledTime_);
          DARABONBA_PTR_FROM_JSON(RetentType, retentType_);
          DARABONBA_PTR_FROM_JSON(Retention, retention_);
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
        virtual bool empty() const override { return this->backupEnabled_ == nullptr
        && this->backupEnabledTime_ == nullptr && this->crossBackupRegion_ == nullptr && this->crossBackupType_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr
        && this->DBInstanceStatus_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->lockMode_ == nullptr && this->logBackupEnabled_ == nullptr
        && this->logBackupEnabledTime_ == nullptr && this->retentType_ == nullptr && this->retention_ == nullptr; };
        // backupEnabled Field Functions 
        bool hasBackupEnabled() const { return this->backupEnabled_ != nullptr;};
        void deleteBackupEnabled() { this->backupEnabled_ = nullptr;};
        inline string getBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(backupEnabled_, "") };
        inline Item& setBackupEnabled(string backupEnabled) { DARABONBA_PTR_SET_VALUE(backupEnabled_, backupEnabled) };


        // backupEnabledTime Field Functions 
        bool hasBackupEnabledTime() const { return this->backupEnabledTime_ != nullptr;};
        void deleteBackupEnabledTime() { this->backupEnabledTime_ = nullptr;};
        inline string getBackupEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(backupEnabledTime_, "") };
        inline Item& setBackupEnabledTime(string backupEnabledTime) { DARABONBA_PTR_SET_VALUE(backupEnabledTime_, backupEnabledTime) };


        // crossBackupRegion Field Functions 
        bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
        void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
        inline string getCrossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
        inline Item& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


        // crossBackupType Field Functions 
        bool hasCrossBackupType() const { return this->crossBackupType_ != nullptr;};
        void deleteCrossBackupType() { this->crossBackupType_ = nullptr;};
        inline string getCrossBackupType() const { DARABONBA_PTR_GET_DEFAULT(crossBackupType_, "") };
        inline Item& setCrossBackupType(string crossBackupType) { DARABONBA_PTR_SET_VALUE(crossBackupType_, crossBackupType) };


        // DBInstanceDescription Field Functions 
        bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
        void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
        inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
        inline Item& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline Item& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceStatus Field Functions 
        bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
        void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
        inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
        inline Item& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


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


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline Item& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // logBackupEnabled Field Functions 
        bool hasLogBackupEnabled() const { return this->logBackupEnabled_ != nullptr;};
        void deleteLogBackupEnabled() { this->logBackupEnabled_ = nullptr;};
        inline string getLogBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(logBackupEnabled_, "") };
        inline Item& setLogBackupEnabled(string logBackupEnabled) { DARABONBA_PTR_SET_VALUE(logBackupEnabled_, logBackupEnabled) };


        // logBackupEnabledTime Field Functions 
        bool hasLogBackupEnabledTime() const { return this->logBackupEnabledTime_ != nullptr;};
        void deleteLogBackupEnabledTime() { this->logBackupEnabledTime_ = nullptr;};
        inline string getLogBackupEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(logBackupEnabledTime_, "") };
        inline Item& setLogBackupEnabledTime(string logBackupEnabledTime) { DARABONBA_PTR_SET_VALUE(logBackupEnabledTime_, logBackupEnabledTime) };


        // retentType Field Functions 
        bool hasRetentType() const { return this->retentType_ != nullptr;};
        void deleteRetentType() { this->retentType_ = nullptr;};
        inline int32_t getRetentType() const { DARABONBA_PTR_GET_DEFAULT(retentType_, 0) };
        inline Item& setRetentType(int32_t retentType) { DARABONBA_PTR_SET_VALUE(retentType_, retentType) };


        // retention Field Functions 
        bool hasRetention() const { return this->retention_ != nullptr;};
        void deleteRetention() { this->retention_ = nullptr;};
        inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
        inline Item& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      protected:
        // The status of the cross-region backup feature on the instance. Valid values:
        // 
        // *   **Disable**
        // *   **Enable**
        shared_ptr<string> backupEnabled_ {};
        // The time when cross-region backup was enabled on the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> backupEnabledTime_ {};
        // The ID of the destination region within which the cross-region backup file is stored.
        shared_ptr<string> crossBackupRegion_ {};
        // The policy that is used to save the cross-region backup files of the instance. Default value: **1**. The value 1 indicates that all cross-region backup files are saved.
        shared_ptr<string> crossBackupType_ {};
        // The name of the instance. It must be 2 to 256 characters in length. The value can contain letters, digits, underscores (_), and hyphens (-), and must start with a letter.
        // 
        // >  The value cannot start with http:// or https://.
        shared_ptr<string> DBInstanceDescription_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The instance status. For more information, see [Instance statuses](https://help.aliyun.com/document_detail/26315.html).
        shared_ptr<string> DBInstanceStatus_ {};
        // The database engine of the instance.
        shared_ptr<string> engine_ {};
        // The database engine version.
        shared_ptr<string> engineVersion_ {};
        // The lock status of the instance. Valid values:
        // 
        // *   **Unlock**: The instance is not locked.
        // *   **ManualLock**: The instance is manually locked.
        // *   **LockByExpiration**: The instance is automatically locked after it expires.
        // *   **LockByRestoration**: The instance is automatically locked before it is rolled back.
        // *   **LockByDiskQuota**: The instance is automatically locked because its storage capacity is exhausted and the instance is inaccessible.
        shared_ptr<string> lockMode_ {};
        // The status of the cross-region log backup feature on the instance. Valid values:
        // 
        // *   **Disable**
        // *   **Enable**
        shared_ptr<string> logBackupEnabled_ {};
        // The time when the cross-region log backup feature was enabled on the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> logBackupEnabledTime_ {};
        // The policy that is used to retain the cross-region backup files of the instance. Cross-region backups can be retained only based on the specified retention period. Default value: **1**.
        shared_ptr<int32_t> retentType_ {};
        // The number of days for which the cross-region backup files of the instance are retained. Valid values: **7 to 1825**.
        shared_ptr<int32_t> retention_ {};
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

    virtual bool empty() const override { return this->items_ == nullptr
        && this->itemsNumbers_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->totalRecords_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeCrossRegionBackupDBInstanceResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeCrossRegionBackupDBInstanceResponseBody::Items) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeCrossRegionBackupDBInstanceResponseBody::Items) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setItems(const DescribeCrossRegionBackupDBInstanceResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setItems(DescribeCrossRegionBackupDBInstanceResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int32_t getItemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setItemsNumbers(int32_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int32_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0) };
    inline DescribeCrossRegionBackupDBInstanceResponseBody& setTotalRecords(int32_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    // The cross-region backup settings.
    shared_ptr<DescribeCrossRegionBackupDBInstanceResponseBody::Items> items_ {};
    // The total number of items returned for cross-region backup settings.
    shared_ptr<int32_t> itemsNumbers_ {};
    // The page number. Pages start from page 1.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecords_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
