// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DeleteJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(JobScheduler, jobScheduler_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
    };
    DeleteJobsRequest() = default ;
    DeleteJobsRequest(const DeleteJobsRequest &) = default ;
    DeleteJobsRequest(DeleteJobsRequest &&) = default ;
    DeleteJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobsRequest() = default ;
    DeleteJobsRequest& operator=(const DeleteJobsRequest &) = default ;
    DeleteJobsRequest& operator=(DeleteJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class JobSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobSpec& obj) { 
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(TaskSpec, taskSpec_);
      };
      friend void from_json(const Darabonba::Json& j, JobSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(TaskSpec, taskSpec_);
      };
      JobSpec() = default ;
      JobSpec(const JobSpec &) = default ;
      JobSpec(JobSpec &&) = default ;
      JobSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobSpec() = default ;
      JobSpec& operator=(const JobSpec &) = default ;
      JobSpec& operator=(JobSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskSpec& obj) { 
          DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        };
        friend void from_json(const Darabonba::Json& j, TaskSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        };
        TaskSpec() = default ;
        TaskSpec(const TaskSpec &) = default ;
        TaskSpec(TaskSpec &&) = default ;
        TaskSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskSpec() = default ;
        TaskSpec& operator=(const TaskSpec &) = default ;
        TaskSpec& operator=(TaskSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrayIndex_ == nullptr
        && this->taskName_ == nullptr; };
        // arrayIndex Field Functions 
        bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
        void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
        inline const vector<int32_t> & getArrayIndex() const { DARABONBA_PTR_GET_CONST(arrayIndex_, vector<int32_t>) };
        inline vector<int32_t> getArrayIndex() { DARABONBA_PTR_GET(arrayIndex_, vector<int32_t>) };
        inline TaskSpec& setArrayIndex(const vector<int32_t> & arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };
        inline TaskSpec& setArrayIndex(vector<int32_t> && arrayIndex) { DARABONBA_PTR_SET_RVALUE(arrayIndex_, arrayIndex) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline TaskSpec& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      protected:
        // The list of array job indexes to be deleted.
        shared_ptr<vector<int32_t>> arrayIndex_ {};
        // The name of the task to be deleted.
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->jobId_ == nullptr
        && this->taskSpec_ == nullptr; };
      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline JobSpec& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // taskSpec Field Functions 
      bool hasTaskSpec() const { return this->taskSpec_ != nullptr;};
      void deleteTaskSpec() { this->taskSpec_ = nullptr;};
      inline const vector<JobSpec::TaskSpec> & getTaskSpec() const { DARABONBA_PTR_GET_CONST(taskSpec_, vector<JobSpec::TaskSpec>) };
      inline vector<JobSpec::TaskSpec> getTaskSpec() { DARABONBA_PTR_GET(taskSpec_, vector<JobSpec::TaskSpec>) };
      inline JobSpec& setTaskSpec(const vector<JobSpec::TaskSpec> & taskSpec) { DARABONBA_PTR_SET_VALUE(taskSpec_, taskSpec) };
      inline JobSpec& setTaskSpec(vector<JobSpec::TaskSpec> && taskSpec) { DARABONBA_PTR_SET_RVALUE(taskSpec_, taskSpec) };


    protected:
      // The ID of the job to be deleted.\\
      // You can call the ListJobs operation to query job IDs.
      shared_ptr<string> jobId_ {};
      // The task details of the job to be deleted.
      shared_ptr<vector<JobSpec::TaskSpec>> taskSpec_ {};
    };

    virtual bool empty() const override { return this->executorIds_ == nullptr
        && this->jobScheduler_ == nullptr && this->jobSpec_ == nullptr; };
    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline DeleteJobsRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline DeleteJobsRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // jobScheduler Field Functions 
    bool hasJobScheduler() const { return this->jobScheduler_ != nullptr;};
    void deleteJobScheduler() { this->jobScheduler_ = nullptr;};
    inline string getJobScheduler() const { DARABONBA_PTR_GET_DEFAULT(jobScheduler_, "") };
    inline DeleteJobsRequest& setJobScheduler(string jobScheduler) { DARABONBA_PTR_SET_VALUE(jobScheduler_, jobScheduler) };


    // jobSpec Field Functions 
    bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
    void deleteJobSpec() { this->jobSpec_ = nullptr;};
    inline const vector<DeleteJobsRequest::JobSpec> & getJobSpec() const { DARABONBA_PTR_GET_CONST(jobSpec_, vector<DeleteJobsRequest::JobSpec>) };
    inline vector<DeleteJobsRequest::JobSpec> getJobSpec() { DARABONBA_PTR_GET(jobSpec_, vector<DeleteJobsRequest::JobSpec>) };
    inline DeleteJobsRequest& setJobSpec(const vector<DeleteJobsRequest::JobSpec> & jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };
    inline DeleteJobsRequest& setJobSpec(vector<DeleteJobsRequest::JobSpec> && jobSpec) { DARABONBA_PTR_SET_RVALUE(jobSpec_, jobSpec) };


  protected:
    // The list of executor IDs. A maximum of 100 IDs are supported.
    shared_ptr<vector<string>> executorIds_ {};
    // The type of the job scheduler.
    // 
    // *   HPC
    // *   K8S
    // 
    // Default value: HPC
    shared_ptr<string> jobScheduler_ {};
    // The information about the job to be deleted.
    shared_ptr<vector<DeleteJobsRequest::JobSpec>> jobSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
