// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODYWORKFLOWTASKWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODYWORKFLOWTASKWORKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Graph, graph_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Graph, graph_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow() = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow(const GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow &) = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow(GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow &&) = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow() = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& operator=(const GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow &) = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& operator=(GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->graph_ == nullptr && return this->modifiedTime_ == nullptr && return this->name_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr
        && return this->version_ == nullptr && return this->workflowId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // graph Field Functions 
    bool hasGraph() const { return this->graph_ != nullptr;};
    void deleteGraph() { this->graph_ = nullptr;};
    inline string graph() const { DARABONBA_PTR_GET_DEFAULT(graph_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setGraph(string graph) { DARABONBA_PTR_SET_VALUE(graph_, graph) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline string workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow& setWorkflowId(string workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The time when the template was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The workflow\\"s topological structure.
    std::shared_ptr<string> graph_ = nullptr;
    // The time when the template was last modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The name of the workflow template.
    std::shared_ptr<string> name_ = nullptr;
    // Workflow template status. Valid values:
    // 
    // *   Draft
    // *   Published
    // *   Editing
    std::shared_ptr<string> status_ = nullptr;
    // The scenario type of the template.
    std::shared_ptr<string> type_ = nullptr;
    // The template version.
    std::shared_ptr<string> version_ = nullptr;
    // The ID of the workflow template.
    std::shared_ptr<string> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
