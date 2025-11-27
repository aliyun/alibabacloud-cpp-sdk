// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATWITHDESENSITIZESSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATWITHDESENSITIZESSEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ChatWithDesensitizeSSERequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatWithDesensitizeSSERequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioJson, audioJson_);
      DARABONBA_PTR_TO_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_TO_JSON(EnableCodeInterpreter, enableCodeInterpreter_);
      DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_TO_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_TO_JSON(IncludeUsage, includeUsage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_TO_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(ModalitiesList, modalitiesList_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NeedDesensitization, needDesensitization_);
      DARABONBA_PTR_TO_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_TO_JSON(ResponseFormat, responseFormat_);
      DARABONBA_PTR_TO_JSON(SearchOptions, searchOptions_);
      DARABONBA_PTR_TO_JSON(Seed, seed_);
      DARABONBA_PTR_TO_JSON(Stop, stop_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(ThinkingBudget, thinkingBudget_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(TopLogprobs, topLogprobs_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(VlHighResolutionImages, vlHighResolutionImages_);
      DARABONBA_PTR_TO_JSON(XDashScopeDataInspection, XDashScopeDataInspection_);
    };
    friend void from_json(const Darabonba::Json& j, ChatWithDesensitizeSSERequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioJson, audioJson_);
      DARABONBA_PTR_FROM_JSON(DesensitizationRule, desensitizationRule_);
      DARABONBA_PTR_FROM_JSON(EnableCodeInterpreter, enableCodeInterpreter_);
      DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
      DARABONBA_PTR_FROM_JSON(EnableThinking, enableThinking_);
      DARABONBA_PTR_FROM_JSON(IncludeUsage, includeUsage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logprobs, logprobs_);
      DARABONBA_PTR_FROM_JSON(MaxTokens, maxTokens_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(ModalitiesList, modalitiesList_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NeedDesensitization, needDesensitization_);
      DARABONBA_PTR_FROM_JSON(PresencePenalty, presencePenalty_);
      DARABONBA_PTR_FROM_JSON(ResponseFormat, responseFormat_);
      DARABONBA_PTR_FROM_JSON(SearchOptions, searchOptions_);
      DARABONBA_PTR_FROM_JSON(Seed, seed_);
      DARABONBA_PTR_FROM_JSON(Stop, stop_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(ThinkingBudget, thinkingBudget_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(TopLogprobs, topLogprobs_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
      DARABONBA_PTR_FROM_JSON(VlHighResolutionImages, vlHighResolutionImages_);
      DARABONBA_PTR_FROM_JSON(XDashScopeDataInspection, XDashScopeDataInspection_);
    };
    ChatWithDesensitizeSSERequest() = default ;
    ChatWithDesensitizeSSERequest(const ChatWithDesensitizeSSERequest &) = default ;
    ChatWithDesensitizeSSERequest(ChatWithDesensitizeSSERequest &&) = default ;
    ChatWithDesensitizeSSERequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatWithDesensitizeSSERequest() = default ;
    ChatWithDesensitizeSSERequest& operator=(const ChatWithDesensitizeSSERequest &) = default ;
    ChatWithDesensitizeSSERequest& operator=(ChatWithDesensitizeSSERequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioJson_ == nullptr
        && return this->desensitizationRule_ == nullptr && return this->enableCodeInterpreter_ == nullptr && return this->enableSearch_ == nullptr && return this->enableThinking_ == nullptr && return this->includeUsage_ == nullptr
        && return this->instanceId_ == nullptr && return this->logprobs_ == nullptr && return this->maxTokens_ == nullptr && return this->messages_ == nullptr && return this->modalitiesList_ == nullptr
        && return this->model_ == nullptr && return this->needDesensitization_ == nullptr && return this->presencePenalty_ == nullptr && return this->responseFormat_ == nullptr && return this->searchOptions_ == nullptr
        && return this->seed_ == nullptr && return this->stop_ == nullptr && return this->stream_ == nullptr && return this->temperature_ == nullptr && return this->thinkingBudget_ == nullptr
        && return this->topK_ == nullptr && return this->topLogprobs_ == nullptr && return this->topP_ == nullptr && return this->vlHighResolutionImages_ == nullptr && return this->XDashScopeDataInspection_ == nullptr; };
    // audioJson Field Functions 
    bool hasAudioJson() const { return this->audioJson_ != nullptr;};
    void deleteAudioJson() { this->audioJson_ = nullptr;};
    inline string audioJson() const { DARABONBA_PTR_GET_DEFAULT(audioJson_, "") };
    inline ChatWithDesensitizeSSERequest& setAudioJson(string audioJson) { DARABONBA_PTR_SET_VALUE(audioJson_, audioJson) };


    // desensitizationRule Field Functions 
    bool hasDesensitizationRule() const { return this->desensitizationRule_ != nullptr;};
    void deleteDesensitizationRule() { this->desensitizationRule_ = nullptr;};
    inline string desensitizationRule() const { DARABONBA_PTR_GET_DEFAULT(desensitizationRule_, "") };
    inline ChatWithDesensitizeSSERequest& setDesensitizationRule(string desensitizationRule) { DARABONBA_PTR_SET_VALUE(desensitizationRule_, desensitizationRule) };


    // enableCodeInterpreter Field Functions 
    bool hasEnableCodeInterpreter() const { return this->enableCodeInterpreter_ != nullptr;};
    void deleteEnableCodeInterpreter() { this->enableCodeInterpreter_ = nullptr;};
    inline bool enableCodeInterpreter() const { DARABONBA_PTR_GET_DEFAULT(enableCodeInterpreter_, false) };
    inline ChatWithDesensitizeSSERequest& setEnableCodeInterpreter(bool enableCodeInterpreter) { DARABONBA_PTR_SET_VALUE(enableCodeInterpreter_, enableCodeInterpreter) };


    // enableSearch Field Functions 
    bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
    void deleteEnableSearch() { this->enableSearch_ = nullptr;};
    inline bool enableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
    inline ChatWithDesensitizeSSERequest& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


    // enableThinking Field Functions 
    bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
    void deleteEnableThinking() { this->enableThinking_ = nullptr;};
    inline bool enableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
    inline ChatWithDesensitizeSSERequest& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


    // includeUsage Field Functions 
    bool hasIncludeUsage() const { return this->includeUsage_ != nullptr;};
    void deleteIncludeUsage() { this->includeUsage_ = nullptr;};
    inline bool includeUsage() const { DARABONBA_PTR_GET_DEFAULT(includeUsage_, false) };
    inline ChatWithDesensitizeSSERequest& setIncludeUsage(bool includeUsage) { DARABONBA_PTR_SET_VALUE(includeUsage_, includeUsage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ChatWithDesensitizeSSERequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logprobs Field Functions 
    bool hasLogprobs() const { return this->logprobs_ != nullptr;};
    void deleteLogprobs() { this->logprobs_ = nullptr;};
    inline bool logprobs() const { DARABONBA_PTR_GET_DEFAULT(logprobs_, false) };
    inline ChatWithDesensitizeSSERequest& setLogprobs(bool logprobs) { DARABONBA_PTR_SET_VALUE(logprobs_, logprobs) };


    // maxTokens Field Functions 
    bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
    void deleteMaxTokens() { this->maxTokens_ = nullptr;};
    inline int32_t maxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
    inline ChatWithDesensitizeSSERequest& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Darabonba::Json> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> messages() { DARABONBA_PTR_GET(messages_, vector<Darabonba::Json>) };
    inline ChatWithDesensitizeSSERequest& setMessages(const vector<Darabonba::Json> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ChatWithDesensitizeSSERequest& setMessages(vector<Darabonba::Json> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // modalitiesList Field Functions 
    bool hasModalitiesList() const { return this->modalitiesList_ != nullptr;};
    void deleteModalitiesList() { this->modalitiesList_ = nullptr;};
    inline const vector<string> & modalitiesList() const { DARABONBA_PTR_GET_CONST(modalitiesList_, vector<string>) };
    inline vector<string> modalitiesList() { DARABONBA_PTR_GET(modalitiesList_, vector<string>) };
    inline ChatWithDesensitizeSSERequest& setModalitiesList(const vector<string> & modalitiesList) { DARABONBA_PTR_SET_VALUE(modalitiesList_, modalitiesList) };
    inline ChatWithDesensitizeSSERequest& setModalitiesList(vector<string> && modalitiesList) { DARABONBA_PTR_SET_RVALUE(modalitiesList_, modalitiesList) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatWithDesensitizeSSERequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // needDesensitization Field Functions 
    bool hasNeedDesensitization() const { return this->needDesensitization_ != nullptr;};
    void deleteNeedDesensitization() { this->needDesensitization_ = nullptr;};
    inline bool needDesensitization() const { DARABONBA_PTR_GET_DEFAULT(needDesensitization_, false) };
    inline ChatWithDesensitizeSSERequest& setNeedDesensitization(bool needDesensitization) { DARABONBA_PTR_SET_VALUE(needDesensitization_, needDesensitization) };


    // presencePenalty Field Functions 
    bool hasPresencePenalty() const { return this->presencePenalty_ != nullptr;};
    void deletePresencePenalty() { this->presencePenalty_ = nullptr;};
    inline string presencePenalty() const { DARABONBA_PTR_GET_DEFAULT(presencePenalty_, "") };
    inline ChatWithDesensitizeSSERequest& setPresencePenalty(string presencePenalty) { DARABONBA_PTR_SET_VALUE(presencePenalty_, presencePenalty) };


    // responseFormat Field Functions 
    bool hasResponseFormat() const { return this->responseFormat_ != nullptr;};
    void deleteResponseFormat() { this->responseFormat_ = nullptr;};
    inline string responseFormat() const { DARABONBA_PTR_GET_DEFAULT(responseFormat_, "") };
    inline ChatWithDesensitizeSSERequest& setResponseFormat(string responseFormat) { DARABONBA_PTR_SET_VALUE(responseFormat_, responseFormat) };


    // searchOptions Field Functions 
    bool hasSearchOptions() const { return this->searchOptions_ != nullptr;};
    void deleteSearchOptions() { this->searchOptions_ = nullptr;};
    inline const map<string, string> & searchOptions() const { DARABONBA_PTR_GET_CONST(searchOptions_, map<string, string>) };
    inline map<string, string> searchOptions() { DARABONBA_PTR_GET(searchOptions_, map<string, string>) };
    inline ChatWithDesensitizeSSERequest& setSearchOptions(const map<string, string> & searchOptions) { DARABONBA_PTR_SET_VALUE(searchOptions_, searchOptions) };
    inline ChatWithDesensitizeSSERequest& setSearchOptions(map<string, string> && searchOptions) { DARABONBA_PTR_SET_RVALUE(searchOptions_, searchOptions) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t seed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline ChatWithDesensitizeSSERequest& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline const vector<string> & stop() const { DARABONBA_PTR_GET_CONST(stop_, vector<string>) };
    inline vector<string> stop() { DARABONBA_PTR_GET(stop_, vector<string>) };
    inline ChatWithDesensitizeSSERequest& setStop(const vector<string> & stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };
    inline ChatWithDesensitizeSSERequest& setStop(vector<string> && stop) { DARABONBA_PTR_SET_RVALUE(stop_, stop) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline ChatWithDesensitizeSSERequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline string temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, "") };
    inline ChatWithDesensitizeSSERequest& setTemperature(string temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // thinkingBudget Field Functions 
    bool hasThinkingBudget() const { return this->thinkingBudget_ != nullptr;};
    void deleteThinkingBudget() { this->thinkingBudget_ = nullptr;};
    inline int32_t thinkingBudget() const { DARABONBA_PTR_GET_DEFAULT(thinkingBudget_, 0) };
    inline ChatWithDesensitizeSSERequest& setThinkingBudget(int32_t thinkingBudget) { DARABONBA_PTR_SET_VALUE(thinkingBudget_, thinkingBudget) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline ChatWithDesensitizeSSERequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topLogprobs Field Functions 
    bool hasTopLogprobs() const { return this->topLogprobs_ != nullptr;};
    void deleteTopLogprobs() { this->topLogprobs_ = nullptr;};
    inline int32_t topLogprobs() const { DARABONBA_PTR_GET_DEFAULT(topLogprobs_, 0) };
    inline ChatWithDesensitizeSSERequest& setTopLogprobs(int32_t topLogprobs) { DARABONBA_PTR_SET_VALUE(topLogprobs_, topLogprobs) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline string topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, "") };
    inline ChatWithDesensitizeSSERequest& setTopP(string topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // vlHighResolutionImages Field Functions 
    bool hasVlHighResolutionImages() const { return this->vlHighResolutionImages_ != nullptr;};
    void deleteVlHighResolutionImages() { this->vlHighResolutionImages_ = nullptr;};
    inline bool vlHighResolutionImages() const { DARABONBA_PTR_GET_DEFAULT(vlHighResolutionImages_, false) };
    inline ChatWithDesensitizeSSERequest& setVlHighResolutionImages(bool vlHighResolutionImages) { DARABONBA_PTR_SET_VALUE(vlHighResolutionImages_, vlHighResolutionImages) };


    // XDashScopeDataInspection Field Functions 
    bool hasXDashScopeDataInspection() const { return this->XDashScopeDataInspection_ != nullptr;};
    void deleteXDashScopeDataInspection() { this->XDashScopeDataInspection_ = nullptr;};
    inline string XDashScopeDataInspection() const { DARABONBA_PTR_GET_DEFAULT(XDashScopeDataInspection_, "") };
    inline ChatWithDesensitizeSSERequest& setXDashScopeDataInspection(string XDashScopeDataInspection) { DARABONBA_PTR_SET_VALUE(XDashScopeDataInspection_, XDashScopeDataInspection) };


  protected:
    std::shared_ptr<string> audioJson_ = nullptr;
    std::shared_ptr<string> desensitizationRule_ = nullptr;
    std::shared_ptr<bool> enableCodeInterpreter_ = nullptr;
    std::shared_ptr<bool> enableSearch_ = nullptr;
    std::shared_ptr<bool> enableThinking_ = nullptr;
    std::shared_ptr<bool> includeUsage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<bool> logprobs_ = nullptr;
    std::shared_ptr<int32_t> maxTokens_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> messages_ = nullptr;
    std::shared_ptr<vector<string>> modalitiesList_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    std::shared_ptr<bool> needDesensitization_ = nullptr;
    std::shared_ptr<string> presencePenalty_ = nullptr;
    std::shared_ptr<string> responseFormat_ = nullptr;
    std::shared_ptr<map<string, string>> searchOptions_ = nullptr;
    std::shared_ptr<int32_t> seed_ = nullptr;
    std::shared_ptr<vector<string>> stop_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
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
