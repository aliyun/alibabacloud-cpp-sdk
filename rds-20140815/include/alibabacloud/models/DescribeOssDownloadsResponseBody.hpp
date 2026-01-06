// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODY_HPP_
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
  class DescribeOssDownloadsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssDownloadsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssDownloadsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MigrateTaskId, migrateTaskId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOssDownloadsResponseBody() = default ;
    DescribeOssDownloadsResponseBody(const DescribeOssDownloadsResponseBody &) = default ;
    DescribeOssDownloadsResponseBody(DescribeOssDownloadsResponseBody &&) = default ;
    DescribeOssDownloadsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssDownloadsResponseBody() = default ;
    DescribeOssDownloadsResponseBody& operator=(const DescribeOssDownloadsResponseBody &) = default ;
    DescribeOssDownloadsResponseBody& operator=(DescribeOssDownloadsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(OssDownload, ossDownload_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(OssDownload, ossDownload_);
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
      class OssDownload : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssDownload& obj) { 
          DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, OssDownload& obj) { 
          DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        OssDownload() = default ;
        OssDownload(const OssDownload &) = default ;
        OssDownload(OssDownload &&) = default ;
        OssDownload(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OssDownload() = default ;
        OssDownload& operator=(const OssDownload &) = default ;
        OssDownload& operator=(OssDownload &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupMode_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->fileName_ == nullptr && this->fileSize_ == nullptr
        && this->isAvailable_ == nullptr && this->status_ == nullptr; };
        // backupMode Field Functions 
        bool hasBackupMode() const { return this->backupMode_ != nullptr;};
        void deleteBackupMode() { this->backupMode_ = nullptr;};
        inline string getBackupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
        inline OssDownload& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline OssDownload& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline OssDownload& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline OssDownload& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline OssDownload& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline string getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
        inline OssDownload& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // isAvailable Field Functions 
        bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
        void deleteIsAvailable() { this->isAvailable_ = nullptr;};
        inline string getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, "") };
        inline OssDownload& setIsAvailable(string isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline OssDownload& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The backup type. Valid values:
        // 
        // *   **Database**: full backup file
        // *   **Differential_Database**: incremental backup file
        // *   **Transaction_Log**: log backup file
        shared_ptr<string> backupMode_ {};
        // The time when the backup file was created in the download list. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The description of the backup file.
        shared_ptr<string> description_ {};
        // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> endTime_ {};
        // The name of the backup file stored in the Object Storage Service (OSS) bucket.
        shared_ptr<string> fileName_ {};
        // The size of the backup file. Unit: MB
        shared_ptr<string> fileSize_ {};
        // Indicates whether the backup file is available. Valid values: **True and False**.
        shared_ptr<string> isAvailable_ {};
        // The state of the backup file. Valid values:
        // 
        // *   **NoStart**
        // *   **Downloading**
        // *   **Finished**
        // *   **DownloadFailed**
        // *   **VerifyFailed**
        // *   **Deleted**
        // *   **DeleteFailed**
        // *   **CheckSuccess**
        // *   **CheckFailed**
        // *   **Restoring**
        // *   **Restored**
        // *   **RestoreFailed**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->ossDownload_ == nullptr; };
      // ossDownload Field Functions 
      bool hasOssDownload() const { return this->ossDownload_ != nullptr;};
      void deleteOssDownload() { this->ossDownload_ = nullptr;};
      inline const vector<Items::OssDownload> & getOssDownload() const { DARABONBA_PTR_GET_CONST(ossDownload_, vector<Items::OssDownload>) };
      inline vector<Items::OssDownload> getOssDownload() { DARABONBA_PTR_GET(ossDownload_, vector<Items::OssDownload>) };
      inline Items& setOssDownload(const vector<Items::OssDownload> & ossDownload) { DARABONBA_PTR_SET_VALUE(ossDownload_, ossDownload) };
      inline Items& setOssDownload(vector<Items::OssDownload> && ossDownload) { DARABONBA_PTR_SET_RVALUE(ossDownload_, ossDownload) };


    protected:
      shared_ptr<vector<Items::OssDownload>> ossDownload_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->items_ == nullptr && this->migrateTaskId_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeOssDownloadsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeOssDownloadsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeOssDownloadsResponseBody::Items) };
    inline DescribeOssDownloadsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeOssDownloadsResponseBody::Items) };
    inline DescribeOssDownloadsResponseBody& setItems(const DescribeOssDownloadsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeOssDownloadsResponseBody& setItems(DescribeOssDownloadsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // migrateTaskId Field Functions 
    bool hasMigrateTaskId() const { return this->migrateTaskId_ != nullptr;};
    void deleteMigrateTaskId() { this->migrateTaskId_ = nullptr;};
    inline string getMigrateTaskId() const { DARABONBA_PTR_GET_DEFAULT(migrateTaskId_, "") };
    inline DescribeOssDownloadsResponseBody& setMigrateTaskId(string migrateTaskId) { DARABONBA_PTR_SET_VALUE(migrateTaskId_, migrateTaskId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOssDownloadsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // Details of the backup file.
    shared_ptr<DescribeOssDownloadsResponseBody::Items> items_ {};
    // The ID of the migration task.
    shared_ptr<string> migrateTaskId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
