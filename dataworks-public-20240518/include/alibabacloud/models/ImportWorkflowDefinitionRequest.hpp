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
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowDefinitionRequest& obj) { 
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
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->spec_ == nullptr; };
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
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The FlowSpec information for this workflow. For more information, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow/).
    // 
    // > How to quickly obtain a FlowSpec template?
    // 
    // *   Open a workflow in Data Studio, then click "Show Spec" in the top-right corner to retrieve the FlowSpec description for the current workflow. You can use this FlowSpec description to quickly build a template that meets your requirements.
    // 
    // > This interface supports creating both the workflow and its internal nodes simultaneously. Therefore, please pay close attention to the ID specified in the FlowSpec. If the provided ID already exists, the operation will be treated as an update. A create operation is performed only if the ID is omitted or does not exist.
    // 
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
