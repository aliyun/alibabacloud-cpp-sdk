// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBSWITHRESULTREQUEST_HPP_
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
  class QueryJobsWithResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobsWithResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndActualTimeFilter, endActualTimeFilter_);
      DARABONBA_PTR_TO_JSON(HasAnsweredFilter, hasAnsweredFilter_);
      DARABONBA_PTR_TO_JSON(HasHangUpByRejectionFilter, hasHangUpByRejectionFilter_);
      DARABONBA_PTR_TO_JSON(HasReachedEndOfFlowFilter, hasReachedEndOfFlowFilter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobFailureReasonsFilter, jobFailureReasonsFilter_);
      DARABONBA_PTR_TO_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_TO_JSON(JobStatusFilter, jobStatusFilter_);
      DARABONBA_PTR_TO_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryText, queryText_);
      DARABONBA_PTR_TO_JSON(StartActualTimeFilter, startActualTimeFilter_);
      DARABONBA_PTR_TO_JSON(TaskStatusFilter, taskStatusFilter_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobsWithResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndActualTimeFilter, endActualTimeFilter_);
      DARABONBA_PTR_FROM_JSON(HasAnsweredFilter, hasAnsweredFilter_);
      DARABONBA_PTR_FROM_JSON(HasHangUpByRejectionFilter, hasHangUpByRejectionFilter_);
      DARABONBA_PTR_FROM_JSON(HasReachedEndOfFlowFilter, hasReachedEndOfFlowFilter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobFailureReasonsFilter, jobFailureReasonsFilter_);
      DARABONBA_PTR_FROM_JSON(JobGroupId, jobGroupId_);
      DARABONBA_PTR_FROM_JSON(JobStatusFilter, jobStatusFilter_);
      DARABONBA_PTR_FROM_JSON(LabelsJson, labelsJson_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryText, queryText_);
      DARABONBA_PTR_FROM_JSON(StartActualTimeFilter, startActualTimeFilter_);
      DARABONBA_PTR_FROM_JSON(TaskStatusFilter, taskStatusFilter_);
    };
    QueryJobsWithResultRequest() = default ;
    QueryJobsWithResultRequest(const QueryJobsWithResultRequest &) = default ;
    QueryJobsWithResultRequest(QueryJobsWithResultRequest &&) = default ;
    QueryJobsWithResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobsWithResultRequest() = default ;
    QueryJobsWithResultRequest& operator=(const QueryJobsWithResultRequest &) = default ;
    QueryJobsWithResultRequest& operator=(QueryJobsWithResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endActualTimeFilter_ == nullptr
        && this->hasAnsweredFilter_ == nullptr && this->hasHangUpByRejectionFilter_ == nullptr && this->hasReachedEndOfFlowFilter_ == nullptr && this->instanceId_ == nullptr && this->jobFailureReasonsFilter_ == nullptr
        && this->jobGroupId_ == nullptr && this->jobStatusFilter_ == nullptr && this->labelsJson_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->queryText_ == nullptr && this->startActualTimeFilter_ == nullptr && this->taskStatusFilter_ == nullptr; };
    // endActualTimeFilter Field Functions 
    bool hasEndActualTimeFilter() const { return this->endActualTimeFilter_ != nullptr;};
    void deleteEndActualTimeFilter() { this->endActualTimeFilter_ = nullptr;};
    inline int64_t getEndActualTimeFilter() const { DARABONBA_PTR_GET_DEFAULT(endActualTimeFilter_, 0L) };
    inline QueryJobsWithResultRequest& setEndActualTimeFilter(int64_t endActualTimeFilter) { DARABONBA_PTR_SET_VALUE(endActualTimeFilter_, endActualTimeFilter) };


    // hasAnsweredFilter Field Functions 
    bool hasHasAnsweredFilter() const { return this->hasAnsweredFilter_ != nullptr;};
    void deleteHasAnsweredFilter() { this->hasAnsweredFilter_ = nullptr;};
    inline bool getHasAnsweredFilter() const { DARABONBA_PTR_GET_DEFAULT(hasAnsweredFilter_, false) };
    inline QueryJobsWithResultRequest& setHasAnsweredFilter(bool hasAnsweredFilter) { DARABONBA_PTR_SET_VALUE(hasAnsweredFilter_, hasAnsweredFilter) };


    // hasHangUpByRejectionFilter Field Functions 
    bool hasHasHangUpByRejectionFilter() const { return this->hasHangUpByRejectionFilter_ != nullptr;};
    void deleteHasHangUpByRejectionFilter() { this->hasHangUpByRejectionFilter_ = nullptr;};
    inline bool getHasHangUpByRejectionFilter() const { DARABONBA_PTR_GET_DEFAULT(hasHangUpByRejectionFilter_, false) };
    inline QueryJobsWithResultRequest& setHasHangUpByRejectionFilter(bool hasHangUpByRejectionFilter) { DARABONBA_PTR_SET_VALUE(hasHangUpByRejectionFilter_, hasHangUpByRejectionFilter) };


    // hasReachedEndOfFlowFilter Field Functions 
    bool hasHasReachedEndOfFlowFilter() const { return this->hasReachedEndOfFlowFilter_ != nullptr;};
    void deleteHasReachedEndOfFlowFilter() { this->hasReachedEndOfFlowFilter_ = nullptr;};
    inline bool getHasReachedEndOfFlowFilter() const { DARABONBA_PTR_GET_DEFAULT(hasReachedEndOfFlowFilter_, false) };
    inline QueryJobsWithResultRequest& setHasReachedEndOfFlowFilter(bool hasReachedEndOfFlowFilter) { DARABONBA_PTR_SET_VALUE(hasReachedEndOfFlowFilter_, hasReachedEndOfFlowFilter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryJobsWithResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobFailureReasonsFilter Field Functions 
    bool hasJobFailureReasonsFilter() const { return this->jobFailureReasonsFilter_ != nullptr;};
    void deleteJobFailureReasonsFilter() { this->jobFailureReasonsFilter_ = nullptr;};
    inline string getJobFailureReasonsFilter() const { DARABONBA_PTR_GET_DEFAULT(jobFailureReasonsFilter_, "") };
    inline QueryJobsWithResultRequest& setJobFailureReasonsFilter(string jobFailureReasonsFilter) { DARABONBA_PTR_SET_VALUE(jobFailureReasonsFilter_, jobFailureReasonsFilter) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string getJobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline QueryJobsWithResultRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobStatusFilter Field Functions 
    bool hasJobStatusFilter() const { return this->jobStatusFilter_ != nullptr;};
    void deleteJobStatusFilter() { this->jobStatusFilter_ = nullptr;};
    inline string getJobStatusFilter() const { DARABONBA_PTR_GET_DEFAULT(jobStatusFilter_, "") };
    inline QueryJobsWithResultRequest& setJobStatusFilter(string jobStatusFilter) { DARABONBA_PTR_SET_VALUE(jobStatusFilter_, jobStatusFilter) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline const vector<string> & getLabelsJson() const { DARABONBA_PTR_GET_CONST(labelsJson_, vector<string>) };
    inline vector<string> getLabelsJson() { DARABONBA_PTR_GET(labelsJson_, vector<string>) };
    inline QueryJobsWithResultRequest& setLabelsJson(const vector<string> & labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };
    inline QueryJobsWithResultRequest& setLabelsJson(vector<string> && labelsJson) { DARABONBA_PTR_SET_RVALUE(labelsJson_, labelsJson) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryJobsWithResultRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryJobsWithResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryText Field Functions 
    bool hasQueryText() const { return this->queryText_ != nullptr;};
    void deleteQueryText() { this->queryText_ = nullptr;};
    inline string getQueryText() const { DARABONBA_PTR_GET_DEFAULT(queryText_, "") };
    inline QueryJobsWithResultRequest& setQueryText(string queryText) { DARABONBA_PTR_SET_VALUE(queryText_, queryText) };


    // startActualTimeFilter Field Functions 
    bool hasStartActualTimeFilter() const { return this->startActualTimeFilter_ != nullptr;};
    void deleteStartActualTimeFilter() { this->startActualTimeFilter_ = nullptr;};
    inline int64_t getStartActualTimeFilter() const { DARABONBA_PTR_GET_DEFAULT(startActualTimeFilter_, 0L) };
    inline QueryJobsWithResultRequest& setStartActualTimeFilter(int64_t startActualTimeFilter) { DARABONBA_PTR_SET_VALUE(startActualTimeFilter_, startActualTimeFilter) };


    // taskStatusFilter Field Functions 
    bool hasTaskStatusFilter() const { return this->taskStatusFilter_ != nullptr;};
    void deleteTaskStatusFilter() { this->taskStatusFilter_ = nullptr;};
    inline string getTaskStatusFilter() const { DARABONBA_PTR_GET_DEFAULT(taskStatusFilter_, "") };
    inline QueryJobsWithResultRequest& setTaskStatusFilter(string taskStatusFilter) { DARABONBA_PTR_SET_VALUE(taskStatusFilter_, taskStatusFilter) };


  protected:
    // The filter condition for the call end time.
    shared_ptr<int64_t> endActualTimeFilter_ {};
    // Specifies whether the call is answered.
    shared_ptr<bool> hasAnsweredFilter_ {};
    // Specifies whether the call is hung up due to rejection.
    shared_ptr<bool> hasHangUpByRejectionFilter_ {};
    // Specifies whether the call has reached the end of the flow.
    shared_ptr<bool> hasReachedEndOfFlowFilter_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The list of job failure reasons.
    shared_ptr<string> jobFailureReasonsFilter_ {};
    // The ID of the job group.
    // 
    // This parameter is required.
    shared_ptr<string> jobGroupId_ {};
    // The job status filter. Valid values:
    // - Scheduling: Scheduling in progress.
    // - Executing: Executing in progress.
    // - Succeeded: Ended - Reached.
    // - Paused: Paused.
    // - Failed: Ended - Not reached.
    // - Cancelled: Cancelled - Manual intervention.
    shared_ptr<string> jobStatusFilter_ {};
    // The label-based filter condition for calls.
    // 
    // >This condition supports filtering only by labels that have specific enumerated label values configured, that is, labels with specific label values configured in large language model scenarios.
    shared_ptr<vector<string>> labelsJson_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The search content. You can search by phone number.
    shared_ptr<string> queryText_ {};
    // The filter condition for the call start time.
    shared_ptr<int64_t> startActualTimeFilter_ {};
    // The call status. Example: ["Executing","Succeeded"]. Separate multiple values with commas.
    // 
    // Valid values:
    // 
    // (Note: The **Succeeded** status has been subdivided into specific reasons. The general **Succeeded**: 1 (Connected) status is no longer returned. Instead, specific sub-reason types are returned.)
    // 
    // - **Executing**: 0 (Calling).
    // - **Succeeded**: 1 (Connected).
    // - **NoAnswer**: 2 (Not connected - No answer).
    // - **NotExist**: 3 (Not connected - Nonexistent number).
    // - **Busy**: 4 (Not connected - Busy).
    // - **Cancelled**: 5 (Not dialed - Task stopped).
    // - **Failed**: 6 (Failed).
    // - **NotConnected**: 7 (Not connected - Unreachable).
    // - **PoweredOff**: 8 (Not connected - Powered off).
    // - **OutOfService**: 9 (Not connected - Callee out of service).
    // - **InArrears**: 10 (Not connected - Callee has overdue payment).
    // - **EmptyNumber**: 11 (Not dialed - Nonexistent number, no outbound call).
    // - **PerDayCallCountLimit**: 12 (Not dialed - Daily limit exceeded).
    // - **ContactBlockList**: 13 (Not dialed - Blacklisted).
    // - **CallerNotRegistered**: 14 (Not dialed - Caller number not registered).
    // - **Terminated**: 15 (Not dialed - Terminated).
    // - **VerificationCancelled**: 16 (Not dialed - Pre-call verification failed, cancelled).
    // - **OutOfServiceNoCall**: 17 (Not dialed - Callee out of service, no outbound call).
    // - **InArrearsNoCall**: 18 (Not dialed - Callee has overdue payment, no outbound call).
    // - **CallingNumberNotExist**: 19 (Not dialed - Caller number does not exist).
    // - **SucceededFinish**: 20 (Connected - Normal completion).
    // - **SucceededChatbotHangUpAfterNoAnswer**: 21 (Connected - Robot hung up after no recognition).
    // - **SucceededChatbotHangUpAfterSilence**: 22 (Connected - Hung up due to silence timeout).
    // - **SucceededClientHangUpAfterNoAnswer**: 23 (Connected - User hung up after no recognition).
    // - **SucceededClientHangUp**: 24 (Connected - User hung up without reason).
    // - **SucceededTransferByIntent**: 25 (Connected - Transferred to agent by intent match).
    // - **SucceededTransferAfterNoAnswer**: 26 (Connected - Transferred to agent after no recognition).
    // - **SucceededInoInterAction**: 27 (Connected - No interaction from user).
    // - **SucceededError**: 28 (Connected - System exception interruption).
    // - **SucceededSpecialInterceptVoiceAssistant**: 29 (Connected - Special intercept - Voice assistant).
    // - **SucceededSpecialInterceptExtensionNumberTransfer**: 30 (Connected - Special intercept - Extension number transfer).
    // - **SucceededSpecialInterceptCustomSpecialIntercept**: 31 (Connected - Special intercept - Custom intercept).
    // - **HighRiskSipCode**: 32 (Not dialed - High risk, no outbound call).
    shared_ptr<string> taskStatusFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
