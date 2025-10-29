// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowInstanceResponseBodyWorkflowInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstance, workflowInstance_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstance, workflowInstance_);
    };
    GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody(GetWorkflowInstanceResponseBody &&) = default ;
    GetWorkflowInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowInstanceResponseBody() = default ;
    GetWorkflowInstanceResponseBody& operator=(const GetWorkflowInstanceResponseBody &) = default ;
    GetWorkflowInstanceResponseBody& operator=(GetWorkflowInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workflowInstance_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowInstance Field Functions 
    bool hasWorkflowInstance() const { return this->workflowInstance_ != nullptr;};
    void deleteWorkflowInstance() { this->workflowInstance_ = nullptr;};
    inline const GetWorkflowInstanceResponseBodyWorkflowInstance & workflowInstance() const { DARABONBA_PTR_GET_CONST(workflowInstance_, GetWorkflowInstanceResponseBodyWorkflowInstance) };
    inline GetWorkflowInstanceResponseBodyWorkflowInstance workflowInstance() { DARABONBA_PTR_GET(workflowInstance_, GetWorkflowInstanceResponseBodyWorkflowInstance) };
    inline GetWorkflowInstanceResponseBody& setWorkflowInstance(const GetWorkflowInstanceResponseBodyWorkflowInstance & workflowInstance) { DARABONBA_PTR_SET_VALUE(workflowInstance_, workflowInstance) };
    inline GetWorkflowInstanceResponseBody& setWorkflowInstance(GetWorkflowInstanceResponseBodyWorkflowInstance && workflowInstance) { DARABONBA_PTR_SET_RVALUE(workflowInstance_, workflowInstance) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the workflow instance.
    std::shared_ptr<GetWorkflowInstanceResponseBodyWorkflowInstance> workflowInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
