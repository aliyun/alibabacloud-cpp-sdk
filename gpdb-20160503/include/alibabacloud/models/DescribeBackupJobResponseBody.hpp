// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeBackupJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_TO_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_TO_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_TO_JSON(Process, process_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_FROM_JSON(BackupMode, backupMode_);
      DARABONBA_PTR_FROM_JSON(BackupStatus, backupStatus_);
      DARABONBA_PTR_FROM_JSON(Process, process_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeBackupJobResponseBody() = default ;
    DescribeBackupJobResponseBody(const DescribeBackupJobResponseBody &) = default ;
    DescribeBackupJobResponseBody(DescribeBackupJobResponseBody &&) = default ;
    DescribeBackupJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobResponseBody() = default ;
    DescribeBackupJobResponseBody& operator=(const DescribeBackupJobResponseBody &) = default ;
    DescribeBackupJobResponseBody& operator=(DescribeBackupJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && return this->backupJobId_ == nullptr && return this->backupMode_ == nullptr && return this->backupStatus_ == nullptr && return this->process_ == nullptr && return this->requestId_ == nullptr
        && return this->startTime_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline DescribeBackupJobResponseBody& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupJobId Field Functions 
    bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
    void deleteBackupJobId() { this->backupJobId_ = nullptr;};
    inline string backupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, "") };
    inline DescribeBackupJobResponseBody& setBackupJobId(string backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


    // backupMode Field Functions 
    bool hasBackupMode() const { return this->backupMode_ != nullptr;};
    void deleteBackupMode() { this->backupMode_ = nullptr;};
    inline string backupMode() const { DARABONBA_PTR_GET_DEFAULT(backupMode_, "") };
    inline DescribeBackupJobResponseBody& setBackupMode(string backupMode) { DARABONBA_PTR_SET_VALUE(backupMode_, backupMode) };


    // backupStatus Field Functions 
    bool hasBackupStatus() const { return this->backupStatus_ != nullptr;};
    void deleteBackupStatus() { this->backupStatus_ = nullptr;};
    inline string backupStatus() const { DARABONBA_PTR_GET_DEFAULT(backupStatus_, "") };
    inline DescribeBackupJobResponseBody& setBackupStatus(string backupStatus) { DARABONBA_PTR_SET_VALUE(backupStatus_, backupStatus) };


    // process Field Functions 
    bool hasProcess() const { return this->process_ != nullptr;};
    void deleteProcess() { this->process_ = nullptr;};
    inline string process() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
    inline DescribeBackupJobResponseBody& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBackupJobResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The backup set ID.
    // 
    // >  You can call the [DescribeDataBackups](https://help.aliyun.com/document_detail/210093.html) operation to query the IDs of all backup sets in the instance.
    std::shared_ptr<string> backupId_ = nullptr;
    // The backup job ID.
    std::shared_ptr<string> backupJobId_ = nullptr;
    // The backup mode. Valid values:
    // 
    // *   **Automated**
    // *   **Manual**
    std::shared_ptr<string> backupMode_ = nullptr;
    // The backup status. Valid values:
    // 
    // *   **schedule**
    // *   **check**
    // *   **backup**
    // *   **finish**
    std::shared_ptr<string> backupStatus_ = nullptr;
    // The progress of the backup job.
    std::shared_ptr<string> process_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the backup job started. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
