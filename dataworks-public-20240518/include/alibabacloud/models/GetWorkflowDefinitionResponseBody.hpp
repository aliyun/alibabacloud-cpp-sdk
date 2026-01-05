// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class WorkflowDefinition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WorkflowDefinition& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      };
      friend void from_json(const Darabonba::Json& j, WorkflowDefinition& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      };
      WorkflowDefinition() = default ;
      WorkflowDefinition(const WorkflowDefinition &) = default ;
      WorkflowDefinition(WorkflowDefinition &&) = default ;
      WorkflowDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WorkflowDefinition() = default ;
      WorkflowDefinition& operator=(const WorkflowDefinition &) = default ;
      WorkflowDefinition& operator=(WorkflowDefinition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->id_ == nullptr && this->modifyTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr
        && this->spec_ == nullptr && this->workflowId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline WorkflowDefinition& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline WorkflowDefinition& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline WorkflowDefinition& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WorkflowDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline WorkflowDefinition& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline WorkflowDefinition& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline WorkflowDefinition& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // workflowId Field Functions 
      bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
      void deleteWorkflowId() { this->workflowId_ = nullptr;};
      inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
      inline WorkflowDefinition& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    protected:
      // The time when the workflow was created. This value is a UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the workflow.
      shared_ptr<string> id_ {};
      // The time when the workflow was last modified. This value is a UNIX timestamp.
      shared_ptr<int64_t> modifyTime_ {};
      // The name of the workflow.
      shared_ptr<string> name_ {};
      // The owner of the workflow.
      shared_ptr<string> owner_ {};
      // The ID of the workspace to which the workflow belongs.
      shared_ptr<int64_t> projectId_ {};
      // The FlowSpec field information about the workflow. For more information, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow/).
      shared_ptr<string> spec_ {};
      // The ID of the workflow on the scheduling side after publishing.
      shared_ptr<int64_t> workflowId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->workflowDefinition_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkflowDefinitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workflowDefinition Field Functions 
    bool hasWorkflowDefinition() const { return this->workflowDefinition_ != nullptr;};
    void deleteWorkflowDefinition() { this->workflowDefinition_ = nullptr;};
    inline const GetWorkflowDefinitionResponseBody::WorkflowDefinition & getWorkflowDefinition() const { DARABONBA_PTR_GET_CONST(workflowDefinition_, GetWorkflowDefinitionResponseBody::WorkflowDefinition) };
    inline GetWorkflowDefinitionResponseBody::WorkflowDefinition getWorkflowDefinition() { DARABONBA_PTR_GET(workflowDefinition_, GetWorkflowDefinitionResponseBody::WorkflowDefinition) };
    inline GetWorkflowDefinitionResponseBody& setWorkflowDefinition(const GetWorkflowDefinitionResponseBody::WorkflowDefinition & workflowDefinition) { DARABONBA_PTR_SET_VALUE(workflowDefinition_, workflowDefinition) };
    inline GetWorkflowDefinitionResponseBody& setWorkflowDefinition(GetWorkflowDefinitionResponseBody::WorkflowDefinition && workflowDefinition) { DARABONBA_PTR_SET_RVALUE(workflowDefinition_, workflowDefinition) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the workflow.
    shared_ptr<GetWorkflowDefinitionResponseBody::WorkflowDefinition> workflowDefinition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
