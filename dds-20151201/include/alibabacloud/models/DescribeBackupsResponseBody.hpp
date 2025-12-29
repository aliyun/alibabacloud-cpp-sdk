// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeBackupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Backups, backups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Backups, backups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    class Backups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Backups& obj) { 
        DARABONBA_PTR_TO_JSON(Backup, backup_);
      };
      friend void from_json(const Darabonba::Json& j, Backups& obj) { 
        DARABONBA_PTR_FROM_JSON(Backup, backup_);
      };
      Backups() = default ;
      Backups(const Backups &) = default ;
      Backups(Backups &&) = default ;
      Backups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Backups() = default ;
      Backups& operator=(const Backups &) = default ;
      Backups& operator=(Backups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Backup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backup& obj) { 
          DARABONBA_PTR_TO_JSON(BackupDBNames, backupDBNames_);
          DARABONBA_PTR_TO_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_TO_JSON(BackupExpireTime, backupExpireTime_);
          DARABONBA_PTR_TO_JSON(BackupId, backupId_);
          DARABONBA_PTR_TO_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
          DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(BackupName, backupName_);
          DARABONBA_PTR_TO_JSON(BackupScale, backupScale_);
          DARABONBA_PTR_TO_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_TO_JSON(BackupType, backupType_);
          DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_TO_JSON(IsAvail, isAvail_);
        };
        friend void from_json(const Darabonba::Json& j, Backup& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupDBNames, backupDBNames_);
          DARABONBA_PTR_FROM_JSON(BackupDownloadURL, backupDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupEndTime, backupEndTime_);
          DARABONBA_PTR_FROM_JSON(BackupExpireTime, backupExpireTime_);
          DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
          DARABONBA_PTR_FROM_JSON(BackupIntranetDownloadURL, backupIntranetDownloadURL_);
          DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
          DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(BackupName, backupName_);
          DARABONBA_PTR_FROM_JSON(BackupScale, backupScale_);
          DARABONBA_PTR_FROM_JSON(BackupSize, backupSize_);
          DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
          DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
          DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
          DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
          DARABONBA_PTR_FROM_JSON(IsAvail, isAvail_);
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
        virtual bool empty() const override { return this->backupDBNames_ == nullptr
        && this->backupDownloadURL_ == nullptr && this->backupEndTime_ == nullptr && this->backupExpireTime_ == nullptr && this->backupId_ == nullptr && this->backupIntranetDownloadURL_ == nullptr
        && this->backupJobId_ == nullptr && this->backupMethod_ == nullptr && this->backupMode_ == nullptr && this->backupName_ == nullptr && this->backupScale_ == nullptr
        && this->backupSize_ == nullptr && this->backupStartTime_ == nullptr && this->backupStatus_ == nullptr && this->backupType_ == nullptr && this->engineVersion_ == nullptr
        && this->isAvail_ == nullptr; };
        // backupDBNames Field Functions 
        bool hasBackupDBNames() const { return this->backupDBNames_ != nullptr;};
        void deleteBackupDBNames() { this->backupDBNames_ = nullptr;};
        inline string getBackupDBNames() const { DARABONBA_PTR_GET_DEFAULT(backupDBNames_, "") };
        inline Backup& setBackupDBNames(string backupDBNames) { DARABONBA_PTR_SET_VALUE(backupDBNames_, backupDBNames) };


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


        // backupExpireTime Field Functions 
        bool hasBackupExpireTime() const { return this->backupExpireTime_ != nullptr;};
        void deleteBackupExpireTime() { this->backupExpireTime_ = nullptr;};
        inline string getBackupExpireTime() const { DARABONBA_PTR_GET_DEFAULT(backupExpireTime_, "") };
        inline Backup& setBackupExpireTime(string backupExpireTime) { DARABONBA_PTR_SET_VALUE(backupExpireTime_, backupExpireTime) };


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


        // backupJobId Field Functions 
        bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
        void deleteBackupJobId() { this->backupJobId_ = nullptr;};
        inline string getBackupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
        inline Backup& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


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


        // backupName Field Functions 
        bool hasBackupName() const { return this->backupName_ != nullptr;};
        void deleteBackupName() { this->backupName_ = nullptr;};
        inline string getBackupName() const { DARABONBA_PTR_GET_DEFAULT(backupName_, "") };
        inline Backup& setBackupName(string backupName) { DARABONBA_PTR_SET_VALUE(backupName_, backupName) };


        // backupScale Field Functions 
        bool hasBackupScale() const { return this->backupScale_ != nullptr;};
        void deleteBackupScale() { this->backupScale_ = nullptr;};
        inline string getBackupScale() const { DARABONBA_PTR_GET_DEFAULT(backupScale_, "") };
        inline Backup& setBackupScale(string backupScale) { DARABONBA_PTR_SET_VALUE(backupScale_, backupScale) };


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


        // engineVersion Field Functions 
        bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
        void deleteEngineVersion() { this->engineVersion_ = nullptr;};
        inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
        inline Backup& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


        // isAvail Field Functions 
        bool hasIsAvail() const { return this->isAvail_ != nullptr;};
        void deleteIsAvail() { this->isAvail_ = nullptr;};
        inline bool getIsAvail() const { DARABONBA_PTR_GET_DEFAULT(isAvail_, false) };
        inline Backup& setIsAvail(bool isAvail) { DARABONBA_PTR_SET_VALUE(isAvail_, isAvail) };


      protected:
        // The name of the database that has been backed up.
        shared_ptr<string> backupDBNames_ {};
        // The URL that is used to download the backup set over the Internet. If the backup set cannot be downloaded, an empty string is returned.
        shared_ptr<string> backupDownloadURL_ {};
        // The end time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> backupEndTime_ {};
        shared_ptr<string> backupExpireTime_ {};
        // The ID of the backup set.
        shared_ptr<string> backupId_ {};
        // The internal download URL of the backup set.
        // 
        // >  You can use the URL to download the specified backup set on an Elastic Compute Service (ECS) instance that is in the same virtual private cloud (VPC) as the ApsaraDB for MongoDB instance.
        shared_ptr<string> backupIntranetDownloadURL_ {};
        // The ID of the backup task.
        shared_ptr<string> backupJobId_ {};
        // The method that is used to generate the backup set. Valid values:
        // 
        // *   **Snapshot**
        // *   **Physical**
        // *   **Logical**
        shared_ptr<string> backupMethod_ {};
        // The backup mode of the backup set. Valid values:
        // 
        // *   **Automated**
        // *   **Manual**
        shared_ptr<string> backupMode_ {};
        // The name of the backup set. The parameter is invalid.
        shared_ptr<string> backupName_ {};
        // The backup granularity. The parameter is invalid.
        shared_ptr<string> backupScale_ {};
        // The size of the backup set. Unit: bytes.
        shared_ptr<int64_t> backupSize_ {};
        // The start time of the backup. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> backupStartTime_ {};
        // The status of the backup task. Valid values:
        // 
        // *   **Success**: The backup task is successful.
        // *   **Failed**: The backup task failed.
        shared_ptr<string> backupStatus_ {};
        // The backup type. Valid values:
        // 
        // *   **FullBackup**
        // *   **IncrementalBackup**
        shared_ptr<string> backupType_ {};
        // Version of the backuped instance.
        // 
        // *   **6.0**
        // *   **5.0**
        // *   **4.4**
        // *   **4.2**
        // *   **4.0**
        // *   **3.4**
        shared_ptr<string> engineVersion_ {};
        // Availability of the backup set.
        // - 0: unavailable
        // - 1: available
        shared_ptr<bool> isAvail_ {};
      };

      virtual bool empty() const override { return this->backup_ == nullptr; };
      // backup Field Functions 
      bool hasBackup() const { return this->backup_ != nullptr;};
      void deleteBackup() { this->backup_ = nullptr;};
      inline const vector<Backups::Backup> & getBackup() const { DARABONBA_PTR_GET_CONST(backup_, vector<Backups::Backup>) };
      inline vector<Backups::Backup> getBackup() { DARABONBA_PTR_GET(backup_, vector<Backups::Backup>) };
      inline Backups& setBackup(const vector<Backups::Backup> & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
      inline Backups& setBackup(vector<Backups::Backup> && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


    protected:
      shared_ptr<vector<Backups::Backup>> backup_ {};
    };

    virtual bool empty() const override { return this->backups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // backups Field Functions 
    bool hasBackups() const { return this->backups_ != nullptr;};
    void deleteBackups() { this->backups_ = nullptr;};
    inline const DescribeBackupsResponseBody::Backups & getBackups() const { DARABONBA_PTR_GET_CONST(backups_, DescribeBackupsResponseBody::Backups) };
    inline DescribeBackupsResponseBody::Backups getBackups() { DARABONBA_PTR_GET(backups_, DescribeBackupsResponseBody::Backups) };
    inline DescribeBackupsResponseBody& setBackups(const DescribeBackupsResponseBody::Backups & backups) { DARABONBA_PTR_SET_VALUE(backups_, backups) };
    inline DescribeBackupsResponseBody& setBackups(DescribeBackupsResponseBody::Backups && backups) { DARABONBA_PTR_SET_RVALUE(backups_, backups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBackupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the backup set.
    shared_ptr<DescribeBackupsResponseBody::Backups> backups_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of backup sets.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
