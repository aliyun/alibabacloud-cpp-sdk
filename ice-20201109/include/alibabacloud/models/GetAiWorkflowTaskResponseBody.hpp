// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAIWorkflowTaskResponseBodyWorkflowTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAIWorkflowTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowTask, workflowTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowTask, workflowTask_);
    };
    GetAIWorkflowTaskResponseBody() = default ;
    GetAIWorkflowTaskResponseBody(const GetAIWorkflowTaskResponseBody &) = default ;
    GetAIWorkflowTaskResponseBody(GetAIWorkflowTaskResponseBody &&) = default ;
    GetAIWorkflowTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIWorkflowTaskResponseBody() = default ;
    GetAIWorkflowTaskResponseBody& operator=(const GetAIWorkflowTaskResponseBody &) = default ;
    GetAIWorkflowTaskResponseBody& operator=(GetAIWorkflowTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workflowTask_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAIWorkflowTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowTask Field Functions 
    bool hasWorkflowTask() const { return this->workflowTask_ != nullptr;};
    void deleteWorkflowTask() { this->workflowTask_ = nullptr;};
    inline const GetAIWorkflowTaskResponseBodyWorkflowTask & workflowTask() const { DARABONBA_PTR_GET_CONST(workflowTask_, GetAIWorkflowTaskResponseBodyWorkflowTask) };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask workflowTask() { DARABONBA_PTR_GET(workflowTask_, GetAIWorkflowTaskResponseBodyWorkflowTask) };
    inline GetAIWorkflowTaskResponseBody& setWorkflowTask(const GetAIWorkflowTaskResponseBodyWorkflowTask & workflowTask) { DARABONBA_PTR_SET_VALUE(workflowTask_, workflowTask) };
    inline GetAIWorkflowTaskResponseBody& setWorkflowTask(GetAIWorkflowTaskResponseBodyWorkflowTask && workflowTask) { DARABONBA_PTR_SET_RVALUE(workflowTask_, workflowTask) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the workflow task.
    std::shared_ptr<GetAIWorkflowTaskResponseBodyWorkflowTask> workflowTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
