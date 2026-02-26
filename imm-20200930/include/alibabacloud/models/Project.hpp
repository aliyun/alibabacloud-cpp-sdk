// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECT_HPP_
#define ALIBABACLOUD_MODELS_PROJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->datasetCount_ == nullptr && this->datasetMaxBindCount_ == nullptr && this->datasetMaxEntityCount_ == nullptr && this->datasetMaxFileCount_ == nullptr && this->datasetMaxRelationCount_ == nullptr
        && this->datasetMaxTotalFileSize_ == nullptr && this->description_ == nullptr && this->engineConcurrency_ == nullptr && this->fileCount_ == nullptr && this->projectMaxDatasetCount_ == nullptr
        && this->projectName_ == nullptr && this->projectQueriesPerSecond_ == nullptr && this->serviceRole_ == nullptr && this->tags_ == nullptr && this->templateId_ == nullptr
        && this->totalFileSize_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Project& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetCount Field Functions 
    bool hasDatasetCount() const { return this->datasetCount_ != nullptr;};
    void deleteDatasetCount() { this->datasetCount_ = nullptr;};
    inline int64_t getDatasetCount() const { DARABONBA_PTR_GET_DEFAULT(datasetCount_, 0L) };
    inline Project& setDatasetCount(int64_t datasetCount) { DARABONBA_PTR_SET_VALUE(datasetCount_, datasetCount) };


    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t getDatasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline Project& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t getDatasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline Project& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t getDatasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline Project& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t getDatasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline Project& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t getDatasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline Project& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Project& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineConcurrency Field Functions 
    bool hasEngineConcurrency() const { return this->engineConcurrency_ != nullptr;};
    void deleteEngineConcurrency() { this->engineConcurrency_ = nullptr;};
    inline int64_t getEngineConcurrency() const { DARABONBA_PTR_GET_DEFAULT(engineConcurrency_, 0L) };
    inline Project& setEngineConcurrency(int64_t engineConcurrency) { DARABONBA_PTR_SET_VALUE(engineConcurrency_, engineConcurrency) };


    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int64_t getFileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
    inline Project& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // projectMaxDatasetCount Field Functions 
    bool hasProjectMaxDatasetCount() const { return this->projectMaxDatasetCount_ != nullptr;};
    void deleteProjectMaxDatasetCount() { this->projectMaxDatasetCount_ = nullptr;};
    inline int64_t getProjectMaxDatasetCount() const { DARABONBA_PTR_GET_DEFAULT(projectMaxDatasetCount_, 0L) };
    inline Project& setProjectMaxDatasetCount(int64_t projectMaxDatasetCount) { DARABONBA_PTR_SET_VALUE(projectMaxDatasetCount_, projectMaxDatasetCount) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline Project& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectQueriesPerSecond Field Functions 
    bool hasProjectQueriesPerSecond() const { return this->projectQueriesPerSecond_ != nullptr;};
    void deleteProjectQueriesPerSecond() { this->projectQueriesPerSecond_ = nullptr;};
    inline int64_t getProjectQueriesPerSecond() const { DARABONBA_PTR_GET_DEFAULT(projectQueriesPerSecond_, 0L) };
    inline Project& setProjectQueriesPerSecond(int64_t projectQueriesPerSecond) { DARABONBA_PTR_SET_VALUE(projectQueriesPerSecond_, projectQueriesPerSecond) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string getServiceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline Project& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Project::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Project::Tags>) };
    inline vector<Project::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Project::Tags>) };
    inline Project& setTags(const vector<Project::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Project& setTags(vector<Project::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline Project& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // totalFileSize Field Functions 
    bool hasTotalFileSize() const { return this->totalFileSize_ != nullptr;};
    void deleteTotalFileSize() { this->totalFileSize_ = nullptr;};
    inline int64_t getTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(totalFileSize_, 0L) };
    inline Project& setTotalFileSize(int64_t totalFileSize) { DARABONBA_PTR_SET_VALUE(totalFileSize_, totalFileSize) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Project& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The timestamp when the project was created. The timestamp is in the RFC3339Nano format.
    shared_ptr<string> createTime_ {};
    // The current number of datasets in the project.
    shared_ptr<int64_t> datasetCount_ {};
    // The maximum number of bindings that a dataset can have. Valid values: 1 to 10. Default value: 10.
    shared_ptr<int64_t> datasetMaxBindCount_ {};
    // The maximum number of metadata entities in a dataset. Default value: 10000000000.
    // 
    // >  This parameter is reserved and does not actually apply a limit.
    shared_ptr<int64_t> datasetMaxEntityCount_ {};
    // The maximum number of files in a dataset. Valid values: 1 to 100000000. Default value: 100000000.
    shared_ptr<int64_t> datasetMaxFileCount_ {};
    // The maximum number of metadata relationships in a dataset. Default value: 100000000000.
    // 
    // >  This parameter is reserved and does not actually apply a limit.
    shared_ptr<int64_t> datasetMaxRelationCount_ {};
    // The maximum total file size for a dataset. If the total file size exceeds this limit, indexes can no longer be added. Default value: 90000000000000000. Unit: bytes.
    shared_ptr<int64_t> datasetMaxTotalFileSize_ {};
    // The project description.
    shared_ptr<string> description_ {};
    // The maximum number of tasks that the project can process per second. This corresponds to the maximum number of operators that can run in parallel in the project. Default value: 100.
    // 
    // *   If the number of synchronous tasks that run in parallel exceeds this limit, the task execution time will be extended until a timeout occurs.
    // *   If the number of asynchronous tasks that run in parallel exceeds this limit, the tasks will be queued. This causes delayed task completion. If a task remains in the queue for longer than the specified time limit (usually dozens of seconds), the task will fail.
    shared_ptr<int64_t> engineConcurrency_ {};
    // The current number of files in the project.
    shared_ptr<int64_t> fileCount_ {};
    // The maximum number of datasets that a project can contain. Valid values: 1 to 1000000000. Default value: 1000000000.
    shared_ptr<int64_t> projectMaxDatasetCount_ {};
    // The name of the project.
    shared_ptr<string> projectName_ {};
    // The maximum number of requests that can be processed by the project per second. This corresponds to the maximum number of API operations that can be called in the project per second. Default value: 100.
    shared_ptr<int64_t> projectQueriesPerSecond_ {};
    // The service role.
    shared_ptr<string> serviceRole_ {};
    // The tag list.
    shared_ptr<vector<Project::Tags>> tags_ {};
    // The ID of the workflow template.
    shared_ptr<string> templateId_ {};
    // The current total size of files in the project. Unit: bytes.
    shared_ptr<int64_t> totalFileSize_ {};
    // The timestamp when the project was last modified. The timestamp is in the RFC3339Nano format.
    // 
    // >  If a project is not modified after it is created, the timestamp when the project was created is the same as the timestamp when the project was last modified.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
