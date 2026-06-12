// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETESTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETESTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceTestTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTestTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionDetails, executionDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskRegionId, taskRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTestTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionDetails, executionDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskRegionId, taskRegionId_);
    };
    GetServiceTestTaskResponseBody() = default ;
    GetServiceTestTaskResponseBody(const GetServiceTestTaskResponseBody &) = default ;
    GetServiceTestTaskResponseBody(GetServiceTestTaskResponseBody &&) = default ;
    GetServiceTestTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTestTaskResponseBody() = default ;
    GetServiceTestTaskResponseBody& operator=(const GetServiceTestTaskResponseBody &) = default ;
    GetServiceTestTaskResponseBody& operator=(GetServiceTestTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecutionDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutionDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CaseName, caseName_);
        DARABONBA_PTR_TO_JSON(ExecutionReport, executionReport_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubTaskId, subTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutionDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CaseName, caseName_);
        DARABONBA_PTR_FROM_JSON(ExecutionReport, executionReport_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubTaskId, subTaskId_);
      };
      ExecutionDetails() = default ;
      ExecutionDetails(const ExecutionDetails &) = default ;
      ExecutionDetails(ExecutionDetails &&) = default ;
      ExecutionDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutionDetails() = default ;
      ExecutionDetails& operator=(const ExecutionDetails &) = default ;
      ExecutionDetails& operator=(ExecutionDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->caseName_ == nullptr
        && this->executionReport_ == nullptr && this->status_ == nullptr && this->subTaskId_ == nullptr; };
      // caseName Field Functions 
      bool hasCaseName() const { return this->caseName_ != nullptr;};
      void deleteCaseName() { this->caseName_ = nullptr;};
      inline string getCaseName() const { DARABONBA_PTR_GET_DEFAULT(caseName_, "") };
      inline ExecutionDetails& setCaseName(string caseName) { DARABONBA_PTR_SET_VALUE(caseName_, caseName) };


      // executionReport Field Functions 
      bool hasExecutionReport() const { return this->executionReport_ != nullptr;};
      void deleteExecutionReport() { this->executionReport_ = nullptr;};
      inline string getExecutionReport() const { DARABONBA_PTR_GET_DEFAULT(executionReport_, "") };
      inline ExecutionDetails& setExecutionReport(string executionReport) { DARABONBA_PTR_SET_VALUE(executionReport_, executionReport) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ExecutionDetails& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subTaskId Field Functions 
      bool hasSubTaskId() const { return this->subTaskId_ != nullptr;};
      void deleteSubTaskId() { this->subTaskId_ = nullptr;};
      inline string getSubTaskId() const { DARABONBA_PTR_GET_DEFAULT(subTaskId_, "") };
      inline ExecutionDetails& setSubTaskId(string subTaskId) { DARABONBA_PTR_SET_VALUE(subTaskId_, subTaskId) };


    protected:
      // The use case name.
      shared_ptr<string> caseName_ {};
      // The execution report.
      shared_ptr<string> executionReport_ {};
      // The execution status.
      shared_ptr<string> status_ {};
      // The subtask ID.
      shared_ptr<string> subTaskId_ {};
    };

    virtual bool empty() const override { return this->executionDetails_ == nullptr
        && this->requestId_ == nullptr && this->status_ == nullptr && this->taskName_ == nullptr && this->taskRegionId_ == nullptr; };
    // executionDetails Field Functions 
    bool hasExecutionDetails() const { return this->executionDetails_ != nullptr;};
    void deleteExecutionDetails() { this->executionDetails_ = nullptr;};
    inline const vector<GetServiceTestTaskResponseBody::ExecutionDetails> & getExecutionDetails() const { DARABONBA_PTR_GET_CONST(executionDetails_, vector<GetServiceTestTaskResponseBody::ExecutionDetails>) };
    inline vector<GetServiceTestTaskResponseBody::ExecutionDetails> getExecutionDetails() { DARABONBA_PTR_GET(executionDetails_, vector<GetServiceTestTaskResponseBody::ExecutionDetails>) };
    inline GetServiceTestTaskResponseBody& setExecutionDetails(const vector<GetServiceTestTaskResponseBody::ExecutionDetails> & executionDetails) { DARABONBA_PTR_SET_VALUE(executionDetails_, executionDetails) };
    inline GetServiceTestTaskResponseBody& setExecutionDetails(vector<GetServiceTestTaskResponseBody::ExecutionDetails> && executionDetails) { DARABONBA_PTR_SET_RVALUE(executionDetails_, executionDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTestTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceTestTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetServiceTestTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskRegionId Field Functions 
    bool hasTaskRegionId() const { return this->taskRegionId_ != nullptr;};
    void deleteTaskRegionId() { this->taskRegionId_ = nullptr;};
    inline string getTaskRegionId() const { DARABONBA_PTR_GET_DEFAULT(taskRegionId_, "") };
    inline GetServiceTestTaskResponseBody& setTaskRegionId(string taskRegionId) { DARABONBA_PTR_SET_VALUE(taskRegionId_, taskRegionId) };


  protected:
    // The execution details of the task. This includes the running details for different use cases.
    shared_ptr<vector<GetServiceTestTaskResponseBody::ExecutionDetails>> executionDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The running status of the service test task.
    shared_ptr<string> status_ {};
    // The task name.
    shared_ptr<string> taskName_ {};
    // The region where the task runs.
    shared_ptr<string> taskRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
