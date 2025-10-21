// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEODETECTSHOTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEODETECTSHOTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitVideoDetectShotTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoDetectShotTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_TO_JSON(intelliSimpPrompt, intelliSimpPrompt_);
      DARABONBA_PTR_TO_JSON(intelliSimpPromptTemplateId, intelliSimpPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(modelVlCustomPromptTemplateId, modelVlCustomPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(options, options_);
      DARABONBA_PTR_TO_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(preModelId, preModelId_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(recognitionOptions, recognitionOptions_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
      DARABONBA_PTR_TO_JSON(vlPrompt, vlPrompt_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoDetectShotTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_FROM_JSON(intelliSimpPrompt, intelliSimpPrompt_);
      DARABONBA_PTR_FROM_JSON(intelliSimpPromptTemplateId, intelliSimpPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(modelVlCustomPromptTemplateId, modelVlCustomPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(options, options_);
      DARABONBA_PTR_FROM_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(preModelId, preModelId_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(recognitionOptions, recognitionOptions_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
      DARABONBA_PTR_FROM_JSON(vlPrompt, vlPrompt_);
    };
    SubmitVideoDetectShotTaskRequest() = default ;
    SubmitVideoDetectShotTaskRequest(const SubmitVideoDetectShotTaskRequest &) = default ;
    SubmitVideoDetectShotTaskRequest(SubmitVideoDetectShotTaskRequest &&) = default ;
    SubmitVideoDetectShotTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoDetectShotTaskRequest() = default ;
    SubmitVideoDetectShotTaskRequest& operator=(const SubmitVideoDetectShotTaskRequest &) = default ;
    SubmitVideoDetectShotTaskRequest& operator=(SubmitVideoDetectShotTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deduplicationId_ == nullptr
        && return this->intelliSimpPrompt_ == nullptr && return this->intelliSimpPromptTemplateId_ == nullptr && return this->language_ == nullptr && return this->modelCustomPromptTemplateId_ == nullptr && return this->modelId_ == nullptr
        && return this->modelVlCustomPromptTemplateId_ == nullptr && return this->options_ == nullptr && return this->originalSessionId_ == nullptr && return this->preModelId_ == nullptr && return this->prompt_ == nullptr
        && return this->recognitionOptions_ == nullptr && return this->taskId_ == nullptr && return this->videoUrl_ == nullptr && return this->vlPrompt_ == nullptr; };
    // deduplicationId Field Functions 
    bool hasDeduplicationId() const { return this->deduplicationId_ != nullptr;};
    void deleteDeduplicationId() { this->deduplicationId_ = nullptr;};
    inline string deduplicationId() const { DARABONBA_PTR_GET_DEFAULT(deduplicationId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setDeduplicationId(string deduplicationId) { DARABONBA_PTR_SET_VALUE(deduplicationId_, deduplicationId) };


    // intelliSimpPrompt Field Functions 
    bool hasIntelliSimpPrompt() const { return this->intelliSimpPrompt_ != nullptr;};
    void deleteIntelliSimpPrompt() { this->intelliSimpPrompt_ = nullptr;};
    inline string intelliSimpPrompt() const { DARABONBA_PTR_GET_DEFAULT(intelliSimpPrompt_, "") };
    inline SubmitVideoDetectShotTaskRequest& setIntelliSimpPrompt(string intelliSimpPrompt) { DARABONBA_PTR_SET_VALUE(intelliSimpPrompt_, intelliSimpPrompt) };


    // intelliSimpPromptTemplateId Field Functions 
    bool hasIntelliSimpPromptTemplateId() const { return this->intelliSimpPromptTemplateId_ != nullptr;};
    void deleteIntelliSimpPromptTemplateId() { this->intelliSimpPromptTemplateId_ = nullptr;};
    inline string intelliSimpPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(intelliSimpPromptTemplateId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setIntelliSimpPromptTemplateId(string intelliSimpPromptTemplateId) { DARABONBA_PTR_SET_VALUE(intelliSimpPromptTemplateId_, intelliSimpPromptTemplateId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SubmitVideoDetectShotTaskRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modelCustomPromptTemplateId Field Functions 
    bool hasModelCustomPromptTemplateId() const { return this->modelCustomPromptTemplateId_ != nullptr;};
    void deleteModelCustomPromptTemplateId() { this->modelCustomPromptTemplateId_ = nullptr;};
    inline string modelCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplateId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setModelCustomPromptTemplateId(string modelCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplateId_, modelCustomPromptTemplateId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelVlCustomPromptTemplateId Field Functions 
    bool hasModelVlCustomPromptTemplateId() const { return this->modelVlCustomPromptTemplateId_ != nullptr;};
    void deleteModelVlCustomPromptTemplateId() { this->modelVlCustomPromptTemplateId_ = nullptr;};
    inline string modelVlCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelVlCustomPromptTemplateId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setModelVlCustomPromptTemplateId(string modelVlCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelVlCustomPromptTemplateId_, modelVlCustomPromptTemplateId) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const vector<string> & options() const { DARABONBA_PTR_GET_CONST(options_, vector<string>) };
    inline vector<string> options() { DARABONBA_PTR_GET(options_, vector<string>) };
    inline SubmitVideoDetectShotTaskRequest& setOptions(const vector<string> & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline SubmitVideoDetectShotTaskRequest& setOptions(vector<string> && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string originalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // preModelId Field Functions 
    bool hasPreModelId() const { return this->preModelId_ != nullptr;};
    void deletePreModelId() { this->preModelId_ = nullptr;};
    inline string preModelId() const { DARABONBA_PTR_GET_DEFAULT(preModelId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setPreModelId(string preModelId) { DARABONBA_PTR_SET_VALUE(preModelId_, preModelId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline SubmitVideoDetectShotTaskRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // recognitionOptions Field Functions 
    bool hasRecognitionOptions() const { return this->recognitionOptions_ != nullptr;};
    void deleteRecognitionOptions() { this->recognitionOptions_ = nullptr;};
    inline const vector<string> & recognitionOptions() const { DARABONBA_PTR_GET_CONST(recognitionOptions_, vector<string>) };
    inline vector<string> recognitionOptions() { DARABONBA_PTR_GET(recognitionOptions_, vector<string>) };
    inline SubmitVideoDetectShotTaskRequest& setRecognitionOptions(const vector<string> & recognitionOptions) { DARABONBA_PTR_SET_VALUE(recognitionOptions_, recognitionOptions) };
    inline SubmitVideoDetectShotTaskRequest& setRecognitionOptions(vector<string> && recognitionOptions) { DARABONBA_PTR_SET_RVALUE(recognitionOptions_, recognitionOptions) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitVideoDetectShotTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline SubmitVideoDetectShotTaskRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


    // vlPrompt Field Functions 
    bool hasVlPrompt() const { return this->vlPrompt_ != nullptr;};
    void deleteVlPrompt() { this->vlPrompt_ = nullptr;};
    inline string vlPrompt() const { DARABONBA_PTR_GET_DEFAULT(vlPrompt_, "") };
    inline SubmitVideoDetectShotTaskRequest& setVlPrompt(string vlPrompt) { DARABONBA_PTR_SET_VALUE(vlPrompt_, vlPrompt) };


  protected:
    std::shared_ptr<string> deduplicationId_ = nullptr;
    std::shared_ptr<string> intelliSimpPrompt_ = nullptr;
    std::shared_ptr<string> intelliSimpPromptTemplateId_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplateId_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> modelVlCustomPromptTemplateId_ = nullptr;
    std::shared_ptr<vector<string>> options_ = nullptr;
    std::shared_ptr<string> originalSessionId_ = nullptr;
    std::shared_ptr<string> preModelId_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<vector<string>> recognitionOptions_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
    std::shared_ptr<string> vlPrompt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
