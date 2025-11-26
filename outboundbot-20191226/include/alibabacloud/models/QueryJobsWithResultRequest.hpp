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
        && return this->hasAnsweredFilter_ == nullptr && return this->hasHangUpByRejectionFilter_ == nullptr && return this->hasReachedEndOfFlowFilter_ == nullptr && return this->instanceId_ == nullptr && return this->jobFailureReasonsFilter_ == nullptr
        && return this->jobGroupId_ == nullptr && return this->jobStatusFilter_ == nullptr && return this->labelsJson_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->queryText_ == nullptr && return this->startActualTimeFilter_ == nullptr && return this->taskStatusFilter_ == nullptr; };
    // endActualTimeFilter Field Functions 
    bool hasEndActualTimeFilter() const { return this->endActualTimeFilter_ != nullptr;};
    void deleteEndActualTimeFilter() { this->endActualTimeFilter_ = nullptr;};
    inline int64_t endActualTimeFilter() const { DARABONBA_PTR_GET_DEFAULT(endActualTimeFilter_, 0L) };
    inline QueryJobsWithResultRequest& setEndActualTimeFilter(int64_t endActualTimeFilter) { DARABONBA_PTR_SET_VALUE(endActualTimeFilter_, endActualTimeFilter) };


    // hasAnsweredFilter Field Functions 
    bool hasHasAnsweredFilter() const { return this->hasAnsweredFilter_ != nullptr;};
    void deleteHasAnsweredFilter() { this->hasAnsweredFilter_ = nullptr;};
    inline bool hasAnsweredFilter() const { DARABONBA_PTR_GET_DEFAULT(hasAnsweredFilter_, false) };
    inline QueryJobsWithResultRequest& setHasAnsweredFilter(bool hasAnsweredFilter) { DARABONBA_PTR_SET_VALUE(hasAnsweredFilter_, hasAnsweredFilter) };


    // hasHangUpByRejectionFilter Field Functions 
    bool hasHasHangUpByRejectionFilter() const { return this->hasHangUpByRejectionFilter_ != nullptr;};
    void deleteHasHangUpByRejectionFilter() { this->hasHangUpByRejectionFilter_ = nullptr;};
    inline bool hasHangUpByRejectionFilter() const { DARABONBA_PTR_GET_DEFAULT(hasHangUpByRejectionFilter_, false) };
    inline QueryJobsWithResultRequest& setHasHangUpByRejectionFilter(bool hasHangUpByRejectionFilter) { DARABONBA_PTR_SET_VALUE(hasHangUpByRejectionFilter_, hasHangUpByRejectionFilter) };


    // hasReachedEndOfFlowFilter Field Functions 
    bool hasHasReachedEndOfFlowFilter() const { return this->hasReachedEndOfFlowFilter_ != nullptr;};
    void deleteHasReachedEndOfFlowFilter() { this->hasReachedEndOfFlowFilter_ = nullptr;};
    inline bool hasReachedEndOfFlowFilter() const { DARABONBA_PTR_GET_DEFAULT(hasReachedEndOfFlowFilter_, false) };
    inline QueryJobsWithResultRequest& setHasReachedEndOfFlowFilter(bool hasReachedEndOfFlowFilter) { DARABONBA_PTR_SET_VALUE(hasReachedEndOfFlowFilter_, hasReachedEndOfFlowFilter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryJobsWithResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobFailureReasonsFilter Field Functions 
    bool hasJobFailureReasonsFilter() const { return this->jobFailureReasonsFilter_ != nullptr;};
    void deleteJobFailureReasonsFilter() { this->jobFailureReasonsFilter_ = nullptr;};
    inline string jobFailureReasonsFilter() const { DARABONBA_PTR_GET_DEFAULT(jobFailureReasonsFilter_, "") };
    inline QueryJobsWithResultRequest& setJobFailureReasonsFilter(string jobFailureReasonsFilter) { DARABONBA_PTR_SET_VALUE(jobFailureReasonsFilter_, jobFailureReasonsFilter) };


    // jobGroupId Field Functions 
    bool hasJobGroupId() const { return this->jobGroupId_ != nullptr;};
    void deleteJobGroupId() { this->jobGroupId_ = nullptr;};
    inline string jobGroupId() const { DARABONBA_PTR_GET_DEFAULT(jobGroupId_, "") };
    inline QueryJobsWithResultRequest& setJobGroupId(string jobGroupId) { DARABONBA_PTR_SET_VALUE(jobGroupId_, jobGroupId) };


    // jobStatusFilter Field Functions 
    bool hasJobStatusFilter() const { return this->jobStatusFilter_ != nullptr;};
    void deleteJobStatusFilter() { this->jobStatusFilter_ = nullptr;};
    inline string jobStatusFilter() const { DARABONBA_PTR_GET_DEFAULT(jobStatusFilter_, "") };
    inline QueryJobsWithResultRequest& setJobStatusFilter(string jobStatusFilter) { DARABONBA_PTR_SET_VALUE(jobStatusFilter_, jobStatusFilter) };


    // labelsJson Field Functions 
    bool hasLabelsJson() const { return this->labelsJson_ != nullptr;};
    void deleteLabelsJson() { this->labelsJson_ = nullptr;};
    inline const vector<string> & labelsJson() const { DARABONBA_PTR_GET_CONST(labelsJson_, vector<string>) };
    inline vector<string> labelsJson() { DARABONBA_PTR_GET(labelsJson_, vector<string>) };
    inline QueryJobsWithResultRequest& setLabelsJson(const vector<string> & labelsJson) { DARABONBA_PTR_SET_VALUE(labelsJson_, labelsJson) };
    inline QueryJobsWithResultRequest& setLabelsJson(vector<string> && labelsJson) { DARABONBA_PTR_SET_RVALUE(labelsJson_, labelsJson) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline QueryJobsWithResultRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryJobsWithResultRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryText Field Functions 
    bool hasQueryText() const { return this->queryText_ != nullptr;};
    void deleteQueryText() { this->queryText_ = nullptr;};
    inline string queryText() const { DARABONBA_PTR_GET_DEFAULT(queryText_, "") };
    inline QueryJobsWithResultRequest& setQueryText(string queryText) { DARABONBA_PTR_SET_VALUE(queryText_, queryText) };


    // startActualTimeFilter Field Functions 
    bool hasStartActualTimeFilter() const { return this->startActualTimeFilter_ != nullptr;};
    void deleteStartActualTimeFilter() { this->startActualTimeFilter_ = nullptr;};
    inline int64_t startActualTimeFilter() const { DARABONBA_PTR_GET_DEFAULT(startActualTimeFilter_, 0L) };
    inline QueryJobsWithResultRequest& setStartActualTimeFilter(int64_t startActualTimeFilter) { DARABONBA_PTR_SET_VALUE(startActualTimeFilter_, startActualTimeFilter) };


    // taskStatusFilter Field Functions 
    bool hasTaskStatusFilter() const { return this->taskStatusFilter_ != nullptr;};
    void deleteTaskStatusFilter() { this->taskStatusFilter_ = nullptr;};
    inline string taskStatusFilter() const { DARABONBA_PTR_GET_DEFAULT(taskStatusFilter_, "") };
    inline QueryJobsWithResultRequest& setTaskStatusFilter(string taskStatusFilter) { DARABONBA_PTR_SET_VALUE(taskStatusFilter_, taskStatusFilter) };


  protected:
    std::shared_ptr<int64_t> endActualTimeFilter_ = nullptr;
    std::shared_ptr<bool> hasAnsweredFilter_ = nullptr;
    std::shared_ptr<bool> hasHangUpByRejectionFilter_ = nullptr;
    std::shared_ptr<bool> hasReachedEndOfFlowFilter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobFailureReasonsFilter_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobGroupId_ = nullptr;
    std::shared_ptr<string> jobStatusFilter_ = nullptr;
    std::shared_ptr<vector<string>> labelsJson_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> queryText_ = nullptr;
    std::shared_ptr<int64_t> startActualTimeFilter_ = nullptr;
    std::shared_ptr<string> taskStatusFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
