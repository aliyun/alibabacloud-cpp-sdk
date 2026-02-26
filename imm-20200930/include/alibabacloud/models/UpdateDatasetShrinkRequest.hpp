// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfigShrink_);
      DARABONBA_PTR_TO_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParametersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParametersShrink_);
    };
    UpdateDatasetShrinkRequest() = default ;
    UpdateDatasetShrinkRequest(const UpdateDatasetShrinkRequest &) = default ;
    UpdateDatasetShrinkRequest(UpdateDatasetShrinkRequest &&) = default ;
    UpdateDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetShrinkRequest() = default ;
    UpdateDatasetShrinkRequest& operator=(const UpdateDatasetShrinkRequest &) = default ;
    UpdateDatasetShrinkRequest& operator=(UpdateDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetConfigShrink_ == nullptr
        && this->datasetMaxBindCount_ == nullptr && this->datasetMaxEntityCount_ == nullptr && this->datasetMaxFileCount_ == nullptr && this->datasetMaxRelationCount_ == nullptr && this->datasetMaxTotalFileSize_ == nullptr
        && this->datasetName_ == nullptr && this->description_ == nullptr && this->projectName_ == nullptr && this->templateId_ == nullptr && this->workflowParametersShrink_ == nullptr; };
    // datasetConfigShrink Field Functions 
    bool hasDatasetConfigShrink() const { return this->datasetConfigShrink_ != nullptr;};
    void deleteDatasetConfigShrink() { this->datasetConfigShrink_ = nullptr;};
    inline string getDatasetConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetConfigShrink_, "") };
    inline UpdateDatasetShrinkRequest& setDatasetConfigShrink(string datasetConfigShrink) { DARABONBA_PTR_SET_VALUE(datasetConfigShrink_, datasetConfigShrink) };


    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t getDatasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline UpdateDatasetShrinkRequest& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t getDatasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline UpdateDatasetShrinkRequest& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t getDatasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline UpdateDatasetShrinkRequest& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t getDatasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline UpdateDatasetShrinkRequest& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t getDatasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline UpdateDatasetShrinkRequest& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateDatasetShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDatasetShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateDatasetShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateDatasetShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // workflowParametersShrink Field Functions 
    bool hasWorkflowParametersShrink() const { return this->workflowParametersShrink_ != nullptr;};
    void deleteWorkflowParametersShrink() { this->workflowParametersShrink_ = nullptr;};
    inline string getWorkflowParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(workflowParametersShrink_, "") };
    inline UpdateDatasetShrinkRequest& setWorkflowParametersShrink(string workflowParametersShrink) { DARABONBA_PTR_SET_VALUE(workflowParametersShrink_, workflowParametersShrink) };


  protected:
    shared_ptr<string> datasetConfigShrink_ {};
    // The maximum number of bindings per dataset. The value range is from 1 to 10.
    shared_ptr<int64_t> datasetMaxBindCount_ {};
    // The maximum number of metadata entities (including data files, file relationships, clustering groups, etc.) per dataset, with a maximum value of 2^63-1.
    // >Reserved parameter, no actual restriction in use.
    shared_ptr<int64_t> datasetMaxEntityCount_ {};
    // The maximum number of files per dataset. The value range is from 1 to 100000000.
    shared_ptr<int64_t> datasetMaxFileCount_ {};
    // The maximum number of metadata relationships per dataset, with a maximum value of 2^63-1.
    // >Reserved parameter, no actual restriction in use.
    shared_ptr<int64_t> datasetMaxRelationCount_ {};
    // The maximum total size of files in each dataset. Once the limit is exceeded, no more indexes can be added. The maximum value is 2^63-1, measured in bytes.
    shared_ptr<int64_t> datasetMaxTotalFileSize_ {};
    // Dataset name, for how to obtain it, please refer to [Create Dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // Description of the dataset.
    shared_ptr<string> description_ {};
    // Project name, for how to obtain it, please refer to [Create Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // Workflow template ID. For more information, please refer to [Workflow Templates and Operators](https://help.aliyun.com/document_detail/466304.html).
    shared_ptr<string> templateId_ {};
    // Invalid parameter.
    shared_ptr<string> workflowParametersShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
