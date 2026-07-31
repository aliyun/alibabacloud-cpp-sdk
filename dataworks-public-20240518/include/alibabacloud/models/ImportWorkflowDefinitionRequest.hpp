// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ImportWorkflowDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    ImportWorkflowDefinitionRequest() = default ;
    ImportWorkflowDefinitionRequest(const ImportWorkflowDefinitionRequest &) = default ;
    ImportWorkflowDefinitionRequest(ImportWorkflowDefinitionRequest &&) = default ;
    ImportWorkflowDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowDefinitionRequest() = default ;
    ImportWorkflowDefinitionRequest& operator=(const ImportWorkflowDefinitionRequest &) = default ;
    ImportWorkflowDefinitionRequest& operator=(ImportWorkflowDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->projectId_ == nullptr && this->spec_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ImportWorkflowDefinitionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ImportWorkflowDefinitionRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ImportWorkflowDefinitionRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // Specifies whether to call this operation in validation mode. If this parameter is set to true, only the legality of the input workflow spec is validated. The same preprocessing and validation logic as the actual import is reused (with identical rules), but no data is persisted and no write operations are performed. The validation result is returned through an asynchronous task. If validation fails, the asynchronous task fails, and the error details include the error code, error message, and a JSONPath that locates the specific node (such as $.spec.workflows[0].nodes[1]).
    // 
    // Default value: false. In this case, the workflow is imported normally.
    shared_ptr<bool> dryRun_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the workspace management page to obtain the ID.
    // 
    // This parameter specifies the DataWorks workspace used for this API invoke.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The FlowSpec information that describes the workflow. For the specification details, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow/).
    // 
    // > How to quickly obtain a FlowSpec template?
    // > - Open a workflow in DataStudio, and then click "Show Spec" in the upper-right corner to obtain the FlowSpec description of the current workflow. You can use this FlowSpec description to quickly build a template that meets your requirements.
    // 
    // >Notice: This operation supports creating a workflow and its internal nodes at the same time. Pay attention to the IDs specified in the FlowSpec. If a specified ID already exists, the operation becomes an update. Only when no ID is specified or the ID does not exist does the operation become a create.
    // 
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
