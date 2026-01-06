// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FreeBackupSize, freeBackupSize_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalBackupSize, totalBackupSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FreeBackupSize, freeBackupSize_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalBackupSize, totalBackupSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody(DescribeBackupsResponseBody &&) = default ;
    DescribeBackupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupsResponseBody() = default ;
    DescribeBackupsResponseBody& operator=(const DescribeBackupsResponseBody &) = default ;
    DescribeBackupsResponseBody& operator=(DescribeBackupsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(BackupExpiredTime, backupExpiredTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupRegion, backupRegion_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_TO_JSON(ParentBackupId, parentBackupId_);
        };
        friend void from_json(const Darabonba::Json& j, Backup& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupExpiredTime, backupExpiredTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupRegion, backupRegion_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
          DARABONBA_PTR_FROM_JSON(ParentBackupId, parentBackupId_);
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
        && this->backupExpiredTime_ == nullptr && this->backupId_ == nullptr && this->backupMethod_ == nullptr && this->backupRegion_ == nullptr && this->backupSize_ == nullptr
        && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr && this->backupType_ == nullptr && this->DBClusterId_ == nullptr && this->parentBackupId_ == nullptr; };
        // backupEndTime Field Functions 
        bool hasBackupEndTime() const { return this->backupEndTime_ != nullptr;};
        void deleteBackupEndTime() { this->backupEndTime_ = nullptr;};
        inline string getBackupEndTime() const { DARABONBA_PTR_GET_DEFAULT(backupEndTime_, "") };
        inline Backup& setBackupEndTime(string backupEndTime) { DARABONBA_PTR_SET_VALUE(backupEndTime_, backupEndTime) };


        // backupExpiredTime Field Functions 
        bool hasBackupExpiredTime() const { return this->backupExpiredTime_ != nullptr;};
        void deleteBackupExpiredTime() { this->backupExpiredTime_ = nullptr;};
        inline string getBackupExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(backupExpiredTime_, "") };
        inline Backup& setBackupExpiredTime(string backupExpiredTime) { DARABONBA_PTR_SET_VALUE(backupExpiredTime_, backupExpiredTime) };


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


        // backupRegion Field Functions 
        bool hasBackupRegion() const { return this->backupRegion_ != nullptr;};
        void deleteBackupRegion() { this->backupRegion_ = nullptr;};
        inline string getBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(backupRegion_, "") };
        inline Backup& setBackupRegion(string backupRegion) { DARABONBA_PTR_SET_VALUE(backupRegion_, backupRegion) };


        // backupSize Field Functions 
        bool hasBackupSize() const { return this->backupSize_ != nullptr;};
        void deleteBackupSize() { this->backupSize_ = nullptr;};
        inline int32_t getBackupSize() const { DARABONBA_PTR_GET_DEFAULT(backupSize_, 0) };
        inline Backup& setBackupSize(int32_t backupSize) { DARABONBA_PTR_SET_VALUE(backupSize_, backupSize) };


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


        // DBClusterId Field Functions 
        bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
        void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
        inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
        inline Backup& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


        // parentBackupId Field Functions 
        bool hasParentBackupId() const { return this->parentBackupId_ != nullptr;};
        void deleteParentBackupId() { this->parentBackupId_ = nullptr;};
        inline string getParentBackupId() const { DARABONBA_PTR_GET_DEFAULT(parentBackupId_, "") };
        inline Backup& setParentBackupId(string parentBackupId) { DARABONBA_PTR_SET_VALUE(parentBackupId_, parentBackupId) };


      protected:
        // The end time of the backup.
        shared_ptr<string> backupEndTime_ {};
        shared_ptr<string> backupExpiredTime_ {};
        // The backup set ID.
        shared_ptr<string> backupId_ {};
        // The backup method. Snapshot is returned.
        shared_ptr<string> backupMethod_ {};
        shared_ptr<string> backupRegion_ {};
        // The size of the backup set. Unit: bytes.
        shared_ptr<int32_t> backupSize_ {};
        // The start time of the backup.
        shared_ptr<string> backupStartTime_ {};
        shared_ptr<string> backupStatus_ {};
        // The backup type. Valid values:
        // 
        // *   **FullBackup**
        // *   **IncrementalBackup**
        shared_ptr<string> backupType_ {};
        // The ID of the AnalyticDB for MySQL Data Lakehouse Edition cluster.
        shared_ptr<string> DBClusterId_ {};
        shared_ptr<string> parentBackupId_ {};
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

    virtual bool empty() const override { return this->freeBackupSize_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalBackupSize_ == nullptr
        && this->totalCount_ == nullptr; };
    // freeBackupSize Field Functions 
    bool hasFreeBackupSize() const { return this->freeBackupSize_ != nullptr;};
    void deleteFreeBackupSize() { this->freeBackupSize_ = nullptr;};
    inline int64_t getFreeBackupSize() const { DARABONBA_PTR_GET_DEFAULT(freeBackupSize_, 0L) };
    inline DescribeBackupsResponseBody& setFreeBackupSize(int64_t freeBackupSize) { DARABONBA_PTR_SET_VALUE(freeBackupSize_, freeBackupSize) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeBackupsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeBackupsResponseBody::Items) };
    inline DescribeBackupsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeBackupsResponseBody::Items) };
    inline DescribeBackupsResponseBody& setItems(const DescribeBackupsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeBackupsResponseBody& setItems(DescribeBackupsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeBackupsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeBackupsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalBackupSize Field Functions 
    bool hasTotalBackupSize() const { return this->totalBackupSize_ != nullptr;};
    void deleteTotalBackupSize() { this->totalBackupSize_ = nullptr;};
    inline int64_t getTotalBackupSize() const { DARABONBA_PTR_GET_DEFAULT(totalBackupSize_, 0L) };
    inline DescribeBackupsResponseBody& setTotalBackupSize(int64_t totalBackupSize) { DARABONBA_PTR_SET_VALUE(totalBackupSize_, totalBackupSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeBackupsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int64_t> freeBackupSize_ {};
    // The queried backup sets.
    shared_ptr<DescribeBackupsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalBackupSize_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
