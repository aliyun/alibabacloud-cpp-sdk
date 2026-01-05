// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDetachedBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDetachedBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDetachedBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDetachedBackupsResponseBody() = default ;
    DescribeDetachedBackupsResponseBody(const DescribeDetachedBackupsResponseBody &) = default ;
    DescribeDetachedBackupsResponseBody(DescribeDetachedBackupsResponseBody &&) = default ;
    DescribeDetachedBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDetachedBackupsResponseBody() = default ;
    DescribeDetachedBackupsResponseBody& operator=(const DescribeDetachedBackupsResponseBody &) = default ;
    DescribeDetachedBackupsResponseBody& operator=(DescribeDetachedBackupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Backup, backup_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Backup, backup_);
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
      class Backup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backup& obj) { 
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(BackupSetSize, backupSetSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(BackupsLevel, backupsLevel_);
          DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_TO_JSON(StoreStatus, storeStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Backup& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(BackupSetSize, backupSetSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(BackupsLevel, backupsLevel_);
          DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_FROM_JSON(StoreStatus, storeStatus_);
        };
        Backup() = default ;
        Backup(const Backup &) = default ;
        Backup(Backup &&) = default ;
        Backup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Backup() = default ;
        Backup& operator=(const Backup &) = default ;
        Backup& operator=(Backup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupEndTime_ == nullptr
        && this->backupId_ == nullptr && this->backupMethod_ == nullptr && this->backupMode_ == nullptr && this->backupSetSize_ == nullptr && this->backupStartTime_ == nullptr
        && this->backupStatus_ == nullptr && this->backupType_ == nullptr && this->backupsLevel_ == nullptr && this->consistentTime_ == nullptr && this->DBClusterId_ == nullptr
        && this->isAvail_ == nullptr && this->storeStatus_ == nullptr; };
        // backupEndTime Field Functions 
        bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
        void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
        inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
        inline Backup& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


        // backupId Field Functions 
        bool hasBackupId() const { return this->backupId_ != nullptr;};
        void deleteBackupId() { this->backupId_ = nullptr;};
        inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
        inline Backup& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


        // backupMethod Field Functions 
        bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
        void deleteBackupMethod() { this->backupMethod_ = nullptr;};
        inline string getBackupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
        inline Backup& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


        // backupMode Field Functions 
        bool hasBackupMode() const { return this->backupMode_ != nullptr;};
        void deleteBackupMode() { this->backupMode_ = nullptr;};
        inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
        inline Backup& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


        // backupSetSize Field Functions 
        bool hasBackupSetSize() const { return this->backupSetSize_ != nullptr;};
        void deleteBackupSetSize() { this->backupSetSize_ = nullptr;};
        inline string getBackupSetSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetSize_, "") };
        inline Backup& setBackupSetSize(string backupSetSize) { DARABONBA_PTR_SET_VALUE(backupSetSize_, backupSetSize) };


        // backupStartTime Field Functions 
        bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
        void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
        inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
        inline Backup& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


        // backupStatus Field Functions 
        bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
        void deleteBackupStatus() { this->backupStatus_ = nullptr;};
        inline string getBackupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
        inline Backup& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline Backup& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // backupsLevel Field Functions 
        bool hasBackupsLevel() const { return this->backupsLevel_ != nullptr;};
        void deleteBackupsLevel() { this->backupsLevel_ = nullptr;};
        inline string getBackupsLevel() const { DARABONBA_PTR_GET_DEFAULT(backupsLevel_, "") };
        inline Backup& setBackupsLevel(string backupsLevel) { DARABONBA_PTR_SET_VALUE(backupsLevel_, backupsLevel) };


        // consistentTime Field Functions 
        bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
        void deleteConsistentTime() { this->consistentTime_ = nullptr;};
        inline string getConsistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, "") };
        inline Backup& setConsistentTime(string consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline Backup& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // isAvail Field Functions 
        bool hasIsAvail() const { return this->isAvail_ != nullptr;};
        void deleteIsAvail() { this->isAvail_ = nullptr;};
        inline string getIsAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, "") };
        inline Backup& setIsAvail(string isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


        // storeStatus Field Functions 
        bool hasStoreStatus() const { return this->storeStatus_ != nullptr;};
        void deleteStoreStatus() { this->storeStatus_ = nullptr;};
        inline string getStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(storeStatus_, "") };
        inline Backup& setStoreStatus(string storeStatus) { DARABONBA_PTR_SET_VALUE(storeStatus_, storeStatus) };


      protected:
        // The end time of the backup task. The time is displayed in UTC.
        shared_ptr<string> backupEndTime_ {};
        // The ID of the backup set.
        shared_ptr<string> backupId_ {};
        // The backup method. Only snapshot backups are supported. The value is set to **Snapshot**.
        shared_ptr<string> backupMethod_ {};
        // The backup mode. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> backupMode_ {};
        // The size of the backup set. Unit: bytes.
        // 
        // > After you delete the target snapshot backups, the storage space consumed by the backups is released. The released storage space is smaller than the size of the backup file, because the snapshots share certain data blocks.
        shared_ptr<string> backupSetSize_ {};
        // The start time of the backup task. The time is displayed in UTC.
        shared_ptr<string> backupStartTime_ {};
        // The status of the backup set. Valid values:
        // 
        // *   **Success**
        // *   **Failed**
        shared_ptr<string> backupStatus_ {};
        // The type of the backup. Only full backups are supported. The value is set to **FullBackup**.
        shared_ptr<string> backupType_ {};
        // The level of the backup set. Valid values:
        // 
        // *   **Level-1**: level-1 backup set
        // *   **Level-2**: level-2 backup set
        shared_ptr<string> backupsLevel_ {};
        // The snapshot checkpoint time. The value is a Unix timestamp.
        shared_ptr<string> consistentTime_ {};
        // The ID of the cluster.
        shared_ptr<string> DBClusterId_ {};
        // Indicates whether the backup set is available. Valid values:
        // 
        // *   **0**: The data backup set is unavailable.
        // *   **1**: The data backup set is available.
        shared_ptr<string> isAvail_ {};
        // Indicates whether the backup set can be deleted. Valid values:
        // 
        // *   **Enabled**: The backup set can be deleted.
        // *   **Disabled**: The backup set cannot be deleted.
        shared_ptr<string> storeStatus_ {};
      };

      virtual bool empty() const override { return this->backup_ == nullptr; };
      // backup Field Functions 
      bool hasBackup() const { return this->backup_ != nullptr;};
      void deleteBackup() { this->backup_ = nullptr;};
      inline const vector<Items::Backup> & getBackup() const { DARABONBA_PTR_GET_CONST(backup_, vector<Items::Backup>) };
      inline vector<Items::Backup> getBackup() { DARABONBA_PTR_GET(backup_, vector<Items::Backup>) };
      inline Items& setBackup(const vector<Items::Backup> & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
      inline Items& setBackup(vector<Items::Backup> && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


    protected:
      shared_ptr<vector<Items::Backup>> backup_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDetachedBackupsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDetachedBackupsResponseBody::Items) };
    inline DescribeDetachedBackupsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDetachedBackupsResponseBody::Items) };
    inline DescribeDetachedBackupsResponseBody& setItems(const DescribeDetachedBackupsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDetachedBackupsResponseBody& setItems(DescribeDetachedBackupsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDetachedBackupsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribeDetachedBackupsResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDetachedBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribeDetachedBackupsResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // Details about the backup sets.
    shared_ptr<DescribeDetachedBackupsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
