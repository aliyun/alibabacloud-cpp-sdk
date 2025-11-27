// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioJson, audioJson_);
      DARABONBA_PTR_TO_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_TO_JSON(EnableCodeInterpreter, enableCodeInterpreter_);
      DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_TO_JSON(ModalitiesList, modalitiesListShrink_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NeedDesensitization, needDesensitization_);
      DARABONBA_PTR_TO_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(ResponseFormat, responseFormat_);
      DARABONBA_PTR_TO_JSON(SearchOptions, searchOptionsShrink_);
      DARABONBA_PTR_TO_JSON(Seed, seed_);
      DARABONBA_PTR_TO_JSON(Stop, stopShrink_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(ThinkingBudget, thinkingBudget_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(TopLogprobs, topLogprobs_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(VlHighResolutionImages, vlHighResolutionImages_);
      DARABONBA_PTR_TO_JSON(XDashScopeDataInspection, XDashScopeDataInspection_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioJson, audioJson_);
      DARABONBA_PTR_FROM_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_FROM_JSON(EnableCodeInterpreter, enableCodeInterpreter_);
      DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(Messages, messagesShrink_);
      DARABONBA_PTR_FROM_JSON(ModalitiesList, modalitiesListShrink_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NeedDesensitization, needDesensitization_);
      DARABONBA_PTR_FROM_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(ResponseFormat, responseFormat_);
      DARABONBA_PTR_FROM_JSON(SearchOptions, searchOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(Seed, seed_);
      DARABONBA_PTR_FROM_JSON(Stop, stopShrink_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(ThinkingBudget, thinkingBudget_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(TopLogprobs, topLogprobs_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
      DARABONBA_PTR_FROM_JSON(VlHighResolutionImages, vlHighResolutionImages_);
      DARABONBA_PTR_FROM_JSON(XDashScopeDataInspection, XDashScopeDataInspection_);
    };
    ChatWithDesensitizeShrinkRequest() = default ;
    ChatWithDesensitizeShrinkRequest(const ChatWithDesensitizeShrinkRequest &) = default ;
    ChatWithDesensitizeShrinkRequest(ChatWithDesensitizeShrinkRequest &&) = default ;
    ChatWithDesensitizeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeShrinkRequest() = default ;
    ChatWithDesensitizeShrinkRequest& operator=(const ChatWithDesensitizeShrinkRequest &) = default ;
    ChatWithDesensitizeShrinkRequest& operator=(ChatWithDesensitizeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioJson_ == nullptr
        && return this->desensitizationRule_ == nullptr && return this->enableCodeInterpreter_ == nullptr && return this->enableSearch_ == nullptr && return this->enableThinking_ == nullptr && return this->instanceId_ == nullptr
        && return this->logprobs_ == nullptr && return this->maxTokens_ == nullptr && return this->messagesShrink_ == nullptr && return this->modalitiesListShrink_ == nullptr && return this->model_ == nullptr
        && return this->needDesensitization_ == nullptr && return this->presencePenalty_ == nullptr && return this->responseFormat_ == nullptr && return this->searchOptionsShrink_ == nullptr && return this->seed_ == nullptr
        && return this->stopShrink_ == nullptr && return this->temperature_ == nullptr && return this->thinkingBudget_ == nullptr && return this->topK_ == nullptr && return this->topLogprobs_ == nullptr
        && return this->topP_ == nullptr && return this->vlHighResolutionImages_ == nullptr && return this->XDashScopeDataInspection_ == nullptr; };
    // audioJson Field Functions 
    bool hasAudioJson() const { return this->audioJson_ != nullptr;};
    void deleteAudioJson() { this->audioJson_ = nullptr;};
    inline string audioJson() const { DARABONBA_PTR_GET_DEFAULT(audioJson_, "") };
    inline ChatWithDesensitizeShrinkRequest& setAudioJson(string audioJson) { DARABONBA_PTR_SET_VALUE(audioJson_, audioJson) };


    // desensitizationRule Field Functions 
    bool hasDesensitizationRule() const { return this->desensitizationRule_ != nullptr;};
    void deleteDesensitizationRule() { this->desensitizationRule_ = nullptr;};
    inline string desensitizationRule() const { DARABONBA_PTR_GET_DEFAULT(desensitizationRule_, "") };
    inline ChatWithDesensitizeShrinkRequest& setDesensitizationRule(string desensitizationRule) { DARABONBA_PTR_SET_VALUE(desensitizationRule_, desensitizationRule) };


    // enableCodeInterpreter Field Functions 
    bool hasEnableCodeInterpreter() const { return this->enableCodeInterpreter_ != nullptr;};
    void deleteEnableCodeInterpreter() { this->enableCodeInterpreter_ = nullptr;};
    inline bool enableCodeInterpreter() const { DARABONBA_PTR_GET_DEFAULT(enableCodeInterpreter_, false) };
    inline ChatWithDesensitizeShrinkRequest& setEnableCodeInterpreter(bool enableCodeInterpreter) { DARABONBA_PTR_SET_VALUE(enableCodeInterpreter_, enableCodeInterpreter) };


    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool enableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline ChatWithDesensitizeShrinkRequest& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // enableThinking Field Functions 
    bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
    void deleteEnableThinking() { this->enableThinking_ = nullptr;};
    inline bool enableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
    inline ChatWithDesensitizeShrinkRequest& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ChatWithDesensitizeShrinkRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logprobs Field Functions 
    bool hasLogprobs() const { return this->logprobs_ != nullptr;};
    void deleteLogprobs() { this->logprobs_ = nullptr;};
    inline bool logprobs() const { DARABONBA_PTR_GET_DEFAULT(logprobs_, false) };
    inline ChatWithDesensitizeShrinkRequest& setLogprobs(bool logprobs) { DARABONBA_PTR_SET_VALUE(logprobs_, logprobs) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int32_t maxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
    inline ChatWithDesensitizeShrinkRequest& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // messagesShrink Field Functions 
    bool hasMessagesShrink() const { return this->messagesShrink_ != nullptr;};
    void deleteMessagesShrink() { this->messagesShrink_ = nullptr;};
    inline string messagesShrink() const { DARABONBA_PTR_GET_DEFAULT(messagesShrink_, "") };
    inline ChatWithDesensitizeShrinkRequest& setMessagesShrink(string messagesShrink) { DARABONBA_PTR_SET_VALUE(messagesShrink_, messagesShrink) };


    // modalitiesListShrink Field Functions 
    bool hasModalitiesListShrink() const { return this->modalitiesListShrink_ != nullptr;};
    void deleteModalitiesListShrink() { this->modalitiesListShrink_ = nullptr;};
    inline string modalitiesListShrink() const { DARABONBA_PTR_GET_DEFAULT(modalitiesListShrink_, "") };
    inline ChatWithDesensitizeShrinkRequest& setModalitiesListShrink(string modalitiesListShrink) { DARABONBA_PTR_SET_VALUE(modalitiesListShrink_, modalitiesListShrink) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatWithDesensitizeShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // needDesensitization Field Functions 
    bool hasNeedDesensitization() const { return this->needDesensitization_ != nullptr;};
    void deleteNeedDesensitization() { this->needDesensitization_ = nullptr;};
    inline bool needDesensitization() const { DARABONBA_PTR_GET_DEFAULT(needDesensitization_, false) };
    inline ChatWithDesensitizeShrinkRequest& setNeedDesensitization(bool needDesensitization) { DARABONBA_PTR_SET_VALUE(needDesensitization_, needDesensitization) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline string presencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, "") };
    inline ChatWithDesensitizeShrinkRequest& setPresencePenalty(string presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline string responseFormat() const { DARABONBA_PTR_GET_DEFAULT(responseFormat_, "") };
    inline ChatWithDesensitizeShrinkRequest& setResponseFormat(string responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };


    // searchOptionsShrink Field Functions 
    bool hasSearchOptionsShrink() const { return this->searchOptionsShrink_ != nullptr;};
    void deleteSearchOptionsShrink() { this->searchOptionsShrink_ = nullptr;};
    inline string searchOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(searchOptionsShrink_, "") };
    inline ChatWithDesensitizeShrinkRequest& setSearchOptionsShrink(string searchOptionsShrink) { DARABONBA_PTR_SET_VALUE(searchOptionsShrink_, searchOptionsShrink) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t seed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline ChatWithDesensitizeShrinkRequest& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // stopShrink Field Functions 
    bool hasStopShrink() const { return this->stopShrink_ != nullptr;};
    void deleteStopShrink() { this->stopShrink_ = nullptr;};
    inline string stopShrink() const { DARABONBA_PTR_GET_DEFAULT(stopShrink_, "") };
    inline ChatWithDesensitizeShrinkRequest& setStopShrink(string stopShrink) { DARABONBA_PTR_SET_VALUE(stopShrink_, stopShrink) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline string temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, "") };
    inline ChatWithDesensitizeShrinkRequest& setTemperature(string temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // thinkingBudget Field Functions 
    bool hasThinkingBudget() const { return this->thinkingBudget_ != nullptr;};
    void deleteThinkingBudget() { this->thinkingBudget_ = nullptr;};
    inline int32_t thinkingBudget() const { DARABONBA_PTR_GET_DEFAULT(thinkingBudget_, 0) };
    inline ChatWithDesensitizeShrinkRequest& setThinkingBudget(int32_t thinkingBudget) { DARABONBA_PTR_SET_VALUE(thinkingBudget_, thinkingBudget) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline ChatWithDesensitizeShrinkRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topLogprobs Field Functions 
    bool hasTopLogprobs() const { return this->topLogprobs_ != nullptr;};
    void deleteTopLogprobs() { this->topLogprobs_ = nullptr;};
    inline int32_t topLogprobs() const { DARABONBA_PTR_GET_DEFAULT(topLogprobs_, 0) };
    inline ChatWithDesensitizeShrinkRequest& setTopLogprobs(int32_t topLogprobs) { DARABONBA_PTR_SET_VALUE(topLogprobs_, topLogprobs) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline string topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, "") };
    inline ChatWithDesensitizeShrinkRequest& setTopP(string topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // vlHighResolutionImages Field Functions 
    bool hasVlHighResolutionImages() const { return this->vlHighResolutionImages_ != nullptr;};
    void deleteVlHighResolutionImages() { this->vlHighResolutionImages_ = nullptr;};
    inline bool vlHighResolutionImages() const { DARABONBA_PTR_GET_DEFAULT(vlHighResolutionImages_, false) };
    inline ChatWithDesensitizeShrinkRequest& setVlHighResolutionImages(bool vlHighResolutionImages) { DARABONBA_PTR_SET_VALUE(vlHighResolutionImages_, vlHighResolutionImages) };


    // XDashScopeDataInspection Field Functions 
    bool hasXDashScopeDataInspection() const { return this->XDashScopeDataInspection_ != nullptr;};
    void deleteXDashScopeDataInspection() { this->XDashScopeDataInspection_ = nullptr;};
    inline string XDashScopeDataInspection() const { DARABONBA_PTR_GET_DEFAULT(XDashScopeDataInspection_, "") };
    inline ChatWithDesensitizeShrinkRequest& setXDashScopeDataInspection(string XDashScopeDataInspection) { DARABONBA_PTR_SET_VALUE(XDashScopeDataInspection_, XDashScopeDataInspection) };


  protected:
    std::shared_ptr<string> audioJson_ = nullptr;
    std::shared_ptr<string> desensitizationRule_ = nullptr;
    std::shared_ptr<bool> enableCodeInterpreter_ = nullptr;
    std::shared_ptr<bool> enableSearch_ = nullptr;
    std::shared_ptr<bool> enableThinking_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<bool> logprobs_ = nullptr;
    std::shared_ptr<int32_t> maxTokens_ = nullptr;
    std::shared_ptr<string> messagesShrink_ = nullptr;
    std::shared_ptr<string> modalitiesListShrink_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<bool> needDesensitization_ = nullptr;
    std::shared_ptr<string> presencePenalty_ = nullptr;
    std::shared_ptr<string> responseFormat_ = nullptr;
    std::shared_ptr<string> searchOptionsShrink_ = nullptr;
    std::shared_ptr<int32_t> seed_ = nullptr;
    std::shared_ptr<string> stopShrink_ = nullptr;
    std::shared_ptr<string> temperature_ = nullptr;
    std::shared_ptr<int32_t> thinkingBudget_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
    std::shared_ptr<int32_t> topLogprobs_ = nullptr;
    std::shared_ptr<string> topP_ = nullptr;
    std::shared_ptr<bool> vlHighResolutionImages_ = nullptr;
    std::shared_ptr<string> XDashScopeDataInspection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
