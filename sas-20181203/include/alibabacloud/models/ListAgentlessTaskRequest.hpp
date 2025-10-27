// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MachineName, machineName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RootTask, rootTask_);
      DARABONBA_PTR_TO_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MachineName, machineName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RootTask, rootTask_);
      DARABONBA_PTR_FROM_JSON(RootTaskId, rootTaskId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAgentlessTaskRequest() = default ;
    ListAgentlessTaskRequest(const ListAgentlessTaskRequest &) = default ;
    ListAgentlessTaskRequest(ListAgentlessTaskRequest &&) = default ;
    ListAgentlessTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessTaskRequest() = default ;
    ListAgentlessTaskRequest& operator=(const ListAgentlessTaskRequest &) = default ;
    ListAgentlessTaskRequest& operator=(ListAgentlessTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->endTime_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->lang_ == nullptr && return this->machineName_ == nullptr
        && return this->pageSize_ == nullptr && return this->rootTask_ == nullptr && return this->rootTaskId_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->targetName_ == nullptr && return this->targetType_ == nullptr && return this->taskId_ == nullptr && return this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAgentlessTaskRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAgentlessTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListAgentlessTaskRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListAgentlessTaskRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAgentlessTaskRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string machineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline ListAgentlessTaskRequest& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentlessTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rootTask Field Functions 
    bool hasRootTask() const { return this->rootTask_ != nullptr;};
    void deleteRootTask() { this->rootTask_ = nullptr;};
    inline bool rootTask() const { DARABONBA_PTR_GET_DEFAULT(rootTask_, false) };
    inline ListAgentlessTaskRequest& setRootTask(bool rootTask) { DARABONBA_PTR_SET_VALUE(rootTask_, rootTask) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string rootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline ListAgentlessTaskRequest& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAgentlessTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAgentlessTaskRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAgentlessTaskRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListAgentlessTaskRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAgentlessTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAgentlessTaskRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end timestamp of the task.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The public IP address of the asset that you want to query.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the asset that you want to query.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The language type. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> machineName_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether to query main tasks. Valid values:
    // 
    // *   **true**: queries main tasks.
    // *   **false**: queries subtasks.
    std::shared_ptr<bool> rootTask_ = nullptr;
    // The ID of the main task.
    std::shared_ptr<string> rootTaskId_ = nullptr;
    // The start timestamp of the task.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the detection task.
    // 
    // *   **1**: The detection task is in progress.
    // *   **2**: The detection task is complete.
    // *   **3**: The detection task fails.
    // *   **4**: The detection task times out.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the asset that you want to detect.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the asset that you want to detect. Valid values:
    // 
    // *   **1**: snapshot
    // *   **2**: image
    std::shared_ptr<int32_t> targetType_ = nullptr;
    // The ID of the main task. If you want to query subtasks of a main task, you must specify this parameter.
    std::shared_ptr<string> taskId_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
