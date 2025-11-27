// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGFILESRESPONSEBODYITEMSLOGFILE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGFILESRESPONSEBODYITEMSLOGFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogFilesResponseBodyItemsLogFile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogFilesResponseBodyItemsLogFile& obj) { 
      DARABONBA_PTR_TO_JSON(FileID, fileID_);
      DARABONBA_PTR_TO_JSON(LogDownloadURL, logDownloadURL_);
      DARABONBA_PTR_TO_JSON(LogEndTime, logEndTime_);
      DARABONBA_PTR_TO_JSON(LogSize, logSize_);
      DARABONBA_PTR_TO_JSON(LogStartTime, logStartTime_);
      DARABONBA_PTR_TO_JSON(LogStatus, logStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogFilesResponseBodyItemsLogFile& obj) { 
      DARABONBA_PTR_FROM_JSON(FileID, fileID_);
      DARABONBA_PTR_FROM_JSON(LogDownloadURL, logDownloadURL_);
      DARABONBA_PTR_FROM_JSON(LogEndTime, logEndTime_);
      DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
      DARABONBA_PTR_FROM_JSON(LogStartTime, logStartTime_);
      DARABONBA_PTR_FROM_JSON(LogStatus, logStatus_);
    };
    DescribeSQLLogFilesResponseBodyItemsLogFile() = default ;
    DescribeSQLLogFilesResponseBodyItemsLogFile(const DescribeSQLLogFilesResponseBodyItemsLogFile &) = default ;
    DescribeSQLLogFilesResponseBodyItemsLogFile(DescribeSQLLogFilesResponseBodyItemsLogFile &&) = default ;
    DescribeSQLLogFilesResponseBodyItemsLogFile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogFilesResponseBodyItemsLogFile() = default ;
    DescribeSQLLogFilesResponseBodyItemsLogFile& operator=(const DescribeSQLLogFilesResponseBodyItemsLogFile &) = default ;
    DescribeSQLLogFilesResponseBodyItemsLogFile& operator=(DescribeSQLLogFilesResponseBodyItemsLogFile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileID_ == nullptr
        && return this->logDownloadURL_ == nullptr && return this->logEndTime_ == nullptr && return this->logSize_ == nullptr && return this->logStartTime_ == nullptr && return this->logStatus_ == nullptr; };
    // fileID Field Functions 
    bool hasFileID() const { return this->fileID_ != nullptr;};
    void deleteFileID() { this->fileID_ = nullptr;};
    inline string fileID() const { DARABONBA_PTR_GET_DEFAULT(fileID_, "") };
    inline DescribeSQLLogFilesResponseBodyItemsLogFile& setFileID(string fileID) { DARABONBA_PTR_SET_VALUE(fileID_, fileID) };


    // logDownloadURL Field Functions 
    bool hasLogDownloadURL() const { return this->logDownloadURL_ != nullptr;};
    void deleteLogDownloadURL() { this->logDownloadURL_ = nullptr;};
    inline string logDownloadURL() const { DARABONBA_PTR_GET_DEFAULT(logDownloadURL_, "") };
    inline DescribeSQLLogFilesResponseBodyItemsLogFile& setLogDownloadURL(string logDownloadURL) { DARABONBA_PTR_SET_VALUE(logDownloadURL_, logDownloadURL) };


    // logEndTime Field Functions 
    bool hasLogEndTime() const { return this->logEndTime_ != nullptr;};
    void deleteLogEndTime() { this->logEndTime_ = nullptr;};
    inline string logEndTime() const { DARABONBA_PTR_GET_DEFAULT(logEndTime_, "") };
    inline DescribeSQLLogFilesResponseBodyItemsLogFile& setLogEndTime(string logEndTime) { DARABONBA_PTR_SET_VALUE(logEndTime_, logEndTime) };


    // logSize Field Functions 
    bool hasLogSize() const { return this->logSize_ != nullptr;};
    void deleteLogSize() { this->logSize_ = nullptr;};
    inline string logSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, "") };
    inline DescribeSQLLogFilesResponseBodyItemsLogFile& setLogSize(string logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


    // logStartTime Field Functions 
    bool hasLogStartTime() const { return this->logStartTime_ != nullptr;};
    void deleteLogStartTime() { this->logStartTime_ = nullptr;};
    inline string logStartTime() const { DARABONBA_PTR_GET_DEFAULT(logStartTime_, "") };
    inline DescribeSQLLogFilesResponseBodyItemsLogFile& setLogStartTime(string logStartTime) { DARABONBA_PTR_SET_VALUE(logStartTime_, logStartTime) };


    // logStatus Field Functions 
    bool hasLogStatus() const { return this->logStatus_ != nullptr;};
    void deleteLogStatus() { this->logStatus_ = nullptr;};
    inline string logStatus() const { DARABONBA_PTR_GET_DEFAULT(logStatus_, "") };
    inline DescribeSQLLogFilesResponseBodyItemsLogFile& setLogStatus(string logStatus) { DARABONBA_PTR_SET_VALUE(logStatus_, logStatus) };


  protected:
    // The file name.
    std::shared_ptr<string> fileID_ = nullptr;
    // The download URL of the file. If the audit log file cannot be downloaded, this parameter is null.
    std::shared_ptr<string> logDownloadURL_ = nullptr;
    // The time at which the last SQL statement recorded in the audit log file was executed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logEndTime_ = nullptr;
    // The size of the audit log file. Unit: bytes.
    std::shared_ptr<string> logSize_ = nullptr;
    // The time at which the first SQL statement recorded in the audit log file was executed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> logStartTime_ = nullptr;
    // The status of the audit log file. Valid values:
    // 
    // *   **Success**
    // *   **Failed**
    // *   **Generating**
    std::shared_ptr<string> logStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
