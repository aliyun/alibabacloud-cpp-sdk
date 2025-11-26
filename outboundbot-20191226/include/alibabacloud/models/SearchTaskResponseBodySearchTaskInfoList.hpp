// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTASKRESPONSEBODYSEARCHTASKINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTASKRESPONSEBODYSEARCHTASKINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTaskResponseBodySearchTaskInfoListLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SearchTaskResponseBodySearchTaskInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTaskResponseBodySearchTaskInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_TO_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_TO_JSON(CallDurationDisplay, callDurationDisplay_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_TO_JSON(DialException, dialException_);
      DARABONBA_PTR_TO_JSON(DialExceptionCodes, dialExceptionCodes_);
      DARABONBA_PTR_TO_JSON(DialExceptionOld, dialExceptionOld_);
      DARABONBA_PTR_TO_JSON(HasAnswered, hasAnswered_);
      DARABONBA_PTR_TO_JSON(HasHangUpByRejection, hasHangUpByRejection_);
      DARABONBA_PTR_TO_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
      DARABONBA_PTR_TO_JSON(HasReachedEndOfFlow, hasReachedEndOfFlow_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(JobStatusName, jobStatusName_);
      DARABONBA_PTR_TO_JSON(JobStatusString, jobStatusString_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(TaskCreateTime, taskCreateTime_);
      DARABONBA_PTR_TO_JSON(TaskEndReason, taskEndReason_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskStatusName, taskStatusName_);
      DARABONBA_PTR_TO_JSON(TaskStatusString, taskStatusString_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTaskResponseBodySearchTaskInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualTime, actualTime_);
      DARABONBA_PTR_FROM_JSON(CallDuration, callDuration_);
      DARABONBA_PTR_FROM_JSON(CallDurationDisplay, callDurationDisplay_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
      DARABONBA_PTR_FROM_JSON(DialException, dialException_);
      DARABONBA_PTR_FROM_JSON(DialExceptionCodes, dialExceptionCodes_);
      DARABONBA_PTR_FROM_JSON(DialExceptionOld, dialExceptionOld_);
      DARABONBA_PTR_FROM_JSON(HasAnswered, hasAnswered_);
      DARABONBA_PTR_FROM_JSON(HasHangUpByRejection, hasHangUpByRejection_);
      DARABONBA_PTR_FROM_JSON(HasLastPlaybackCompleted, hasLastPlaybackCompleted_);
      DARABONBA_PTR_FROM_JSON(HasReachedEndOfFlow, hasReachedEndOfFlow_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobGroupName, jobGroupName_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(JobStatusName, jobStatusName_);
      DARABONBA_PTR_FROM_JSON(JobStatusString, jobStatusString_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(RecordingDuration, recordingDuration_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(TaskCreateTime, taskCreateTime_);
      DARABONBA_PTR_FROM_JSON(TaskEndReason, taskEndReason_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskStatusName, taskStatusName_);
      DARABONBA_PTR_FROM_JSON(TaskStatusString, taskStatusString_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    SearchTaskResponseBodySearchTaskInfoList() = default ;
    SearchTaskResponseBodySearchTaskInfoList(const SearchTaskResponseBodySearchTaskInfoList &) = default ;
    SearchTaskResponseBodySearchTaskInfoList(SearchTaskResponseBodySearchTaskInfoList &&) = default ;
    SearchTaskResponseBodySearchTaskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTaskResponseBodySearchTaskInfoList() = default ;
    SearchTaskResponseBodySearchTaskInfoList& operator=(const SearchTaskResponseBodySearchTaskInfoList &) = default ;
    SearchTaskResponseBodySearchTaskInfoList& operator=(SearchTaskResponseBodySearchTaskInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualTime_ == nullptr
        && return this->callDuration_ == nullptr && return this->callDurationDisplay_ == nullptr && return this->calledNumber_ == nullptr && return this->callingNumber_ == nullptr && return this->dialException_ == nullptr
        && return this->dialExceptionCodes_ == nullptr && return this->dialExceptionOld_ == nullptr && return this->hasAnswered_ == nullptr && return this->hasHangUpByRejection_ == nullptr && return this->hasLastPlaybackCompleted_ == nullptr
        && return this->hasReachedEndOfFlow_ == nullptr && return this->instanceId_ == nullptr && return this->jobGroupId_ == nullptr && return this->jobGroupName_ == nullptr && return this->jobId_ == nullptr
        && return this->jobStatus_ == nullptr && return this->jobStatusName_ == nullptr && return this->jobStatusString_ == nullptr && return this->labels_ == nullptr && return this->recordingDuration_ == nullptr
        && return this->scriptName_ == nullptr && return this->taskCreateTime_ == nullptr && return this->taskEndReason_ == nullptr && return this->taskId_ == nullptr && return this->taskStatus_ == nullptr
        && return this->taskStatusName_ == nullptr && return this->taskStatusString_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // actualTime Field Functions 
    bool hasActualTime() const { return this->actualTime_ != nullptr;};
    void deleteActualTime() { this->actualTime_ = nullptr;};
    inline int64_t actualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
    inline SearchTaskResponseBodySearchTaskInfoList& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


    // callDuration Field Functions 
    bool hasCallDuration() const { return this->callDuration_ != nullptr;};
    void deleteCallDuration() { this->callDuration_ = nullptr;};
    inline int32_t callDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, 0) };
    inline SearchTaskResponseBodySearchTaskInfoList& setCallDuration(int32_t callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


    // callDurationDisplay Field Functions 
    bool hasCallDurationDisplay() const { return this->callDurationDisplay_ != nullptr;};
    void deleteCallDurationDisplay() { this->callDurationDisplay_ = nullptr;};
    inline string callDurationDisplay() const { DARABONBA_PTR_GET_DEFAULT(callDurationDisplay_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setCallDurationDisplay(string callDurationDisplay) { DARABONBA_PTR_SET_VALUE(callDurationDisplay_, callDurationDisplay) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callingNumber Field Functions 
    bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
    void deleteCallingNumber() { this->callingNumber_ = nullptr;};
    inline string callingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


    // dialException Field Functions 
    bool hasDialException() const { return this->dialException_ != nullptr;};
    void deleteDialException() { this->dialException_ = nullptr;};
    inline string dialException() const { DARABONBA_PTR_GET_DEFAULT(dialException_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setDialException(string dialException) { DARABONBA_PTR_SET_VALUE(dialException_, dialException) };


    // dialExceptionCodes Field Functions 
    bool hasDialExceptionCodes() const { return this->dialExceptionCodes_ != nullptr;};
    void deleteDialExceptionCodes() { this->dialExceptionCodes_ = nullptr;};
    inline const vector<string> & dialExceptionCodes() const { DARABONBA_PTR_GET_CONST(dialExceptionCodes_, vector<string>) };
    inline vector<string> dialExceptionCodes() { DARABONBA_PTR_GET(dialExceptionCodes_, vector<string>) };
    inline SearchTaskResponseBodySearchTaskInfoList& setDialExceptionCodes(const vector<string> & dialExceptionCodes) { DARABONBA_PTR_SET_VALUE(dialExceptionCodes_, dialExceptionCodes) };
    inline SearchTaskResponseBodySearchTaskInfoList& setDialExceptionCodes(vector<string> && dialExceptionCodes) { DARABONBA_PTR_SET_RVALUE(dialExceptionCodes_, dialExceptionCodes) };


    // dialExceptionOld Field Functions 
    bool hasDialExceptionOld() const { return this->dialExceptionOld_ != nullptr;};
    void deleteDialExceptionOld() { this->dialExceptionOld_ = nullptr;};
    inline string dialExceptionOld() const { DARABONBA_PTR_GET_DEFAULT(dialExceptionOld_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setDialExceptionOld(string dialExceptionOld) { DARABONBA_PTR_SET_VALUE(dialExceptionOld_, dialExceptionOld) };


    // hasAnswered Field Functions 
    bool hasHasAnswered() const { return this->hasAnswered_ != nullptr;};
    void deleteHasAnswered() { this->hasAnswered_ = nullptr;};
    inline bool hasAnswered() const { DARABONBA_PTR_GET_DEFAULT(hasAnswered_, false) };
    inline SearchTaskResponseBodySearchTaskInfoList& setHasAnswered(bool hasAnswered) { DARABONBA_PTR_SET_VALUE(hasAnswered_, hasAnswered) };


    // hasHangUpByRejection Field Functions 
    bool hasHasHangUpByRejection() const { return this->hasHangUpByRejection_ != nullptr;};
    void deleteHasHangUpByRejection() { this->hasHangUpByRejection_ = nullptr;};
    inline bool hasHangUpByRejection() const { DARABONBA_PTR_GET_DEFAULT(hasHangUpByRejection_, false) };
    inline SearchTaskResponseBodySearchTaskInfoList& setHasHangUpByRejection(bool hasHangUpByRejection) { DARABONBA_PTR_SET_VALUE(hasHangUpByRejection_, hasHangUpByRejection) };


    // hasLastPlaybackCompleted Field Functions 
    bool hasHasLastPlaybackCompleted() const { return this->hasLastPlaybackCompleted_ != nullptr;};
    void deleteHasLastPlaybackCompleted() { this->hasLastPlaybackCompleted_ = nullptr;};
    inline bool hasLastPlaybackCompleted() const { DARABONBA_PTR_GET_DEFAULT(hasLastPlaybackCompleted_, false) };
    inline SearchTaskResponseBodySearchTaskInfoList& setHasLastPlaybackCompleted(bool hasLastPlaybackCompleted) { DARABONBA_PTR_SET_VALUE(hasLastPlaybackCompleted_, hasLastPlaybackCompleted) };


    // hasReachedEndOfFlow Field Functions 
    bool hasHasReachedEndOfFlow() const { return this->hasReachedEndOfFlow_ != nullptr;};
    void deleteHasReachedEndOfFlow() { this->hasReachedEndOfFlow_ = nullptr;};
    inline bool hasReachedEndOfFlow() const { DARABONBA_PTR_GET_DEFAULT(hasReachedEndOfFlow_, false) };
    inline SearchTaskResponseBodySearchTaskInfoList& setHasReachedEndOfFlow(bool hasReachedEndOfFlow) { DARABONBA_PTR_SET_VALUE(hasReachedEndOfFlow_, hasReachedEndOfFlow) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobGroupName Field Functions 
    bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
    void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
    inline string jobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline int32_t jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
    inline SearchTaskResponseBodySearchTaskInfoList& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // jobStatusName Field Functions 
    bool hasJobStatusName() const { return this->jobStatusName_ != nullptr;};
    void deleteJobStatusName() { this->jobStatusName_ = nullptr;};
    inline string jobStatusName() const { DARABONBA_PTR_GET_DEFAULT(jobStatusName_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setJobStatusName(string jobStatusName) { DARABONBA_PTR_SET_VALUE(jobStatusName_, jobStatusName) };


    // jobStatusString Field Functions 
    bool hasJobStatusString() const { return this->jobStatusString_ != nullptr;};
    void deleteJobStatusString() { this->jobStatusString_ = nullptr;};
    inline string jobStatusString() const { DARABONBA_PTR_GET_DEFAULT(jobStatusString_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setJobStatusString(string jobStatusString) { DARABONBA_PTR_SET_VALUE(jobStatusString_, jobStatusString) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::SearchTaskResponseBodySearchTaskInfoListLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::SearchTaskResponseBodySearchTaskInfoListLabels>) };
    inline vector<Models::SearchTaskResponseBodySearchTaskInfoListLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::SearchTaskResponseBodySearchTaskInfoListLabels>) };
    inline SearchTaskResponseBodySearchTaskInfoList& setLabels(const vector<Models::SearchTaskResponseBodySearchTaskInfoListLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline SearchTaskResponseBodySearchTaskInfoList& setLabels(vector<Models::SearchTaskResponseBodySearchTaskInfoListLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // recordingDuration Field Functions 
    bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
    void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
    inline int32_t recordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
    inline SearchTaskResponseBodySearchTaskInfoList& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // taskCreateTime Field Functions 
    bool hasTaskCreateTime() const { return this->taskCreateTime_ != nullptr;};
    void deleteTaskCreateTime() { this->taskCreateTime_ = nullptr;};
    inline int64_t taskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTime_, 0L) };
    inline SearchTaskResponseBodySearchTaskInfoList& setTaskCreateTime(int64_t taskCreateTime) { DARABONBA_PTR_SET_VALUE(taskCreateTime_, taskCreateTime) };


    // taskEndReason Field Functions 
    bool hasTaskEndReason() const { return this->taskEndReason_ != nullptr;};
    void deleteTaskEndReason() { this->taskEndReason_ = nullptr;};
    inline int32_t taskEndReason() const { DARABONBA_PTR_GET_DEFAULT(taskEndReason_, 0) };
    inline SearchTaskResponseBodySearchTaskInfoList& setTaskEndReason(int32_t taskEndReason) { DARABONBA_PTR_SET_VALUE(taskEndReason_, taskEndReason) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline SearchTaskResponseBodySearchTaskInfoList& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatusName Field Functions 
    bool hasTaskStatusName() const { return this->taskStatusName_ != nullptr;};
    void deleteTaskStatusName() { this->taskStatusName_ = nullptr;};
    inline string taskStatusName() const { DARABONBA_PTR_GET_DEFAULT(taskStatusName_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setTaskStatusName(string taskStatusName) { DARABONBA_PTR_SET_VALUE(taskStatusName_, taskStatusName) };


    // taskStatusString Field Functions 
    bool hasTaskStatusString() const { return this->taskStatusString_ != nullptr;};
    void deleteTaskStatusString() { this->taskStatusString_ = nullptr;};
    inline string taskStatusString() const { DARABONBA_PTR_GET_DEFAULT(taskStatusString_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setTaskStatusString(string taskStatusString) { DARABONBA_PTR_SET_VALUE(taskStatusString_, taskStatusString) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline SearchTaskResponseBodySearchTaskInfoList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    std::shared_ptr<int64_t> actualTime_ = nullptr;
    std::shared_ptr<int32_t> callDuration_ = nullptr;
    std::shared_ptr<string> callDurationDisplay_ = nullptr;
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callingNumber_ = nullptr;
    std::shared_ptr<string> dialException_ = nullptr;
    std::shared_ptr<vector<string>> dialExceptionCodes_ = nullptr;
    std::shared_ptr<string> dialExceptionOld_ = nullptr;
    std::shared_ptr<bool> hasAnswered_ = nullptr;
    std::shared_ptr<bool> hasHangUpByRejection_ = nullptr;
    std::shared_ptr<bool> hasLastPlaybackCompleted_ = nullptr;
    std::shared_ptr<bool> hasReachedEndOfFlow_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobGroupName_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int32_t> jobStatus_ = nullptr;
    std::shared_ptr<string> jobStatusName_ = nullptr;
    std::shared_ptr<string> jobStatusString_ = nullptr;
    std::shared_ptr<vector<Models::SearchTaskResponseBodySearchTaskInfoListLabels>> labels_ = nullptr;
    std::shared_ptr<int32_t> recordingDuration_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<int64_t> taskCreateTime_ = nullptr;
    std::shared_ptr<int32_t> taskEndReason_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<string> taskStatusName_ = nullptr;
    std::shared_ptr<string> taskStatusString_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
