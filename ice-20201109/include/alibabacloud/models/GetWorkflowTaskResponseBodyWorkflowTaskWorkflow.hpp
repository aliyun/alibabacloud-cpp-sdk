// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODYWORKFLOWTASKWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWTASKRESPONSEBODYWORKFLOWTASKWORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetWorkflowTaskResponseBodyWorkflowTaskWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    GetWorkflowTaskResponseBodyWorkflowTaskWorkflow() = default ;
    GetWorkflowTaskResponseBodyWorkflowTaskWorkflow(const GetWorkflowTaskResponseBodyWorkflowTaskWorkflow &) = default ;
    GetWorkflowTaskResponseBodyWorkflowTaskWorkflow(GetWorkflowTaskResponseBodyWorkflowTaskWorkflow &&) = default ;
    GetWorkflowTaskResponseBodyWorkflowTaskWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowTaskResponseBodyWorkflowTaskWorkflow() = default ;
    GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& operator=(const GetWorkflowTaskResponseBodyWorkflowTaskWorkflow &) = default ;
    GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& operator=(GetWorkflowTaskResponseBodyWorkflowTaskWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->workflowId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline GetWorkflowTaskResponseBodyWorkflowTaskWorkflow& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The time when the workflow was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the workflow was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The workflow name.
    std::shared_ptr<string> name_ = nullptr;
    // The workflow state.
    // 
    // Valid values:
    // 
    // *   Active
    // *   Inactive
    std::shared_ptr<string> status_ = nullptr;
    // The workflow type.
    // 
    // Valid values:
    // 
    // *   Customize: custom workflow.
    // *   System: system workflow.
    // *   Common: user-created workflow.
    std::shared_ptr<string> type_ = nullptr;
    // The workflow ID.
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
