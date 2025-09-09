// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETESTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETESTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceTestTaskResponseBodyExecutionDetails.hpp>
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
    virtual bool empty() const override { this->executionDetails_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr && this->taskName_ != nullptr && this->taskRegionId_ != nullptr; };
    // executionDetails Field Functions 
    bool hasExecutionDetails() const { return this->executionDetails_ != nullptr;};
    void deleteExecutionDetails() { this->executionDetails_ = nullptr;};
    inline const vector<GetServiceTestTaskResponseBodyExecutionDetails> & executionDetails() const { DARABONBA_PTR_GET_CONST(executionDetails_, vector<GetServiceTestTaskResponseBodyExecutionDetails>) };
    inline vector<GetServiceTestTaskResponseBodyExecutionDetails> executionDetails() { DARABONBA_PTR_GET(executionDetails_, vector<GetServiceTestTaskResponseBodyExecutionDetails>) };
    inline GetServiceTestTaskResponseBody& setExecutionDetails(const vector<GetServiceTestTaskResponseBodyExecutionDetails> & executionDetails) { DARABONBA_PTR_SET_VALUE(executionDetails_, executionDetails) };
    inline GetServiceTestTaskResponseBody& setExecutionDetails(vector<GetServiceTestTaskResponseBodyExecutionDetails> && executionDetails) { DARABONBA_PTR_SET_RVALUE(executionDetails_, executionDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceTestTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceTestTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetServiceTestTaskResponseBody& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskRegionId Field Functions 
    bool hasTaskRegionId() const { return this->taskRegionId_ != nullptr;};
    void deleteTaskRegionId() { this->taskRegionId_ = nullptr;};
    inline string taskRegionId() const { DARABONBA_PTR_GET_DEFAULT(taskRegionId_, "") };
    inline GetServiceTestTaskResponseBody& setTaskRegionId(string taskRegionId) { DARABONBA_PTR_SET_VALUE(taskRegionId_, taskRegionId) };


  protected:
    // The execution details.
    std::shared_ptr<vector<GetServiceTestTaskResponseBodyExecutionDetails>> executionDetails_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the service test task. Valid values:
    // 
    // *   Running
    // *   Success
    // *    Failure
    std::shared_ptr<string> status_ = nullptr;
    // The task name.
    std::shared_ptr<string> taskName_ = nullptr;
    // The task execution region.
    std::shared_ptr<string> taskRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
