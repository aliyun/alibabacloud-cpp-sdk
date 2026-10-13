// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTASKRESPONSEBODY_HPP_
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
  class SearchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SearchTaskInfoList, searchTaskInfoList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(VariableNames, variableNames_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SearchTaskInfoList, searchTaskInfoList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(VariableNames, variableNames_);
    };
    SearchTaskResponseBody() = default ;
    SearchTaskResponseBody(const SearchTaskResponseBody &) = default ;
    SearchTaskResponseBody(SearchTaskResponseBody &&) = default ;
    SearchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTaskResponseBody() = default ;
    SearchTaskResponseBody& operator=(const SearchTaskResponseBody &) = default ;
    SearchTaskResponseBody& operator=(SearchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SearchTaskInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SearchTaskInfoList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SearchTaskInfoList& obj) { 
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
      SearchTaskInfoList() = default ;
      SearchTaskInfoList(const SearchTaskInfoList &) = default ;
      SearchTaskInfoList(SearchTaskInfoList &&) = default ;
      SearchTaskInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SearchTaskInfoList() = default ;
      SearchTaskInfoList& operator=(const SearchTaskInfoList &) = default ;
      SearchTaskInfoList& operator=(SearchTaskInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(K, k_);
          DARABONBA_PTR_TO_JSON(V, v_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(K, k_);
          DARABONBA_PTR_FROM_JSON(V, v_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->k_ == nullptr
        && this->v_ == nullptr; };
        // k Field Functions 
        bool hasK() const { return this->k_ != nullptr;};
        void deleteK() { this->k_ = nullptr;};
        inline string getK() const { DARABONBA_PTR_GET_DEFAULT(k_, "") };
        inline Labels& setK(string k) { DARABONBA_PTR_SET_VALUE(k_, k) };


        // v Field Functions 
        bool hasV() const { return this->v_ != nullptr;};
        void deleteV() { this->v_ = nullptr;};
        inline string getV() const { DARABONBA_PTR_GET_DEFAULT(v_, "") };
        inline Labels& setV(string v) { DARABONBA_PTR_SET_VALUE(v_, v) };


      protected:
        // The label name.
        shared_ptr<string> k_ {};
        // The matched label value.
        shared_ptr<string> v_ {};
      };

      virtual bool empty() const override { return this->actualTime_ == nullptr
        && this->callDuration_ == nullptr && this->callDurationDisplay_ == nullptr && this->calledNumber_ == nullptr && this->callingNumber_ == nullptr && this->dialException_ == nullptr
        && this->dialExceptionCodes_ == nullptr && this->dialExceptionOld_ == nullptr && this->hasAnswered_ == nullptr && this->hasHangUpByRejection_ == nullptr && this->hasLastPlaybackCompleted_ == nullptr
        && this->hasReachedEndOfFlow_ == nullptr && this->instanceId_ == nullptr && this->jobGroupId_ == nullptr && this->jobGroupName_ == nullptr && this->jobId_ == nullptr
        && this->jobStatus_ == nullptr && this->jobStatusName_ == nullptr && this->jobStatusString_ == nullptr && this->labels_ == nullptr && this->recordingDuration_ == nullptr
        && this->scriptName_ == nullptr && this->taskCreateTime_ == nullptr && this->taskEndReason_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr
        && this->taskStatusName_ == nullptr && this->taskStatusString_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // actualTime Field Functions 
      bool hasActualTime() const { return this->actualTime_ != nullptr;};
      void deleteActualTime() { this->actualTime_ = nullptr;};
      inline int64_t getActualTime() const { DARABONBA_PTR_GET_DEFAULT(actualTime_, 0L) };
      inline SearchTaskInfoList& setActualTime(int64_t actualTime) { DARABONBA_PTR_SET_VALUE(actualTime_, actualTime) };


      // callDuration Field Functions 
      bool hasCallDuration() const { return this->callDuration_ != nullptr;};
      void deleteCallDuration() { this->callDuration_ = nullptr;};
      inline int32_t getCallDuration() const { DARABONBA_PTR_GET_DEFAULT(callDuration_, 0) };
      inline SearchTaskInfoList& setCallDuration(int32_t callDuration) { DARABONBA_PTR_SET_VALUE(callDuration_, callDuration) };


      // callDurationDisplay Field Functions 
      bool hasCallDurationDisplay() const { return this->callDurationDisplay_ != nullptr;};
      void deleteCallDurationDisplay() { this->callDurationDisplay_ = nullptr;};
      inline string getCallDurationDisplay() const { DARABONBA_PTR_GET_DEFAULT(callDurationDisplay_, "") };
      inline SearchTaskInfoList& setCallDurationDisplay(string callDurationDisplay) { DARABONBA_PTR_SET_VALUE(callDurationDisplay_, callDurationDisplay) };


      // calledNumber Field Functions 
      bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
      void deleteCalledNumber() { this->calledNumber_ = nullptr;};
      inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
      inline SearchTaskInfoList& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


      // callingNumber Field Functions 
      bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
      void deleteCallingNumber() { this->callingNumber_ = nullptr;};
      inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
      inline SearchTaskInfoList& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


      // dialException Field Functions 
      bool hasDialException() const { return this->dialException_ != nullptr;};
      void deleteDialException() { this->dialException_ = nullptr;};
      inline string getDialException() const { DARABONBA_PTR_GET_DEFAULT(dialException_, "") };
      inline SearchTaskInfoList& setDialException(string dialException) { DARABONBA_PTR_SET_VALUE(dialException_, dialException) };


      // dialExceptionCodes Field Functions 
      bool hasDialExceptionCodes() const { return this->dialExceptionCodes_ != nullptr;};
      void deleteDialExceptionCodes() { this->dialExceptionCodes_ = nullptr;};
      inline const vector<string> & getDialExceptionCodes() const { DARABONBA_PTR_GET_CONST(dialExceptionCodes_, vector<string>) };
      inline vector<string> getDialExceptionCodes() { DARABONBA_PTR_GET(dialExceptionCodes_, vector<string>) };
      inline SearchTaskInfoList& setDialExceptionCodes(const vector<string> & dialExceptionCodes) { DARABONBA_PTR_SET_VALUE(dialExceptionCodes_, dialExceptionCodes) };
      inline SearchTaskInfoList& setDialExceptionCodes(vector<string> && dialExceptionCodes) { DARABONBA_PTR_SET_RVALUE(dialExceptionCodes_, dialExceptionCodes) };


      // dialExceptionOld Field Functions 
      bool hasDialExceptionOld() const { return this->dialExceptionOld_ != nullptr;};
      void deleteDialExceptionOld() { this->dialExceptionOld_ = nullptr;};
      inline string getDialExceptionOld() const { DARABONBA_PTR_GET_DEFAULT(dialExceptionOld_, "") };
      inline SearchTaskInfoList& setDialExceptionOld(string dialExceptionOld) { DARABONBA_PTR_SET_VALUE(dialExceptionOld_, dialExceptionOld) };


      // hasAnswered Field Functions 
      bool hasHasAnswered() const { return this->hasAnswered_ != nullptr;};
      void deleteHasAnswered() { this->hasAnswered_ = nullptr;};
      inline bool getHasAnswered() const { DARABONBA_PTR_GET_DEFAULT(hasAnswered_, false) };
      inline SearchTaskInfoList& setHasAnswered(bool hasAnswered) { DARABONBA_PTR_SET_VALUE(hasAnswered_, hasAnswered) };


      // hasHangUpByRejection Field Functions 
      bool hasHasHangUpByRejection() const { return this->hasHangUpByRejection_ != nullptr;};
      void deleteHasHangUpByRejection() { this->hasHangUpByRejection_ = nullptr;};
      inline bool getHasHangUpByRejection() const { DARABONBA_PTR_GET_DEFAULT(hasHangUpByRejection_, false) };
      inline SearchTaskInfoList& setHasHangUpByRejection(bool hasHangUpByRejection) { DARABONBA_PTR_SET_VALUE(hasHangUpByRejection_, hasHangUpByRejection) };


      // hasLastPlaybackCompleted Field Functions 
      bool hasHasLastPlaybackCompleted() const { return this->hasLastPlaybackCompleted_ != nullptr;};
      void deleteHasLastPlaybackCompleted() { this->hasLastPlaybackCompleted_ = nullptr;};
      inline bool getHasLastPlaybackCompleted() const { DARABONBA_PTR_GET_DEFAULT(hasLastPlaybackCompleted_, false) };
      inline SearchTaskInfoList& setHasLastPlaybackCompleted(bool hasLastPlaybackCompleted) { DARABONBA_PTR_SET_VALUE(hasLastPlaybackCompleted_, hasLastPlaybackCompleted) };


      // hasReachedEndOfFlow Field Functions 
      bool hasHasReachedEndOfFlow() const { return this->hasReachedEndOfFlow_ != nullptr;};
      void deleteHasReachedEndOfFlow() { this->hasReachedEndOfFlow_ = nullptr;};
      inline bool getHasReachedEndOfFlow() const { DARABONBA_PTR_GET_DEFAULT(hasReachedEndOfFlow_, false) };
      inline SearchTaskInfoList& setHasReachedEndOfFlow(bool hasReachedEndOfFlow) { DARABONBA_PTR_SET_VALUE(hasReachedEndOfFlow_, hasReachedEndOfFlow) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline SearchTaskInfoList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // jobGroupId Field Functions 
      bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
      void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
      inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
      inline SearchTaskInfoList& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


      // jobGroupName Field Functions 
      bool hasJobGroupName() const { return this->jobGroupName_ != nullptr;};
      void deleteJobGroupName() { this->jobGroupName_ = nullptr;};
      inline string getJobGroupName() const { DARABONBA_PTR_GET_DEFAULT(jobGroupName_, "") };
      inline SearchTaskInfoList& setJobGroupName(string jobGroupName) { DARABONBA_PTR_SET_VALUE(jobGroupName_, jobGroupName) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline SearchTaskInfoList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline int32_t getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
      inline SearchTaskInfoList& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // jobStatusName Field Functions 
      bool hasJobStatusName() const { return this->jobStatusName_ != nullptr;};
      void deleteJobStatusName() { this->jobStatusName_ = nullptr;};
      inline string getJobStatusName() const { DARABONBA_PTR_GET_DEFAULT(jobStatusName_, "") };
      inline SearchTaskInfoList& setJobStatusName(string jobStatusName) { DARABONBA_PTR_SET_VALUE(jobStatusName_, jobStatusName) };


      // jobStatusString Field Functions 
      bool hasJobStatusString() const { return this->jobStatusString_ != nullptr;};
      void deleteJobStatusString() { this->jobStatusString_ = nullptr;};
      inline string getJobStatusString() const { DARABONBA_PTR_GET_DEFAULT(jobStatusString_, "") };
      inline SearchTaskInfoList& setJobStatusString(string jobStatusString) { DARABONBA_PTR_SET_VALUE(jobStatusString_, jobStatusString) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<SearchTaskInfoList::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<SearchTaskInfoList::Labels>) };
      inline vector<SearchTaskInfoList::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<SearchTaskInfoList::Labels>) };
      inline SearchTaskInfoList& setLabels(const vector<SearchTaskInfoList::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline SearchTaskInfoList& setLabels(vector<SearchTaskInfoList::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // recordingDuration Field Functions 
      bool hasRecordingDuration() const { return this->recordingDuration_ != nullptr;};
      void deleteRecordingDuration() { this->recordingDuration_ = nullptr;};
      inline int32_t getRecordingDuration() const { DARABONBA_PTR_GET_DEFAULT(recordingDuration_, 0) };
      inline SearchTaskInfoList& setRecordingDuration(int32_t recordingDuration) { DARABONBA_PTR_SET_VALUE(recordingDuration_, recordingDuration) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline SearchTaskInfoList& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // taskCreateTime Field Functions 
      bool hasTaskCreateTime() const { return this->taskCreateTime_ != nullptr;};
      void deleteTaskCreateTime() { this->taskCreateTime_ = nullptr;};
      inline int64_t getTaskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTime_, 0L) };
      inline SearchTaskInfoList& setTaskCreateTime(int64_t taskCreateTime) { DARABONBA_PTR_SET_VALUE(taskCreateTime_, taskCreateTime) };


      // taskEndReason Field Functions 
      bool hasTaskEndReason() const { return this->taskEndReason_ != nullptr;};
      void deleteTaskEndReason() { this->taskEndReason_ = nullptr;};
      inline int32_t getTaskEndReason() const { DARABONBA_PTR_GET_DEFAULT(taskEndReason_, 0) };
      inline SearchTaskInfoList& setTaskEndReason(int32_t taskEndReason) { DARABONBA_PTR_SET_VALUE(taskEndReason_, taskEndReason) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline SearchTaskInfoList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline SearchTaskInfoList& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // taskStatusName Field Functions 
      bool hasTaskStatusName() const { return this->taskStatusName_ != nullptr;};
      void deleteTaskStatusName() { this->taskStatusName_ = nullptr;};
      inline string getTaskStatusName() const { DARABONBA_PTR_GET_DEFAULT(taskStatusName_, "") };
      inline SearchTaskInfoList& setTaskStatusName(string taskStatusName) { DARABONBA_PTR_SET_VALUE(taskStatusName_, taskStatusName) };


      // taskStatusString Field Functions 
      bool hasTaskStatusString() const { return this->taskStatusString_ != nullptr;};
      void deleteTaskStatusString() { this->taskStatusString_ = nullptr;};
      inline string getTaskStatusString() const { DARABONBA_PTR_GET_DEFAULT(taskStatusString_, "") };
      inline SearchTaskInfoList& setTaskStatusString(string taskStatusString) { DARABONBA_PTR_SET_VALUE(taskStatusString_, taskStatusString) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SearchTaskInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline SearchTaskInfoList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The actual execution time. The value is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> actualTime_ {};
      // The call duration, in milliseconds.
      shared_ptr<int32_t> callDuration_ {};
      // The call duration.
      shared_ptr<string> callDurationDisplay_ {};
      // The called number.
      shared_ptr<string> calledNumber_ {};
      // The calling number.
      shared_ptr<string> callingNumber_ {};
      // The exception information.
      shared_ptr<string> dialException_ {};
      // The field used for displaying remarks on the page.
      shared_ptr<vector<string>> dialExceptionCodes_ {};
      // The exception information.
      shared_ptr<string> dialExceptionOld_ {};
      // Indicates whether the call is answered.
      shared_ptr<bool> hasAnswered_ {};
      // Indicates whether the call is hung up due to unrecognized intent.
      shared_ptr<bool> hasHangUpByRejection_ {};
      // Indicates whether the last sentence is fully played before hanging up.
      shared_ptr<bool> hasLastPlaybackCompleted_ {};
      // Indicates whether the dialogue is completed.
      shared_ptr<bool> hasReachedEndOfFlow_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The job group ID.
      shared_ptr<string> jobGroupId_ {};
      // The name of the job group.
      shared_ptr<string> jobGroupName_ {};
      // The job ID.
      shared_ptr<string> jobId_ {};
      // The job status. Valid values:
      // 
      // - 0: Scheduling.
      // - 1: Executing.
      // - 2: Succeeded (Reached).
      // - 3: Paused.
      // - 4: Failed (Not connected - Busy).
      // - 5: Cancelled.
      shared_ptr<int32_t> jobStatus_ {};
      // The display content of the job status. Valid values:
      // 
      // - 0: Scheduling.
      // - 1: Executing.
      // - 2: Succeeded (Reached).
      // - 3: Paused.
      // - 4: Failed (Not connected - Busy).
      // - 5: Cancelled.
      shared_ptr<string> jobStatusName_ {};
      // The task status. Valid values:
      // 
      // - Scheduling: Scheduling (0).
      // - Executing: Executing (1).
      // - Succeeded: Reached (2).
      // - Paused: Paused (3).
      // - Failed: Not connected - Busy (4).
      // - Cancelled: Cancelled (5).
      shared_ptr<string> jobStatusString_ {};
      // The label hit status of the current outbound call.
      shared_ptr<vector<SearchTaskInfoList::Labels>> labels_ {};
      // The ringing duration, in seconds.
      shared_ptr<int32_t> recordingDuration_ {};
      // The scenario name.
      shared_ptr<string> scriptName_ {};
      // The task creation time. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> taskCreateTime_ {};
      // The reason why the task ended. Valid values:
      // - FINISHED (1): The task completed normally.
      // - CHATBOT_HANGUP_AFTER_NOANSWER (2): The robot hung up after an unrecognized intent.
      // - CHATBOT_HANGUP_AFTER_SILENCE (3): The robot hung up due to a silence timeout.
      // - CLIENT_HANGUP_AFTER_NOANSWER (4): The user hung up after an unrecognized intent.
      // - CLIENT_HANGUP (5): The user hung up without a specific reason.
      // - TRANSFER_BY_INTENT (6): The call was transferred to an agent due to a matched intent.
      // - TRANSFER_AFTER_NOANSWER (7): The call was transferred to an agent after an unrecognized intent.
      // - INO_INTERACTION (8): No interaction occurred on the user side.
      // - ERROR (9): The task was interrupted by a system exception.
      // - SPECIAL_INTERCEPT_VOICE_ASSISTANT (10): The call was intercepted by the voice assistant.
      // - SPECIAL_INTERCEPT_EXTENSION_NUMBER_TRANSFER (11): The call was intercepted during extension number transfer.
      shared_ptr<int32_t> taskEndReason_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task status. Valid values:
      // (Note: The **Succeeded** status is subdivided into specific causes. The general **Succeeded**: 1 (Connected) status is not displayed. Instead, specific subdivided causes are returned.)
      // 
      // - **Executing**: 0 (Dialing).
      // - **Succeeded**: 1 (Connected).
      // - **NoAnswer**: 2 (Not connected - No answer).
      // - **NotExist**: 3 (Not connected - Nonexistent number).
      // - **Busy**: 4 (Not connected - Busy).
      // - **Cancelled**: 5 (Not dialed - Task stopped).
      // - **Failed**: 6 (Failed).
      // - **NotConnected**: 7 (Not connected - Unreachable).
      // - **PoweredOff**: 8 (Not connected - Powered off).
      // - **OutOfService**: 9 (Not connected - Suspended).
      // - **InArrears**: 10 (Not connected - Overdue payment).
      // - **EmptyNumber**: 11 (Not dialed - Nonexistent number, not dialed).
      // - **PerDayCallCountLimit**: 12 (Not dialed - Daily limit exceeded).
      // - **ContactBlockList**: 13 (Not dialed - Blacklisted).
      // - **CallerNotRegistered**: 14 (Not dialed - Caller number not registered).
      // - **Terminated**: 15 (Not dialed - Terminated).
      // - **VerificationCancelled**: 16 (Not dialed - Canceled due to pre-call verification failure).
      // - **OutOfServiceNoCall**: 17 (Not dialed - Callee suspended, not dialed).
      // - **InArrearsNoCall**: 18 (Not dialed - Callee has overdue payment, not dialed).
      // - **CallingNumberNotExist**: 19 (Not dialed - Caller number does not exist).
      // - **SucceededFinish**: 20 (Connected - Normal completion).
      // - **SucceededChatbotHangUpAfterNoAnswer**: 21 (Connected - Robot hung up after unrecognized intent).
      // - **SucceededChatbotHangUpAfterSilence**: 22 (Connected - Hung up due to silence timeout).
      // - **SucceededClientHangUpAfterNoAnswer**: 23 (Connected - User hung up after unrecognized intent).
      // - **SucceededClientHangUp**: 24 (Connected - User hung up without reason).
      // - **SucceededTransferByIntent**: 25 (Connected - Transferred to agent due to matched intent).
      // - **SucceededTransferAfterNoAnswer**: 26 (Connected - Transferred to agent after unrecognized intent).
      // - **SucceededInoInterAction**: 27 (Connected - No interaction on user side).
      // - **SucceededError**: 28 (Connected - Interrupted by system exception).
      // - **SucceededSpecialInterceptVoiceAssistant**: 29 (Connected - Special interception - Voice assistant).
      // - **SucceededSpecialInterceptExtensionNumberTransfer**: 30 (Connected - Special interception - Extension number transfer).
      shared_ptr<int32_t> taskStatus_ {};
      // The display content of the call status. Valid values:
      // (Note: The **Succeeded** status is subdivided into specific causes. The general **Succeeded**: 1 (Connected) status is not displayed. Instead, specific subdivided causes are returned.)
      // 
      // - **Executing**: 0 (Dialing).
      // - **Succeeded**: 1 (Connected).
      // - **NoAnswer**: 2 (Not connected - No answer).
      // - **NotExist**: 3 (Not connected - Nonexistent number).
      // - **Busy**: 4 (Not connected - Busy).
      // - **Cancelled**: 5 (Not dialed - Task stopped).
      // - **Failed**: 6 (Failed).
      // - **NotConnected**: 7 (Not connected - Unreachable).
      // - **PoweredOff**: 8 (Not connected - Powered off).
      // - **OutOfService**: 9 (Not connected - Suspended).
      // - **InArrears**: 10 (Not connected - Overdue payment).
      // - **EmptyNumber**: 11 (Not dialed - Nonexistent number, not dialed).
      // - **PerDayCallCountLimit**: 12 (Not dialed - Daily limit exceeded).
      // - **ContactBlockList**: 13 (Not dialed - Blacklisted).
      // - **CallerNotRegistered**: 14 (Not dialed - Caller number not registered).
      // - **Terminated**: 15 (Not dialed - Terminated).
      // - **VerificationCancelled**: 16 (Not dialed - Canceled due to pre-call verification failure).
      // - **OutOfServiceNoCall**: 17 (Not dialed - Callee suspended, not dialed).
      // - **InArrearsNoCall**: 18 (Not dialed - Callee has overdue payment, not dialed).
      // - **CallingNumberNotExist**: 19 (Not dialed - Caller number does not exist).
      // - **SucceededFinish**: 20 (Connected - Normal completion).
      // - **SucceededChatbotHangUpAfterNoAnswer**: 21 (Connected - Robot hung up after unrecognized intent).
      // - **SucceededChatbotHangUpAfterSilence**: 22 (Connected - Hung up due to silence timeout).
      // - **SucceededClientHangUpAfterNoAnswer**: 23 (Connected - User hung up after unrecognized intent).
      // - **SucceededClientHangUp**: 24 (Connected - User hung up without reason).
      // - **SucceededTransferByIntent**: 25 (Connected - Transferred to agent due to matched intent).
      // - **SucceededTransferAfterNoAnswer**: 26 (Connected - Transferred to agent after unrecognized intent).
      // - **SucceededInoInterAction**: 27 (Connected - No interaction on user side).
      // - **SucceededError**: 28 (Connected - Interrupted by system exception).
      // - **SucceededSpecialInterceptVoiceAssistant**: 29 (Connected - Special interception - Voice assistant).
      // - **SucceededSpecialInterceptExtensionNumberTransfer**: 30 (Connected - Special interception - Extension number transfer).
      shared_ptr<string> taskStatusName_ {};
      // The task status. Valid values:
      // (Note: The **Succeeded** status is subdivided into specific causes. The general **Succeeded**: 1 (Connected) status is not displayed. Instead, specific subdivided causes are returned.)
      // 
      // - **Executing**: 0 (Dialing).
      // - **Succeeded**: 1 (Connected).
      // - **NoAnswer**: 2 (Not connected - No answer).
      // - **NotExist**: 3 (Not connected - Nonexistent number).
      // - **Busy**: 4 (Not connected - Busy).
      // - **Cancelled**: 5 (Not dialed - Task stopped).
      // - **Failed**: 6 (Failed).
      // - **NotConnected**: 7 (Not connected - Unreachable).
      // - **PoweredOff**: 8 (Not connected - Powered off).
      // - **OutOfService**: 9 (Not connected - Suspended).
      // - **InArrears**: 10 (Not connected - Overdue payment).
      // - **EmptyNumber**: 11 (Not dialed - Nonexistent number, not dialed).
      // - **PerDayCallCountLimit**: 12 (Not dialed - Daily limit exceeded).
      // - **ContactBlockList**: 13 (Not dialed - Blacklisted).
      // - **CallerNotRegistered**: 14 (Not dialed - Caller number not registered).
      // - **Terminated**: 15 (Not dialed - Terminated).
      // - **VerificationCancelled**: 16 (Not dialed - Canceled due to pre-call verification failure).
      // - **OutOfServiceNoCall**: 17 (Not dialed - Callee suspended, not dialed).
      // - **InArrearsNoCall**: 18 (Not dialed - Callee has overdue payment, not dialed).
      // - **CallingNumberNotExist**: 19 (Not dialed - Caller number does not exist).
      // - **SucceededFinish**: 20 (Connected - Normal completion).
      // - **SucceededChatbotHangUpAfterNoAnswer**: 21 (Connected - Robot hung up after unrecognized intent).
      // - **SucceededChatbotHangUpAfterSilence**: 22 (Connected - Hung up due to silence timeout).
      // - **SucceededClientHangUpAfterNoAnswer**: 23 (Connected - User hung up after unrecognized intent).
      // - **SucceededClientHangUp**: 24 (Connected - User hung up without reason).
      // - **SucceededTransferByIntent**: 25 (Connected - Transferred to agent due to matched intent).
      // - **SucceededTransferAfterNoAnswer**: 26 (Connected - Transferred to agent after unrecognized intent).
      // - **SucceededInoInterAction**: 27 (Connected - No interaction on user side).
      // - **SucceededError**: 28 (Connected - Interrupted by system exception).
      // - **SucceededSpecialInterceptVoiceAssistant**: 29 (Connected - Special interception - Voice assistant).
      // - **SucceededSpecialInterceptExtensionNumberTransfer**: 30 (Connected - Special interception - Extension number transfer).
      // - **SucceededSpecialInterceptCustomSpecialIntercept**: 31 (Connected - Special interception - Custom interception).
      // - **HighRiskSipCode**: 32 (Not dialed - High risk, not dialed).
      shared_ptr<string> taskStatusString_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The username.
      shared_ptr<string> userName_ {};
    };

    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ValueList, valueList_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->valueList_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Labels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // valueList Field Functions 
      bool hasValueList() const { return this->valueList_ != nullptr;};
      void deleteValueList() { this->valueList_ = nullptr;};
      inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
      inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
      inline Labels& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
      inline Labels& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


    protected:
      // The label name.
      shared_ptr<string> name_ {};
      // The list of label values.
      shared_ptr<vector<string>> valueList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->labels_ == nullptr && this->message_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->searchTaskInfoList_ == nullptr && this->success_ == nullptr && this->total_ == nullptr && this->variableNames_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SearchTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<SearchTaskResponseBody::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<SearchTaskResponseBody::Labels>) };
    inline vector<SearchTaskResponseBody::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<SearchTaskResponseBody::Labels>) };
    inline SearchTaskResponseBody& setLabels(const vector<SearchTaskResponseBody::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline SearchTaskResponseBody& setLabels(vector<SearchTaskResponseBody::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline SearchTaskResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTaskResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // searchTaskInfoList Field Functions 
    bool hasSearchTaskInfoList() const { return this->searchTaskInfoList_ != nullptr;};
    void deleteSearchTaskInfoList() { this->searchTaskInfoList_ = nullptr;};
    inline const vector<SearchTaskResponseBody::SearchTaskInfoList> & getSearchTaskInfoList() const { DARABONBA_PTR_GET_CONST(searchTaskInfoList_, vector<SearchTaskResponseBody::SearchTaskInfoList>) };
    inline vector<SearchTaskResponseBody::SearchTaskInfoList> getSearchTaskInfoList() { DARABONBA_PTR_GET(searchTaskInfoList_, vector<SearchTaskResponseBody::SearchTaskInfoList>) };
    inline SearchTaskResponseBody& setSearchTaskInfoList(const vector<SearchTaskResponseBody::SearchTaskInfoList> & searchTaskInfoList) { DARABONBA_PTR_SET_VALUE(searchTaskInfoList_, searchTaskInfoList) };
    inline SearchTaskResponseBody& setSearchTaskInfoList(vector<SearchTaskResponseBody::SearchTaskInfoList> && searchTaskInfoList) { DARABONBA_PTR_SET_RVALUE(searchTaskInfoList_, searchTaskInfoList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline SearchTaskResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // variableNames Field Functions 
    bool hasVariableNames() const { return this->variableNames_ != nullptr;};
    void deleteVariableNames() { this->variableNames_ = nullptr;};
    inline const vector<string> & getVariableNames() const { DARABONBA_PTR_GET_CONST(variableNames_, vector<string>) };
    inline vector<string> getVariableNames() { DARABONBA_PTR_GET(variableNames_, vector<string>) };
    inline SearchTaskResponseBody& setVariableNames(const vector<string> & variableNames) { DARABONBA_PTR_SET_VALUE(variableNames_, variableNames) };
    inline SearchTaskResponseBody& setVariableNames(vector<string> && variableNames) { DARABONBA_PTR_SET_RVALUE(variableNames_, variableNames) };


  protected:
    // The request status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The label information that can be used as filter conditions.
    // 
    // > Displays all label information with enumerated values in this job group.
    shared_ptr<vector<SearchTaskResponseBody::Labels>> labels_ {};
    // The message returned by the API operation.
    shared_ptr<string> message_ {};
    // The page number.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of tasks.
    shared_ptr<vector<SearchTaskResponseBody::SearchTaskInfoList>> searchTaskInfoList_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The total number of entries.
    shared_ptr<int64_t> total_ {};
    // The full set of label name keys.
    shared_ptr<vector<string>> variableNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
