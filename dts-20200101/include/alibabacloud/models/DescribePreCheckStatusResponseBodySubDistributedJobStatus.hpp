// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYSUBDISTRIBUTEDJOBSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKSTATUSRESPONSEBODYSUBDISTRIBUTEDJOBSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckStatusResponseBodySubDistributedJobStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckStatusResponseBodySubDistributedJobStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckStatusResponseBodySubDistributedJobStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorItem, errorItem_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobProgress, jobProgress_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribePreCheckStatusResponseBodySubDistributedJobStatus() = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatus(const DescribePreCheckStatusResponseBodySubDistributedJobStatus &) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatus(DescribePreCheckStatusResponseBodySubDistributedJobStatus &&) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckStatusResponseBodySubDistributedJobStatus() = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatus& operator=(const DescribePreCheckStatusResponseBodySubDistributedJobStatus &) = default ;
    DescribePreCheckStatusResponseBodySubDistributedJobStatus& operator=(DescribePreCheckStatusResponseBodySubDistributedJobStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->errorItem_ != nullptr && this->jobId_ != nullptr && this->jobName_ != nullptr && this->jobProgress_ != nullptr && this->state_ != nullptr
        && this->total_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorItem Field Functions 
    bool hasErrorItem() const { return this->errorItem_ != nullptr;};
    void deleteErrorItem() { this->errorItem_ = nullptr;};
    inline int32_t errorItem() const { DARABONBA_PTR_GET_DEFAULT(errorItem_, 0) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setErrorItem(int32_t errorItem) { DARABONBA_PTR_SET_VALUE(errorItem_, errorItem) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobProgress Field Functions 
    bool hasJobProgress() const { return this->jobProgress_ != nullptr;};
    void deleteJobProgress() { this->jobProgress_ = nullptr;};
    inline const vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress> & jobProgress() const { DARABONBA_PTR_GET_CONST(jobProgress_, vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress>) };
    inline vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress> jobProgress() { DARABONBA_PTR_GET(jobProgress_, vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress>) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setJobProgress(const vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress> & jobProgress) { DARABONBA_PTR_SET_VALUE(jobProgress_, jobProgress) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setJobProgress(vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress> && jobProgress) { DARABONBA_PTR_SET_RVALUE(jobProgress_, jobProgress) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribePreCheckStatusResponseBodySubDistributedJobStatus& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The task code that indicates the type of the subtask. Valid values:
    // 
    // *   **01**: precheck.
    // *   **02**: schema migration or initial schema synchronization.
    // *   **03**: full data migration or initial full data synchronization.
    // *   **04**: incremental data migration or synchronization.
    std::shared_ptr<string> code_ = nullptr;
    // The number of subtasks that failed.
    std::shared_ptr<int32_t> errorItem_ = nullptr;
    // The subtask ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of distributed subtasks associated with the subtask.
    std::shared_ptr<string> jobName_ = nullptr;
    // The subtasks and the progress of each subtask.
    std::shared_ptr<vector<Models::DescribePreCheckStatusResponseBodySubDistributedJobStatusJobProgress>> jobProgress_ = nullptr;
    // The status of the subtask. Valid values:
    // 
    // *   **NotStarted**: The subtask is not started.
    // *   **Suspending**: The subtask is paused.
    // *   **Checking**: The subtask is being checked.
    // *   **Migrating**: The subtask is in progress. Data is being migrated.
    // *   **Failed**: The subtask failed.
    // *   **Catched**: The subtask is in progress. Incremental data is being migrated or synchronized.
    // *   **Finished**: The subtask is complete.
    std::shared_ptr<string> state_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
