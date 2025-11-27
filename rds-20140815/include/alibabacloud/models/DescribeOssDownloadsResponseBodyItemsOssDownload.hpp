// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODYITEMSOSSDOWNLOAD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSDOWNLOADSRESPONSEBODYITEMSOSSDOWNLOAD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeOssDownloadsResponseBodyItemsOssDownload : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssDownloadsResponseBodyItemsOssDownload& obj) { 
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssDownloadsResponseBodyItemsOssDownload& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeOssDownloadsResponseBodyItemsOssDownload() = default ;
    DescribeOssDownloadsResponseBodyItemsOssDownload(const DescribeOssDownloadsResponseBodyItemsOssDownload &) = default ;
    DescribeOssDownloadsResponseBodyItemsOssDownload(DescribeOssDownloadsResponseBodyItemsOssDownload &&) = default ;
    DescribeOssDownloadsResponseBodyItemsOssDownload(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssDownloadsResponseBodyItemsOssDownload() = default ;
    DescribeOssDownloadsResponseBodyItemsOssDownload& operator=(const DescribeOssDownloadsResponseBodyItemsOssDownload &) = default ;
    DescribeOssDownloadsResponseBodyItemsOssDownload& operator=(DescribeOssDownloadsResponseBodyItemsOssDownload &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupMode_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->endTime_ == nullptr && return this->fileName_ == nullptr && return this->fileSize_ == nullptr
        && return this->isAvailable_ == nullptr && return this->status_ == nullptr; };
    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // isAvailable Field Functions 
    bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
    void deleteIsAvailable() { this->isAvailable_ = nullptr;};
    inline string isAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setIsAvailable(string isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeOssDownloadsResponseBodyItemsOssDownload& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The backup type. Valid values:
    // 
    // *   **Database**: full backup file
    // *   **Differential_Database**: incremental backup file
    // *   **Transaction_Log**: log backup file
    std::shared_ptr<string> backupMode_ = nullptr;
    // The time when the backup file was created in the download list. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the backup file.
    std::shared_ptr<string> description_ = nullptr;
    // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the backup file stored in the Object Storage Service (OSS) bucket.
    std::shared_ptr<string> fileName_ = nullptr;
    // The size of the backup file. Unit: MB
    std::shared_ptr<string> fileSize_ = nullptr;
    // Indicates whether the backup file is available. Valid values: **True and False**.
    std::shared_ptr<string> isAvailable_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
