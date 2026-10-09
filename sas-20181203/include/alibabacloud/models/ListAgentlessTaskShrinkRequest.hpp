// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTLESSTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTLESSTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAgentlessTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentlessTaskShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(TaskIdList, taskIdListShrink_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentlessTaskShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TaskIdList, taskIdListShrink_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAgentlessTaskShrinkRequest() = default ;
    ListAgentlessTaskShrinkRequest(const ListAgentlessTaskShrinkRequest &) = default ;
    ListAgentlessTaskShrinkRequest(ListAgentlessTaskShrinkRequest &&) = default ;
    ListAgentlessTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentlessTaskShrinkRequest() = default ;
    ListAgentlessTaskShrinkRequest& operator=(const ListAgentlessTaskShrinkRequest &) = default ;
    ListAgentlessTaskShrinkRequest& operator=(ListAgentlessTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->lang_ == nullptr && this->machineName_ == nullptr
        && this->pageSize_ == nullptr && this->rootTask_ == nullptr && this->rootTaskId_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->targetName_ == nullptr && this->targetType_ == nullptr && this->taskId_ == nullptr && this->taskIdListShrink_ == nullptr && this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAgentlessTaskShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAgentlessTaskShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListAgentlessTaskShrinkRequest& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListAgentlessTaskShrinkRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListAgentlessTaskShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // machineName Field Functions 
    bool hasMachineName() const { return this->machineName_ != nullptr;};
    void deleteMachineName() { this->machineName_ = nullptr;};
    inline string getMachineName() const { DARABONBA_PTR_GET_DEFAULT(machineName_, "") };
    inline ListAgentlessTaskShrinkRequest& setMachineName(string machineName) { DARABONBA_PTR_SET_VALUE(machineName_, machineName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentlessTaskShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rootTask Field Functions 
    bool hasRootTask() const { return this->rootTask_ != nullptr;};
    void deleteRootTask() { this->rootTask_ = nullptr;};
    inline bool getRootTask() const { DARABONBA_PTR_GET_DEFAULT(rootTask_, false) };
    inline ListAgentlessTaskShrinkRequest& setRootTask(bool rootTask) { DARABONBA_PTR_SET_VALUE(rootTask_, rootTask) };


    // rootTaskId Field Functions 
    bool hasRootTaskId() const { return this->rootTaskId_ != nullptr;};
    void deleteRootTaskId() { this->rootTaskId_ = nullptr;};
    inline string getRootTaskId() const { DARABONBA_PTR_GET_DEFAULT(rootTaskId_, "") };
    inline ListAgentlessTaskShrinkRequest& setRootTaskId(string rootTaskId) { DARABONBA_PTR_SET_VALUE(rootTaskId_, rootTaskId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAgentlessTaskShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAgentlessTaskShrinkRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListAgentlessTaskShrinkRequest& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListAgentlessTaskShrinkRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListAgentlessTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskIdListShrink Field Functions 
    bool hasTaskIdListShrink() const { return this->taskIdListShrink_ != nullptr;};
    void deleteTaskIdListShrink() { this->taskIdListShrink_ = nullptr;};
    inline string getTaskIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdListShrink_, "") };
    inline ListAgentlessTaskShrinkRequest& setTaskIdListShrink(string taskIdListShrink) { DARABONBA_PTR_SET_VALUE(taskIdListShrink_, taskIdListShrink) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAgentlessTaskShrinkRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The page number of the current page in a paging query.
    shared_ptr<int32_t> currentPage_ {};
    // The timestamp of the end time.
    shared_ptr<int64_t> endTime_ {};
    // The public IP address of the asset to query.
    shared_ptr<string> internetIp_ {};
    // The private IP address of the asset to query.
    shared_ptr<string> intranetIp_ {};
    // The language type. Valid values:  
    // 
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The name of the instance.
    shared_ptr<string> machineName_ {};
    // The maximum number of entries to return per page in a paging query.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether to query the root task list. Valid values:
    // 
    // - **true**: Queries root tasks.
    // - **false**: Queries subtasks.
    shared_ptr<bool> rootTask_ {};
    // The ID of the root task.
    shared_ptr<string> rootTaskId_ {};
    // The timestamp of the start time.
    shared_ptr<int64_t> startTime_ {};
    // The status of the detection task. Valid values:
    // 
    // - **1**: running
    // - **2**: completed
    // - **3**: failed
    // - **4**: timed out
    shared_ptr<int32_t> status_ {};
    // The name of the scan target.
    shared_ptr<string> targetName_ {};
    // The object type of the scan. Valid values:
    // 
    // - **1**: snapshot 
    // - **2**: image
    shared_ptr<int32_t> targetType_ {};
    // The ID of the root task. Specify this parameter when you query the list of subtasks under a root task.
    shared_ptr<string> taskId_ {};
    // The list of task IDs to return. You can specify up to 100 IDs. You must specify RootTask and cannot specify this parameter together with TaskId. If RootTask is set to true, root tasks are queried. If RootTask is set to false, subtasks are queried, and cross-root task queries are allowed. If RootTaskId is specified, the intersection is returned.
    shared_ptr<string> taskIdListShrink_ {};
    // The UUID of the server to query.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
