// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILCONFIGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAILCONFIGDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig.hpp>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(CronCallTimes, cronCallTimes_);
      DARABONBA_PTR_TO_JSON(CronExtConfig, cronExtConfig_);
      DARABONBA_PTR_TO_JSON(CronFormat, cronFormat_);
      DARABONBA_PTR_TO_JSON(CronLastCallStartTime, cronLastCallStartTime_);
      DARABONBA_PTR_TO_JSON(CronNextCallTime, cronNextCallTime_);
      DARABONBA_PTR_TO_JSON(CronStatus, cronStatus_);
      DARABONBA_PTR_TO_JSON(CsvTableName, csvTableName_);
      DARABONBA_PTR_TO_JSON(CurrentTaskId, currentTaskId_);
      DARABONBA_PTR_TO_JSON(DetailType, detailType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileEncoding, fileEncoding_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(ImportExtConfig, importExtConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(CronCallTimes, cronCallTimes_);
      DARABONBA_PTR_FROM_JSON(CronExtConfig, cronExtConfig_);
      DARABONBA_PTR_FROM_JSON(CronFormat, cronFormat_);
      DARABONBA_PTR_FROM_JSON(CronLastCallStartTime, cronLastCallStartTime_);
      DARABONBA_PTR_FROM_JSON(CronNextCallTime, cronNextCallTime_);
      DARABONBA_PTR_FROM_JSON(CronStatus, cronStatus_);
      DARABONBA_PTR_FROM_JSON(CsvTableName, csvTableName_);
      DARABONBA_PTR_FROM_JSON(CurrentTaskId, currentTaskId_);
      DARABONBA_PTR_FROM_JSON(DetailType, detailType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileEncoding, fileEncoding_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(ImportExtConfig, importExtConfig_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cron_ == nullptr
        && return this->cronCallTimes_ == nullptr && return this->cronExtConfig_ == nullptr && return this->cronFormat_ == nullptr && return this->cronLastCallStartTime_ == nullptr && return this->cronNextCallTime_ == nullptr
        && return this->cronStatus_ == nullptr && return this->csvTableName_ == nullptr && return this->currentTaskId_ == nullptr && return this->detailType_ == nullptr && return this->duration_ == nullptr
        && return this->fileEncoding_ == nullptr && return this->fileType_ == nullptr && return this->importExtConfig_ == nullptr; };
    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline bool cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, false) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCron(bool cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // cronCallTimes Field Functions 
    bool hasCronCallTimes() const { return this->cronCallTimes_ != nullptr;};
    void deleteCronCallTimes() { this->cronCallTimes_ = nullptr;};
    inline int32_t cronCallTimes() const { DARABONBA_PTR_GET_DEFAULT(cronCallTimes_, 0) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCronCallTimes(int32_t cronCallTimes) { DARABONBA_PTR_SET_VALUE(cronCallTimes_, cronCallTimes) };


    // cronExtConfig Field Functions 
    bool hasCronExtConfig() const { return this->cronExtConfig_ != nullptr;};
    void deleteCronExtConfig() { this->cronExtConfig_ = nullptr;};
    inline const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig & cronExtConfig() const { DARABONBA_PTR_GET_CONST(cronExtConfig_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig) };
    inline Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig cronExtConfig() { DARABONBA_PTR_GET(cronExtConfig_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCronExtConfig(const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig & cronExtConfig) { DARABONBA_PTR_SET_VALUE(cronExtConfig_, cronExtConfig) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCronExtConfig(Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig && cronExtConfig) { DARABONBA_PTR_SET_RVALUE(cronExtConfig_, cronExtConfig) };


    // cronFormat Field Functions 
    bool hasCronFormat() const { return this->cronFormat_ != nullptr;};
    void deleteCronFormat() { this->cronFormat_ = nullptr;};
    inline string cronFormat() const { DARABONBA_PTR_GET_DEFAULT(cronFormat_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCronFormat(string cronFormat) { DARABONBA_PTR_SET_VALUE(cronFormat_, cronFormat) };


    // cronLastCallStartTime Field Functions 
    bool hasCronLastCallStartTime() const { return this->cronLastCallStartTime_ != nullptr;};
    void deleteCronLastCallStartTime() { this->cronLastCallStartTime_ = nullptr;};
    inline string cronLastCallStartTime() const { DARABONBA_PTR_GET_DEFAULT(cronLastCallStartTime_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCronLastCallStartTime(string cronLastCallStartTime) { DARABONBA_PTR_SET_VALUE(cronLastCallStartTime_, cronLastCallStartTime) };


    // cronNextCallTime Field Functions 
    bool hasCronNextCallTime() const { return this->cronNextCallTime_ != nullptr;};
    void deleteCronNextCallTime() { this->cronNextCallTime_ = nullptr;};
    inline string cronNextCallTime() const { DARABONBA_PTR_GET_DEFAULT(cronNextCallTime_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCronNextCallTime(string cronNextCallTime) { DARABONBA_PTR_SET_VALUE(cronNextCallTime_, cronNextCallTime) };


    // cronStatus Field Functions 
    bool hasCronStatus() const { return this->cronStatus_ != nullptr;};
    void deleteCronStatus() { this->cronStatus_ = nullptr;};
    inline string cronStatus() const { DARABONBA_PTR_GET_DEFAULT(cronStatus_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCronStatus(string cronStatus) { DARABONBA_PTR_SET_VALUE(cronStatus_, cronStatus) };


    // csvTableName Field Functions 
    bool hasCsvTableName() const { return this->csvTableName_ != nullptr;};
    void deleteCsvTableName() { this->csvTableName_ = nullptr;};
    inline string csvTableName() const { DARABONBA_PTR_GET_DEFAULT(csvTableName_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCsvTableName(string csvTableName) { DARABONBA_PTR_SET_VALUE(csvTableName_, csvTableName) };


    // currentTaskId Field Functions 
    bool hasCurrentTaskId() const { return this->currentTaskId_ != nullptr;};
    void deleteCurrentTaskId() { this->currentTaskId_ = nullptr;};
    inline int64_t currentTaskId() const { DARABONBA_PTR_GET_DEFAULT(currentTaskId_, 0L) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setCurrentTaskId(int64_t currentTaskId) { DARABONBA_PTR_SET_VALUE(currentTaskId_, currentTaskId) };


    // detailType Field Functions 
    bool hasDetailType() const { return this->detailType_ != nullptr;};
    void deleteDetailType() { this->detailType_ = nullptr;};
    inline string detailType() const { DARABONBA_PTR_GET_DEFAULT(detailType_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setDetailType(string detailType) { DARABONBA_PTR_SET_VALUE(detailType_, detailType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileEncoding Field Functions 
    bool hasFileEncoding() const { return this->fileEncoding_ != nullptr;};
    void deleteFileEncoding() { this->fileEncoding_ = nullptr;};
    inline string fileEncoding() const { DARABONBA_PTR_GET_DEFAULT(fileEncoding_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setFileEncoding(string fileEncoding) { DARABONBA_PTR_SET_VALUE(fileEncoding_, fileEncoding) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // importExtConfig Field Functions 
    bool hasImportExtConfig() const { return this->importExtConfig_ != nullptr;};
    void deleteImportExtConfig() { this->importExtConfig_ = nullptr;};
    inline const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig & importExtConfig() const { DARABONBA_PTR_GET_CONST(importExtConfig_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig) };
    inline Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig importExtConfig() { DARABONBA_PTR_GET(importExtConfig_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setImportExtConfig(const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig & importExtConfig) { DARABONBA_PTR_SET_VALUE(importExtConfig_, importExtConfig) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail& setImportExtConfig(Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig && importExtConfig) { DARABONBA_PTR_SET_RVALUE(importExtConfig_, importExtConfig) };


  protected:
    // Indicates whether the task is a scheduled task for historical data cleanup. This parameter is a reserved parameter and is valid only if the value of DetailType is CRON_CLEAR_DATA.
    std::shared_ptr<bool> cron_ = nullptr;
    // The number of times the scheduled task is run. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA.
    std::shared_ptr<int32_t> cronCallTimes_ = nullptr;
    // The additional configuration information about historical data cleanup. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA.
    std::shared_ptr<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailCronExtConfig> cronExtConfig_ = nullptr;
    // The CRON expression of the scheduled task. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA.
    std::shared_ptr<string> cronFormat_ = nullptr;
    // The time when the task was last run.
    std::shared_ptr<string> cronLastCallStartTime_ = nullptr;
    // The time when the task is run next time. This parameter is returned only if the value of CronStatus is SUCCESS.
    std::shared_ptr<string> cronNextCallTime_ = nullptr;
    // The state of the scheduled task. If this parameter is empty, the task is not run. Valid values:
    // 
    // *   PAUSE: The task is suspended.
    // *   WAITING: The task is waiting to be run.
    // *   SUCCESS: The task is run.
    std::shared_ptr<string> cronStatus_ = nullptr;
    // The name of the table to which data is to be imported. This parameter is valid only if the value of DetailType is BIG_FILE. If the value of FileType is SQL, this parameter is empty.
    std::shared_ptr<string> csvTableName_ = nullptr;
    // The ID of the current data change task. This is a reserved parameter and can be ignored.
    std::shared_ptr<int64_t> currentTaskId_ = nullptr;
    // The type of the ticket. Valid values:
    // 
    // *   COMMON: regular data change.
    // *   CHUNK_DML: lock-free data change.
    // *   BIG_FILE: large data import.
    // *   CRON_CLEAR_DATA: historical data cleanup.
    // *   PROCEDURE: programmable object change.
    std::shared_ptr<string> detailType_ = nullptr;
    // The execution duration of the scheduled task. Unit: hour. This parameter is valid only if the value of DetailType is CRON_CLEAR_DATA. If the value is greater than 0, an execution duration is set.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The encoding method of the file. This parameter may be empty, which indicates the value of AUTO. Valid values:
    // 
    // *   **AUTO**: automatic identification.
    // *   **UTF-8**: UTF-8 encoding.
    // *   **GBK**: GBK encoding.
    // *   **ISO-8859-1**: ISO-8859-1 encoding.
    std::shared_ptr<string> fileEncoding_ = nullptr;
    // The type of the file to be imported. This parameter is valid if the value of DetailType is BIG_FILE. Valid values:
    // 
    // *   **SQL**: an SQL file.
    // *   **CSV**: a CSV file.
    // *   **EXCEL**: an Excel file.
    // *   **JSON**: a JSON file, which is supported only by MongoDB databases.
    std::shared_ptr<string> fileType_ = nullptr;
    // The additional configuration information about data import. This parameter is valid if the value of DetailType is BIG_FILE.
    std::shared_ptr<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetailImportExtConfig> importExtConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
