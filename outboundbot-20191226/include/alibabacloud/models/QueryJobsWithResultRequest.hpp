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
    // Filters for calls that ended on or before the specified time. Specify the time as a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> endActualTimeFilter_ {};
    // Filters jobs by whether the call was answered.
    shared_ptr<bool> hasAnsweredFilter_ {};
    // Filters jobs by whether the call was disconnected due to a rejection.
    shared_ptr<bool> hasHangUpByRejectionFilter_ {};
    // Filters jobs by whether the call flow was completed.
    shared_ptr<bool> hasReachedEndOfFlowFilter_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The job failure reasons to filter by.
    shared_ptr<string> jobFailureReasonsFilter_ {};
    // The ID of the job group.
    // 
    // This parameter is required.
    shared_ptr<string> jobGroupId_ {};
    // The job status to filter by. Valid values:
    // 
    // - `Scheduling`: The job is scheduled and awaiting execution.
    // 
    // - `Executing`: The job is in progress.
    // 
    // - `Succeeded`: The job is completed and the contact was reached.
    // 
    // - `Paused`: The job is paused.
    // 
    // - `Failed`: The job completed but failed to reach the contact.
    // 
    // - `Cancelled`: The job was canceled by a user.
    shared_ptr<string> jobStatusFilter_ {};
    // The filter conditions for calls, based on their labels.
    // 
    // > This filter applies only to labels that are configured with a predefined set of values (enumerated values). These labels are typically used in large model scenarios.
    shared_ptr<vector<string>> labelsJson_ {};
    // The page number.
    // 
    // >Notice: 
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size
    // >Notice: This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The search query for a specific job, such as the contact\\"s phone number.
    shared_ptr<string> queryText_ {};
    // Filters for calls that started on or after the specified time. Specify the time as a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> startActualTimeFilter_ {};
    // The call statuses to filter by. You can specify multiple statuses as a JSON array of strings, such as `["Executing", "Succeeded"]`.
    // Valid values:
    // (Note: The **Succeeded** status is subdivided into more specific reasons. The general **Succeeded** (1: Connected) status is no longer returned. Instead, one of the more specific sub-statuses is returned.)
    // 
    // - **Executing** (0): The call is being placed.
    // 
    // - **Succeeded** (1): The call was connected.
    // 
    // - **NoAnswer** (2): Not connected - No answer.
    // 
    // - **NotExist** (3): Not connected - The dialed number does not exist.
    // 
    // - **Busy** (4): Not connected - The line was busy.
    // 
    // - **Cancelled** (5): Not placed - The job was stopped before the call could be dialed.
    // 
    // - **Failed** (6): The call failed.
    // 
    // - **NotConnected** (7): Not connected - The call could not be connected.
    // 
    // - **PoweredOff** (8): Not connected - The recipient\\"s phone was powered off.
    // 
    // - **OutOfService** (9): Not connected - The recipient\\"s number is out of service.
    // 
    // - **InArrears** (10): Not connected - The recipient\\"s account is in arrears.
    // 
    // - **EmptyNumber** (11): Not placed - The number was identified as an empty number and was not dialed.
    // 
    // - **PerDayCallCountLimit** (12): Not placed - The daily call limit was reached.
    // 
    // - **ContactBlockList** (13): Not placed - The number is on a blocklist.
    // 
    // - **CallerNotRegistered** (14): Not placed - The calling number is not registered.
    // 
    // - **Terminated** (15): Not placed - The call was terminated.
    // 
    // - **VerificationCancelled** (16): Not placed - Canceled after failing a pre-call verification.
    // 
    // - **OutOfServiceNoCall** (17): Not placed - The number is out of service and was not dialed.
    // 
    // - **InArrearsNoCall** (18): Not placed - The recipient is in arrears and was not dialed.
    // 
    // - **CallingNumberNotExist** (19): Not placed - The calling number does not exist.
    // 
    // - **SucceededFinish** (20): Connected - The call completed normally.
    // 
    // - **SucceededChatbotHangUpAfterNoAnswer** (21): Connected - The chatbot hung up after a rejection.
    // 
    // - **SucceededChatbotHangUpAfterSilence** (22): Connected - The chatbot hung up due to a silence timeout.
    // 
    // - **SucceededClientHangUpAfterNoAnswer** (23): Connected - The user hung up after a rejection.
    // 
    // - **SucceededClientHangUp** (24): Connected - The user hung up for no specific reason.
    // 
    // - **SucceededTransferByIntent** (25): Connected - The call was transferred to an agent based on user intent.
    // 
    // - **SucceededTransferAfterNoAnswer** (26): Connected - The call was transferred to an agent after a rejection.
    // 
    // - **SucceededInoInterAction** (27): Connected - No interaction from the user.
    // 
    // - **SucceededError** (28): Connected - The call was interrupted by a system error.
    // 
    // - **SucceededSpecialInterceptVoiceAssistant** (29): Connected - Intercepted by a voice assistant.
    // 
    // - **SucceededSpecialInterceptExtensionNumberTransfer** (30): Connected - Intercepted for an extension number transfer.
    // 
    // - **SucceededSpecialInterceptCustomSpecialIntercept** (31): Connected - Intercepted by a custom rule.
    // 
    // - **HighRiskSipCode** (32): Not placed - High-risk SIP code.
    shared_ptr<string> taskStatusFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
