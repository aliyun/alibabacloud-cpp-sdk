// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRUSSCANTASKRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVirusScanTaskResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirusScanTaskResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_TO_JSON(ScanType, scanType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirusScanTaskResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ScanPath, scanPath_);
      DARABONBA_PTR_FROM_JSON(ScanType, scanType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListVirusScanTaskResponseBodyList() = default ;
    ListVirusScanTaskResponseBodyList(const ListVirusScanTaskResponseBodyList &) = default ;
    ListVirusScanTaskResponseBodyList(ListVirusScanTaskResponseBodyList &&) = default ;
    ListVirusScanTaskResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirusScanTaskResponseBodyList() = default ;
    ListVirusScanTaskResponseBodyList& operator=(const ListVirusScanTaskResponseBodyList &) = default ;
    ListVirusScanTaskResponseBodyList& operator=(ListVirusScanTaskResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->progress_ == nullptr && return this->scanPath_ == nullptr
        && return this->scanType_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr
        && return this->uuid_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListVirusScanTaskResponseBodyList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListVirusScanTaskResponseBodyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListVirusScanTaskResponseBodyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListVirusScanTaskResponseBodyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ListVirusScanTaskResponseBodyList& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // scanPath Field Functions 
    bool hasScanPath() const { return this->scanPath_ != nullptr;};
    void deleteScanPath() { this->scanPath_ = nullptr;};
    inline const vector<string> & scanPath() const { DARABONBA_PTR_GET_CONST(scanPath_, vector<string>) };
    inline vector<string> scanPath() { DARABONBA_PTR_GET(scanPath_, vector<string>) };
    inline ListVirusScanTaskResponseBodyList& setScanPath(const vector<string> & scanPath) { DARABONBA_PTR_SET_VALUE(scanPath_, scanPath) };
    inline ListVirusScanTaskResponseBodyList& setScanPath(vector<string> && scanPath) { DARABONBA_PTR_SET_RVALUE(scanPath_, scanPath) };


    // scanType Field Functions 
    bool hasScanType() const { return this->scanType_ != nullptr;};
    void deleteScanType() { this->scanType_ = nullptr;};
    inline string scanType() const { DARABONBA_PTR_GET_DEFAULT(scanType_, "") };
    inline ListVirusScanTaskResponseBodyList& setScanType(string scanType) { DARABONBA_PTR_SET_VALUE(scanType_, scanType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListVirusScanTaskResponseBodyList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListVirusScanTaskResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListVirusScanTaskResponseBodyList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListVirusScanTaskResponseBodyList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListVirusScanTaskResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The timestamp when the virus scan task ended. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The progress of the task in percentage.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The information about the file that is scanned.
    std::shared_ptr<vector<string>> scanPath_ = nullptr;
    // The type of the virus scan task. Valid values:
    // 
    // *   **system**: automatic scan task
    // *   **user**: custom scan task
    std::shared_ptr<string> scanType_ = nullptr;
    // The timestamp when the virus scan task started. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the virus scan task. Valid values:
    // 
    // *   **1**: running
    // *   **2**: complete
    // *   **3**: failed
    // *   **4**: timed out
    std::shared_ptr<int32_t> status_ = nullptr;
    // The ID of the virus scan task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the virus scan task.
    // 
    // *   The value is fixed as **VIRUS_VUL_SCHEDULE_SCAN**, which indicates a virus scan task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
