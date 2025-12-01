// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESPONSEBODYITEMSBACKUPSETDOWNLOADTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPSETDOWNLOADTASKLISTRESPONSEBODYITEMSBACKUPSETDOWNLOADTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupSetCode, backupSetCode_);
      DARABONBA_PTR_TO_JSON(BackupSetDataFormat, backupSetDataFormat_);
      DARABONBA_PTR_TO_JSON(BackupSetDataSize, backupSetDataSize_);
      DARABONBA_PTR_TO_JSON(BackupSetDbType, backupSetDbType_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadCreateTime, backupSetDownloadCreateTime_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadFinishTime, backupSetDownloadFinishTime_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadInternetUrl, backupSetDownloadInternetUrl_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadIntranetUrl, backupSetDownloadIntranetUrl_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadStatus, backupSetDownloadStatus_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTaskName, backupSetDownloadTaskName_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadWay, backupSetDownloadWay_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(BackupSetJobType, backupSetJobType_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupSetCode, backupSetCode_);
      DARABONBA_PTR_FROM_JSON(BackupSetDataFormat, backupSetDataFormat_);
      DARABONBA_PTR_FROM_JSON(BackupSetDataSize, backupSetDataSize_);
      DARABONBA_PTR_FROM_JSON(BackupSetDbType, backupSetDbType_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadCreateTime, backupSetDownloadCreateTime_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadFinishTime, backupSetDownloadFinishTime_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadInternetUrl, backupSetDownloadInternetUrl_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadIntranetUrl, backupSetDownloadIntranetUrl_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadStatus, backupSetDownloadStatus_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskId, backupSetDownloadTaskId_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTaskName, backupSetDownloadTaskName_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadWay, backupSetDownloadWay_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(BackupSetJobType, backupSetJobType_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
    };
    DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail() = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail(const DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail &) = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail(DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail &&) = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail() = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& operator=(const DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail &) = default ;
    DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& operator=(DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && return this->backupPlanId_ == nullptr && return this->backupSetCode_ == nullptr && return this->backupSetDataFormat_ == nullptr && return this->backupSetDataSize_ == nullptr && return this->backupSetDbType_ == nullptr
        && return this->backupSetDownloadCreateTime_ == nullptr && return this->backupSetDownloadDir_ == nullptr && return this->backupSetDownloadFinishTime_ == nullptr && return this->backupSetDownloadInternetUrl_ == nullptr && return this->backupSetDownloadIntranetUrl_ == nullptr
        && return this->backupSetDownloadStatus_ == nullptr && return this->backupSetDownloadTargetType_ == nullptr && return this->backupSetDownloadTaskId_ == nullptr && return this->backupSetDownloadTaskName_ == nullptr && return this->backupSetDownloadWay_ == nullptr
        && return this->backupSetId_ == nullptr && return this->backupSetJobType_ == nullptr && return this->errMessage_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupSetCode Field Functions 
    bool hasBackupSetCode() const { return this->backupSetCode_ != nullptr;};
    void deleteBackupSetCode() { this->backupSetCode_ = nullptr;};
    inline string backupSetCode() const { DARABONBA_PTR_GET_DEFAULT(backupSetCode_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetCode(string backupSetCode) { DARABONBA_PTR_SET_VALUE(backupSetCode_, backupSetCode) };


    // backupSetDataFormat Field Functions 
    bool hasBackupSetDataFormat() const { return this->backupSetDataFormat_ != nullptr;};
    void deleteBackupSetDataFormat() { this->backupSetDataFormat_ = nullptr;};
    inline string backupSetDataFormat() const { DARABONBA_PTR_GET_DEFAULT(backupSetDataFormat_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDataFormat(string backupSetDataFormat) { DARABONBA_PTR_SET_VALUE(backupSetDataFormat_, backupSetDataFormat) };


    // backupSetDataSize Field Functions 
    bool hasBackupSetDataSize() const { return this->backupSetDataSize_ != nullptr;};
    void deleteBackupSetDataSize() { this->backupSetDataSize_ = nullptr;};
    inline int64_t backupSetDataSize() const { DARABONBA_PTR_GET_DEFAULT(backupSetDataSize_, 0L) };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDataSize(int64_t backupSetDataSize) { DARABONBA_PTR_SET_VALUE(backupSetDataSize_, backupSetDataSize) };


    // backupSetDbType Field Functions 
    bool hasBackupSetDbType() const { return this->backupSetDbType_ != nullptr;};
    void deleteBackupSetDbType() { this->backupSetDbType_ = nullptr;};
    inline string backupSetDbType() const { DARABONBA_PTR_GET_DEFAULT(backupSetDbType_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDbType(string backupSetDbType) { DARABONBA_PTR_SET_VALUE(backupSetDbType_, backupSetDbType) };


    // backupSetDownloadCreateTime Field Functions 
    bool hasBackupSetDownloadCreateTime() const { return this->backupSetDownloadCreateTime_ != nullptr;};
    void deleteBackupSetDownloadCreateTime() { this->backupSetDownloadCreateTime_ = nullptr;};
    inline int64_t backupSetDownloadCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadCreateTime_, 0L) };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadCreateTime(int64_t backupSetDownloadCreateTime) { DARABONBA_PTR_SET_VALUE(backupSetDownloadCreateTime_, backupSetDownloadCreateTime) };


    // backupSetDownloadDir Field Functions 
    bool hasBackupSetDownloadDir() const { return this->backupSetDownloadDir_ != nullptr;};
    void deleteBackupSetDownloadDir() { this->backupSetDownloadDir_ = nullptr;};
    inline string backupSetDownloadDir() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadDir_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadDir(string backupSetDownloadDir) { DARABONBA_PTR_SET_VALUE(backupSetDownloadDir_, backupSetDownloadDir) };


    // backupSetDownloadFinishTime Field Functions 
    bool hasBackupSetDownloadFinishTime() const { return this->backupSetDownloadFinishTime_ != nullptr;};
    void deleteBackupSetDownloadFinishTime() { this->backupSetDownloadFinishTime_ = nullptr;};
    inline int64_t backupSetDownloadFinishTime() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadFinishTime_, 0L) };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadFinishTime(int64_t backupSetDownloadFinishTime) { DARABONBA_PTR_SET_VALUE(backupSetDownloadFinishTime_, backupSetDownloadFinishTime) };


    // backupSetDownloadInternetUrl Field Functions 
    bool hasBackupSetDownloadInternetUrl() const { return this->backupSetDownloadInternetUrl_ != nullptr;};
    void deleteBackupSetDownloadInternetUrl() { this->backupSetDownloadInternetUrl_ = nullptr;};
    inline string backupSetDownloadInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadInternetUrl_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadInternetUrl(string backupSetDownloadInternetUrl) { DARABONBA_PTR_SET_VALUE(backupSetDownloadInternetUrl_, backupSetDownloadInternetUrl) };


    // backupSetDownloadIntranetUrl Field Functions 
    bool hasBackupSetDownloadIntranetUrl() const { return this->backupSetDownloadIntranetUrl_ != nullptr;};
    void deleteBackupSetDownloadIntranetUrl() { this->backupSetDownloadIntranetUrl_ = nullptr;};
    inline string backupSetDownloadIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadIntranetUrl_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadIntranetUrl(string backupSetDownloadIntranetUrl) { DARABONBA_PTR_SET_VALUE(backupSetDownloadIntranetUrl_, backupSetDownloadIntranetUrl) };


    // backupSetDownloadStatus Field Functions 
    bool hasBackupSetDownloadStatus() const { return this->backupSetDownloadStatus_ != nullptr;};
    void deleteBackupSetDownloadStatus() { this->backupSetDownloadStatus_ = nullptr;};
    inline string backupSetDownloadStatus() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadStatus_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadStatus(string backupSetDownloadStatus) { DARABONBA_PTR_SET_VALUE(backupSetDownloadStatus_, backupSetDownloadStatus) };


    // backupSetDownloadTargetType Field Functions 
    bool hasBackupSetDownloadTargetType() const { return this->backupSetDownloadTargetType_ != nullptr;};
    void deleteBackupSetDownloadTargetType() { this->backupSetDownloadTargetType_ = nullptr;};
    inline string backupSetDownloadTargetType() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTargetType_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadTargetType(string backupSetDownloadTargetType) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTargetType_, backupSetDownloadTargetType) };


    // backupSetDownloadTaskId Field Functions 
    bool hasBackupSetDownloadTaskId() const { return this->backupSetDownloadTaskId_ != nullptr;};
    void deleteBackupSetDownloadTaskId() { this->backupSetDownloadTaskId_ = nullptr;};
    inline string backupSetDownloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTaskId_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadTaskId(string backupSetDownloadTaskId) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskId_, backupSetDownloadTaskId) };


    // backupSetDownloadTaskName Field Functions 
    bool hasBackupSetDownloadTaskName() const { return this->backupSetDownloadTaskName_ != nullptr;};
    void deleteBackupSetDownloadTaskName() { this->backupSetDownloadTaskName_ = nullptr;};
    inline string backupSetDownloadTaskName() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTaskName_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadTaskName(string backupSetDownloadTaskName) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTaskName_, backupSetDownloadTaskName) };


    // backupSetDownloadWay Field Functions 
    bool hasBackupSetDownloadWay() const { return this->backupSetDownloadWay_ != nullptr;};
    void deleteBackupSetDownloadWay() { this->backupSetDownloadWay_ = nullptr;};
    inline string backupSetDownloadWay() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadWay_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetDownloadWay(string backupSetDownloadWay) { DARABONBA_PTR_SET_VALUE(backupSetDownloadWay_, backupSetDownloadWay) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // backupSetJobType Field Functions 
    bool hasBackupSetJobType() const { return this->backupSetJobType_ != nullptr;};
    void deleteBackupSetJobType() { this->backupSetJobType_ = nullptr;};
    inline string backupSetJobType() const { DARABONBA_PTR_GET_DEFAULT(backupSetJobType_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setBackupSetJobType(string backupSetJobType) { DARABONBA_PTR_SET_VALUE(backupSetJobType_, backupSetJobType) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupSetDownloadTaskListResponseBodyItemsBackupSetDownloadTaskDetail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


  protected:
    // The backup gateway that is used to download the backup set. This parameter is available only if the value of the BackupSetDownloadWay parameter is auto.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // The ID of the backup schedule.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The code of the backup set.
    std::shared_ptr<string> backupSetCode_ = nullptr;
    // The format in which the backup set is downloaded. Valid values:
    // 
    // *   **Native**
    // *   **SQL**
    // *   **CSV**
    // *   **JSON**
    std::shared_ptr<string> backupSetDataFormat_ = nullptr;
    // The size of the data in the backup set.
    std::shared_ptr<int64_t> backupSetDataSize_ = nullptr;
    // The type of the database.
    std::shared_ptr<string> backupSetDbType_ = nullptr;
    // The timestamp that indicates when the backup set download task was created.
    std::shared_ptr<int64_t> backupSetDownloadCreateTime_ = nullptr;
    // The server directory to which the backup set is downloaded.
    // 
    // > This parameter is available only if the value of the BackupSetDownloadWay parameter is auto.
    std::shared_ptr<string> backupSetDownloadDir_ = nullptr;
    // The timestamp that indicates when the backup set download task is complete.
    std::shared_ptr<int64_t> backupSetDownloadFinishTime_ = nullptr;
    // The public download URL of the backup set.
    // 
    // > This parameter is available only if the value of the BackupSetDownloadWay parameter is manual and the conversion is complete.
    std::shared_ptr<string> backupSetDownloadInternetUrl_ = nullptr;
    // The internal download URL of the backup set.
    // 
    // > This parameter is available only if the value of the BackupSetDownloadWay parameter is manual and the conversion is complete.
    std::shared_ptr<string> backupSetDownloadIntranetUrl_ = nullptr;
    // The status of the backup set download task. Valid values:
    // 
    // *   **checking**: The backup set download task is being prechecked.
    // *   **init**: The backup set download task is not started and fails to pass the precheck.
    // *   **check_pass**: The backup set download task passes the precheck.
    // *   **pause**: The backup set download task is paused.
    // *   **schedule**: The backup set download task is waiting to be scheduled
    // *   **running**: The backup set download task is running.
    // *   **stop**: The backup set download task fails.
    // *   **finish**: The backup set download task is complete.
    std::shared_ptr<string> backupSetDownloadStatus_ = nullptr;
    // The type of the destination server to which the backup set is downloaded.
    // 
    // > This parameter is available only if the value of the BackupSetDownloadWay parameter is auto. A value of agent indicates a server on which a backup gateway is installed.
    std::shared_ptr<string> backupSetDownloadTargetType_ = nullptr;
    // The ID of the backup set download task.
    std::shared_ptr<string> backupSetDownloadTaskId_ = nullptr;
    // The name of the backup set download task.
    std::shared_ptr<string> backupSetDownloadTaskName_ = nullptr;
    // The method in which the backup set is downloaded. Valid values:
    // 
    // *   **manual**: The backup set is manually downloaded.
    // *   **auto**: The backup set is automatically downloaded.
    std::shared_ptr<string> backupSetDownloadWay_ = nullptr;
    // The ID of the backup set.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The type of the backup set task. Valid values:
    // 
    // *   **cbs_backup_sub_full**: logical full backup set download task
    // *   **cbs_backup_sub_cont**: logical incremental backup set download task
    std::shared_ptr<string> backupSetJobType_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
