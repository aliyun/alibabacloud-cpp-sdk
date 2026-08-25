// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(jobType, jobType_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(jobType, jobType_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskType, taskType_);
    };
    ListJobsRequest() = default ;
    ListJobsRequest(const ListJobsRequest &) = default ;
    ListJobsRequest(ListJobsRequest &&) = default ;
    ListJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsRequest() = default ;
    ListJobsRequest& operator=(const ListJobsRequest &) = default ;
    ListJobsRequest& operator=(ListJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobType_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->taskType_ == nullptr; };
    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobsRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListJobsRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The job type.
    shared_ptr<string> jobType_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of results returned per page. Default value: 20. Minimum value: 1. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The job status. Valid values:
    // 
    // - Pending: The initial status after the job is created.
    // - PlanQueued: After the job is created, if no workflow is available, the job is queued.
    // - Planning: The resource job is in the Plan execution phase.
    // - ConfigProactiveInProgress: Compliance pre-check is in progress. The account must have the compliance pre-check feature enabled.
    // - ConfigProactiveSuccess: Compliance pre-check succeeded. The account must have the compliance pre-check feature enabled.
    // - Planned: The resource job has completed Plan execution.
    // - PlannedAndFinished: After Plan execution is completed, no diff is found. This is a final status.
    // - Confirmed: The resource job is waiting for confirmation after Plan execution is completed.
    // - ApplyQueued: During job execution, if no workflow is available, the job is queued.
    // - Applying: The resource job is in the Apply execution phase.
    // - Applied: The resource job has completed Apply execution. This is a final status.
    // - Errored: The job execution encountered an error. This is a final status.
    // - Canceled: The job execution was canceled. This is a final status.
    // - Discarded: The plan of the resource job was discarded. This is a final status.
    // - ConfigProactiveFailure: Compliance pre-check failed. The account must have the compliance pre-check feature enabled.
    shared_ptr<string> status_ {};
    // The task type. Valid values:
    // 
    // - Task: Regular task (default).
    // - SceneTestingTask: Scenario-based testing task.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
