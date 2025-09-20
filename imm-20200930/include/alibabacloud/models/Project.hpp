// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECT_HPP_
#define ALIBABACLOUD_MODELS_PROJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ProjectTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Project : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Project& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasetCount, datasetCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EngineConcurrency, engineConcurrency_);
      DARABONBA_PTR_TO_JSON(FileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(ProjectMaxDatasetCount, projectMaxDatasetCount_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectQueriesPerSecond, projectQueriesPerSecond_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TotalFileSize, totalFileSize_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, Project& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasetCount, datasetCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EngineConcurrency, engineConcurrency_);
      DARABONBA_PTR_FROM_JSON(FileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(ProjectMaxDatasetCount, projectMaxDatasetCount_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectQueriesPerSecond, projectQueriesPerSecond_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TotalFileSize, totalFileSize_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    Project() = default ;
    Project(const Project &) = default ;
    Project(Project &&) = default ;
    Project(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Project() = default ;
    Project& operator=(const Project &) = default ;
    Project& operator=(Project &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->datasetCount_ != nullptr && this->datasetMaxBindCount_ != nullptr && this->datasetMaxEntityCount_ != nullptr && this->datasetMaxFileCount_ != nullptr && this->datasetMaxRelationCount_ != nullptr
        && this->datasetMaxTotalFileSize_ != nullptr && this->description_ != nullptr && this->engineConcurrency_ != nullptr && this->fileCount_ != nullptr && this->projectMaxDatasetCount_ != nullptr
        && this->projectName_ != nullptr && this->projectQueriesPerSecond_ != nullptr && this->serviceRole_ != nullptr && this->tags_ != nullptr && this->templateId_ != nullptr
        && this->totalFileSize_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Project& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetCount Field Functions 
    bool hasDatasetCount() const { return this->datasetCount_ != nullptr;};
    void deleteDatasetCount() { this->datasetCount_ = nullptr;};
    inline int64_t datasetCount() const { DARABONBA_PTR_GET_DEFAULT(datasetCount_, 0L) };
    inline Project& setDatasetCount(int64_t datasetCount) { DARABONBA_PTR_SET_VALUE(datasetCount_, datasetCount) };


    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t datasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline Project& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t datasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline Project& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t datasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline Project& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t datasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline Project& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t datasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline Project& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Project& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineConcurrency Field Functions 
    bool hasEngineConcurrency() const { return this->engineConcurrency_ != nullptr;};
    void deleteEngineConcurrency() { this->engineConcurrency_ = nullptr;};
    inline int64_t engineConcurrency() const { DARABONBA_PTR_GET_DEFAULT(engineConcurrency_, 0L) };
    inline Project& setEngineConcurrency(int64_t engineConcurrency) { DARABONBA_PTR_SET_VALUE(engineConcurrency_, engineConcurrency) };


    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int64_t fileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
    inline Project& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // projectMaxDatasetCount Field Functions 
    bool hasProjectMaxDatasetCount() const { return this->projectMaxDatasetCount_ != nullptr;};
    void deleteProjectMaxDatasetCount() { this->projectMaxDatasetCount_ = nullptr;};
    inline int64_t projectMaxDatasetCount() const { DARABONBA_PTR_GET_DEFAULT(projectMaxDatasetCount_, 0L) };
    inline Project& setProjectMaxDatasetCount(int64_t projectMaxDatasetCount) { DARABONBA_PTR_SET_VALUE(projectMaxDatasetCount_, projectMaxDatasetCount) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline Project& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectQueriesPerSecond Field Functions 
    bool hasProjectQueriesPerSecond() const { return this->projectQueriesPerSecond_ != nullptr;};
    void deleteProjectQueriesPerSecond() { this->projectQueriesPerSecond_ = nullptr;};
    inline int64_t projectQueriesPerSecond() const { DARABONBA_PTR_GET_DEFAULT(projectQueriesPerSecond_, 0L) };
    inline Project& setProjectQueriesPerSecond(int64_t projectQueriesPerSecond) { DARABONBA_PTR_SET_VALUE(projectQueriesPerSecond_, projectQueriesPerSecond) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string serviceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline Project& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ProjectTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ProjectTags>) };
    inline vector<ProjectTags> tags() { DARABONBA_PTR_GET(tags_, vector<ProjectTags>) };
    inline Project& setTags(const vector<ProjectTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Project& setTags(vector<ProjectTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline Project& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // totalFileSize Field Functions 
    bool hasTotalFileSize() const { return this->totalFileSize_ != nullptr;};
    void deleteTotalFileSize() { this->totalFileSize_ = nullptr;};
    inline int64_t totalFileSize() const { DARABONBA_PTR_GET_DEFAULT(totalFileSize_, 0L) };
    inline Project& setTotalFileSize(int64_t totalFileSize) { DARABONBA_PTR_SET_VALUE(totalFileSize_, totalFileSize) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Project& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> datasetCount_ = nullptr;
    std::shared_ptr<int64_t> datasetMaxBindCount_ = nullptr;
    std::shared_ptr<int64_t> datasetMaxEntityCount_ = nullptr;
    std::shared_ptr<int64_t> datasetMaxFileCount_ = nullptr;
    std::shared_ptr<int64_t> datasetMaxRelationCount_ = nullptr;
    std::shared_ptr<int64_t> datasetMaxTotalFileSize_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> engineConcurrency_ = nullptr;
    std::shared_ptr<int64_t> fileCount_ = nullptr;
    std::shared_ptr<int64_t> projectMaxDatasetCount_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<int64_t> projectQueriesPerSecond_ = nullptr;
    std::shared_ptr<string> serviceRole_ = nullptr;
    std::shared_ptr<vector<ProjectTags>> tags_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<int64_t> totalFileSize_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
