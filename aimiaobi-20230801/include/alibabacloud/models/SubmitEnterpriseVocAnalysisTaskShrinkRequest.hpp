// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(ContentTags, contentTagsShrink_);
      DARABONBA_PTR_TO_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(FilterTags, filterTagsShrink_);
      DARABONBA_PTR_TO_JSON(MaterialType, materialType_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(PositiveSample, positiveSample_);
      DARABONBA_PTR_TO_JSON(PositiveSampleFileKey, positiveSampleFileKey_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(ContentTags, contentTagsShrink_);
      DARABONBA_PTR_FROM_JSON(Contents, contentsShrink_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(FilterTags, filterTagsShrink_);
      DARABONBA_PTR_FROM_JSON(MaterialType, materialType_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(PositiveSample, positiveSample_);
      DARABONBA_PTR_FROM_JSON(PositiveSampleFileKey, positiveSampleFileKey_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitEnterpriseVocAnalysisTaskShrinkRequest() = default ;
    SubmitEnterpriseVocAnalysisTaskShrinkRequest(const SubmitEnterpriseVocAnalysisTaskShrinkRequest &) = default ;
    SubmitEnterpriseVocAnalysisTaskShrinkRequest(SubmitEnterpriseVocAnalysisTaskShrinkRequest &&) = default ;
    SubmitEnterpriseVocAnalysisTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitEnterpriseVocAnalysisTaskShrinkRequest() = default ;
    SubmitEnterpriseVocAnalysisTaskShrinkRequest& operator=(const SubmitEnterpriseVocAnalysisTaskShrinkRequest &) = default ;
    SubmitEnterpriseVocAnalysisTaskShrinkRequest& operator=(SubmitEnterpriseVocAnalysisTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->contentTagsShrink_ == nullptr && this->contentsShrink_ == nullptr && this->fileKey_ == nullptr && this->filterTagsShrink_ == nullptr && this->materialType_ == nullptr
        && this->modelId_ == nullptr && this->positiveSample_ == nullptr && this->positiveSampleFileKey_ == nullptr && this->taskType_ == nullptr && this->workspaceId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contentTagsShrink Field Functions 
    bool hasContentTagsShrink() const { return this->contentTagsShrink_ != nullptr;};
    void deleteContentTagsShrink() { this->contentTagsShrink_ = nullptr;};
    inline string getContentTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(contentTagsShrink_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setContentTagsShrink(string contentTagsShrink) { DARABONBA_PTR_SET_VALUE(contentTagsShrink_, contentTagsShrink) };


    // contentsShrink Field Functions 
    bool hasContentsShrink() const { return this->contentsShrink_ != nullptr;};
    void deleteContentsShrink() { this->contentsShrink_ = nullptr;};
    inline string getContentsShrink() const { DARABONBA_PTR_GET_DEFAULT(contentsShrink_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setContentsShrink(string contentsShrink) { DARABONBA_PTR_SET_VALUE(contentsShrink_, contentsShrink) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // filterTagsShrink Field Functions 
    bool hasFilterTagsShrink() const { return this->filterTagsShrink_ != nullptr;};
    void deleteFilterTagsShrink() { this->filterTagsShrink_ = nullptr;};
    inline string getFilterTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(filterTagsShrink_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setFilterTagsShrink(string filterTagsShrink) { DARABONBA_PTR_SET_VALUE(filterTagsShrink_, filterTagsShrink) };


    // materialType Field Functions 
    bool hasMaterialType() const { return this->materialType_ != nullptr;};
    void deleteMaterialType() { this->materialType_ = nullptr;};
    inline string getMaterialType() const { DARABONBA_PTR_GET_DEFAULT(materialType_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setMaterialType(string materialType) { DARABONBA_PTR_SET_VALUE(materialType_, materialType) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // positiveSample Field Functions 
    bool hasPositiveSample() const { return this->positiveSample_ != nullptr;};
    void deletePositiveSample() { this->positiveSample_ = nullptr;};
    inline string getPositiveSample() const { DARABONBA_PTR_GET_DEFAULT(positiveSample_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setPositiveSample(string positiveSample) { DARABONBA_PTR_SET_VALUE(positiveSample_, positiveSample) };


    // positiveSampleFileKey Field Functions 
    bool hasPositiveSampleFileKey() const { return this->positiveSampleFileKey_ != nullptr;};
    void deletePositiveSampleFileKey() { this->positiveSampleFileKey_ = nullptr;};
    inline string getPositiveSampleFileKey() const { DARABONBA_PTR_GET_DEFAULT(positiveSampleFileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setPositiveSampleFileKey(string positiveSampleFileKey) { DARABONBA_PTR_SET_VALUE(positiveSampleFileKey_, positiveSampleFileKey) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> apiKey_ {};
    // This parameter is required.
    shared_ptr<string> contentTagsShrink_ {};
    shared_ptr<string> contentsShrink_ {};
    shared_ptr<string> fileKey_ {};
    shared_ptr<string> filterTagsShrink_ {};
    shared_ptr<string> materialType_ {};
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    shared_ptr<string> positiveSample_ {};
    shared_ptr<string> positiveSampleFileKey_ {};
    shared_ptr<string> taskType_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
