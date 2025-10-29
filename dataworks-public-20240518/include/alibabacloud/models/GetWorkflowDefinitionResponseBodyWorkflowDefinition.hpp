// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONRESPONSEBODYWORKFLOWDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWDEFINITIONRESPONSEBODYWORKFLOWDEFINITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowDefinitionResponseBodyWorkflowDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowDefinitionResponseBodyWorkflowDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowDefinitionResponseBodyWorkflowDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    GetWorkflowDefinitionResponseBodyWorkflowDefinition() = default ;
    GetWorkflowDefinitionResponseBodyWorkflowDefinition(const GetWorkflowDefinitionResponseBodyWorkflowDefinition &) = default ;
    GetWorkflowDefinitionResponseBodyWorkflowDefinition(GetWorkflowDefinitionResponseBodyWorkflowDefinition &&) = default ;
    GetWorkflowDefinitionResponseBodyWorkflowDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowDefinitionResponseBodyWorkflowDefinition() = default ;
    GetWorkflowDefinitionResponseBodyWorkflowDefinition& operator=(const GetWorkflowDefinitionResponseBodyWorkflowDefinition &) = default ;
    GetWorkflowDefinitionResponseBodyWorkflowDefinition& operator=(GetWorkflowDefinitionResponseBodyWorkflowDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->id_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->projectId_ == nullptr
        && return this->spec_ == nullptr && return this->workflowId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline GetWorkflowDefinitionResponseBodyWorkflowDefinition& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The time when the workflow was created. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the workflow.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The time when the workflow was last modified. This value is a UNIX timestamp.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The name of the workflow.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the workflow.
    std::shared_ptr<string> owner_ = nullptr;
    // The ID of the workspace to which the workflow belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The FlowSpec field information about the workflow. For more information, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow/).
    std::shared_ptr<string> spec_ = nullptr;
    // The ID of the workflow on the scheduling side after publishing.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
