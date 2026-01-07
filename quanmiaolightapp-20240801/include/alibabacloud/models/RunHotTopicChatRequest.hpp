// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATREQUEST_HPP_
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
    class StepForBroadcastContentConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StepForBroadcastContentConfig& obj) { 
        DARABONBA_PTR_TO_JSON(categories, categories_);
        DARABONBA_PTR_TO_JSON(customHotValueWeights, customHotValueWeights_);
        DARABONBA_PTR_TO_JSON(topicCount, topicCount_);
      };
      friend void from_json(const Darabonba::Json& j, StepForBroadcastContentConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(categories, categories_);
        DARABONBA_PTR_FROM_JSON(customHotValueWeights, customHotValueWeights_);
        DARABONBA_PTR_FROM_JSON(topicCount, topicCount_);
      };
      StepForBroadcastContentConfig() = default ;
      StepForBroadcastContentConfig(const StepForBroadcastContentConfig &) = default ;
      StepForBroadcastContentConfig(StepForBroadcastContentConfig &&) = default ;
      StepForBroadcastContentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StepForBroadcastContentConfig() = default ;
      StepForBroadcastContentConfig& operator=(const StepForBroadcastContentConfig &) = default ;
      StepForBroadcastContentConfig& operator=(StepForBroadcastContentConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CustomHotValueWeights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomHotValueWeights& obj) { 
          DARABONBA_PTR_TO_JSON(dimension, dimension_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, CustomHotValueWeights& obj) { 
          DARABONBA_PTR_FROM_JSON(dimension, dimension_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        CustomHotValueWeights() = default ;
        CustomHotValueWeights(const CustomHotValueWeights &) = default ;
        CustomHotValueWeights(CustomHotValueWeights &&) = default ;
        CustomHotValueWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomHotValueWeights() = default ;
        CustomHotValueWeights& operator=(const CustomHotValueWeights &) = default ;
        CustomHotValueWeights& operator=(CustomHotValueWeights &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dimension_ == nullptr
        && this->weight_ == nullptr; };
        // dimension Field Functions 
        bool hasDimension() const { return this->dimension_ != nullptr;};
        void deleteDimension() { this->dimension_ = nullptr;};
        inline string getDimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
        inline CustomHotValueWeights& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline CustomHotValueWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> dimension_ {};
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->categories_ == nullptr
        && this->customHotValueWeights_ == nullptr && this->topicCount_ == nullptr; };
      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
      inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
      inline StepForBroadcastContentConfig& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline StepForBroadcastContentConfig& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // customHotValueWeights Field Functions 
      bool hasCustomHotValueWeights() const { return this->customHotValueWeights_ != nullptr;};
      void deleteCustomHotValueWeights() { this->customHotValueWeights_ = nullptr;};
      inline const vector<StepForBroadcastContentConfig::CustomHotValueWeights> & getCustomHotValueWeights() const { DARABONBA_PTR_GET_CONST(customHotValueWeights_, vector<StepForBroadcastContentConfig::CustomHotValueWeights>) };
      inline vector<StepForBroadcastContentConfig::CustomHotValueWeights> getCustomHotValueWeights() { DARABONBA_PTR_GET(customHotValueWeights_, vector<StepForBroadcastContentConfig::CustomHotValueWeights>) };
      inline StepForBroadcastContentConfig& setCustomHotValueWeights(const vector<StepForBroadcastContentConfig::CustomHotValueWeights> & customHotValueWeights) { DARABONBA_PTR_SET_VALUE(customHotValueWeights_, customHotValueWeights) };
      inline StepForBroadcastContentConfig& setCustomHotValueWeights(vector<StepForBroadcastContentConfig::CustomHotValueWeights> && customHotValueWeights) { DARABONBA_PTR_SET_RVALUE(customHotValueWeights_, customHotValueWeights) };


      // topicCount Field Functions 
      bool hasTopicCount() const { return this->topicCount_ != nullptr;};
      void deleteTopicCount() { this->topicCount_ = nullptr;};
      inline int32_t getTopicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0) };
      inline StepForBroadcastContentConfig& setTopicCount(int32_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


    protected:
      shared_ptr<vector<string>> categories_ {};
      shared_ptr<vector<StepForBroadcastContentConfig::CustomHotValueWeights>> customHotValueWeights_ {};
      shared_ptr<int32_t> topicCount_ {};
    };

    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Messages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->generateOptions_ == nullptr && this->hotTopicVersion_ == nullptr && this->hotTopics_ == nullptr && this->imageCount_ == nullptr && this->messages_ == nullptr
        && this->modelCustomPromptTemplate_ == nullptr && this->modelId_ == nullptr && this->originalSessionId_ == nullptr && this->prompt_ == nullptr && this->stepForBroadcastContentConfig_ == nullptr
        && this->taskId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline RunHotTopicChatRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // generateOptions Field Functions 
    bool hasGenerateOptions() const { return this->generateOptions_ != nullptr;};
    void deleteGenerateOptions() { this->generateOptions_ = nullptr;};
    inline const vector<string> & getGenerateOptions() const { DARABONBA_PTR_GET_CONST(generateOptions_, vector<string>) };
    inline vector<string> getGenerateOptions() { DARABONBA_PTR_GET(generateOptions_, vector<string>) };
    inline RunHotTopicChatRequest& setGenerateOptions(const vector<string> & generateOptions) { DARABONBA_PTR_SET_VALUE(generateOptions_, generateOptions) };
    inline RunHotTopicChatRequest& setGenerateOptions(vector<string> && generateOptions) { DARABONBA_PTR_SET_RVALUE(generateOptions_, generateOptions) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline RunHotTopicChatRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // hotTopics Field Functions 
    bool hasHotTopics() const { return this->hotTopics_ != nullptr;};
    void deleteHotTopics() { this->hotTopics_ = nullptr;};
    inline const vector<string> & getHotTopics() const { DARABONBA_PTR_GET_CONST(hotTopics_, vector<string>) };
    inline vector<string> getHotTopics() { DARABONBA_PTR_GET(hotTopics_, vector<string>) };
    inline RunHotTopicChatRequest& setHotTopics(const vector<string> & hotTopics) { DARABONBA_PTR_SET_VALUE(hotTopics_, hotTopics) };
    inline RunHotTopicChatRequest& setHotTopics(vector<string> && hotTopics) { DARABONBA_PTR_SET_RVALUE(hotTopics_, hotTopics) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int32_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0) };
    inline RunHotTopicChatRequest& setImageCount(int32_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<RunHotTopicChatRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<RunHotTopicChatRequest::Messages>) };
    inline vector<RunHotTopicChatRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<RunHotTopicChatRequest::Messages>) };
    inline RunHotTopicChatRequest& setMessages(const vector<RunHotTopicChatRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline RunHotTopicChatRequest& setMessages(vector<RunHotTopicChatRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string getModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline RunHotTopicChatRequest& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunHotTopicChatRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string getOriginalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunHotTopicChatRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunHotTopicChatRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // stepForBroadcastContentConfig Field Functions 
    bool hasStepForBroadcastContentConfig() const { return this->stepForBroadcastContentConfig_ != nullptr;};
    void deleteStepForBroadcastContentConfig() { this->stepForBroadcastContentConfig_ = nullptr;};
    inline const RunHotTopicChatRequest::StepForBroadcastContentConfig & getStepForBroadcastContentConfig() const { DARABONBA_PTR_GET_CONST(stepForBroadcastContentConfig_, RunHotTopicChatRequest::StepForBroadcastContentConfig) };
    inline RunHotTopicChatRequest::StepForBroadcastContentConfig getStepForBroadcastContentConfig() { DARABONBA_PTR_GET(stepForBroadcastContentConfig_, RunHotTopicChatRequest::StepForBroadcastContentConfig) };
    inline RunHotTopicChatRequest& setStepForBroadcastContentConfig(const RunHotTopicChatRequest::StepForBroadcastContentConfig & stepForBroadcastContentConfig) { DARABONBA_PTR_SET_VALUE(stepForBroadcastContentConfig_, stepForBroadcastContentConfig) };
    inline RunHotTopicChatRequest& setStepForBroadcastContentConfig(RunHotTopicChatRequest::StepForBroadcastContentConfig && stepForBroadcastContentConfig) { DARABONBA_PTR_SET_RVALUE(stepForBroadcastContentConfig_, stepForBroadcastContentConfig) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunHotTopicChatRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> category_ {};
    shared_ptr<vector<string>> generateOptions_ {};
    shared_ptr<string> hotTopicVersion_ {};
    shared_ptr<vector<string>> hotTopics_ {};
    shared_ptr<int32_t> imageCount_ {};
    shared_ptr<vector<RunHotTopicChatRequest::Messages>> messages_ {};
    shared_ptr<string> modelCustomPromptTemplate_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> originalSessionId_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<RunHotTopicChatRequest::StepForBroadcastContentConfig> stepForBroadcastContentConfig_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
