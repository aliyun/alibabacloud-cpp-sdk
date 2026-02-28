// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPAGENTTEMPLATESRESPONSEBODY_HPP_
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
  class DescribeAppAgentTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAgentTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Templates, templates_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAgentTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Templates, templates_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeAppAgentTemplatesResponseBody() = default ;
    DescribeAppAgentTemplatesResponseBody(const DescribeAppAgentTemplatesResponseBody &) = default ;
    DescribeAppAgentTemplatesResponseBody(DescribeAppAgentTemplatesResponseBody &&) = default ;
    DescribeAppAgentTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAgentTemplatesResponseBody() = default ;
    DescribeAppAgentTemplatesResponseBody& operator=(const DescribeAppAgentTemplatesResponseBody &) = default ;
    DescribeAppAgentTemplatesResponseBody& operator=(DescribeAppAgentTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Templates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Templates& obj) { 
        DARABONBA_PTR_TO_JSON(AgentSilenceConfig, agentSilenceConfig_);
        DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
        DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
        DARABONBA_PTR_TO_JSON(BackChannelConfig, backChannelConfig_);
        DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Greeting, greeting_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
        DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
        DARABONBA_PTR_TO_JSON(LlmConfig, llmConfig_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Templates& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentSilenceConfig, agentSilenceConfig_);
        DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
        DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
        DARABONBA_PTR_FROM_JSON(BackChannelConfig, backChannelConfig_);
        DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
        DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
        DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfig_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Templates() = default ;
      Templates(const Templates &) = default ;
      Templates(Templates &&) = default ;
      Templates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Templates() = default ;
      Templates& operator=(const Templates &) = default ;
      Templates& operator=(Templates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TtsConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TtsConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(FilterBrackets, filterBrackets_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pitch, pitch_);
          DARABONBA_PTR_TO_JSON(Rate, rate_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
          DARABONBA_PTR_TO_JSON(Voice, voice_);
          DARABONBA_PTR_TO_JSON(Volume, volume_);
        };
        friend void from_json(const Darabonba::Json& j, TtsConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(FilterBrackets, filterBrackets_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pitch, pitch_);
          DARABONBA_PTR_FROM_JSON(Rate, rate_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
          DARABONBA_PTR_FROM_JSON(Voice, voice_);
          DARABONBA_PTR_FROM_JSON(Volume, volume_);
        };
        TtsConfig() = default ;
        TtsConfig(const TtsConfig &) = default ;
        TtsConfig(TtsConfig &&) = default ;
        TtsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TtsConfig() = default ;
        TtsConfig& operator=(const TtsConfig &) = default ;
        TtsConfig& operator=(TtsConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->filterBrackets_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->pitch_ == nullptr && this->rate_ == nullptr
        && this->vendor_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline TtsConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // filterBrackets Field Functions 
        bool hasFilterBrackets() const { return this->filterBrackets_ != nullptr;};
        void deleteFilterBrackets() { this->filterBrackets_ = nullptr;};
        inline const vector<int32_t> & getFilterBrackets() const { DARABONBA_PTR_GET_CONST(filterBrackets_, vector<int32_t>) };
        inline vector<int32_t> getFilterBrackets() { DARABONBA_PTR_GET(filterBrackets_, vector<int32_t>) };
        inline TtsConfig& setFilterBrackets(const vector<int32_t> & filterBrackets) { DARABONBA_PTR_SET_VALUE(filterBrackets_, filterBrackets) };
        inline TtsConfig& setFilterBrackets(vector<int32_t> && filterBrackets) { DARABONBA_PTR_SET_RVALUE(filterBrackets_, filterBrackets) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline TtsConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline TtsConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pitch Field Functions 
        bool hasPitch() const { return this->pitch_ != nullptr;};
        void deletePitch() { this->pitch_ = nullptr;};
        inline float getPitch() const { DARABONBA_PTR_GET_DEFAULT(pitch_, 0.0) };
        inline TtsConfig& setPitch(float pitch) { DARABONBA_PTR_SET_VALUE(pitch_, pitch) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline float getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
        inline TtsConfig& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
        inline TtsConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


        // voice Field Functions 
        bool hasVoice() const { return this->voice_ != nullptr;};
        void deleteVoice() { this->voice_ = nullptr;};
        inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
        inline TtsConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


        // volume Field Functions 
        bool hasVolume() const { return this->volume_ != nullptr;};
        void deleteVolume() { this->volume_ = nullptr;};
        inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
        inline TtsConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      protected:
        shared_ptr<string> apiKey_ {};
        shared_ptr<vector<int32_t>> filterBrackets_ {};
        shared_ptr<string> model_ {};
        shared_ptr<string> name_ {};
        shared_ptr<float> pitch_ {};
        shared_ptr<float> rate_ {};
        shared_ptr<string> vendor_ {};
        shared_ptr<string> voice_ {};
        shared_ptr<int32_t> volume_ {};
      };

      class LlmConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AgentAppId, agentAppId_);
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(HistoryDepth, historyDepth_);
          DARABONBA_PTR_TO_JSON(MaxToken, maxToken_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Prompt, prompt_);
          DARABONBA_PTR_TO_JSON(Temperature, temperature_);
          DARABONBA_PTR_TO_JSON(TopP, topP_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, LlmConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentAppId, agentAppId_);
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(HistoryDepth, historyDepth_);
          DARABONBA_PTR_FROM_JSON(MaxToken, maxToken_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
          DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
          DARABONBA_PTR_FROM_JSON(TopP, topP_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        LlmConfig() = default ;
        LlmConfig(const LlmConfig &) = default ;
        LlmConfig(LlmConfig &&) = default ;
        LlmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmConfig() = default ;
        LlmConfig& operator=(const LlmConfig &) = default ;
        LlmConfig& operator=(LlmConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentAppId_ == nullptr
        && this->apiKey_ == nullptr && this->historyDepth_ == nullptr && this->maxToken_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->prompt_ == nullptr && this->temperature_ == nullptr && this->topP_ == nullptr && this->url_ == nullptr && this->vendor_ == nullptr; };
        // agentAppId Field Functions 
        bool hasAgentAppId() const { return this->agentAppId_ != nullptr;};
        void deleteAgentAppId() { this->agentAppId_ = nullptr;};
        inline string getAgentAppId() const { DARABONBA_PTR_GET_DEFAULT(agentAppId_, "") };
        inline LlmConfig& setAgentAppId(string agentAppId) { DARABONBA_PTR_SET_VALUE(agentAppId_, agentAppId) };


        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline LlmConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // historyDepth Field Functions 
        bool hasHistoryDepth() const { return this->historyDepth_ != nullptr;};
        void deleteHistoryDepth() { this->historyDepth_ = nullptr;};
        inline int32_t getHistoryDepth() const { DARABONBA_PTR_GET_DEFAULT(historyDepth_, 0) };
        inline LlmConfig& setHistoryDepth(int32_t historyDepth) { DARABONBA_PTR_SET_VALUE(historyDepth_, historyDepth) };


        // maxToken Field Functions 
        bool hasMaxToken() const { return this->maxToken_ != nullptr;};
        void deleteMaxToken() { this->maxToken_ = nullptr;};
        inline int32_t getMaxToken() const { DARABONBA_PTR_GET_DEFAULT(maxToken_, 0) };
        inline LlmConfig& setMaxToken(int32_t maxToken) { DARABONBA_PTR_SET_VALUE(maxToken_, maxToken) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline LlmConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline LlmConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // prompt Field Functions 
        bool hasPrompt() const { return this->prompt_ != nullptr;};
        void deletePrompt() { this->prompt_ = nullptr;};
        inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
        inline LlmConfig& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


        // temperature Field Functions 
        bool hasTemperature() const { return this->temperature_ != nullptr;};
        void deleteTemperature() { this->temperature_ = nullptr;};
        inline float getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
        inline LlmConfig& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


        // topP Field Functions 
        bool hasTopP() const { return this->topP_ != nullptr;};
        void deleteTopP() { this->topP_ = nullptr;};
        inline float getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
        inline LlmConfig& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline LlmConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
        inline LlmConfig& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        shared_ptr<string> agentAppId_ {};
        shared_ptr<string> apiKey_ {};
        shared_ptr<int32_t> historyDepth_ {};
        shared_ptr<int32_t> maxToken_ {};
        shared_ptr<string> model_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> prompt_ {};
        shared_ptr<float> temperature_ {};
        shared_ptr<float> topP_ {};
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

      class AsrConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AsrConfig& obj) { 
          DARABONBA_PTR_TO_JSON(MaxSentenceSilence, maxSentenceSilence_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(VadConfig, vadConfig_);
          DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
          DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
        };
        friend void from_json(const Darabonba::Json& j, AsrConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxSentenceSilence, maxSentenceSilence_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(VadConfig, vadConfig_);
          DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
          DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
        };
        AsrConfig() = default ;
        AsrConfig(const AsrConfig &) = default ;
        AsrConfig(AsrConfig &&) = default ;
        AsrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AsrConfig() = default ;
        AsrConfig& operator=(const AsrConfig &) = default ;
        AsrConfig& operator=(AsrConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WordWeights : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WordWeights& obj) { 
            DARABONBA_PTR_TO_JSON(Lang, lang_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
            DARABONBA_PTR_TO_JSON(Word, word_);
          };
          friend void from_json(const Darabonba::Json& j, WordWeights& obj) { 
            DARABONBA_PTR_FROM_JSON(Lang, lang_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
            DARABONBA_PTR_FROM_JSON(Word, word_);
          };
          WordWeights() = default ;
          WordWeights(const WordWeights &) = default ;
          WordWeights(WordWeights &&) = default ;
          WordWeights(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WordWeights() = default ;
          WordWeights& operator=(const WordWeights &) = default ;
          WordWeights& operator=(WordWeights &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->lang_ == nullptr
        && this->weight_ == nullptr && this->word_ == nullptr; };
          // lang Field Functions 
          bool hasLang() const { return this->lang_ != nullptr;};
          void deleteLang() { this->lang_ = nullptr;};
          inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
          inline WordWeights& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline WordWeights& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          // word Field Functions 
          bool hasWord() const { return this->word_ != nullptr;};
          void deleteWord() { this->word_ = nullptr;};
          inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
          inline WordWeights& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


        protected:
          shared_ptr<string> lang_ {};
          shared_ptr<int32_t> weight_ {};
          shared_ptr<string> word_ {};
        };

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

        virtual bool empty() const override { return this->maxSentenceSilence_ == nullptr
        && this->name_ == nullptr && this->vadConfig_ == nullptr && this->vocabularyId_ == nullptr && this->wordWeights_ == nullptr; };
        // maxSentenceSilence Field Functions 
        bool hasMaxSentenceSilence() const { return this->maxSentenceSilence_ != nullptr;};
        void deleteMaxSentenceSilence() { this->maxSentenceSilence_ = nullptr;};
        inline int32_t getMaxSentenceSilence() const { DARABONBA_PTR_GET_DEFAULT(maxSentenceSilence_, 0) };
        inline AsrConfig& setMaxSentenceSilence(int32_t maxSentenceSilence) { DARABONBA_PTR_SET_VALUE(maxSentenceSilence_, maxSentenceSilence) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AsrConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // vadConfig Field Functions 
        bool hasVadConfig() const { return this->vadConfig_ != nullptr;};
        void deleteVadConfig() { this->vadConfig_ = nullptr;};
        inline const AsrConfig::VadConfig & getVadConfig() const { DARABONBA_PTR_GET_CONST(vadConfig_, AsrConfig::VadConfig) };
        inline AsrConfig::VadConfig getVadConfig() { DARABONBA_PTR_GET(vadConfig_, AsrConfig::VadConfig) };
        inline AsrConfig& setVadConfig(const AsrConfig::VadConfig & vadConfig) { DARABONBA_PTR_SET_VALUE(vadConfig_, vadConfig) };
        inline AsrConfig& setVadConfig(AsrConfig::VadConfig && vadConfig) { DARABONBA_PTR_SET_RVALUE(vadConfig_, vadConfig) };


        // vocabularyId Field Functions 
        bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
        void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
        inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
        inline AsrConfig& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


        // wordWeights Field Functions 
        bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
        void deleteWordWeights() { this->wordWeights_ = nullptr;};
        inline const vector<AsrConfig::WordWeights> & getWordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<AsrConfig::WordWeights>) };
        inline vector<AsrConfig::WordWeights> getWordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<AsrConfig::WordWeights>) };
        inline AsrConfig& setWordWeights(const vector<AsrConfig::WordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
        inline AsrConfig& setWordWeights(vector<AsrConfig::WordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


      protected:
        shared_ptr<int32_t> maxSentenceSilence_ {};
        shared_ptr<string> name_ {};
        shared_ptr<AsrConfig::VadConfig> vadConfig_ {};
        shared_ptr<string> vocabularyId_ {};
        shared_ptr<vector<AsrConfig::WordWeights>> wordWeights_ {};
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
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(WebhookTriggerTimeout, webhookTriggerTimeout_);
        };
        friend void from_json(const Darabonba::Json& j, AgentSilenceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertTimeout, alertTimeout_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
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
        && this->content_ == nullptr && this->strategy_ == nullptr && this->webhookTriggerTimeout_ == nullptr; };
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
        shared_ptr<int32_t> strategy_ {};
        shared_ptr<int32_t> webhookTriggerTimeout_ {};
      };

      virtual bool empty() const override { return this->agentSilenceConfig_ == nullptr
        && this->ambientSoundConfig_ == nullptr && this->asrConfig_ == nullptr && this->backChannelConfig_ == nullptr && this->chatMode_ == nullptr && this->createTime_ == nullptr
        && this->greeting_ == nullptr && this->id_ == nullptr && this->interruptConfig_ == nullptr && this->interruptMode_ == nullptr && this->llmConfig_ == nullptr
        && this->name_ == nullptr && this->ttsConfig_ == nullptr && this->type_ == nullptr; };
      // agentSilenceConfig Field Functions 
      bool hasAgentSilenceConfig() const { return this->agentSilenceConfig_ != nullptr;};
      void deleteAgentSilenceConfig() { this->agentSilenceConfig_ = nullptr;};
      inline const Templates::AgentSilenceConfig & getAgentSilenceConfig() const { DARABONBA_PTR_GET_CONST(agentSilenceConfig_, Templates::AgentSilenceConfig) };
      inline Templates::AgentSilenceConfig getAgentSilenceConfig() { DARABONBA_PTR_GET(agentSilenceConfig_, Templates::AgentSilenceConfig) };
      inline Templates& setAgentSilenceConfig(const Templates::AgentSilenceConfig & agentSilenceConfig) { DARABONBA_PTR_SET_VALUE(agentSilenceConfig_, agentSilenceConfig) };
      inline Templates& setAgentSilenceConfig(Templates::AgentSilenceConfig && agentSilenceConfig) { DARABONBA_PTR_SET_RVALUE(agentSilenceConfig_, agentSilenceConfig) };


      // ambientSoundConfig Field Functions 
      bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
      void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
      inline const Templates::AmbientSoundConfig & getAmbientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, Templates::AmbientSoundConfig) };
      inline Templates::AmbientSoundConfig getAmbientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, Templates::AmbientSoundConfig) };
      inline Templates& setAmbientSoundConfig(const Templates::AmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
      inline Templates& setAmbientSoundConfig(Templates::AmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


      // asrConfig Field Functions 
      bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
      void deleteAsrConfig() { this->asrConfig_ = nullptr;};
      inline const Templates::AsrConfig & getAsrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, Templates::AsrConfig) };
      inline Templates::AsrConfig getAsrConfig() { DARABONBA_PTR_GET(asrConfig_, Templates::AsrConfig) };
      inline Templates& setAsrConfig(const Templates::AsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
      inline Templates& setAsrConfig(Templates::AsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


      // backChannelConfig Field Functions 
      bool hasBackChannelConfig() const { return this->backChannelConfig_ != nullptr;};
      void deleteBackChannelConfig() { this->backChannelConfig_ = nullptr;};
      inline const Templates::BackChannelConfig & getBackChannelConfig() const { DARABONBA_PTR_GET_CONST(backChannelConfig_, Templates::BackChannelConfig) };
      inline Templates::BackChannelConfig getBackChannelConfig() { DARABONBA_PTR_GET(backChannelConfig_, Templates::BackChannelConfig) };
      inline Templates& setBackChannelConfig(const Templates::BackChannelConfig & backChannelConfig) { DARABONBA_PTR_SET_VALUE(backChannelConfig_, backChannelConfig) };
      inline Templates& setBackChannelConfig(Templates::BackChannelConfig && backChannelConfig) { DARABONBA_PTR_SET_RVALUE(backChannelConfig_, backChannelConfig) };


      // chatMode Field Functions 
      bool hasChatMode() const { return this->chatMode_ != nullptr;};
      void deleteChatMode() { this->chatMode_ = nullptr;};
      inline int32_t getChatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
      inline Templates& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Templates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // greeting Field Functions 
      bool hasGreeting() const { return this->greeting_ != nullptr;};
      void deleteGreeting() { this->greeting_ = nullptr;};
      inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
      inline Templates& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Templates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // interruptConfig Field Functions 
      bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
      void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
      inline const Templates::InterruptConfig & getInterruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, Templates::InterruptConfig) };
      inline Templates::InterruptConfig getInterruptConfig() { DARABONBA_PTR_GET(interruptConfig_, Templates::InterruptConfig) };
      inline Templates& setInterruptConfig(const Templates::InterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
      inline Templates& setInterruptConfig(Templates::InterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


      // interruptMode Field Functions 
      bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
      void deleteInterruptMode() { this->interruptMode_ = nullptr;};
      inline int32_t getInterruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
      inline Templates& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


      // llmConfig Field Functions 
      bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
      void deleteLlmConfig() { this->llmConfig_ = nullptr;};
      inline const Templates::LlmConfig & getLlmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, Templates::LlmConfig) };
      inline Templates::LlmConfig getLlmConfig() { DARABONBA_PTR_GET(llmConfig_, Templates::LlmConfig) };
      inline Templates& setLlmConfig(const Templates::LlmConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
      inline Templates& setLlmConfig(Templates::LlmConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Templates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ttsConfig Field Functions 
      bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
      void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
      inline const Templates::TtsConfig & getTtsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, Templates::TtsConfig) };
      inline Templates::TtsConfig getTtsConfig() { DARABONBA_PTR_GET(ttsConfig_, Templates::TtsConfig) };
      inline Templates& setTtsConfig(const Templates::TtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
      inline Templates& setTtsConfig(Templates::TtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Templates& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<Templates::AgentSilenceConfig> agentSilenceConfig_ {};
      shared_ptr<Templates::AmbientSoundConfig> ambientSoundConfig_ {};
      shared_ptr<Templates::AsrConfig> asrConfig_ {};
      shared_ptr<Templates::BackChannelConfig> backChannelConfig_ {};
      shared_ptr<int32_t> chatMode_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<string> id_ {};
      shared_ptr<Templates::InterruptConfig> interruptConfig_ {};
      shared_ptr<int32_t> interruptMode_ {};
      shared_ptr<Templates::LlmConfig> llmConfig_ {};
      shared_ptr<string> name_ {};
      shared_ptr<Templates::TtsConfig> ttsConfig_ {};
      shared_ptr<int32_t> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->templates_ == nullptr && this->totalNum_ == nullptr && this->totalPage_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppAgentTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const vector<DescribeAppAgentTemplatesResponseBody::Templates> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, vector<DescribeAppAgentTemplatesResponseBody::Templates>) };
    inline vector<DescribeAppAgentTemplatesResponseBody::Templates> getTemplates() { DARABONBA_PTR_GET(templates_, vector<DescribeAppAgentTemplatesResponseBody::Templates>) };
    inline DescribeAppAgentTemplatesResponseBody& setTemplates(const vector<DescribeAppAgentTemplatesResponseBody::Templates> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline DescribeAppAgentTemplatesResponseBody& setTemplates(vector<DescribeAppAgentTemplatesResponseBody::Templates> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int64_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0L) };
    inline DescribeAppAgentTemplatesResponseBody& setTotalNum(int64_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline DescribeAppAgentTemplatesResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeAppAgentTemplatesResponseBody::Templates>> templates_ {};
    shared_ptr<int64_t> totalNum_ {};
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
