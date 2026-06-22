// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DatasetConfig.hpp>
#include <vector>
#include <alibabacloud/models/WorkflowParameter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_TO_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParameters_);
    };
    CreateDatasetRequest() = default ;
    CreateDatasetRequest(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest(CreateDatasetRequest &&) = default ;
    CreateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequest() = default ;
    CreateDatasetRequest& operator=(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest& operator=(CreateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetConfig_ == nullptr
        && this->datasetMaxBindCount_ == nullptr && this->datasetMaxEntityCount_ == nullptr && this->datasetMaxFileCount_ == nullptr && this->datasetMaxRelationCount_ == nullptr && this->datasetMaxTotalFileSize_ == nullptr
        && this->datasetName_ == nullptr && this->description_ == nullptr && this->projectName_ == nullptr && this->templateId_ == nullptr && this->workflowParameters_ == nullptr; };
    // datasetConfig Field Functions 
    bool hasDatasetConfig() const { return this->datasetConfig_ != nullptr;};
    void deleteDatasetConfig() { this->datasetConfig_ = nullptr;};
    inline const DatasetConfig & getDatasetConfig() const { DARABONBA_PTR_GET_CONST(datasetConfig_, DatasetConfig) };
    inline DatasetConfig getDatasetConfig() { DARABONBA_PTR_GET(datasetConfig_, DatasetConfig) };
    inline CreateDatasetRequest& setDatasetConfig(const DatasetConfig & datasetConfig) { DARABONBA_PTR_SET_VALUE(datasetConfig_, datasetConfig) };
    inline CreateDatasetRequest& setDatasetConfig(DatasetConfig && datasetConfig) { DARABONBA_PTR_SET_RVALUE(datasetConfig_, datasetConfig) };


    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t getDatasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline CreateDatasetRequest& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t getDatasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline CreateDatasetRequest& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t getDatasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline CreateDatasetRequest& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t getDatasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline CreateDatasetRequest& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t getDatasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline CreateDatasetRequest& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateDatasetRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateDatasetRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // workflowParameters Field Functions 
    bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
    void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
    inline const vector<WorkflowParameter> & getWorkflowParameters() const { DARABONBA_PTR_GET_CONST(workflowParameters_, vector<WorkflowParameter>) };
    inline vector<WorkflowParameter> getWorkflowParameters() { DARABONBA_PTR_GET(workflowParameters_, vector<WorkflowParameter>) };
    inline CreateDatasetRequest& setWorkflowParameters(const vector<WorkflowParameter> & workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };
    inline CreateDatasetRequest& setWorkflowParameters(vector<WorkflowParameter> && workflowParameters) { DARABONBA_PTR_SET_RVALUE(workflowParameters_, workflowParameters) };


  protected:
    // The dataset configuration.
    shared_ptr<DatasetConfig> datasetConfig_ {};
    // The maximum number of bindings for each dataset. Valid values: 1 to 10. The default value is 10.
    shared_ptr<int64_t> datasetMaxBindCount_ {};
    // The maximum number of metadata entities in each dataset. The default value is 10,000,000,000.
    shared_ptr<int64_t> datasetMaxEntityCount_ {};
    // The maximum number of files in each dataset. Valid values: 1 to 100,000,000. The default value is 100,000,000.
    shared_ptr<int64_t> datasetMaxFileCount_ {};
    // The maximum number of metadata relationships in each dataset. The default value is 100,000,000,000.
    shared_ptr<int64_t> datasetMaxRelationCount_ {};
    // The maximum total size of files in each dataset. You cannot add more indexes after exceeding this limit. The default value is 90,000,000,000,000,000 bytes.
    shared_ptr<int64_t> datasetMaxTotalFileSize_ {};
    // The dataset name. It must be unique within the same project. Naming conventions are as follows:
    // 
    // - Length: 1 to 128 characters.
    // 
    // - Only English letters, digits, hyphens (-), and underscores (_) are allowed.
    // 
    // - Must start with an English letter or an underscore (_).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The description of the dataset. Length: 1 to 256 English or Chinese characters. The default value is empty.
    shared_ptr<string> description_ {};
    // The project name. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The workflow template ID. For more information, see [Workflow Templates and Operators](https://help.aliyun.com/document_detail/466304.html). The default value is empty.
    shared_ptr<string> templateId_ {};
    // Invalid parameter.
    shared_ptr<vector<WorkflowParameter>> workflowParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
