// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDETACHEDBACKUPSRESPONSEBODY_HPP_
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
          DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_TO_JSON(DBInstanceComment, DBInstanceComment_);
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(HostInstanceID, hostInstanceID_);
          DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_TO_JSON(MetaStatus, metaStatus_);
          DARABONBA_PTR_TO_JSON(StoreStatus, storeStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Backup& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(ConsistentTime, consistentTime_);
          DARABONBA_PTR_FROM_JSON(DBInstanceComment, DBInstanceComment_);
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(HostInstanceID, hostInstanceID_);
          DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
          DARABONBA_PTR_FROM_JSON(MetaStatus, metaStatus_);
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
        virtual bool empty() const override { return this->backupDownloadURL_ == nullptr
        && this->backupEndTime_ == nullptr && this->backupId_ == nullptr && this->backupIntranetDownloadURL_ == nullptr && this->backupMethod_ == nullptr && this->backupMode_ == nullptr
        && this->backupSize_ == nullptr && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr && this->backupType_ == nullptr && this->consistentTime_ == nullptr
        && this->DBInstanceComment_ == nullptr && this->DBInstanceId_ == nullptr && this->hostInstanceID_ == nullptr && this->isAvail_ == nullptr && this->metaStatus_ == nullptr
        && this->storeStatus_ == nullptr; };
        // backupDownloadURL Field Functions 
        bool hasBackupDownloadURL() const { return this->backupDownloadURL_ != nullptr;};
        void deleteBackupDownloadURL() { this->backupDownloadURL_ = nullptr;};
        inline string getBackupDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupDownloadURL_, "") };
        inline Backup& setBackupDownloadURL(string backupDownloadURL) { DARABONBA_PTR_SET_VALUE(backupDownloadURL_, backupDownloadURL) };


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


        // backupIntranetDownloadURL Field Functions 
        bool hasBackupIntranetDownloadURL() const { return this->backupIntranetDownloadURL_ != nullptr;};
        void deleteBackupIntranetDownloadURL() { this->backupIntranetDownloadURL_ = nullptr;};
        inline string getBackupIntranetDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(backupIntranetDownloadURL_, "") };
        inline Backup& setBackupIntranetDownloadURL(string backupIntranetDownloadURL) { DARABONBA_PTR_SET_VALUE(backupIntranetDownloadURL_, backupIntranetDownloadURL) };


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


        // backupSize Field Functions 
        bool hasBackupSize() const { return this->backupSize_ != nullptr;};
        void deleteBackupSize() { this->backupSize_ = nullptr;};
        inline int64_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0L) };
        inline Backup& setBackupSize(int64_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


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


        // consistentTime Field Functions 
        bool hasConsistentTime() const { return this->consistentTime_ != nullptr;};
        void deleteConsistentTime() { this->consistentTime_ = nullptr;};
        inline int64_t getConsistentTime() const { DARABONBA_PTR_GET_DEFAULT(consistentTime_, 0L) };
        inline Backup& setConsistentTime(int64_t consistentTime) { DARABONBA_PTR_SET_VALUE(consistentTime_, consistentTime) };


        // DBInstanceComment Field Functions 
        bool hasDBInstanceComment() const { return this->DBInstanceComment_ != nullptr;};
        void deleteDBInstanceComment() { this->DBInstanceComment_ = nullptr;};
        inline string getDBInstanceComment() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceComment_, "") };
        inline Backup& setDBInstanceComment(string DBInstanceComment) { DARABONBA_PTR_SET_VALUE(DBInstanceComment_, DBInstanceComment) };


        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline Backup& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // hostInstanceID Field Functions 
        bool hasHostInstanceID() const { return this->hostInstanceID_ != nullptr;};
        void deleteHostInstanceID() { this->hostInstanceID_ = nullptr;};
        inline string getHostInstanceID() const { DARABONBA_PTR_GET_DEFAULT(hostInstanceID_, "") };
        inline Backup& setHostInstanceID(string hostInstanceID) { DARABONBA_PTR_SET_VALUE(hostInstanceID_, hostInstanceID) };


        // isAvail Field Functions 
        bool hasIsAvail() const { return this->isAvail_ != nullptr;};
        void deleteIsAvail() { this->isAvail_ = nullptr;};
        inline int32_t getIsAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, 0) };
        inline Backup& setIsAvail(int32_t isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


        // metaStatus Field Functions 
        bool hasMetaStatus() const { return this->metaStatus_ != nullptr;};
        void deleteMetaStatus() { this->metaStatus_ = nullptr;};
        inline string getMetaStatus() const { DARABONBA_PTR_GET_DEFAULT(metaStatus_, "") };
        inline Backup& setMetaStatus(string metaStatus) { DARABONBA_PTR_SET_VALUE(metaStatus_, metaStatus) };


        // storeStatus Field Functions 
        bool hasStoreStatus() const { return this->storeStatus_ != nullptr;};
        void deleteStoreStatus() { this->storeStatus_ = nullptr;};
        inline string getStoreStatus() const { DARABONBA_PTR_GET_DEFAULT(storeStatus_, "") };
        inline Backup& setStoreStatus(string storeStatus) { DARABONBA_PTR_SET_VALUE(storeStatus_, storeStatus) };


      protected:
        // The URL that is used to download the diagnostic report over the Internet. If the diagnostic report cannot be downloaded, an empty string is returned.
        shared_ptr<string> backupDownloadURL_ {};
        // The end time of the backup task.
        // 
        // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> backupEndTime_ {};
        // The ID of the backup set.
        shared_ptr<string> backupId_ {};
        // The URL that is used to download the log file over an internal network. If the log file cannot be downloaded, an empty string is returned.
        shared_ptr<string> backupIntranetDownloadURL_ {};
        // The method that is used to generate the data backup file. Valid values:
        // 
        // *   **Logical**: logical backup
        // *   **Physical**: physical backup
        shared_ptr<string> backupMethod_ {};
        // The backup method. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> backupMode_ {};
        // The backup size. Unit: bytes.
        shared_ptr<int64_t> backupSize_ {};
        // The start time of the backup task.
        // 
        // The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
        shared_ptr<string> backupStartTime_ {};
        // The status of the backup set. Valid values:
        // 
        // *   **Success**
        // *   **Failed**
        shared_ptr<string> backupStatus_ {};
        // The backup type of the backup file. Valid values:
        // 
        // *   **FullBackup**
        // *   **IncrementalBackup**
        shared_ptr<string> backupType_ {};
        // The point in time at which the data in the backup set is consistent. The return value of this parameter is a timestamp.
        // 
        // >  If the instance runs MySQL 5.6, a timestamp is returned. Otherwise, the value 0 is returned.
        shared_ptr<int64_t> consistentTime_ {};
        // The description of the instance.
        shared_ptr<string> DBInstanceComment_ {};
        // The instance ID.
        shared_ptr<string> DBInstanceId_ {};
        // The ID of the instance that generates the backup set. This parameter is used to indicate whether the instance that generates the backup set is a primary instance or a secondary instance.
        shared_ptr<string> hostInstanceID_ {};
        // Indicates whether the backup set is available. Valid values:
        // 
        // *   **0**: The backup set is unavailable.
        // *   **1**: The backup set is available.
        shared_ptr<int32_t> isAvail_ {};
        // The status of the backup set that is used to restore individual databases or tables. Valid values:
        // 
        // *   **OK**: The backup set is normal.
        // *   **LARGE**: The backup set contains an abnormally large number of tables. It cannot be used to restore individual databases or tables.
        // *   **EMPTY**: The backup set is generated from a failed backup task.
        shared_ptr<string> metaStatus_ {};
        // Indicates whether the data backup file can be deleted. Valid values:
        // 
        // *   **Enabled**
        // *   **Disabled**
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
    // The queried backup sets.
    shared_ptr<DescribeDetachedBackupsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
