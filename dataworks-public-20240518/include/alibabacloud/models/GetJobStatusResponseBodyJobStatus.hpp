// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBSTATUSRESPONSEBODYJOBSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBSTATUSRESPONSEBODYJOBSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetJobStatusResponseBodyJobStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobStatusResponseBodyJobStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Completed, completed_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobStatusResponseBodyJobStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Completed, completed_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetJobStatusResponseBodyJobStatus() = default ;
    GetJobStatusResponseBodyJobStatus(const GetJobStatusResponseBodyJobStatus &) = default ;
    GetJobStatusResponseBodyJobStatus(GetJobStatusResponseBodyJobStatus &&) = default ;
    GetJobStatusResponseBodyJobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobStatusResponseBodyJobStatus() = default ;
    GetJobStatusResponseBodyJobStatus& operator=(const GetJobStatusResponseBodyJobStatus &) = default ;
    GetJobStatusResponseBodyJobStatus& operator=(GetJobStatusResponseBodyJobStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completed_ == nullptr
        && return this->createTime_ == nullptr && return this->error_ == nullptr && return this->jobId_ == nullptr && return this->jobType_ == nullptr && return this->status_ == nullptr; };
    // completed Field Functions 
    bool hasCompleted() const { return this->completed_ != nullptr;};
    void deleteCompleted() { this->completed_ = nullptr;};
    inline string completed() const { DARABONBA_PTR_GET_DEFAULT(completed_, "") };
    inline GetJobStatusResponseBodyJobStatus& setCompleted(string completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetJobStatusResponseBodyJobStatus& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline GetJobStatusResponseBodyJobStatus& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobStatusResponseBodyJobStatus& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobStatusResponseBodyJobStatus& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetJobStatusResponseBodyJobStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the asynchronous task is complete. Valid values: True False
    std::shared_ptr<string> completed_ = nullptr;
    // The time when the asynchronous task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error message returned if the asynchronous task fails.
    std::shared_ptr<string> error_ = nullptr;
    // The ID of the asynchronous task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The type of the asynchronous task. Valid values:
    // 
    // *   **Create**: The asynchronous task is used to create an object.
    // *   **Update**: The asynchronous task is used to update an object.
    // *   **Cancel**: The asynchronous task is used to cancel an operation.
    std::shared_ptr<string> jobType_ = nullptr;
    // The status of the asynchronous task. Valid values:
    // 
    // *   **Success**
    // *   **Fail**
    // *   **Cancel**
    // *   **Running**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
