// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(RtcConfig, rtcConfig_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(VoiceChatConfig, voiceChatConfig_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(RtcConfig, rtcConfig_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(VoiceChatConfig, voiceChatConfig_);
    };
    StartAgentRequest() = default ;
    StartAgentRequest(const StartAgentRequest &) = default ;
    StartAgentRequest(StartAgentRequest &&) = default ;
    StartAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequest() = default ;
    StartAgentRequest& operator=(const StartAgentRequest &) = default ;
    StartAgentRequest& operator=(StartAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceChatConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceChatConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ASRConfig, ASRConfig_);
        DARABONBA_PTR_TO_JSON(AgentSilenceConfig, agentSilenceConfig_);
        DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
        DARABONBA_PTR_TO_JSON(BackChannelConfig, backChannelConfig_);
        DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
        DARABONBA_PTR_TO_JSON(Greeting, greeting_);
        DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
        DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
        DARABONBA_PTR_TO_JSON(LLMConfig, LLMConfig_);
        DARABONBA_PTR_TO_JSON(TTSConfig, TTSConfig_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceChatConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ASRConfig, ASRConfig_);
        DARABONBA_PTR_FROM_JSON(AgentSilenceConfig, agentSilenceConfig_);
        DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
        DARABONBA_PTR_FROM_JSON(BackChannelConfig, backChannelConfig_);
        DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
        DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
        DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
        DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
        DARABONBA_PTR_FROM_JSON(LLMConfig, LLMConfig_);
        DARABONBA_PTR_FROM_JSON(TTSConfig, TTSConfig_);
      };
      VoiceChatConfig() = default ;
      VoiceChatConfig(const VoiceChatConfig &) = default ;
      VoiceChatConfig(VoiceChatConfig &&) = default ;
      VoiceChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceChatConfig() = default ;
      VoiceChatConfig& operator=(const VoiceChatConfig &) = default ;
      VoiceChatConfig& operator=(VoiceChatConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TTSConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TTSConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(FilterBrackets, filterBrackets_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Pitch, pitch_);
          DARABONBA_PTR_TO_JSON(Rate, rate_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
          DARABONBA_PTR_TO_JSON(Voice, voice_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, TTSConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(FilterBrackets, filterBrackets_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Pitch, pitch_);
          DARABONBA_PTR_FROM_JSON(Rate, rate_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
          DARABONBA_PTR_FROM_JSON(Voice, voice_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        TTSConfig() = default ;
        TTSConfig(const TTSConfig &) = default ;
        TTSConfig(TTSConfig &&) = default ;
        TTSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TTSConfig() = default ;
        TTSConfig& operator=(const TTSConfig &) = default ;
        TTSConfig& operator=(TTSConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->filterBrackets_ == nullptr && this->model_ == nullptr && this->pitch_ == nullptr && this->rate_ == nullptr && this->vendor_ == nullptr
        && this->voice_ == nullptr && this->volume_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline TTSConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // filterBrackets Field Functions 
        bool hasFilterBrackets() const { return this->filterBrackets_ != nullptr;};
        void deleteFilterBrackets() { this->filterBrackets_ = nullptr;};
        inline const vector<int32_t> & getFilterBrackets() const { DARABONBA_PTR_GET_CONST(filterBrackets_, vector<int32_t>) };
        inline vector<int32_t> getFilterBrackets() { DARABONBA_PTR_GET(filterBrackets_, vector<int32_t>) };
        inline TTSConfig& setFilterBrackets(const vector<int32_t> & filterBrackets) { DARABONBA_PTR_SET_VALUE(filterBrackets_, filterBrackets) };
        inline TTSConfig& setFilterBrackets(vector<int32_t> && filterBrackets) { DARABONBA_PTR_SET_RVALUE(filterBrackets_, filterBrackets) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline TTSConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // pitch Field Functions 
        bool hasPitch() const { return this->pitch_ != nullptr;};
        void deletePitch() { this->pitch_ = nullptr;};
        inline double getPitch() const { DARABONBA_PTR_GET_DEFAULT(pitch_, 0.0) };
        inline TTSConfig& setPitch(double pitch) { DARABONBA_PTR_SET_VALUE(pitch_, pitch) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
        inline TTSConfig& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
        inline TTSConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


        // voice Field Functions 
        bool hasVoice() const { return this->voice_ != nullptr;};
        void deleteVoice() { this->voice_ = nullptr;};
        inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
        inline TTSConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
        inline TTSConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> apiKey_ {};
        shared_ptr<vector<int32_t>> filterBrackets_ {};
        shared_ptr<string> model_ {};
        shared_ptr<double> pitch_ {};
        shared_ptr<double> rate_ {};
        shared_ptr<string> vendor_ {};
        shared_ptr<string> voice_ {};
        shared_ptr<int32_t> volume_ {};
      };

      class LLMConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LLMConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(HistoryDepth, historyDepth_);
          DARABONBA_PTR_TO_JSON(MaxToken, maxToken_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_ANY_TO_JSON(Params, params_);
          DARABONBA_PTR_TO_JSON(Prompt, prompt_);
          DARABONBA_PTR_TO_JSON(Temperature, temperature_);
          DARABONBA_ANY_TO_JSON(ToolExecutionConfig, toolExecutionConfig_);
          DARABONBA_PTR_TO_JSON(Tools, tools_);
          DARABONBA_PTR_TO_JSON(TopP, topP_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, LLMConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(HistoryDepth, historyDepth_);
          DARABONBA_PTR_FROM_JSON(MaxToken, maxToken_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_ANY_FROM_JSON(Params, params_);
          DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
          DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
          DARABONBA_ANY_FROM_JSON(ToolExecutionConfig, toolExecutionConfig_);
          DARABONBA_PTR_FROM_JSON(Tools, tools_);
          DARABONBA_PTR_FROM_JSON(TopP, topP_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        LLMConfig() = default ;
        LLMConfig(const LLMConfig &) = default ;
        LLMConfig(LLMConfig &&) = default ;
        LLMConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LLMConfig() = default ;
        LLMConfig& operator=(const LLMConfig &) = default ;
        LLMConfig& operator=(LLMConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->appId_ == nullptr && this->historyDepth_ == nullptr && this->maxToken_ == nullptr && this->model_ == nullptr && this->params_ == nullptr
        && this->prompt_ == nullptr && this->temperature_ == nullptr && this->toolExecutionConfig_ == nullptr && this->tools_ == nullptr && this->topP_ == nullptr
        && this->url_ == nullptr && this->vendor_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline LLMConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline LLMConfig& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // historyDepth Field Functions 
        bool hasHistoryDepth() const { return this->historyDepth_ != nullptr;};
        void deleteHistoryDepth() { this->historyDepth_ = nullptr;};
        inline int32_t getHistoryDepth() const { DARABONBA_PTR_GET_DEFAULT(historyDepth_, 0) };
        inline LLMConfig& setHistoryDepth(int32_t historyDepth) { DARABONBA_PTR_SET_VALUE(historyDepth_, historyDepth) };


        // maxToken Field Functions 
        bool hasMaxToken() const { return this->maxToken_ != nullptr;};
        void deleteMaxToken() { this->maxToken_ = nullptr;};
        inline int32_t getMaxToken() const { DARABONBA_PTR_GET_DEFAULT(maxToken_, 0) };
        inline LLMConfig& setMaxToken(int32_t maxToken) { DARABONBA_PTR_SET_VALUE(maxToken_, maxToken) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline LLMConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline         const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
        Darabonba::Json & getParams() { DARABONBA_GET(params_) };
        inline LLMConfig& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
        inline LLMConfig& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


        // prompt Field Functions 
        bool hasPrompt() const { return this->prompt_ != nullptr;};
        void deletePrompt() { this->prompt_ = nullptr;};
        inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
        inline LLMConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


        // temperature Field Functions 
        bool hasTemperature() const { return this->temperature_ != nullptr;};
        void deleteTemperature() { this->temperature_ = nullptr;};
        inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
        inline LLMConfig& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


        // toolExecutionConfig Field Functions 
        bool hasToolExecutionConfig() const { return this->toolExecutionConfig_ != nullptr;};
        void deleteToolExecutionConfig() { this->toolExecutionConfig_ = nullptr;};
        inline         const Darabonba::Json & getToolExecutionConfig() const { DARABONBA_GET(toolExecutionConfig_) };
        Darabonba::Json & getToolExecutionConfig() { DARABONBA_GET(toolExecutionConfig_) };
        inline LLMConfig& setToolExecutionConfig(const Darabonba::Json & toolExecutionConfig) { DARABONBA_SET_VALUE(toolExecutionConfig_, toolExecutionConfig) };
        inline LLMConfig& setToolExecutionConfig(Darabonba::Json && toolExecutionConfig) { DARABONBA_SET_RVALUE(toolExecutionConfig_, toolExecutionConfig) };


        // tools Field Functions 
        bool hasTools() const { return this->tools_ != nullptr;};
        void deleteTools() { this->tools_ = nullptr;};
        inline const vector<Darabonba::Json> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getTools() { DARABONBA_PTR_GET(tools_, vector<Darabonba::Json>) };
        inline LLMConfig& setTools(const vector<Darabonba::Json> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
        inline LLMConfig& setTools(vector<Darabonba::Json> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


        // topP Field Functions 
        bool hasTopP() const { return this->topP_ != nullptr;};
        void deleteTopP() { this->topP_ = nullptr;};
        inline double getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
        inline LLMConfig& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline LLMConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
        inline LLMConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        shared_ptr<string> apiKey_ {};
        shared_ptr<string> appId_ {};
        shared_ptr<int32_t> historyDepth_ {};
        shared_ptr<int32_t> maxToken_ {};
        shared_ptr<string> model_ {};
        Darabonba::Json params_ {};
        shared_ptr<string> prompt_ {};
        shared_ptr<double> temperature_ {};
        Darabonba::Json toolExecutionConfig_ {};
        shared_ptr<vector<Darabonba::Json>> tools_ {};
        shared_ptr<double> topP_ {};
        shared_ptr<string> url_ {};
        shared_ptr<string> vendor_ {};
      };

      class InterruptConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InterruptConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SemanticsInterrupt, semanticsInterrupt_);
        };
        friend void from_json(const Darabonba::Json& j, InterruptConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SemanticsInterrupt, semanticsInterrupt_);
        };
        InterruptConfig() = default ;
        InterruptConfig(const InterruptConfig &) = default ;
        InterruptConfig(InterruptConfig &&) = default ;
        InterruptConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InterruptConfig() = default ;
        InterruptConfig& operator=(const InterruptConfig &) = default ;
        InterruptConfig& operator=(InterruptConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->semanticsInterrupt_ == nullptr; };
        // semanticsInterrupt Field Functions 
        bool hasSemanticsInterrupt() const { return this->semanticsInterrupt_ != nullptr;};
        void deleteSemanticsInterrupt() { this->semanticsInterrupt_ = nullptr;};
        inline bool getSemanticsInterrupt() const { DARABONBA_PTR_GET_DEFAULT(semanticsInterrupt_, false) };
        inline InterruptConfig& setSemanticsInterrupt(bool semanticsInterrupt) { DARABONBA_PTR_SET_VALUE(semanticsInterrupt_, semanticsInterrupt) };


      protected:
        shared_ptr<bool> semanticsInterrupt_ {};
      };

      class BackChannelConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackChannelConfig& obj) { 
          DARABONBA_PTR_TO_JSON(UserTurnEnd, userTurnEnd_);
        };
        friend void from_json(const Darabonba::Json& j, BackChannelConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(UserTurnEnd, userTurnEnd_);
        };
        BackChannelConfig() = default ;
        BackChannelConfig(const BackChannelConfig &) = default ;
        BackChannelConfig(BackChannelConfig &&) = default ;
        BackChannelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackChannelConfig() = default ;
        BackChannelConfig& operator=(const BackChannelConfig &) = default ;
        BackChannelConfig& operator=(BackChannelConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userTurnEnd_ == nullptr; };
        // userTurnEnd Field Functions 
        bool hasUserTurnEnd() const { return this->userTurnEnd_ != nullptr;};
        void deleteUserTurnEnd() { this->userTurnEnd_ = nullptr;};
        inline bool getUserTurnEnd() const { DARABONBA_PTR_GET_DEFAULT(userTurnEnd_, false) };
        inline BackChannelConfig& setUserTurnEnd(bool userTurnEnd) { DARABONBA_PTR_SET_VALUE(userTurnEnd_, userTurnEnd) };


      protected:
        shared_ptr<bool> userTurnEnd_ {};
      };

      class AmbientSoundConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AmbientSoundConfig& obj) { 
          DARABONBA_PTR_TO_JSON(SoundId, soundId_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, AmbientSoundConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(SoundId, soundId_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        AmbientSoundConfig() = default ;
        AmbientSoundConfig(const AmbientSoundConfig &) = default ;
        AmbientSoundConfig(AmbientSoundConfig &&) = default ;
        AmbientSoundConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AmbientSoundConfig() = default ;
        AmbientSoundConfig& operator=(const AmbientSoundConfig &) = default ;
        AmbientSoundConfig& operator=(AmbientSoundConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->soundId_ == nullptr
        && this->volume_ == nullptr; };
        // soundId Field Functions 
        bool hasSoundId() const { return this->soundId_ != nullptr;};
        void deleteSoundId() { this->soundId_ = nullptr;};
        inline string getSoundId() const { DARABONBA_PTR_GET_DEFAULT(soundId_, "") };
        inline AmbientSoundConfig& setSoundId(string soundId) { DARABONBA_PTR_SET_VALUE(soundId_, soundId) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
        inline AmbientSoundConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> soundId_ {};
        shared_ptr<int32_t> volume_ {};
      };

      class AgentSilenceConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentSilenceConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AlertTimeout, alertTimeout_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(WebhookTriggerTimeout, webhookTriggerTimeout_);
        };
        friend void from_json(const Darabonba::Json& j, AgentSilenceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertTimeout, alertTimeout_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(WebhookTriggerTimeout, webhookTriggerTimeout_);
        };
        AgentSilenceConfig() = default ;
        AgentSilenceConfig(const AgentSilenceConfig &) = default ;
        AgentSilenceConfig(AgentSilenceConfig &&) = default ;
        AgentSilenceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentSilenceConfig() = default ;
        AgentSilenceConfig& operator=(const AgentSilenceConfig &) = default ;
        AgentSilenceConfig& operator=(AgentSilenceConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertTimeout_ == nullptr
        && this->content_ == nullptr && this->enable_ == nullptr && this->strategy_ == nullptr && this->webhookTriggerTimeout_ == nullptr; };
        // alertTimeout Field Functions 
        bool hasAlertTimeout() const { return this->alertTimeout_ != nullptr;};
        void deleteAlertTimeout() { this->alertTimeout_ = nullptr;};
        inline int32_t getAlertTimeout() const { DARABONBA_PTR_GET_DEFAULT(alertTimeout_, 0) };
        inline AgentSilenceConfig& setAlertTimeout(int32_t alertTimeout) { DARABONBA_PTR_SET_VALUE(alertTimeout_, alertTimeout) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline AgentSilenceConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline AgentSilenceConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline int32_t getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
        inline AgentSilenceConfig& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


        // webhookTriggerTimeout Field Functions 
        bool hasWebhookTriggerTimeout() const { return this->webhookTriggerTimeout_ != nullptr;};
        void deleteWebhookTriggerTimeout() { this->webhookTriggerTimeout_ = nullptr;};
        inline int32_t getWebhookTriggerTimeout() const { DARABONBA_PTR_GET_DEFAULT(webhookTriggerTimeout_, 0) };
        inline AgentSilenceConfig& setWebhookTriggerTimeout(int32_t webhookTriggerTimeout) { DARABONBA_PTR_SET_VALUE(webhookTriggerTimeout_, webhookTriggerTimeout) };


      protected:
        shared_ptr<int32_t> alertTimeout_ {};
        shared_ptr<string> content_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<int32_t> strategy_ {};
        shared_ptr<int32_t> webhookTriggerTimeout_ {};
      };

      class ASRConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ASRConfig& obj) { 
          DARABONBA_PTR_TO_JSON(LanguageHints, languageHints_);
          DARABONBA_PTR_TO_JSON(MaxSentenceSilence, maxSentenceSilence_);
          DARABONBA_PTR_TO_JSON(SemanticPunctuationEnabled, semanticPunctuationEnabled_);
          DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
          DARABONBA_PTR_TO_JSON(VadConfig, vadConfig_);
          DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
        };
        friend void from_json(const Darabonba::Json& j, ASRConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(LanguageHints, languageHints_);
          DARABONBA_PTR_FROM_JSON(MaxSentenceSilence, maxSentenceSilence_);
          DARABONBA_PTR_FROM_JSON(SemanticPunctuationEnabled, semanticPunctuationEnabled_);
          DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
          DARABONBA_PTR_FROM_JSON(VadConfig, vadConfig_);
          DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
        };
        ASRConfig() = default ;
        ASRConfig(const ASRConfig &) = default ;
        ASRConfig(ASRConfig &&) = default ;
        ASRConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ASRConfig() = default ;
        ASRConfig& operator=(const ASRConfig &) = default ;
        ASRConfig& operator=(ASRConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VadConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VadConfig& obj) { 
            DARABONBA_PTR_TO_JSON(InterruptSpeechDuration, interruptSpeechDuration_);
          };
          friend void from_json(const Darabonba::Json& j, VadConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(InterruptSpeechDuration, interruptSpeechDuration_);
          };
          VadConfig() = default ;
          VadConfig(const VadConfig &) = default ;
          VadConfig(VadConfig &&) = default ;
          VadConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VadConfig() = default ;
          VadConfig& operator=(const VadConfig &) = default ;
          VadConfig& operator=(VadConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->interruptSpeechDuration_ == nullptr; };
          // interruptSpeechDuration Field Functions 
          bool hasInterruptSpeechDuration() const { return this->interruptSpeechDuration_ != nullptr;};
          void deleteInterruptSpeechDuration() { this->interruptSpeechDuration_ = nullptr;};
          inline int32_t getInterruptSpeechDuration() const { DARABONBA_PTR_GET_DEFAULT(interruptSpeechDuration_, 0) };
          inline VadConfig& setInterruptSpeechDuration(int32_t interruptSpeechDuration) { DARABONBA_PTR_SET_VALUE(interruptSpeechDuration_, interruptSpeechDuration) };


        protected:
          shared_ptr<int32_t> interruptSpeechDuration_ {};
        };

        virtual bool empty() const override { return this->languageHints_ == nullptr
        && this->maxSentenceSilence_ == nullptr && this->semanticPunctuationEnabled_ == nullptr && this->sourceLanguage_ == nullptr && this->vadConfig_ == nullptr && this->vocabularyId_ == nullptr; };
        // languageHints Field Functions 
        bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
        void deleteLanguageHints() { this->languageHints_ = nullptr;};
        inline const vector<string> & getLanguageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
        inline vector<string> getLanguageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
        inline ASRConfig& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
        inline ASRConfig& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


        // maxSentenceSilence Field Functions 
        bool hasMaxSentenceSilence() const { return this->maxSentenceSilence_ != nullptr;};
        void deleteMaxSentenceSilence() { this->maxSentenceSilence_ = nullptr;};
        inline int32_t getMaxSentenceSilence() const { DARABONBA_PTR_GET_DEFAULT(maxSentenceSilence_, 0) };
        inline ASRConfig& setMaxSentenceSilence(int32_t maxSentenceSilence) { DARABONBA_PTR_SET_VALUE(maxSentenceSilence_, maxSentenceSilence) };


        // semanticPunctuationEnabled Field Functions 
        bool hasSemanticPunctuationEnabled() const { return this->semanticPunctuationEnabled_ != nullptr;};
        void deleteSemanticPunctuationEnabled() { this->semanticPunctuationEnabled_ = nullptr;};
        inline bool getSemanticPunctuationEnabled() const { DARABONBA_PTR_GET_DEFAULT(semanticPunctuationEnabled_, false) };
        inline ASRConfig& setSemanticPunctuationEnabled(bool semanticPunctuationEnabled) { DARABONBA_PTR_SET_VALUE(semanticPunctuationEnabled_, semanticPunctuationEnabled) };


        // sourceLanguage Field Functions 
        bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
        void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
        inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
        inline ASRConfig& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


        // vadConfig Field Functions 
        bool hasVadConfig() const { return this->vadConfig_ != nullptr;};
        void deleteVadConfig() { this->vadConfig_ = nullptr;};
        inline const ASRConfig::VadConfig & getVadConfig() const { DARABONBA_PTR_GET_CONST(vadConfig_, ASRConfig::VadConfig) };
        inline ASRConfig::VadConfig getVadConfig() { DARABONBA_PTR_GET(vadConfig_, ASRConfig::VadConfig) };
        inline ASRConfig& setVadConfig(const ASRConfig::VadConfig & vadConfig) { DARABONBA_PTR_SET_VALUE(vadConfig_, vadConfig) };
        inline ASRConfig& setVadConfig(ASRConfig::VadConfig && vadConfig) { DARABONBA_PTR_SET_RVALUE(vadConfig_, vadConfig) };


        // vocabularyId Field Functions 
        bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
        void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
        inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
        inline ASRConfig& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


      protected:
        shared_ptr<vector<string>> languageHints_ {};
        shared_ptr<int32_t> maxSentenceSilence_ {};
        shared_ptr<bool> semanticPunctuationEnabled_ {};
        shared_ptr<string> sourceLanguage_ {};
        shared_ptr<ASRConfig::VadConfig> vadConfig_ {};
        shared_ptr<string> vocabularyId_ {};
      };

      virtual bool empty() const override { return this->ASRConfig_ == nullptr
        && this->agentSilenceConfig_ == nullptr && this->ambientSoundConfig_ == nullptr && this->backChannelConfig_ == nullptr && this->chatMode_ == nullptr && this->greeting_ == nullptr
        && this->interruptConfig_ == nullptr && this->interruptMode_ == nullptr && this->LLMConfig_ == nullptr && this->TTSConfig_ == nullptr; };
      // ASRConfig Field Functions 
      bool hasASRConfig() const { return this->ASRConfig_ != nullptr;};
      void deleteASRConfig() { this->ASRConfig_ = nullptr;};
      inline const VoiceChatConfig::ASRConfig & getASRConfig() const { DARABONBA_PTR_GET_CONST(ASRConfig_, VoiceChatConfig::ASRConfig) };
      inline VoiceChatConfig::ASRConfig getASRConfig() { DARABONBA_PTR_GET(ASRConfig_, VoiceChatConfig::ASRConfig) };
      inline VoiceChatConfig& setASRConfig(const VoiceChatConfig::ASRConfig & aSRConfig) { DARABONBA_PTR_SET_VALUE(ASRConfig_, aSRConfig) };
      inline VoiceChatConfig& setASRConfig(VoiceChatConfig::ASRConfig && aSRConfig) { DARABONBA_PTR_SET_RVALUE(ASRConfig_, aSRConfig) };


      // agentSilenceConfig Field Functions 
      bool hasAgentSilenceConfig() const { return this->agentSilenceConfig_ != nullptr;};
      void deleteAgentSilenceConfig() { this->agentSilenceConfig_ = nullptr;};
      inline const VoiceChatConfig::AgentSilenceConfig & getAgentSilenceConfig() const { DARABONBA_PTR_GET_CONST(agentSilenceConfig_, VoiceChatConfig::AgentSilenceConfig) };
      inline VoiceChatConfig::AgentSilenceConfig getAgentSilenceConfig() { DARABONBA_PTR_GET(agentSilenceConfig_, VoiceChatConfig::AgentSilenceConfig) };
      inline VoiceChatConfig& setAgentSilenceConfig(const VoiceChatConfig::AgentSilenceConfig & agentSilenceConfig) { DARABONBA_PTR_SET_VALUE(agentSilenceConfig_, agentSilenceConfig) };
      inline VoiceChatConfig& setAgentSilenceConfig(VoiceChatConfig::AgentSilenceConfig && agentSilenceConfig) { DARABONBA_PTR_SET_RVALUE(agentSilenceConfig_, agentSilenceConfig) };


      // ambientSoundConfig Field Functions 
      bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
      void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
      inline const VoiceChatConfig::AmbientSoundConfig & getAmbientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, VoiceChatConfig::AmbientSoundConfig) };
      inline VoiceChatConfig::AmbientSoundConfig getAmbientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, VoiceChatConfig::AmbientSoundConfig) };
      inline VoiceChatConfig& setAmbientSoundConfig(const VoiceChatConfig::AmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
      inline VoiceChatConfig& setAmbientSoundConfig(VoiceChatConfig::AmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


      // backChannelConfig Field Functions 
      bool hasBackChannelConfig() const { return this->backChannelConfig_ != nullptr;};
      void deleteBackChannelConfig() { this->backChannelConfig_ = nullptr;};
      inline const VoiceChatConfig::BackChannelConfig & getBackChannelConfig() const { DARABONBA_PTR_GET_CONST(backChannelConfig_, VoiceChatConfig::BackChannelConfig) };
      inline VoiceChatConfig::BackChannelConfig getBackChannelConfig() { DARABONBA_PTR_GET(backChannelConfig_, VoiceChatConfig::BackChannelConfig) };
      inline VoiceChatConfig& setBackChannelConfig(const VoiceChatConfig::BackChannelConfig & backChannelConfig) { DARABONBA_PTR_SET_VALUE(backChannelConfig_, backChannelConfig) };
      inline VoiceChatConfig& setBackChannelConfig(VoiceChatConfig::BackChannelConfig && backChannelConfig) { DARABONBA_PTR_SET_RVALUE(backChannelConfig_, backChannelConfig) };


      // chatMode Field Functions 
      bool hasChatMode() const { return this->chatMode_ != nullptr;};
      void deleteChatMode() { this->chatMode_ = nullptr;};
      inline int32_t getChatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
      inline VoiceChatConfig& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


      // greeting Field Functions 
      bool hasGreeting() const { return this->greeting_ != nullptr;};
      void deleteGreeting() { this->greeting_ = nullptr;};
      inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
      inline VoiceChatConfig& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


      // interruptConfig Field Functions 
      bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
      void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
      inline const VoiceChatConfig::InterruptConfig & getInterruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, VoiceChatConfig::InterruptConfig) };
      inline VoiceChatConfig::InterruptConfig getInterruptConfig() { DARABONBA_PTR_GET(interruptConfig_, VoiceChatConfig::InterruptConfig) };
      inline VoiceChatConfig& setInterruptConfig(const VoiceChatConfig::InterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
      inline VoiceChatConfig& setInterruptConfig(VoiceChatConfig::InterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


      // interruptMode Field Functions 
      bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
      void deleteInterruptMode() { this->interruptMode_ = nullptr;};
      inline int32_t getInterruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
      inline VoiceChatConfig& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


      // LLMConfig Field Functions 
      bool hasLLMConfig() const { return this->LLMConfig_ != nullptr;};
      void deleteLLMConfig() { this->LLMConfig_ = nullptr;};
      inline const VoiceChatConfig::LLMConfig & getLLMConfig() const { DARABONBA_PTR_GET_CONST(LLMConfig_, VoiceChatConfig::LLMConfig) };
      inline VoiceChatConfig::LLMConfig getLLMConfig() { DARABONBA_PTR_GET(LLMConfig_, VoiceChatConfig::LLMConfig) };
      inline VoiceChatConfig& setLLMConfig(const VoiceChatConfig::LLMConfig & lLMConfig) { DARABONBA_PTR_SET_VALUE(LLMConfig_, lLMConfig) };
      inline VoiceChatConfig& setLLMConfig(VoiceChatConfig::LLMConfig && lLMConfig) { DARABONBA_PTR_SET_RVALUE(LLMConfig_, lLMConfig) };


      // TTSConfig Field Functions 
      bool hasTTSConfig() const { return this->TTSConfig_ != nullptr;};
      void deleteTTSConfig() { this->TTSConfig_ = nullptr;};
      inline const VoiceChatConfig::TTSConfig & getTTSConfig() const { DARABONBA_PTR_GET_CONST(TTSConfig_, VoiceChatConfig::TTSConfig) };
      inline VoiceChatConfig::TTSConfig getTTSConfig() { DARABONBA_PTR_GET(TTSConfig_, VoiceChatConfig::TTSConfig) };
      inline VoiceChatConfig& setTTSConfig(const VoiceChatConfig::TTSConfig & tTSConfig) { DARABONBA_PTR_SET_VALUE(TTSConfig_, tTSConfig) };
      inline VoiceChatConfig& setTTSConfig(VoiceChatConfig::TTSConfig && tTSConfig) { DARABONBA_PTR_SET_RVALUE(TTSConfig_, tTSConfig) };


    protected:
      shared_ptr<VoiceChatConfig::ASRConfig> ASRConfig_ {};
      shared_ptr<VoiceChatConfig::AgentSilenceConfig> agentSilenceConfig_ {};
      shared_ptr<VoiceChatConfig::AmbientSoundConfig> ambientSoundConfig_ {};
      shared_ptr<VoiceChatConfig::BackChannelConfig> backChannelConfig_ {};
      shared_ptr<int32_t> chatMode_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<VoiceChatConfig::InterruptConfig> interruptConfig_ {};
      shared_ptr<int32_t> interruptMode_ {};
      shared_ptr<VoiceChatConfig::LLMConfig> LLMConfig_ {};
      shared_ptr<VoiceChatConfig::TTSConfig> TTSConfig_ {};
    };

    class RtcConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RtcConfig& obj) { 
        DARABONBA_PTR_TO_JSON(TargetUserIds, targetUserIds_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserInactivityTimeout, userInactivityTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, RtcConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetUserIds, targetUserIds_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserInactivityTimeout, userInactivityTimeout_);
      };
      RtcConfig() = default ;
      RtcConfig(const RtcConfig &) = default ;
      RtcConfig(RtcConfig &&) = default ;
      RtcConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RtcConfig() = default ;
      RtcConfig& operator=(const RtcConfig &) = default ;
      RtcConfig& operator=(RtcConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetUserIds_ == nullptr
        && this->userId_ == nullptr && this->userInactivityTimeout_ == nullptr; };
      // targetUserIds Field Functions 
      bool hasTargetUserIds() const { return this->targetUserIds_ != nullptr;};
      void deleteTargetUserIds() { this->targetUserIds_ = nullptr;};
      inline const vector<string> & getTargetUserIds() const { DARABONBA_PTR_GET_CONST(targetUserIds_, vector<string>) };
      inline vector<string> getTargetUserIds() { DARABONBA_PTR_GET(targetUserIds_, vector<string>) };
      inline RtcConfig& setTargetUserIds(const vector<string> & targetUserIds) { DARABONBA_PTR_SET_VALUE(targetUserIds_, targetUserIds) };
      inline RtcConfig& setTargetUserIds(vector<string> && targetUserIds) { DARABONBA_PTR_SET_RVALUE(targetUserIds_, targetUserIds) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline RtcConfig& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userInactivityTimeout Field Functions 
      bool hasUserInactivityTimeout() const { return this->userInactivityTimeout_ != nullptr;};
      void deleteUserInactivityTimeout() { this->userInactivityTimeout_ = nullptr;};
      inline int32_t getUserInactivityTimeout() const { DARABONBA_PTR_GET_DEFAULT(userInactivityTimeout_, 0) };
      inline RtcConfig& setUserInactivityTimeout(int32_t userInactivityTimeout) { DARABONBA_PTR_SET_VALUE(userInactivityTimeout_, userInactivityTimeout) };


    protected:
      shared_ptr<vector<string>> targetUserIds_ {};
      // This parameter is required.
      shared_ptr<string> userId_ {};
      shared_ptr<int32_t> userInactivityTimeout_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->rtcConfig_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr && this->voiceChatConfig_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartAgentRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartAgentRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // rtcConfig Field Functions 
    bool hasRtcConfig() const { return this->rtcConfig_ != nullptr;};
    void deleteRtcConfig() { this->rtcConfig_ = nullptr;};
    inline const StartAgentRequest::RtcConfig & getRtcConfig() const { DARABONBA_PTR_GET_CONST(rtcConfig_, StartAgentRequest::RtcConfig) };
    inline StartAgentRequest::RtcConfig getRtcConfig() { DARABONBA_PTR_GET(rtcConfig_, StartAgentRequest::RtcConfig) };
    inline StartAgentRequest& setRtcConfig(const StartAgentRequest::RtcConfig & rtcConfig) { DARABONBA_PTR_SET_VALUE(rtcConfig_, rtcConfig) };
    inline StartAgentRequest& setRtcConfig(StartAgentRequest::RtcConfig && rtcConfig) { DARABONBA_PTR_SET_RVALUE(rtcConfig_, rtcConfig) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartAgentRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartAgentRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // voiceChatConfig Field Functions 
    bool hasVoiceChatConfig() const { return this->voiceChatConfig_ != nullptr;};
    void deleteVoiceChatConfig() { this->voiceChatConfig_ = nullptr;};
    inline const StartAgentRequest::VoiceChatConfig & getVoiceChatConfig() const { DARABONBA_PTR_GET_CONST(voiceChatConfig_, StartAgentRequest::VoiceChatConfig) };
    inline StartAgentRequest::VoiceChatConfig getVoiceChatConfig() { DARABONBA_PTR_GET(voiceChatConfig_, StartAgentRequest::VoiceChatConfig) };
    inline StartAgentRequest& setVoiceChatConfig(const StartAgentRequest::VoiceChatConfig & voiceChatConfig) { DARABONBA_PTR_SET_VALUE(voiceChatConfig_, voiceChatConfig) };
    inline StartAgentRequest& setVoiceChatConfig(StartAgentRequest::VoiceChatConfig && voiceChatConfig) { DARABONBA_PTR_SET_RVALUE(voiceChatConfig_, voiceChatConfig) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<StartAgentRequest::RtcConfig> rtcConfig_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<StartAgentRequest::VoiceChatConfig> voiceChatConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
