// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJobStatusResponseBody() = default ;
    GetJobStatusResponseBody(const GetJobStatusResponseBody &) = default ;
    GetJobStatusResponseBody(GetJobStatusResponseBody &&) = default ;
    GetJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobStatusResponseBody() = default ;
    GetJobStatusResponseBody& operator=(const GetJobStatusResponseBody &) = default ;
    GetJobStatusResponseBody& operator=(GetJobStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Completed, completed_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(JobType, jobType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, JobStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Completed, completed_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(JobType, jobType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      JobStatus() = default ;
      JobStatus(const JobStatus &) = default ;
      JobStatus(JobStatus &&) = default ;
      JobStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobStatus() = default ;
      JobStatus& operator=(const JobStatus &) = default ;
      JobStatus& operator=(JobStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->completed_ == nullptr
        && this->createTime_ == nullptr && this->error_ == nullptr && this->jobId_ == nullptr && this->jobType_ == nullptr && this->status_ == nullptr; };
      // completed Field Functions 
      bool hasCompleted() const { return this->completed_ != nullptr;};
      void deleteCompleted() { this->completed_ = nullptr;};
      inline string getCompleted() const { DARABONBA_PTR_GET_DEFAULT(completed_, "") };
      inline JobStatus& setCompleted(string completed) { DARABONBA_PTR_SET_VALUE(completed_, completed) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline JobStatus& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline JobStatus& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobStatus& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // jobType Field Functions 
      bool hasJobType() const { return this->jobType_ != nullptr;};
      void deleteJobType() { this->jobType_ = nullptr;};
      inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
      inline JobStatus& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline JobStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // Indicates whether the asynchronous task is complete. Valid values: True False
      shared_ptr<string> completed_ {};
      // The time when the asynchronous task was created.
      shared_ptr<string> createTime_ {};
      // The error message returned if the asynchronous task fails.
      shared_ptr<string> error_ {};
      // The ID of the asynchronous task.
      shared_ptr<string> jobId_ {};
      // The type of the asynchronous task. Valid values:
      // 
      // *   **Create**: The asynchronous task is used to create an object.
      // *   **Update**: The asynchronous task is used to update an object.
      // *   **Cancel**: The asynchronous task is used to cancel an operation.
      shared_ptr<string> jobType_ {};
      // The status of the asynchronous task. Valid values:
      // 
      // *   **Success**
      // *   **Fail**
      // *   **Cancel**
      // *   **Running**
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->jobStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline const GetJobStatusResponseBody::JobStatus & getJobStatus() const { DARABONBA_PTR_GET_CONST(jobStatus_, GetJobStatusResponseBody::JobStatus) };
    inline GetJobStatusResponseBody::JobStatus getJobStatus() { DARABONBA_PTR_GET(jobStatus_, GetJobStatusResponseBody::JobStatus) };
    inline GetJobStatusResponseBody& setJobStatus(const GetJobStatusResponseBody::JobStatus & jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };
    inline GetJobStatusResponseBody& setJobStatus(GetJobStatusResponseBody::JobStatus && jobStatus) { DARABONBA_PTR_SET_RVALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The real-time status information of the asynchronous task.
    shared_ptr<GetJobStatusResponseBody::JobStatus> jobStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
