// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZESSESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZESSESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeSSEShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeSSEShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioJson, audioJson_);
      DARABONBA_PTR_TO_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EnableCodeInterpreter, enableCodeInterpreter_);
      DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_TO_JSON(IncludeUsage, includeUsage_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_TO_JSON(ModalitiesList, modalitiesListShrink_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NeedDesensitization, needDesensitization_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(ResponseFormat, responseFormat_);
      DARABONBA_PTR_TO_JSON(SearchOptions, searchOptionsShrink_);
      DARABONBA_PTR_TO_JSON(Seed, seed_);
      DARABONBA_PTR_TO_JSON(Stop, stopShrink_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(ThinkingBudget, thinkingBudget_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(TopLogprobs, topLogprobs_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(VlHighResolutionImages, vlHighResolutionImages_);
      DARABONBA_PTR_TO_JSON(XDashScopeDataInspection, XDashScopeDataInspection_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeSSEShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioJson, audioJson_);
      DARABONBA_PTR_FROM_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EnableCodeInterpreter, enableCodeInterpreter_);
      DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_FROM_JSON(IncludeUsage, includeUsage_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_FROM_JSON(ModalitiesList, modalitiesListShrink_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NeedDesensitization, needDesensitization_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(ResponseFormat, responseFormat_);
      DARABONBA_PTR_FROM_JSON(SearchOptions, searchOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(Seed, seed_);
      DARABONBA_PTR_FROM_JSON(Stop, stopShrink_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(ThinkingBudget, thinkingBudget_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(TopLogprobs, topLogprobs_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
      DARABONBA_PTR_FROM_JSON(VlHighResolutionImages, vlHighResolutionImages_);
      DARABONBA_PTR_FROM_JSON(XDashScopeDataInspection, XDashScopeDataInspection_);
    };
    ChatWithDesensitizeSSEShrinkRequest() = default ;
    ChatWithDesensitizeSSEShrinkRequest(const ChatWithDesensitizeSSEShrinkRequest &) = default ;
    ChatWithDesensitizeSSEShrinkRequest(ChatWithDesensitizeSSEShrinkRequest &&) = default ;
    ChatWithDesensitizeSSEShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeSSEShrinkRequest() = default ;
    ChatWithDesensitizeSSEShrinkRequest& operator=(const ChatWithDesensitizeSSEShrinkRequest &) = default ;
    ChatWithDesensitizeSSEShrinkRequest& operator=(ChatWithDesensitizeSSEShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioJson_ == nullptr
        && this->desensitizationRule_ == nullptr && this->dimensions_ == nullptr && this->enableCodeInterpreter_ == nullptr && this->enableSearch_ == nullptr && this->enableThinking_ == nullptr
        && this->includeUsage_ == nullptr && this->input_ == nullptr && this->instanceId_ == nullptr && this->logprobs_ == nullptr && this->maxTokens_ == nullptr
        && this->messagesShrink_ == nullptr && this->modalitiesListShrink_ == nullptr && this->model_ == nullptr && this->needDesensitization_ == nullptr && this->parameters_ == nullptr
        && this->presencePenalty_ == nullptr && this->responseFormat_ == nullptr && this->searchOptionsShrink_ == nullptr && this->seed_ == nullptr && this->stopShrink_ == nullptr
        && this->stream_ == nullptr && this->temperature_ == nullptr && this->thinkingBudget_ == nullptr && this->topK_ == nullptr && this->topLogprobs_ == nullptr
        && this->topP_ == nullptr && this->vlHighResolutionImages_ == nullptr && this->XDashScopeDataInspection_ == nullptr; };
    // audioJson Field Functions 
    bool hasAudioJson() const { return this->audioJson_ != nullptr;};
    void deleteAudioJson() { this->audioJson_ = nullptr;};
    inline string getAudioJson() const { DARABONBA_PTR_GET_DEFAULT(audioJson_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setAudioJson(string audioJson) { DARABONBA_PTR_SET_VALUE(audioJson_, audioJson) };


    // desensitizationRule Field Functions 
    bool hasDesensitizationRule() const { return this->desensitizationRule_ != nullptr;};
    void deleteDesensitizationRule() { this->desensitizationRule_ = nullptr;};
    inline string getDesensitizationRule() const { DARABONBA_PTR_GET_DEFAULT(desensitizationRule_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setDesensitizationRule(string desensitizationRule) { DARABONBA_PTR_SET_VALUE(desensitizationRule_, desensitizationRule) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline int32_t getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, 0) };
    inline ChatWithDesensitizeSSEShrinkRequest& setDimensions(int32_t dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // enableCodeInterpreter Field Functions 
    bool hasEnableCodeInterpreter() const { return this->enableCodeInterpreter_ != nullptr;};
    void deleteEnableCodeInterpreter() { this->enableCodeInterpreter_ = nullptr;};
    inline bool getEnableCodeInterpreter() const { DARABONBA_PTR_GET_DEFAULT(enableCodeInterpreter_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setEnableCodeInterpreter(bool enableCodeInterpreter) { DARABONBA_PTR_SET_VALUE(enableCodeInterpreter_, enableCodeInterpreter) };


    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // enableThinking Field Functions 
    bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
    void deleteEnableThinking() { this->enableThinking_ = nullptr;};
    inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


    // includeUsage Field Functions 
    bool hasIncludeUsage() const { return this->includeUsage_ != nullptr;};
    void deleteIncludeUsage() { this->includeUsage_ = nullptr;};
    inline bool getIncludeUsage() const { DARABONBA_PTR_GET_DEFAULT(includeUsage_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setIncludeUsage(bool includeUsage) { DARABONBA_PTR_SET_VALUE(includeUsage_, includeUsage) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ChatWithDesensitizeSSEShrinkRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logprobs Field Functions 
    bool hasLogprobs() const { return this->logprobs_ != nullptr;};
    void deleteLogprobs() { this->logprobs_ = nullptr;};
    inline bool getLogprobs() const { DARABONBA_PTR_GET_DEFAULT(logprobs_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setLogprobs(bool logprobs) { DARABONBA_PTR_SET_VALUE(logprobs_, logprobs) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
    inline ChatWithDesensitizeSSEShrinkRequest& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // messagesShrink Field Functions 
    bool hasMessagesShrink() const { return this->messagesShrink_ != nullptr;};
    void deleteMessagesShrink() { this->messagesShrink_ = nullptr;};
    inline string getMessagesShrink() const { DARABONBA_PTR_GET_DEFAULT(messagesShrink_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setMessagesShrink(string messagesShrink) { DARABONBA_PTR_SET_VALUE(messagesShrink_, messagesShrink) };


    // modalitiesListShrink Field Functions 
    bool hasModalitiesListShrink() const { return this->modalitiesListShrink_ != nullptr;};
    void deleteModalitiesListShrink() { this->modalitiesListShrink_ = nullptr;};
    inline string getModalitiesListShrink() const { DARABONBA_PTR_GET_DEFAULT(modalitiesListShrink_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setModalitiesListShrink(string modalitiesListShrink) { DARABONBA_PTR_SET_VALUE(modalitiesListShrink_, modalitiesListShrink) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // needDesensitization Field Functions 
    bool hasNeedDesensitization() const { return this->needDesensitization_ != nullptr;};
    void deleteNeedDesensitization() { this->needDesensitization_ = nullptr;};
    inline bool getNeedDesensitization() const { DARABONBA_PTR_GET_DEFAULT(needDesensitization_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setNeedDesensitization(bool needDesensitization) { DARABONBA_PTR_SET_VALUE(needDesensitization_, needDesensitization) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline string getPresencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setPresencePenalty(string presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline string getResponseFormat() const { DARABONBA_PTR_GET_DEFAULT(responseFormat_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setResponseFormat(string responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };


    // searchOptionsShrink Field Functions 
    bool hasSearchOptionsShrink() const { return this->searchOptionsShrink_ != nullptr;};
    void deleteSearchOptionsShrink() { this->searchOptionsShrink_ = nullptr;};
    inline string getSearchOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(searchOptionsShrink_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setSearchOptionsShrink(string searchOptionsShrink) { DARABONBA_PTR_SET_VALUE(searchOptionsShrink_, searchOptionsShrink) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline ChatWithDesensitizeSSEShrinkRequest& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // stopShrink Field Functions 
    bool hasStopShrink() const { return this->stopShrink_ != nullptr;};
    void deleteStopShrink() { this->stopShrink_ = nullptr;};
    inline string getStopShrink() const { DARABONBA_PTR_GET_DEFAULT(stopShrink_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setStopShrink(string stopShrink) { DARABONBA_PTR_SET_VALUE(stopShrink_, stopShrink) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline string getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setTemperature(string temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // thinkingBudget Field Functions 
    bool hasThinkingBudget() const { return this->thinkingBudget_ != nullptr;};
    void deleteThinkingBudget() { this->thinkingBudget_ = nullptr;};
    inline int32_t getThinkingBudget() const { DARABONBA_PTR_GET_DEFAULT(thinkingBudget_, 0) };
    inline ChatWithDesensitizeSSEShrinkRequest& setThinkingBudget(int32_t thinkingBudget) { DARABONBA_PTR_SET_VALUE(thinkingBudget_, thinkingBudget) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline ChatWithDesensitizeSSEShrinkRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topLogprobs Field Functions 
    bool hasTopLogprobs() const { return this->topLogprobs_ != nullptr;};
    void deleteTopLogprobs() { this->topLogprobs_ = nullptr;};
    inline int32_t getTopLogprobs() const { DARABONBA_PTR_GET_DEFAULT(topLogprobs_, 0) };
    inline ChatWithDesensitizeSSEShrinkRequest& setTopLogprobs(int32_t topLogprobs) { DARABONBA_PTR_SET_VALUE(topLogprobs_, topLogprobs) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline string getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setTopP(string topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // vlHighResolutionImages Field Functions 
    bool hasVlHighResolutionImages() const { return this->vlHighResolutionImages_ != nullptr;};
    void deleteVlHighResolutionImages() { this->vlHighResolutionImages_ = nullptr;};
    inline bool getVlHighResolutionImages() const { DARABONBA_PTR_GET_DEFAULT(vlHighResolutionImages_, false) };
    inline ChatWithDesensitizeSSEShrinkRequest& setVlHighResolutionImages(bool vlHighResolutionImages) { DARABONBA_PTR_SET_VALUE(vlHighResolutionImages_, vlHighResolutionImages) };


    // XDashScopeDataInspection Field Functions 
    bool hasXDashScopeDataInspection() const { return this->XDashScopeDataInspection_ != nullptr;};
    void deleteXDashScopeDataInspection() { this->XDashScopeDataInspection_ = nullptr;};
    inline string getXDashScopeDataInspection() const { DARABONBA_PTR_GET_DEFAULT(XDashScopeDataInspection_, "") };
    inline ChatWithDesensitizeSSEShrinkRequest& setXDashScopeDataInspection(string XDashScopeDataInspection) { DARABONBA_PTR_SET_VALUE(XDashScopeDataInspection_, XDashScopeDataInspection) };


  protected:
    // Output audio voice and format; only applicable to the Qwen-Omni model, provided that the modalities parameter is set to ["text", "audio"].
    shared_ptr<string> audioJson_ {};
    // Masking category. Required when needDataMasking is true.
    shared_ptr<string> desensitizationRule_ {};
    // The embedding dimensions.
    shared_ptr<int32_t> dimensions_ {};
    // Specifies whether to enable the code interpreter feature. Takes effect only when model is qwen3-max-preview and enable_thinking is true.
    shared_ptr<bool> enableCodeInterpreter_ {};
    // Whether to enable web search.
    shared_ptr<bool> enableSearch_ {};
    // Specifies whether to enable thinking mode when using hybrid thinking models.
    shared_ptr<bool> enableThinking_ {};
    // Specifies whether to include token usage information in the final chunk of the streaming response.
    shared_ptr<bool> includeUsage_ {};
    // The input to the embedding model.
    shared_ptr<string> input_ {};
    // The ID of the instance, used to specify the corresponding data masking rules. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<int64_t> instanceId_ {};
    // Specifies whether to return the log probabilities of the output tokens.
    shared_ptr<bool> logprobs_ {};
    // Limits the maximum number of tokens the model can generate. If the output exceeds this value, generation will be truncated. Suitable for scenarios where you need to control the output length.
    shared_ptr<int32_t> maxTokens_ {};
    // The conversation context passed to the model, arranged in chronological order.
    shared_ptr<string> messagesShrink_ {};
    // Output data modality; only applicable to the Qwen-Omni model.
    shared_ptr<string> modalitiesListShrink_ {};
    // The model name. Supported models: Qwen series text-only Large Language Models (commercial and open-source). Multi-modal models are not supported.
    shared_ptr<string> model_ {};
    // Whether to enable data masking. Defaults to false.
    shared_ptr<bool> needDesensitization_ {};
    // Model configuration parameters.
    shared_ptr<string> parameters_ {};
    // Controls the degree of repetition in generated text. Valid values: [-2.0, 2.0]. Positive values decrease repetition, while negative values increase it.
    shared_ptr<string> presencePenalty_ {};
    // The format of the returned content. Valid values: text: Plain text response; json_object: Standardized JSON string.
    shared_ptr<string> responseFormat_ {};
    // Web search strategy.
    shared_ptr<string> searchOptionsShrink_ {};
    // Random seed. Used to ensure the reproducibility of results under the same input and parameters. Valid values: [0, 2^31−1].
    shared_ptr<int32_t> seed_ {};
    // Stop sequences.
    shared_ptr<string> stopShrink_ {};
    // Specifies whether to use streaming output.
    shared_ptr<bool> stream_ {};
    // The sampling temperature controls the diversity of the generated text. The higher the temperature, the more diverse the generated text, and conversely, the more deterministic the generated text. Valid values: [0, 2).
    shared_ptr<string> temperature_ {};
    // The maximum number of tokens allowed for the model\\"s internal reasoning process.
    shared_ptr<int32_t> thinkingBudget_ {};
    // Specifies the number of candidate tokens to consider during sampling. Higher values increase randomness, while lower values make the output more deterministic. Set to null or a value greater than 100 to disable.
    shared_ptr<int32_t> topK_ {};
    // Specifies the number of most likely candidate tokens to return at each generation step. Valid values: [0, 5].
    shared_ptr<int32_t> topLogprobs_ {};
    // The probability threshold for nucleus sampling, used to control the diversity of the generated text. Higher Top-P values result in more diverse generated text. Valid values: (0,1.0].
    shared_ptr<string> topP_ {};
    // Specifies whether to increase the maximum pixel limit of input images to the equivalent of 16,384 tokens.
    shared_ptr<bool> vlHighResolutionImages_ {};
    // Specifies whether to further identify non-compliant information in both input and output content, building upon the built-in content safety capabilities of the Tongyi Qianwen API.
    shared_ptr<string> XDashScopeDataInspection_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
