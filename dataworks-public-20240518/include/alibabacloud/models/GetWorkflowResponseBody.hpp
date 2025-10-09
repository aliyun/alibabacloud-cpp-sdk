// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
    };
    GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody(GetWorkflowResponseBody &&) = default ;
    GetWorkflowResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBody() = default ;
    GetWorkflowResponseBody& operator=(const GetWorkflowResponseBody &) = default ;
    GetWorkflowResponseBody& operator=(GetWorkflowResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->workflow_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const GetWorkflowResponseBodyWorkflow & workflow() const { DARABONBA_PTR_GET_CONST(workflow_, GetWorkflowResponseBodyWorkflow) };
    inline GetWorkflowResponseBodyWorkflow workflow() { DARABONBA_PTR_GET(workflow_, GetWorkflowResponseBodyWorkflow) };
    inline GetWorkflowResponseBody& setWorkflow(const GetWorkflowResponseBodyWorkflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline GetWorkflowResponseBody& setWorkflow(GetWorkflowResponseBodyWorkflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the workflow.
    std::shared_ptr<GetWorkflowResponseBodyWorkflow> workflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
