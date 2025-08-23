// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITENTERPRISEVOCANALYSISTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitEnterpriseVocAnalysisTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitEnterpriseVocAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(contents, contentsShrink_);
      DARABONBA_PTR_TO_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(fileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(filterTags, filterTagsShrink_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_TO_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_TO_JSON(tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitEnterpriseVocAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(contents, contentsShrink_);
      DARABONBA_PTR_FROM_JSON(extraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(fileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(filterTags, filterTagsShrink_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(outputFormat, outputFormat_);
      DARABONBA_PTR_FROM_JSON(sourceTrace, sourceTrace_);
      DARABONBA_PTR_FROM_JSON(tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(taskDescription, taskDescription_);
      DARABONBA_PTR_FROM_JSON(url, url_);
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
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->contentsShrink_ != nullptr && this->extraInfo_ != nullptr && this->fileKey_ != nullptr && this->filterTagsShrink_ != nullptr && this->modelId_ != nullptr
        && this->outputFormat_ != nullptr && this->sourceTrace_ != nullptr && this->tagsShrink_ != nullptr && this->taskDescription_ != nullptr && this->url_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contentsShrink Field Functions 
    bool hasContentsShrink() const { return this->contentsShrink_ != nullptr;};
    void deleteContentsShrink() { this->contentsShrink_ = nullptr;};
    inline string contentsShrink() const { DARABONBA_PTR_GET_DEFAULT(contentsShrink_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setContentsShrink(string contentsShrink) { DARABONBA_PTR_SET_VALUE(contentsShrink_, contentsShrink) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string fileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // filterTagsShrink Field Functions 
    bool hasFilterTagsShrink() const { return this->filterTagsShrink_ != nullptr;};
    void deleteFilterTagsShrink() { this->filterTagsShrink_ = nullptr;};
    inline string filterTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(filterTagsShrink_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setFilterTagsShrink(string filterTagsShrink) { DARABONBA_PTR_SET_VALUE(filterTagsShrink_, filterTagsShrink) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // outputFormat Field Functions 
    bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
    void deleteOutputFormat() { this->outputFormat_ = nullptr;};
    inline string outputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    // sourceTrace Field Functions 
    bool hasSourceTrace() const { return this->sourceTrace_ != nullptr;};
    void deleteSourceTrace() { this->sourceTrace_ = nullptr;};
    inline bool sourceTrace() const { DARABONBA_PTR_GET_DEFAULT(sourceTrace_, false) };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setSourceTrace(bool sourceTrace) { DARABONBA_PTR_SET_VALUE(sourceTrace_, sourceTrace) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // taskDescription Field Functions 
    bool hasTaskDescription() const { return this->taskDescription_ != nullptr;};
    void deleteTaskDescription() { this->taskDescription_ = nullptr;};
    inline string taskDescription() const { DARABONBA_PTR_GET_DEFAULT(taskDescription_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setTaskDescription(string taskDescription) { DARABONBA_PTR_SET_VALUE(taskDescription_, taskDescription) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitEnterpriseVocAnalysisTaskShrinkRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> contentsShrink_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    std::shared_ptr<string> fileKey_ = nullptr;
    std::shared_ptr<string> filterTagsShrink_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> outputFormat_ = nullptr;
    std::shared_ptr<bool> sourceTrace_ = nullptr;
    std::shared_ptr<string> tagsShrink_ = nullptr;
    std::shared_ptr<string> taskDescription_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
