// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SearchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActualTimeGte, actualTimeGte_);
      DARABONBA_PTR_TO_JSON(ActualTimeLte, actualTimeLte_);
      DARABONBA_PTR_TO_JSON(CallDurationGte, callDurationGte_);
      DARABONBA_PTR_TO_JSON(CallDurationLte, callDurationLte_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupNameQuery, jobGroupNameQuery_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobStatusStringList, jobStatusStringList_);
      DARABONBA_PTR_TO_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_TO_JSON(OtherId, otherId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordingDurationGte, recordingDurationGte_);
      DARABONBA_PTR_TO_JSON(RecordingDurationLte, recordingDurationLte_);
      DARABONBA_PTR_TO_JSON(ScriptNameQuery, scriptNameQuery_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(TaskCreateTimeGte, taskCreateTimeGte_);
      DARABONBA_PTR_TO_JSON(TaskCreateTimeLte, taskCreateTimeLte_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatusStringList, taskStatusStringList_);
      DARABONBA_PTR_TO_JSON(UserIdMatch, userIdMatch_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualTimeGte, actualTimeGte_);
      DARABONBA_PTR_FROM_JSON(ActualTimeLte, actualTimeLte_);
      DARABONBA_PTR_FROM_JSON(CallDurationGte, callDurationGte_);
      DARABONBA_PTR_FROM_JSON(CallDurationLte, callDurationLte_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupNameQuery, jobGroupNameQuery_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobStatusStringList, jobStatusStringList_);
      DARABONBA_PTR_FROM_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_FROM_JSON(OtherId, otherId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordingDurationGte, recordingDurationGte_);
      DARABONBA_PTR_FROM_JSON(RecordingDurationLte, recordingDurationLte_);
      DARABONBA_PTR_FROM_JSON(ScriptNameQuery, scriptNameQuery_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(TaskCreateTimeGte, taskCreateTimeGte_);
      DARABONBA_PTR_FROM_JSON(TaskCreateTimeLte, taskCreateTimeLte_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatusStringList, taskStatusStringList_);
      DARABONBA_PTR_FROM_JSON(UserIdMatch, userIdMatch_);
    };
    SearchTaskRequest() = default ;
    SearchTaskRequest(const SearchTaskRequest &) = default ;
    SearchTaskRequest(SearchTaskRequest &&) = default ;
    SearchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTaskRequest() = default ;
    SearchTaskRequest& operator=(const SearchTaskRequest &) = default ;
    SearchTaskRequest& operator=(SearchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTimeGte_ == nullptr
        && this->actualTimeLte_ == nullptr && this->callDurationGte_ == nullptr && this->callDurationLte_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr
        && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobGroupNameQuery_ == nullptr && this->jobId_ == nullptr && this->jobStatusStringList_ == nullptr
        && this->labelsJson_ == nullptr && this->otherId_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->recordingDurationGte_ == nullptr
        && this->recordingDurationLte_ == nullptr && this->scriptNameQuery_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr && this->taskCreateTimeGte_ == nullptr
        && this->taskCreateTimeLte_ == nullptr && this->taskId_ == nullptr && this->taskStatusStringList_ == nullptr && this->userIdMatch_ == nullptr; };
    // actualTimeGte Field Functions 
    bool hasActualTimeGte() const { return this->actualTimeGte_ != nullptr;};
    void deleteActualTimeGte() { this->actualTimeGte_ = nullptr;};
    inline int64_t getActualTimeGte() const { DARABONBA_PTR_GET_DEFAULT(actualTimeGte_, 0L) };
    inline SearchTaskRequest& setActualTimeGte(int64_t actualTimeGte) { DARABONBA_PTR_SET_VALUE(actualTimeGte_, actualTimeGte) };


    // actualTimeLte Field Functions 
    bool hasActualTimeLte() const { return this->actualTimeLte_ != nullptr;};
    void deleteActualTimeLte() { this->actualTimeLte_ = nullptr;};
    inline int64_t getActualTimeLte() const { DARABONBA_PTR_GET_DEFAULT(actualTimeLte_, 0L) };
    inline SearchTaskRequest& setActualTimeLte(int64_t actualTimeLte) { DARABONBA_PTR_SET_VALUE(actualTimeLte_, actualTimeLte) };


    // callDurationGte Field Functions 
    bool hasCallDurationGte() const { return this->callDurationGte_ != nullptr;};
    void deleteCallDurationGte() { this->callDurationGte_ = nullptr;};
    inline int64_t getCallDurationGte() const { DARABONBA_PTR_GET_DEFAULT(callDurationGte_, 0L) };
    inline SearchTaskRequest& setCallDurationGte(int64_t callDurationGte) { DARABONBA_PTR_SET_VALUE(callDurationGte_, callDurationGte) };


    // callDurationLte Field Functions 
    bool hasCallDurationLte() const { return this->callDurationLte_ != nullptr;};
    void deleteCallDurationLte() { this->callDurationLte_ = nullptr;};
    inline int64_t getCallDurationLte() const { DARABONBA_PTR_GET_DEFAULT(callDurationLte_, 0L) };
    inline SearchTaskRequest& setCallDurationLte(int64_t callDurationLte) { DARABONBA_PTR_SET_VALUE(callDurationLte_, callDurationLte) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline SearchTaskRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline SearchTaskRequest& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SearchTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline SearchTaskRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupNameQuery Field Functions 
    bool hasJobGroupNameQuery() const { return this->jobGroupNameQuery_ != nullptr;};
    void deleteJobGroupNameQuery() { this->jobGroupNameQuery_ = nullptr;};
    inline string getJobGroupNameQuery() const { DARABONBA_PTR_GET_DEFAULT(jobGroupNameQuery_, "") };
    inline SearchTaskRequest& setJobGroupNameQuery(string jobGroupNameQuery) { DARABONBA_PTR_SET_VALUE(jobGroupNameQuery_, jobGroupNameQuery) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SearchTaskRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatusStringList Field Functions 
    bool hasJobStatusStringList() const { return this->jobStatusStringList_ != nullptr;};
    void deleteJobStatusStringList() { this->jobStatusStringList_ = nullptr;};
    inline string getJobStatusStringList() const { DARABONBA_PTR_GET_DEFAULT(jobStatusStringList_, "") };
    inline SearchTaskRequest& setJobStatusStringList(string jobStatusStringList) { DARABONBA_PTR_SET_VALUE(jobStatusStringList_, jobStatusStringList) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline const vector<string> & getLabelsJson() const { DARABONBA_PTR_GET_CONST(labelsJson_, vector<string>) };
    inline vector<string> getLabelsJson() { DARABONBA_PTR_GET(labelsJson_, vector<string>) };
    inline SearchTaskRequest& setLabelsJson(const vector<string> & labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };
    inline SearchTaskRequest& setLabelsJson(vector<string> && labelsJson) { DARABONBA_PTR_SET_RVALUE(labelsJson_, labelsJson) };


    // otherId Field Functions 
    bool hasOtherId() const { return this->otherId_ != nullptr;};
    void deleteOtherId() { this->otherId_ = nullptr;};
    inline string getOtherId() const { DARABONBA_PTR_GET_DEFAULT(otherId_, "") };
    inline SearchTaskRequest& setOtherId(string otherId) { DARABONBA_PTR_SET_VALUE(otherId_, otherId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline SearchTaskRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTaskRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordingDurationGte Field Functions 
    bool hasRecordingDurationGte() const { return this->recordingDurationGte_ != nullptr;};
    void deleteRecordingDurationGte() { this->recordingDurationGte_ = nullptr;};
    inline int64_t getRecordingDurationGte() const { DARABONBA_PTR_GET_DEFAULT(recordingDurationGte_, 0L) };
    inline SearchTaskRequest& setRecordingDurationGte(int64_t recordingDurationGte) { DARABONBA_PTR_SET_VALUE(recordingDurationGte_, recordingDurationGte) };


    // recordingDurationLte Field Functions 
    bool hasRecordingDurationLte() const { return this->recordingDurationLte_ != nullptr;};
    void deleteRecordingDurationLte() { this->recordingDurationLte_ = nullptr;};
    inline int64_t getRecordingDurationLte() const { DARABONBA_PTR_GET_DEFAULT(recordingDurationLte_, 0L) };
    inline SearchTaskRequest& setRecordingDurationLte(int64_t recordingDurationLte) { DARABONBA_PTR_SET_VALUE(recordingDurationLte_, recordingDurationLte) };


    // scriptNameQuery Field Functions 
    bool hasScriptNameQuery() const { return this->scriptNameQuery_ != nullptr;};
    void deleteScriptNameQuery() { this->scriptNameQuery_ = nullptr;};
    inline string getScriptNameQuery() const { DARABONBA_PTR_GET_DEFAULT(scriptNameQuery_, "") };
    inline SearchTaskRequest& setScriptNameQuery(string scriptNameQuery) { DARABONBA_PTR_SET_VALUE(scriptNameQuery_, scriptNameQuery) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchTaskRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline SearchTaskRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // taskCreateTimeGte Field Functions 
    bool hasTaskCreateTimeGte() const { return this->taskCreateTimeGte_ != nullptr;};
    void deleteTaskCreateTimeGte() { this->taskCreateTimeGte_ = nullptr;};
    inline int64_t getTaskCreateTimeGte() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTimeGte_, 0L) };
    inline SearchTaskRequest& setTaskCreateTimeGte(int64_t taskCreateTimeGte) { DARABONBA_PTR_SET_VALUE(taskCreateTimeGte_, taskCreateTimeGte) };


    // taskCreateTimeLte Field Functions 
    bool hasTaskCreateTimeLte() const { return this->taskCreateTimeLte_ != nullptr;};
    void deleteTaskCreateTimeLte() { this->taskCreateTimeLte_ = nullptr;};
    inline int64_t getTaskCreateTimeLte() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTimeLte_, 0L) };
    inline SearchTaskRequest& setTaskCreateTimeLte(int64_t taskCreateTimeLte) { DARABONBA_PTR_SET_VALUE(taskCreateTimeLte_, taskCreateTimeLte) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SearchTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatusStringList Field Functions 
    bool hasTaskStatusStringList() const { return this->taskStatusStringList_ != nullptr;};
    void deleteTaskStatusStringList() { this->taskStatusStringList_ = nullptr;};
    inline string getTaskStatusStringList() const { DARABONBA_PTR_GET_DEFAULT(taskStatusStringList_, "") };
    inline SearchTaskRequest& setTaskStatusStringList(string taskStatusStringList) { DARABONBA_PTR_SET_VALUE(taskStatusStringList_, taskStatusStringList) };


    // userIdMatch Field Functions 
    bool hasUserIdMatch() const { return this->userIdMatch_ != nullptr;};
    void deleteUserIdMatch() { this->userIdMatch_ = nullptr;};
    inline string getUserIdMatch() const { DARABONBA_PTR_GET_DEFAULT(userIdMatch_, "") };
    inline SearchTaskRequest& setUserIdMatch(string userIdMatch) { DARABONBA_PTR_SET_VALUE(userIdMatch_, userIdMatch) };


  protected:
    shared_ptr<int64_t> actualTimeGte_ {};
    shared_ptr<int64_t> actualTimeLte_ {};
    shared_ptr<int64_t> callDurationGte_ {};
    shared_ptr<int64_t> callDurationLte_ {};
    shared_ptr<string> calledNumber_ {};
    shared_ptr<string> callingNumber_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> jobGroupId_ {};
    shared_ptr<string> jobGroupNameQuery_ {};
    shared_ptr<string> jobId_ {};
    shared_ptr<string> jobStatusStringList_ {};
    shared_ptr<vector<string>> labelsJson_ {};
    shared_ptr<string> otherId_ {};
    shared_ptr<int32_t> pageIndex_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> recordingDurationGte_ {};
    shared_ptr<int64_t> recordingDurationLte_ {};
    shared_ptr<string> scriptNameQuery_ {};
    shared_ptr<string> sortBy_ {};
    shared_ptr<string> sortOrder_ {};
    shared_ptr<int64_t> taskCreateTimeGte_ {};
    shared_ptr<int64_t> taskCreateTimeLte_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskStatusStringList_ {};
    shared_ptr<string> userIdMatch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
