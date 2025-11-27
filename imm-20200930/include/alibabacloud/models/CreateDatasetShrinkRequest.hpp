// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetShrinkRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateDatasetShrinkRequest& obj) { 
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
    CreateDatasetShrinkRequest() = default ;
    CreateDatasetShrinkRequest(const CreateDatasetShrinkRequest &) = default ;
    CreateDatasetShrinkRequest(CreateDatasetShrinkRequest &&) = default ;
    CreateDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetShrinkRequest() = default ;
    CreateDatasetShrinkRequest& operator=(const CreateDatasetShrinkRequest &) = default ;
    CreateDatasetShrinkRequest& operator=(CreateDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetMaxBindCount_ == nullptr
        && return this->datasetMaxEntityCount_ == nullptr && return this->datasetMaxFileCount_ == nullptr && return this->datasetMaxRelationCount_ == nullptr && return this->datasetMaxTotalFileSize_ == nullptr && return this->datasetName_ == nullptr
        && return this->description_ == nullptr && return this->projectName_ == nullptr && return this->templateId_ == nullptr && return this->workflowParametersShrink_ == nullptr; };
    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t datasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline CreateDatasetShrinkRequest& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t datasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline CreateDatasetShrinkRequest& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t datasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline CreateDatasetShrinkRequest& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t datasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline CreateDatasetShrinkRequest& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t datasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline CreateDatasetShrinkRequest& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateDatasetShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDatasetShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateDatasetShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateDatasetShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // workflowParametersShrink Field Functions 
    bool hasWorkflowParametersShrink() const { return this->workflowParametersShrink_ != nullptr;};
    void deleteWorkflowParametersShrink() { this->workflowParametersShrink_ = nullptr;};
    inline string workflowParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(workflowParametersShrink_, "") };
    inline CreateDatasetShrinkRequest& setWorkflowParametersShrink(string workflowParametersShrink) { DARABONBA_PTR_SET_VALUE(workflowParametersShrink_, workflowParametersShrink) };


  protected:
    // The maximum number of bindings per dataset. The range is 1~10, with a default value of 10.
    std::shared_ptr<int64_t> datasetMaxBindCount_ = nullptr;
    // The maximum number of metadata entities in each dataset. The default value is 10000000000.
    std::shared_ptr<int64_t> datasetMaxEntityCount_ = nullptr;
    // The maximum number of files in each dataset. The range is 1~100000000, with a default value of 100000000.
    std::shared_ptr<int64_t> datasetMaxFileCount_ = nullptr;
    // The maximum number of metadata relationships in each dataset. The default value is 100000000000.
    std::shared_ptr<int64_t> datasetMaxRelationCount_ = nullptr;
    // The maximum total size of files in each dataset. Once the limit is exceeded, no more indexes can be added. The default value is 90000000000000000, in bytes.
    std::shared_ptr<int64_t> datasetMaxTotalFileSize_ = nullptr;
    // The name of the dataset, which must be unique under the same Project. Naming rules are as follows:
    // - Length should be 1~128 characters.
    // - Can only contain English letters, numbers, hyphens (-), and underscores (_).
    // - Must start with an English letter or underscore (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // Description of the dataset. The length should be 1~256 English or Chinese characters, with a default value of empty.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the project. For more information on how to obtain it, see [Create Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // Workflow template ID. For more information, see [Workflow Templates and Operators](https://help.aliyun.com/document_detail/466304.html). The default value is empty.
    std::shared_ptr<string> templateId_ = nullptr;
    // Invalid parameter.
    std::shared_ptr<string> workflowParametersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
