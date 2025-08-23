// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(generateOptions, generateOptionsShrink_);
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(hotTopics, hotTopicsShrink_);
      DARABONBA_PTR_TO_JSON(imageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(messages, messagesShrink_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(stepForBroadcastContentConfig, stepForBroadcastContentConfigShrink_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(generateOptions, generateOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(hotTopics, hotTopicsShrink_);
      DARABONBA_PTR_FROM_JSON(imageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(messages, messagesShrink_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(originalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(stepForBroadcastContentConfig, stepForBroadcastContentConfigShrink_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    RunHotTopicChatShrinkRequest() = default ;
    RunHotTopicChatShrinkRequest(const RunHotTopicChatShrinkRequest &) = default ;
    RunHotTopicChatShrinkRequest(RunHotTopicChatShrinkRequest &&) = default ;
    RunHotTopicChatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatShrinkRequest() = default ;
    RunHotTopicChatShrinkRequest& operator=(const RunHotTopicChatShrinkRequest &) = default ;
    RunHotTopicChatShrinkRequest& operator=(RunHotTopicChatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->generateOptionsShrink_ != nullptr && this->hotTopicVersion_ != nullptr && this->hotTopicsShrink_ != nullptr && this->imageCount_ != nullptr && this->messagesShrink_ != nullptr
        && this->modelCustomPromptTemplate_ != nullptr && this->modelId_ != nullptr && this->originalSessionId_ != nullptr && this->prompt_ != nullptr && this->stepForBroadcastContentConfigShrink_ != nullptr
        && this->taskId_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline RunHotTopicChatShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // generateOptionsShrink Field Functions 
    bool hasGenerateOptionsShrink() const { return this->generateOptionsShrink_ != nullptr;};
    void deleteGenerateOptionsShrink() { this->generateOptionsShrink_ = nullptr;};
    inline string generateOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(generateOptionsShrink_, "") };
    inline RunHotTopicChatShrinkRequest& setGenerateOptionsShrink(string generateOptionsShrink) { DARABONBA_PTR_SET_VALUE(generateOptionsShrink_, generateOptionsShrink) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string hotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline RunHotTopicChatShrinkRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // hotTopicsShrink Field Functions 
    bool hasHotTopicsShrink() const { return this->hotTopicsShrink_ != nullptr;};
    void deleteHotTopicsShrink() { this->hotTopicsShrink_ = nullptr;};
    inline string hotTopicsShrink() const { DARABONBA_PTR_GET_DEFAULT(hotTopicsShrink_, "") };
    inline RunHotTopicChatShrinkRequest& setHotTopicsShrink(string hotTopicsShrink) { DARABONBA_PTR_SET_VALUE(hotTopicsShrink_, hotTopicsShrink) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline RunHotTopicChatShrinkRequest& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // messagesShrink Field Functions 
    bool hasMessagesShrink() const { return this->messagesShrink_ != nullptr;};
    void deleteMessagesShrink() { this->messagesShrink_ = nullptr;};
    inline string messagesShrink() const { DARABONBA_PTR_GET_DEFAULT(messagesShrink_, "") };
    inline RunHotTopicChatShrinkRequest& setMessagesShrink(string messagesShrink) { DARABONBA_PTR_SET_VALUE(messagesShrink_, messagesShrink) };


    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string modelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline RunHotTopicChatShrinkRequest& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunHotTopicChatShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string originalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunHotTopicChatShrinkRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunHotTopicChatShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // stepForBroadcastContentConfigShrink Field Functions 
    bool hasStepForBroadcastContentConfigShrink() const { return this->stepForBroadcastContentConfigShrink_ != nullptr;};
    void deleteStepForBroadcastContentConfigShrink() { this->stepForBroadcastContentConfigShrink_ = nullptr;};
    inline string stepForBroadcastContentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(stepForBroadcastContentConfigShrink_, "") };
    inline RunHotTopicChatShrinkRequest& setStepForBroadcastContentConfigShrink(string stepForBroadcastContentConfigShrink) { DARABONBA_PTR_SET_VALUE(stepForBroadcastContentConfigShrink_, stepForBroadcastContentConfigShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunHotTopicChatShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> category_ = nullptr;
    std::shared_ptr<string> generateOptionsShrink_ = nullptr;
    std::shared_ptr<string> hotTopicVersion_ = nullptr;
    std::shared_ptr<string> hotTopicsShrink_ = nullptr;
    std::shared_ptr<int32_t> imageCount_ = nullptr;
    std::shared_ptr<string> messagesShrink_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplate_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> originalSessionId_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> stepForBroadcastContentConfigShrink_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
