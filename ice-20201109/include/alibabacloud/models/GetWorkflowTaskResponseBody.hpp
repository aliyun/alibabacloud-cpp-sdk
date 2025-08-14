// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowTaskResponseBodyWorkflowTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetWorkflowTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowTask, workflowTask_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowTask, workflowTask_);
    };
    GetWorkflowTaskResponseBody() = default ;
    GetWorkflowTaskResponseBody(const GetWorkflowTaskResponseBody &) = default ;
    GetWorkflowTaskResponseBody(GetWorkflowTaskResponseBody &&) = default ;
    GetWorkflowTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowTaskResponseBody() = default ;
    GetWorkflowTaskResponseBody& operator=(const GetWorkflowTaskResponseBody &) = default ;
    GetWorkflowTaskResponseBody& operator=(GetWorkflowTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->workflowTask_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowTask Field Functions 
    bool hasWorkflowTask() const { return this->workflowTask_ != nullptr;};
    void deleteWorkflowTask() { this->workflowTask_ = nullptr;};
    inline const GetWorkflowTaskResponseBodyWorkflowTask & workflowTask() const { DARABONBA_PTR_GET_CONST(workflowTask_, GetWorkflowTaskResponseBodyWorkflowTask) };
    inline GetWorkflowTaskResponseBodyWorkflowTask workflowTask() { DARABONBA_PTR_GET(workflowTask_, GetWorkflowTaskResponseBodyWorkflowTask) };
    inline GetWorkflowTaskResponseBody& setWorkflowTask(const GetWorkflowTaskResponseBodyWorkflowTask & workflowTask) { DARABONBA_PTR_SET_VALUE(workflowTask_, workflowTask) };
    inline GetWorkflowTaskResponseBody& setWorkflowTask(GetWorkflowTaskResponseBodyWorkflowTask && workflowTask) { DARABONBA_PTR_SET_RVALUE(workflowTask_, workflowTask) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the workflow task.
    std::shared_ptr<GetWorkflowTaskResponseBodyWorkflowTask> workflowTask_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
