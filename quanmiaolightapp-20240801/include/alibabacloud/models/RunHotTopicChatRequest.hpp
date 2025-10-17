// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunHotTopicChatRequestMessages.hpp>
#include <alibabacloud/models/RunHotTopicChatRequestStepForBroadcastContentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(hotTopics, hotTopics_);
      DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(stepForBroadcastContentConfig, stepForBroadcastContentConfig_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(hotTopics, hotTopics_);
      DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(stepForBroadcastContentConfig, stepForBroadcastContentConfig_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    RunHotTopicChatRequest() = default ;
    RunHotTopicChatRequest(const RunHotTopicChatRequest &) = default ;
    RunHotTopicChatRequest(RunHotTopicChatRequest &&) = default ;
    RunHotTopicChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatRequest() = default ;
    RunHotTopicChatRequest& operator=(const RunHotTopicChatRequest &) = default ;
    RunHotTopicChatRequest& operator=(RunHotTopicChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->generateOptions_ == nullptr && return this->hotTopicVersion_ == nullptr && return this->hotTopics_ == nullptr && return this->imageCount_ == nullptr && return this->messages_ == nullptr
        && return this->modelCustomPromptTemplate_ == nullptr && return this->modelId_ == nullptr && return this->originalSessionId_ == nullptr && return this->prompt_ == nullptr && return this->stepForBroadcastContentConfig_ == nullptr
        && return this->taskId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline RunHotTopicChatRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // generateOptions Field Functions 
    bool hasGenerateOptions() const { return this->generateOptions_ != nullptr;};
    void deleteGenerateOptions() { this->generateOptions_ = nullptr;};
    inline const vector<string> & generateOptions() const { DARABONBA_PTR_GET_CONST(generateOptions_, vector<string>) };
    inline vector<string> generateOptions() { DARABONBA_PTR_GET(generateOptions_, vector<string>) };
    inline RunHotTopicChatRequest& setGenerateOptions(const vector<string> & generateOptions) { DARABONBA_PTR_SET_VALUE(generateOptions_, generateOptions) };
    inline RunHotTopicChatRequest& setGenerateOptions(vector<string> && generateOptions) { DARABONBA_PTR_SET_RVALUE(generateOptions_, generateOptions) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline RunHotTopicChatRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // hotTopics Field Functions 
    bool hasHotTopics() const { return this->hotTopics_ != nullptr;};
    void deleteHotTopics() { this->hotTopics_ = nullptr;};
    inline const vector<string> & hotTopics() const { DARABONBA_PTR_GET_CONST(hotTopics_, vector<string>) };
    inline vector<string> hotTopics() { DARABONBA_PTR_GET(hotTopics_, vector<string>) };
    inline RunHotTopicChatRequest& setHotTopics(const vector<string> & hotTopics) { DARABONBA_PTR_SET_VALUE(hotTopics_, hotTopics) };
    inline RunHotTopicChatRequest& setHotTopics(vector<string> && hotTopics) { DARABONBA_PTR_SET_RVALUE(hotTopics_, hotTopics) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline RunHotTopicChatRequest& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<RunHotTopicChatRequestMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<RunHotTopicChatRequestMessages>) };
    inline vector<RunHotTopicChatRequestMessages> messages() { DARABONBA_PTR_GET(messages_, vector<RunHotTopicChatRequestMessages>) };
    inline RunHotTopicChatRequest& setMessages(const vector<RunHotTopicChatRequestMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunHotTopicChatRequest& setMessages(vector<RunHotTopicChatRequestMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string modelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline RunHotTopicChatRequest& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunHotTopicChatRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string originalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunHotTopicChatRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunHotTopicChatRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // stepForBroadcastContentConfig Field Functions 
    bool hasStepForBroadcastContentConfig() const { return this->stepForBroadcastContentConfig_ != nullptr;};
    void deleteStepForBroadcastContentConfig() { this->stepForBroadcastContentConfig_ = nullptr;};
    inline const RunHotTopicChatRequestStepForBroadcastContentConfig & stepForBroadcastContentConfig() const { DARABONBA_PTR_GET_CONST(stepForBroadcastContentConfig_, RunHotTopicChatRequestStepForBroadcastContentConfig) };
    inline RunHotTopicChatRequestStepForBroadcastContentConfig stepForBroadcastContentConfig() { DARABONBA_PTR_GET(stepForBroadcastContentConfig_, RunHotTopicChatRequestStepForBroadcastContentConfig) };
    inline RunHotTopicChatRequest& setStepForBroadcastContentConfig(const RunHotTopicChatRequestStepForBroadcastContentConfig & stepForBroadcastContentConfig) { DARABONBA_PTR_SET_VALUE(stepForBroadcastContentConfig_, stepForBroadcastContentConfig) };
    inline RunHotTopicChatRequest& setStepForBroadcastContentConfig(RunHotTopicChatRequestStepForBroadcastContentConfig && stepForBroadcastContentConfig) { DARABONBA_PTR_SET_RVALUE(stepForBroadcastContentConfig_, stepForBroadcastContentConfig) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunHotTopicChatRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<vector<string>> generateOptions_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<vector<string>> hotTopics_ = nullptr;
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    std::shared_ptr<vector<RunHotTopicChatRequestMessages>> messages_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplate_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> originalSessionId_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<RunHotTopicChatRequestStepForBroadcastContentConfig> stepForBroadcastContentConfig_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
