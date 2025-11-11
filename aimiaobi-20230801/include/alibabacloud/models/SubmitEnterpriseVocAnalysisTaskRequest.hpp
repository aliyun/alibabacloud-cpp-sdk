// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitEnterpriseVocAnalysisTaskRequestContentTags.hpp>
#include <alibabacloud/models/SubmitEnterpriseVocAnalysisTaskRequestContents.hpp>
#include <alibabacloud/models/SubmitEnterpriseVocAnalysisTaskRequestFilterTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ContentTags, contentTags_);
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(FilterTags, filterTags_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(PositiveSample, positiveSample_);
      DARABONBA_PTR_TO_JSON(PositiveSampleFileKey, positiveSampleFileKey_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ContentTags, contentTags_);
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(FilterTags, filterTags_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(PositiveSample, positiveSample_);
      DARABONBA_PTR_FROM_JSON(PositiveSampleFileKey, positiveSampleFileKey_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitEnterpriseVocAnalysisTaskRequest() = default ;
    SubmitEnterpriseVocAnalysisTaskRequest(const SubmitEnterpriseVocAnalysisTaskRequest &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequest(SubmitEnterpriseVocAnalysisTaskRequest &&) = default ;
    SubmitEnterpriseVocAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEnterpriseVocAnalysisTaskRequest() = default ;
    SubmitEnterpriseVocAnalysisTaskRequest& operator=(const SubmitEnterpriseVocAnalysisTaskRequest &) = default ;
    SubmitEnterpriseVocAnalysisTaskRequest& operator=(SubmitEnterpriseVocAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->contentTags_ == nullptr && return this->contents_ == nullptr && return this->fileKey_ == nullptr && return this->filterTags_ == nullptr && return this->materialType_ == nullptr
        && return this->modelId_ == nullptr && return this->positiveSample_ == nullptr && return this->positiveSampleFileKey_ == nullptr && return this->taskType_ == nullptr && return this->workspaceId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contentTags Field Functions 
    bool hasContentTags() const { return this->contentTags_ != nullptr;};
    void deleteContentTags() { this->contentTags_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags> & contentTags() const { DARABONBA_PTR_GET_CONST(contentTags_, vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags> contentTags() { DARABONBA_PTR_GET(contentTags_, vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContentTags(const vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags> & contentTags) { DARABONBA_PTR_SET_VALUE(contentTags_, contentTags) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContentTags(vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags> && contentTags) { DARABONBA_PTR_SET_RVALUE(contentTags_, contentTags) };


    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequestContents> & contents() const { DARABONBA_PTR_GET_CONST(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequestContents>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequestContents> contents() { DARABONBA_PTR_GET(contents_, vector<SubmitEnterpriseVocAnalysisTaskRequestContents>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(const vector<SubmitEnterpriseVocAnalysisTaskRequestContents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setContents(vector<SubmitEnterpriseVocAnalysisTaskRequestContents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // filterTags Field Functions 
    bool hasFilterTags() const { return this->filterTags_ != nullptr;};
    void deleteFilterTags() { this->filterTags_ = nullptr;};
    inline const vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> & filterTags() const { DARABONBA_PTR_GET_CONST(filterTags_, vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>) };
    inline vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> filterTags() { DARABONBA_PTR_GET(filterTags_, vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFilterTags(const vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> & filterTags) { DARABONBA_PTR_SET_VALUE(filterTags_, filterTags) };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setFilterTags(vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags> && filterTags) { DARABONBA_PTR_SET_RVALUE(filterTags_, filterTags) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string materialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // positiveSample Field Functions 
    bool hasPositiveSample() const { return this->positiveSample_ != nullptr;};
    void deletePositiveSample() { this->positiveSample_ = nullptr;};
    inline string positiveSample() const { DARABONBA_PTR_GET_DEFAULT(positiveSample_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setPositiveSample(string positiveSample) { DARABONBA_PTR_SET_VALUE(positiveSample_, positiveSample) };


    // positiveSampleFileKey Field Functions 
    bool hasPositiveSampleFileKey() const { return this->positiveSampleFileKey_ != nullptr;};
    void deletePositiveSampleFileKey() { this->positiveSampleFileKey_ = nullptr;};
    inline string positiveSampleFileKey() const { DARABONBA_PTR_GET_DEFAULT(positiveSampleFileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setPositiveSampleFileKey(string positiveSampleFileKey) { DARABONBA_PTR_SET_VALUE(positiveSampleFileKey_, positiveSampleFileKey) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestContentTags>> contentTags_ = nullptr;
    std::shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestContents>> contents_ = nullptr;
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>> filterTags_ = nullptr;
    std::shared_ptr<string> materialType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> positiveSample_ = nullptr;
    std::shared_ptr<string> positiveSampleFileKey_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
