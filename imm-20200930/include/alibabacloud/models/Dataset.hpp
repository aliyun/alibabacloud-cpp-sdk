// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASET_HPP_
#define ALIBABACLOUD_MODELS_DATASET_HPP_
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
  class Dataset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
      DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_TO_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TotalFileSize, totalFileSize_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParameters_);
    };
    friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
      DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TotalFileSize, totalFileSize_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParameters_);
    };
    Dataset() = default ;
    Dataset(const Dataset &) = default ;
    Dataset(Dataset &&) = default ;
    Dataset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Dataset() = default ;
    Dataset& operator=(const Dataset &) = default ;
    Dataset& operator=(Dataset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindCount_ == nullptr
        && this->createTime_ == nullptr && this->datasetConfig_ == nullptr && this->datasetMaxBindCount_ == nullptr && this->datasetMaxEntityCount_ == nullptr && this->datasetMaxFileCount_ == nullptr
        && this->datasetMaxRelationCount_ == nullptr && this->datasetMaxTotalFileSize_ == nullptr && this->datasetName_ == nullptr && this->description_ == nullptr && this->fileCount_ == nullptr
        && this->projectName_ == nullptr && this->templateId_ == nullptr && this->totalFileSize_ == nullptr && this->updateTime_ == nullptr && this->workflowParameters_ == nullptr; };
    // bindCount Field Functions 
    bool hasBindCount() const { return this->bindCount_ != nullptr;};
    void deleteBindCount() { this->bindCount_ = nullptr;};
    inline int64_t getBindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0L) };
    inline Dataset& setBindCount(int64_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Dataset& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetConfig Field Functions 
    bool hasDatasetConfig() const { return this->datasetConfig_ != nullptr;};
    void deleteDatasetConfig() { this->datasetConfig_ = nullptr;};
    inline const DatasetConfig & getDatasetConfig() const { DARABONBA_PTR_GET_CONST(datasetConfig_, DatasetConfig) };
    inline DatasetConfig getDatasetConfig() { DARABONBA_PTR_GET(datasetConfig_, DatasetConfig) };
    inline Dataset& setDatasetConfig(const DatasetConfig & datasetConfig) { DARABONBA_PTR_SET_VALUE(datasetConfig_, datasetConfig) };
    inline Dataset& setDatasetConfig(DatasetConfig && datasetConfig) { DARABONBA_PTR_SET_RVALUE(datasetConfig_, datasetConfig) };


    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t getDatasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline Dataset& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t getDatasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline Dataset& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t getDatasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline Dataset& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t getDatasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline Dataset& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t getDatasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline Dataset& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline Dataset& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Dataset& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
    inline Dataset& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline Dataset& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline Dataset& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // totalFileSize Field Functions 
    bool hasTotalFileSize() const { return this->totalFileSize_ != nullptr;};
    void deleteTotalFileSize() { this->totalFileSize_ = nullptr;};
    inline int64_t getTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(totalFileSize_, 0L) };
    inline Dataset& setTotalFileSize(int64_t totalFileSize) { DARABONBA_PTR_SET_VALUE(totalFileSize_, totalFileSize) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Dataset& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // workflowParameters Field Functions 
    bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
    void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
    inline const vector<WorkflowParameter> & getWorkflowParameters() const { DARABONBA_PTR_GET_CONST(workflowParameters_, vector<WorkflowParameter>) };
    inline vector<WorkflowParameter> getWorkflowParameters() { DARABONBA_PTR_GET(workflowParameters_, vector<WorkflowParameter>) };
    inline Dataset& setWorkflowParameters(const vector<WorkflowParameter> & workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };
    inline Dataset& setWorkflowParameters(vector<WorkflowParameter> && workflowParameters) { DARABONBA_PTR_SET_RVALUE(workflowParameters_, workflowParameters) };


  protected:
    // The current number of OSS buckets that are bound to the dataset.
    shared_ptr<int64_t> bindCount_ {};
    // The timestamp when the dataset was created. The timestamp must be in the RFC3339Nano format.
    shared_ptr<string> createTime_ {};
    shared_ptr<DatasetConfig> datasetConfig_ {};
    // The maximum number of bindings for the dataset.
    shared_ptr<int64_t> datasetMaxBindCount_ {};
    // The maximum number of metadata entities for the dataset.
    shared_ptr<int64_t> datasetMaxEntityCount_ {};
    // The maximum number of files for the dataset.
    shared_ptr<int64_t> datasetMaxFileCount_ {};
    // The maximum number of metadata relationships for the dataset.
    shared_ptr<int64_t> datasetMaxRelationCount_ {};
    // The maximum total size of files in the dataset. Unit: bytes.
    shared_ptr<int64_t> datasetMaxTotalFileSize_ {};
    // The name of the dataset.
    shared_ptr<string> datasetName_ {};
    // The dataset description.
    shared_ptr<string> description_ {};
    // The current number of files in the dataset.
    shared_ptr<int64_t> fileCount_ {};
    // The name of the project.
    shared_ptr<string> projectName_ {};
    // The ID of the workflow template.
    shared_ptr<string> templateId_ {};
    // The total size of files in the dataset. Unit: bytes.
    shared_ptr<int64_t> totalFileSize_ {};
    // The timestamp when the dataset was last modified. The timestamp must be in the RFC3339Nano format.
    // 
    // >  If a dataset has never been modified after it was created, the timestamp when the dataset was last modified is the same as the timestamp when the dataset was created.
    shared_ptr<string> updateTime_ {};
    // 自定义参数
    shared_ptr<vector<WorkflowParameter>> workflowParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
