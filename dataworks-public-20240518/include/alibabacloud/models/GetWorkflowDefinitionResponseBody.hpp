// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWorkflowDefinitionResponseBodyWorkflowDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowDefinitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDefinitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkflowDefinition, workflowDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDefinitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkflowDefinition, workflowDefinition_);
    };
    GetWorkflowDefinitionResponseBody() = default ;
    GetWorkflowDefinitionResponseBody(const GetWorkflowDefinitionResponseBody &) = default ;
    GetWorkflowDefinitionResponseBody(GetWorkflowDefinitionResponseBody &&) = default ;
    GetWorkflowDefinitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDefinitionResponseBody() = default ;
    GetWorkflowDefinitionResponseBody& operator=(const GetWorkflowDefinitionResponseBody &) = default ;
    GetWorkflowDefinitionResponseBody& operator=(GetWorkflowDefinitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workflowDefinition_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowDefinition Field Functions 
    bool hasWorkflowDefinition() const { return this->workflowDefinition_ != nullptr;};
    void deleteWorkflowDefinition() { this->workflowDefinition_ = nullptr;};
    inline const GetWorkflowDefinitionResponseBodyWorkflowDefinition & workflowDefinition() const { DARABONBA_PTR_GET_CONST(workflowDefinition_, GetWorkflowDefinitionResponseBodyWorkflowDefinition) };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition workflowDefinition() { DARABONBA_PTR_GET(workflowDefinition_, GetWorkflowDefinitionResponseBodyWorkflowDefinition) };
    inline GetWorkflowDefinitionResponseBody& setWorkflowDefinition(const GetWorkflowDefinitionResponseBodyWorkflowDefinition & workflowDefinition) { DARABONBA_PTR_SET_VALUE(workflowDefinition_, workflowDefinition) };
    inline GetWorkflowDefinitionResponseBody& setWorkflowDefinition(GetWorkflowDefinitionResponseBodyWorkflowDefinition && workflowDefinition) { DARABONBA_PTR_SET_RVALUE(workflowDefinition_, workflowDefinition) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the workflow.
    std::shared_ptr<GetWorkflowDefinitionResponseBodyWorkflowDefinition> workflowDefinition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
