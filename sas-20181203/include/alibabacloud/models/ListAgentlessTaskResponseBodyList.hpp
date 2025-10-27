// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSTASKRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSTASKRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessTaskResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessTaskResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(MeasureSpace, measureSpace_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ProgressByProject, progressByProject_);
      DARABONBA_PTR_TO_JSON(ReportDownloadUrl, reportDownloadUrl_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessTaskResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(MeasureSpace, measureSpace_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ProgressByProject, progressByProject_);
      DARABONBA_PTR_FROM_JSON(ReportDownloadUrl, reportDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAgentlessTaskResponseBodyList() = default ;
    ListAgentlessTaskResponseBodyList(const ListAgentlessTaskResponseBodyList &) = default ;
    ListAgentlessTaskResponseBodyList(ListAgentlessTaskResponseBodyList &&) = default ;
    ListAgentlessTaskResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessTaskResponseBodyList() = default ;
    ListAgentlessTaskResponseBodyList& operator=(const ListAgentlessTaskResponseBodyList &) = default ;
    ListAgentlessTaskResponseBodyList& operator=(ListAgentlessTaskResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->measureSpace_ == nullptr
        && return this->progress_ == nullptr && return this->progressByProject_ == nullptr && return this->reportDownloadUrl_ == nullptr && return this->reportStatus_ == nullptr && return this->result_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->targetName_ == nullptr && return this->targetType_ == nullptr && return this->taskId_ == nullptr
        && return this->taskName_ == nullptr && return this->uuid_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAgentlessTaskResponseBodyList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAgentlessTaskResponseBodyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListAgentlessTaskResponseBodyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListAgentlessTaskResponseBodyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListAgentlessTaskResponseBodyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // measureSpace Field Functions 
    bool hasMeasureSpace() const { return this->measureSpace_ != nullptr;};
    void deleteMeasureSpace() { this->measureSpace_ = nullptr;};
    inline int64_t measureSpace() const { DARABONBA_PTR_GET_DEFAULT(measureSpace_, 0L) };
    inline ListAgentlessTaskResponseBodyList& setMeasureSpace(int64_t measureSpace) { DARABONBA_PTR_SET_VALUE(measureSpace_, measureSpace) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline ListAgentlessTaskResponseBodyList& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressByProject Field Functions 
    bool hasProgressByProject() const { return this->progressByProject_ != nullptr;};
    void deleteProgressByProject() { this->progressByProject_ = nullptr;};
    inline string progressByProject() const { DARABONBA_PTR_GET_DEFAULT(progressByProject_, "") };
    inline ListAgentlessTaskResponseBodyList& setProgressByProject(string progressByProject) { DARABONBA_PTR_SET_VALUE(progressByProject_, progressByProject) };


    // reportDownloadUrl Field Functions 
    bool hasReportDownloadUrl() const { return this->reportDownloadUrl_ != nullptr;};
    void deleteReportDownloadUrl() { this->reportDownloadUrl_ = nullptr;};
    inline string reportDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(reportDownloadUrl_, "") };
    inline ListAgentlessTaskResponseBodyList& setReportDownloadUrl(string reportDownloadUrl) { DARABONBA_PTR_SET_VALUE(reportDownloadUrl_, reportDownloadUrl) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline string reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
    inline ListAgentlessTaskResponseBodyList& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ListAgentlessTaskResponseBodyList& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAgentlessTaskResponseBodyList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAgentlessTaskResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAgentlessTaskResponseBodyList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListAgentlessTaskResponseBodyList& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAgentlessTaskResponseBodyList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListAgentlessTaskResponseBodyList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAgentlessTaskResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The end timestamp of the task. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The amount of data detected. Unit: MB.
    std::shared_ptr<int64_t> measureSpace_ = nullptr;
    // The progress of the task.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The execution progress of the check items.
    std::shared_ptr<string> progressByProject_ = nullptr;
    // The download URL of the report.
    std::shared_ptr<string> reportDownloadUrl_ = nullptr;
    // The status of the report. Valid values:
    // 
    // *   **PREPARED**: preparing
    // *   **RUNNING**: running
    // *   **SUCCESS**: succeeded
    // *   **TIMEOUT**: timed out
    // *   **FAILED**: failed
    std::shared_ptr<string> reportStatus_ = nullptr;
    // The result of the detection.
    std::shared_ptr<string> result_ = nullptr;
    // The start timestamp of the task. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the detection task.
    // 
    // *   **1**: The detection task is in progress.
    // *   **2**: The detection task is complete.
    // *   **3**: The detection task fails.
    // *   **4**: The detection task times out.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the asset that is detected.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the asset that is detected. Valid values:
    // 
    // *   **1**: snapshot
    // *   **2**: image
    std::shared_ptr<int32_t> targetType_ = nullptr;
    // The ID of the task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the detection task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
