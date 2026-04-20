// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCRIPTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCRIPTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class CreateScriptVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScriptVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfig_);
      DARABONBA_PTR_TO_JSON(LabelConfig, labelConfig_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfile_);
      DARABONBA_PTR_TO_JSON(SourceVersionId, sourceVersionId_);
      DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfig_);
      DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScriptVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfig_);
      DARABONBA_PTR_FROM_JSON(LabelConfig, labelConfig_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfile_);
      DARABONBA_PTR_FROM_JSON(SourceVersionId, sourceVersionId_);
      DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfig_);
      DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfig_);
    };
    CreateScriptVersionRequest() = default ;
    CreateScriptVersionRequest(const CreateScriptVersionRequest &) = default ;
    CreateScriptVersionRequest(CreateScriptVersionRequest &&) = default ;
    CreateScriptVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScriptVersionRequest() = default ;
    CreateScriptVersionRequest& operator=(const CreateScriptVersionRequest &) = default ;
    CreateScriptVersionRequest& operator=(CreateScriptVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscriberConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscriberConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CorrectionRules, correctionRules_);
        DARABONBA_PTR_TO_JSON(CustomizationId, customizationId_);
        DARABONBA_PTR_TO_JSON(EndSilenceTimeout, endSilenceTimeout_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(NlsAccessProfile, nlsAccessProfile_);
        DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
        DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
        DARABONBA_PTR_TO_JSON(SpeechNoiseThreshold, speechNoiseThreshold_);
        DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
      };
      friend void from_json(const Darabonba::Json& j, TranscriberConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CorrectionRules, correctionRules_);
        DARABONBA_PTR_FROM_JSON(CustomizationId, customizationId_);
        DARABONBA_PTR_FROM_JSON(EndSilenceTimeout, endSilenceTimeout_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(NlsAccessProfile, nlsAccessProfile_);
        DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
        DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
        DARABONBA_PTR_FROM_JSON(SpeechNoiseThreshold, speechNoiseThreshold_);
        DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
      };
      TranscriberConfig() = default ;
      TranscriberConfig(const TranscriberConfig &) = default ;
      TranscriberConfig(TranscriberConfig &&) = default ;
      TranscriberConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscriberConfig() = default ;
      TranscriberConfig& operator=(const TranscriberConfig &) = default ;
      TranscriberConfig& operator=(TranscriberConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NlsAccessProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NlsAccessProfile& obj) { 
          DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
        };
        friend void from_json(const Darabonba::Json& j, NlsAccessProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
        };
        NlsAccessProfile() = default ;
        NlsAccessProfile(const NlsAccessProfile &) = default ;
        NlsAccessProfile(NlsAccessProfile &&) = default ;
        NlsAccessProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NlsAccessProfile() = default ;
        NlsAccessProfile& operator=(const NlsAccessProfile &) = default ;
        NlsAccessProfile& operator=(NlsAccessProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessProfileId_ == nullptr; };
        // accessProfileId Field Functions 
        bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
        void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
        inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
        inline NlsAccessProfile& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


      protected:
        shared_ptr<string> accessProfileId_ {};
      };

      class CorrectionRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CorrectionRules& obj) { 
          DARABONBA_PTR_TO_JSON(Pattern, pattern_);
          DARABONBA_PTR_TO_JSON(Replacement, replacement_);
        };
        friend void from_json(const Darabonba::Json& j, CorrectionRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
          DARABONBA_PTR_FROM_JSON(Replacement, replacement_);
        };
        CorrectionRules() = default ;
        CorrectionRules(const CorrectionRules &) = default ;
        CorrectionRules(CorrectionRules &&) = default ;
        CorrectionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CorrectionRules() = default ;
        CorrectionRules& operator=(const CorrectionRules &) = default ;
        CorrectionRules& operator=(CorrectionRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pattern_ == nullptr
        && this->replacement_ == nullptr; };
        // pattern Field Functions 
        bool hasPattern() const { return this->pattern_ != nullptr;};
        void deletePattern() { this->pattern_ = nullptr;};
        inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
        inline CorrectionRules& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


        // replacement Field Functions 
        bool hasReplacement() const { return this->replacement_ != nullptr;};
        void deleteReplacement() { this->replacement_ = nullptr;};
        inline string getReplacement() const { DARABONBA_PTR_GET_DEFAULT(replacement_, "") };
        inline CorrectionRules& setReplacement(string replacement) { DARABONBA_PTR_SET_VALUE(replacement_, replacement) };


      protected:
        shared_ptr<string> pattern_ {};
        shared_ptr<string> replacement_ {};
      };

      virtual bool empty() const override { return this->correctionRules_ == nullptr
        && this->customizationId_ == nullptr && this->endSilenceTimeout_ == nullptr && this->model_ == nullptr && this->nlsAccessProfile_ == nullptr && this->nlsAccessType_ == nullptr
        && this->nlsEngine_ == nullptr && this->speechNoiseThreshold_ == nullptr && this->vocabularyId_ == nullptr; };
      // correctionRules Field Functions 
      bool hasCorrectionRules() const { return this->correctionRules_ != nullptr;};
      void deleteCorrectionRules() { this->correctionRules_ = nullptr;};
      inline const vector<TranscriberConfig::CorrectionRules> & getCorrectionRules() const { DARABONBA_PTR_GET_CONST(correctionRules_, vector<TranscriberConfig::CorrectionRules>) };
      inline vector<TranscriberConfig::CorrectionRules> getCorrectionRules() { DARABONBA_PTR_GET(correctionRules_, vector<TranscriberConfig::CorrectionRules>) };
      inline TranscriberConfig& setCorrectionRules(const vector<TranscriberConfig::CorrectionRules> & correctionRules) { DARABONBA_PTR_SET_VALUE(correctionRules_, correctionRules) };
      inline TranscriberConfig& setCorrectionRules(vector<TranscriberConfig::CorrectionRules> && correctionRules) { DARABONBA_PTR_SET_RVALUE(correctionRules_, correctionRules) };


      // customizationId Field Functions 
      bool hasCustomizationId() const { return this->customizationId_ != nullptr;};
      void deleteCustomizationId() { this->customizationId_ = nullptr;};
      inline string getCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(customizationId_, "") };
      inline TranscriberConfig& setCustomizationId(string customizationId) { DARABONBA_PTR_SET_VALUE(customizationId_, customizationId) };


      // endSilenceTimeout Field Functions 
      bool hasEndSilenceTimeout() const { return this->endSilenceTimeout_ != nullptr;};
      void deleteEndSilenceTimeout() { this->endSilenceTimeout_ = nullptr;};
      inline int32_t getEndSilenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(endSilenceTimeout_, 0) };
      inline TranscriberConfig& setEndSilenceTimeout(int32_t endSilenceTimeout) { DARABONBA_PTR_SET_VALUE(endSilenceTimeout_, endSilenceTimeout) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline TranscriberConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // nlsAccessProfile Field Functions 
      bool hasNlsAccessProfile() const { return this->nlsAccessProfile_ != nullptr;};
      void deleteNlsAccessProfile() { this->nlsAccessProfile_ = nullptr;};
      inline const TranscriberConfig::NlsAccessProfile & getNlsAccessProfile() const { DARABONBA_PTR_GET_CONST(nlsAccessProfile_, TranscriberConfig::NlsAccessProfile) };
      inline TranscriberConfig::NlsAccessProfile getNlsAccessProfile() { DARABONBA_PTR_GET(nlsAccessProfile_, TranscriberConfig::NlsAccessProfile) };
      inline TranscriberConfig& setNlsAccessProfile(const TranscriberConfig::NlsAccessProfile & nlsAccessProfile) { DARABONBA_PTR_SET_VALUE(nlsAccessProfile_, nlsAccessProfile) };
      inline TranscriberConfig& setNlsAccessProfile(TranscriberConfig::NlsAccessProfile && nlsAccessProfile) { DARABONBA_PTR_SET_RVALUE(nlsAccessProfile_, nlsAccessProfile) };


      // nlsAccessType Field Functions 
      bool hasNlsAccessType() const { return this->nlsAccessType_ != nullptr;};
      void deleteNlsAccessType() { this->nlsAccessType_ = nullptr;};
      inline string getNlsAccessType() const { DARABONBA_PTR_GET_DEFAULT(nlsAccessType_, "") };
      inline TranscriberConfig& setNlsAccessType(string nlsAccessType) { DARABONBA_PTR_SET_VALUE(nlsAccessType_, nlsAccessType) };


      // nlsEngine Field Functions 
      bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
      void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
      inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
      inline TranscriberConfig& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


      // speechNoiseThreshold Field Functions 
      bool hasSpeechNoiseThreshold() const { return this->speechNoiseThreshold_ != nullptr;};
      void deleteSpeechNoiseThreshold() { this->speechNoiseThreshold_ = nullptr;};
      inline int32_t getSpeechNoiseThreshold() const { DARABONBA_PTR_GET_DEFAULT(speechNoiseThreshold_, 0) };
      inline TranscriberConfig& setSpeechNoiseThreshold(int32_t speechNoiseThreshold) { DARABONBA_PTR_SET_VALUE(speechNoiseThreshold_, speechNoiseThreshold) };


      // vocabularyId Field Functions 
      bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
      void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
      inline string getVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
      inline TranscriberConfig& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    protected:
      shared_ptr<vector<TranscriberConfig::CorrectionRules>> correctionRules_ {};
      shared_ptr<string> customizationId_ {};
      shared_ptr<int32_t> endSilenceTimeout_ {};
      shared_ptr<string> model_ {};
      shared_ptr<TranscriberConfig::NlsAccessProfile> nlsAccessProfile_ {};
      shared_ptr<string> nlsAccessType_ {};
      shared_ptr<string> nlsEngine_ {};
      shared_ptr<int32_t> speechNoiseThreshold_ {};
      shared_ptr<string> vocabularyId_ {};
    };

    class SynthesizerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SynthesizerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(NlsAccessProfile, nlsAccessProfile_);
        DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
        DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
        DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
        DARABONBA_PTR_TO_JSON(PronRules, pronRules_);
        DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_TO_JSON(Voice, voice_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, SynthesizerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(NlsAccessProfile, nlsAccessProfile_);
        DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
        DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
        DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
        DARABONBA_PTR_FROM_JSON(PronRules, pronRules_);
        DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_FROM_JSON(Voice, voice_);
        DARABONBA_PTR_FROM_JSON(Volume, volume_);
      };
      SynthesizerConfig() = default ;
      SynthesizerConfig(const SynthesizerConfig &) = default ;
      SynthesizerConfig(SynthesizerConfig &&) = default ;
      SynthesizerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SynthesizerConfig() = default ;
      SynthesizerConfig& operator=(const SynthesizerConfig &) = default ;
      SynthesizerConfig& operator=(SynthesizerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PronRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PronRules& obj) { 
          DARABONBA_PTR_TO_JSON(Pattern, pattern_);
          DARABONBA_PTR_TO_JSON(Replacement, replacement_);
        };
        friend void from_json(const Darabonba::Json& j, PronRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
          DARABONBA_PTR_FROM_JSON(Replacement, replacement_);
        };
        PronRules() = default ;
        PronRules(const PronRules &) = default ;
        PronRules(PronRules &&) = default ;
        PronRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PronRules() = default ;
        PronRules& operator=(const PronRules &) = default ;
        PronRules& operator=(PronRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pattern_ == nullptr
        && this->replacement_ == nullptr; };
        // pattern Field Functions 
        bool hasPattern() const { return this->pattern_ != nullptr;};
        void deletePattern() { this->pattern_ = nullptr;};
        inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
        inline PronRules& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


        // replacement Field Functions 
        bool hasReplacement() const { return this->replacement_ != nullptr;};
        void deleteReplacement() { this->replacement_ = nullptr;};
        inline string getReplacement() const { DARABONBA_PTR_GET_DEFAULT(replacement_, "") };
        inline PronRules& setReplacement(string replacement) { DARABONBA_PTR_SET_VALUE(replacement_, replacement) };


      protected:
        shared_ptr<string> pattern_ {};
        shared_ptr<string> replacement_ {};
      };

      class NlsAccessProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NlsAccessProfile& obj) { 
          DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
        };
        friend void from_json(const Darabonba::Json& j, NlsAccessProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
        };
        NlsAccessProfile() = default ;
        NlsAccessProfile(const NlsAccessProfile &) = default ;
        NlsAccessProfile(NlsAccessProfile &&) = default ;
        NlsAccessProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NlsAccessProfile() = default ;
        NlsAccessProfile& operator=(const NlsAccessProfile &) = default ;
        NlsAccessProfile& operator=(NlsAccessProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessProfileId_ == nullptr; };
        // accessProfileId Field Functions 
        bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
        void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
        inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
        inline NlsAccessProfile& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


      protected:
        shared_ptr<string> accessProfileId_ {};
      };

      virtual bool empty() const override { return this->model_ == nullptr
        && this->nlsAccessProfile_ == nullptr && this->nlsAccessType_ == nullptr && this->nlsEngine_ == nullptr && this->pitchRate_ == nullptr && this->pronRules_ == nullptr
        && this->speechRate_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline SynthesizerConfig& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // nlsAccessProfile Field Functions 
      bool hasNlsAccessProfile() const { return this->nlsAccessProfile_ != nullptr;};
      void deleteNlsAccessProfile() { this->nlsAccessProfile_ = nullptr;};
      inline const SynthesizerConfig::NlsAccessProfile & getNlsAccessProfile() const { DARABONBA_PTR_GET_CONST(nlsAccessProfile_, SynthesizerConfig::NlsAccessProfile) };
      inline SynthesizerConfig::NlsAccessProfile getNlsAccessProfile() { DARABONBA_PTR_GET(nlsAccessProfile_, SynthesizerConfig::NlsAccessProfile) };
      inline SynthesizerConfig& setNlsAccessProfile(const SynthesizerConfig::NlsAccessProfile & nlsAccessProfile) { DARABONBA_PTR_SET_VALUE(nlsAccessProfile_, nlsAccessProfile) };
      inline SynthesizerConfig& setNlsAccessProfile(SynthesizerConfig::NlsAccessProfile && nlsAccessProfile) { DARABONBA_PTR_SET_RVALUE(nlsAccessProfile_, nlsAccessProfile) };


      // nlsAccessType Field Functions 
      bool hasNlsAccessType() const { return this->nlsAccessType_ != nullptr;};
      void deleteNlsAccessType() { this->nlsAccessType_ = nullptr;};
      inline string getNlsAccessType() const { DARABONBA_PTR_GET_DEFAULT(nlsAccessType_, "") };
      inline SynthesizerConfig& setNlsAccessType(string nlsAccessType) { DARABONBA_PTR_SET_VALUE(nlsAccessType_, nlsAccessType) };


      // nlsEngine Field Functions 
      bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
      void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
      inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
      inline SynthesizerConfig& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


      // pitchRate Field Functions 
      bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
      void deletePitchRate() { this->pitchRate_ = nullptr;};
      inline int32_t getPitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, 0) };
      inline SynthesizerConfig& setPitchRate(int32_t pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


      // pronRules Field Functions 
      bool hasPronRules() const { return this->pronRules_ != nullptr;};
      void deletePronRules() { this->pronRules_ = nullptr;};
      inline const vector<SynthesizerConfig::PronRules> & getPronRules() const { DARABONBA_PTR_GET_CONST(pronRules_, vector<SynthesizerConfig::PronRules>) };
      inline vector<SynthesizerConfig::PronRules> getPronRules() { DARABONBA_PTR_GET(pronRules_, vector<SynthesizerConfig::PronRules>) };
      inline SynthesizerConfig& setPronRules(const vector<SynthesizerConfig::PronRules> & pronRules) { DARABONBA_PTR_SET_VALUE(pronRules_, pronRules) };
      inline SynthesizerConfig& setPronRules(vector<SynthesizerConfig::PronRules> && pronRules) { DARABONBA_PTR_SET_RVALUE(pronRules_, pronRules) };


      // speechRate Field Functions 
      bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
      void deleteSpeechRate() { this->speechRate_ = nullptr;};
      inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
      inline SynthesizerConfig& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


      // voice Field Functions 
      bool hasVoice() const { return this->voice_ != nullptr;};
      void deleteVoice() { this->voice_ = nullptr;};
      inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
      inline SynthesizerConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
      inline SynthesizerConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      shared_ptr<string> model_ {};
      shared_ptr<SynthesizerConfig::NlsAccessProfile> nlsAccessProfile_ {};
      shared_ptr<string> nlsAccessType_ {};
      shared_ptr<string> nlsEngine_ {};
      shared_ptr<int32_t> pitchRate_ {};
      shared_ptr<vector<SynthesizerConfig::PronRules>> pronRules_ {};
      shared_ptr<int32_t> speechRate_ {};
      shared_ptr<string> voice_ {};
      shared_ptr<int32_t> volume_ {};
    };

    class ScriptProfile : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScriptProfile& obj) { 
        DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
        DARABONBA_PTR_TO_JSON(AgentProfile, agentProfile_);
        DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
        DARABONBA_PTR_TO_JSON(FunctionMeta, functionMeta_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(NluAccessProfile, nluAccessProfile_);
        DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
        DARABONBA_PTR_TO_JSON(OmniModel, omniModel_);
      };
      friend void from_json(const Darabonba::Json& j, ScriptProfile& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
        DARABONBA_PTR_FROM_JSON(AgentProfile, agentProfile_);
        DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
        DARABONBA_PTR_FROM_JSON(FunctionMeta, functionMeta_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(NluAccessProfile, nluAccessProfile_);
        DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
        DARABONBA_PTR_FROM_JSON(OmniModel, omniModel_);
      };
      ScriptProfile() = default ;
      ScriptProfile(const ScriptProfile &) = default ;
      ScriptProfile(ScriptProfile &&) = default ;
      ScriptProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScriptProfile() = default ;
      ScriptProfile& operator=(const ScriptProfile &) = default ;
      ScriptProfile& operator=(ScriptProfile &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NluAccessProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NluAccessProfile& obj) { 
          DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
        };
        friend void from_json(const Darabonba::Json& j, NluAccessProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
        };
        NluAccessProfile() = default ;
        NluAccessProfile(const NluAccessProfile &) = default ;
        NluAccessProfile(NluAccessProfile &&) = default ;
        NluAccessProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NluAccessProfile() = default ;
        NluAccessProfile& operator=(const NluAccessProfile &) = default ;
        NluAccessProfile& operator=(NluAccessProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessProfileId_ == nullptr; };
        // accessProfileId Field Functions 
        bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
        void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
        inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
        inline NluAccessProfile& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


      protected:
        shared_ptr<string> accessProfileId_ {};
      };

      class FunctionMeta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionMeta& obj) { 
          DARABONBA_PTR_TO_JSON(FunctionId, functionId_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(HttpTriggerName, httpTriggerName_);
          DARABONBA_PTR_TO_JSON(HttpTriggerUrl, httpTriggerUrl_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionMeta& obj) { 
          DARABONBA_PTR_FROM_JSON(FunctionId, functionId_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(HttpTriggerName, httpTriggerName_);
          DARABONBA_PTR_FROM_JSON(HttpTriggerUrl, httpTriggerUrl_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        FunctionMeta() = default ;
        FunctionMeta(const FunctionMeta &) = default ;
        FunctionMeta(FunctionMeta &&) = default ;
        FunctionMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionMeta() = default ;
        FunctionMeta& operator=(const FunctionMeta &) = default ;
        FunctionMeta& operator=(FunctionMeta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->functionId_ == nullptr
        && this->functionName_ == nullptr && this->httpTriggerName_ == nullptr && this->httpTriggerUrl_ == nullptr && this->regionId_ == nullptr; };
        // functionId Field Functions 
        bool hasFunctionId() const { return this->functionId_ != nullptr;};
        void deleteFunctionId() { this->functionId_ = nullptr;};
        inline string getFunctionId() const { DARABONBA_PTR_GET_DEFAULT(functionId_, "") };
        inline FunctionMeta& setFunctionId(string functionId) { DARABONBA_PTR_SET_VALUE(functionId_, functionId) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
        inline FunctionMeta& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


        // httpTriggerName Field Functions 
        bool hasHttpTriggerName() const { return this->httpTriggerName_ != nullptr;};
        void deleteHttpTriggerName() { this->httpTriggerName_ = nullptr;};
        inline string getHttpTriggerName() const { DARABONBA_PTR_GET_DEFAULT(httpTriggerName_, "") };
        inline FunctionMeta& setHttpTriggerName(string httpTriggerName) { DARABONBA_PTR_SET_VALUE(httpTriggerName_, httpTriggerName) };


        // httpTriggerUrl Field Functions 
        bool hasHttpTriggerUrl() const { return this->httpTriggerUrl_ != nullptr;};
        void deleteHttpTriggerUrl() { this->httpTriggerUrl_ = nullptr;};
        inline string getHttpTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(httpTriggerUrl_, "") };
        inline FunctionMeta& setHttpTriggerUrl(string httpTriggerUrl) { DARABONBA_PTR_SET_VALUE(httpTriggerUrl_, httpTriggerUrl) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline FunctionMeta& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        shared_ptr<string> functionId_ {};
        shared_ptr<string> functionName_ {};
        shared_ptr<string> httpTriggerName_ {};
        shared_ptr<string> httpTriggerUrl_ {};
        shared_ptr<string> regionId_ {};
      };

      class AgentProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentProfile& obj) { 
          DARABONBA_PTR_TO_JSON(PromptsJson, promptsJson_);
          DARABONBA_PTR_TO_JSON(ScriptProfileTemplateId, scriptProfileTemplateId_);
        };
        friend void from_json(const Darabonba::Json& j, AgentProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(PromptsJson, promptsJson_);
          DARABONBA_PTR_FROM_JSON(ScriptProfileTemplateId, scriptProfileTemplateId_);
        };
        AgentProfile() = default ;
        AgentProfile(const AgentProfile &) = default ;
        AgentProfile(AgentProfile &&) = default ;
        AgentProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentProfile() = default ;
        AgentProfile& operator=(const AgentProfile &) = default ;
        AgentProfile& operator=(AgentProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->promptsJson_ == nullptr
        && this->scriptProfileTemplateId_ == nullptr; };
        // promptsJson Field Functions 
        bool hasPromptsJson() const { return this->promptsJson_ != nullptr;};
        void deletePromptsJson() { this->promptsJson_ = nullptr;};
        inline string getPromptsJson() const { DARABONBA_PTR_GET_DEFAULT(promptsJson_, "") };
        inline AgentProfile& setPromptsJson(string promptsJson) { DARABONBA_PTR_SET_VALUE(promptsJson_, promptsJson) };


        // scriptProfileTemplateId Field Functions 
        bool hasScriptProfileTemplateId() const { return this->scriptProfileTemplateId_ != nullptr;};
        void deleteScriptProfileTemplateId() { this->scriptProfileTemplateId_ = nullptr;};
        inline string getScriptProfileTemplateId() const { DARABONBA_PTR_GET_DEFAULT(scriptProfileTemplateId_, "") };
        inline AgentProfile& setScriptProfileTemplateId(string scriptProfileTemplateId) { DARABONBA_PTR_SET_VALUE(scriptProfileTemplateId_, scriptProfileTemplateId) };


      protected:
        shared_ptr<string> promptsJson_ {};
        shared_ptr<string> scriptProfileTemplateId_ {};
      };

      virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->agentProfile_ == nullptr && this->chatbotId_ == nullptr && this->functionMeta_ == nullptr && this->model_ == nullptr && this->nluAccessProfile_ == nullptr
        && this->nluAccessType_ == nullptr && this->omniModel_ == nullptr; };
      // agentKey Field Functions 
      bool hasAgentKey() const { return this->agentKey_ != nullptr;};
      void deleteAgentKey() { this->agentKey_ = nullptr;};
      inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
      inline ScriptProfile& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


      // agentProfile Field Functions 
      bool hasAgentProfile() const { return this->agentProfile_ != nullptr;};
      void deleteAgentProfile() { this->agentProfile_ = nullptr;};
      inline const ScriptProfile::AgentProfile & getAgentProfile() const { DARABONBA_PTR_GET_CONST(agentProfile_, ScriptProfile::AgentProfile) };
      inline ScriptProfile::AgentProfile getAgentProfile() { DARABONBA_PTR_GET(agentProfile_, ScriptProfile::AgentProfile) };
      inline ScriptProfile& setAgentProfile(const ScriptProfile::AgentProfile & agentProfile) { DARABONBA_PTR_SET_VALUE(agentProfile_, agentProfile) };
      inline ScriptProfile& setAgentProfile(ScriptProfile::AgentProfile && agentProfile) { DARABONBA_PTR_SET_RVALUE(agentProfile_, agentProfile) };


      // chatbotId Field Functions 
      bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
      void deleteChatbotId() { this->chatbotId_ = nullptr;};
      inline string getChatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
      inline ScriptProfile& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


      // functionMeta Field Functions 
      bool hasFunctionMeta() const { return this->functionMeta_ != nullptr;};
      void deleteFunctionMeta() { this->functionMeta_ = nullptr;};
      inline const ScriptProfile::FunctionMeta & getFunctionMeta() const { DARABONBA_PTR_GET_CONST(functionMeta_, ScriptProfile::FunctionMeta) };
      inline ScriptProfile::FunctionMeta getFunctionMeta() { DARABONBA_PTR_GET(functionMeta_, ScriptProfile::FunctionMeta) };
      inline ScriptProfile& setFunctionMeta(const ScriptProfile::FunctionMeta & functionMeta) { DARABONBA_PTR_SET_VALUE(functionMeta_, functionMeta) };
      inline ScriptProfile& setFunctionMeta(ScriptProfile::FunctionMeta && functionMeta) { DARABONBA_PTR_SET_RVALUE(functionMeta_, functionMeta) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline ScriptProfile& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // nluAccessProfile Field Functions 
      bool hasNluAccessProfile() const { return this->nluAccessProfile_ != nullptr;};
      void deleteNluAccessProfile() { this->nluAccessProfile_ = nullptr;};
      inline const ScriptProfile::NluAccessProfile & getNluAccessProfile() const { DARABONBA_PTR_GET_CONST(nluAccessProfile_, ScriptProfile::NluAccessProfile) };
      inline ScriptProfile::NluAccessProfile getNluAccessProfile() { DARABONBA_PTR_GET(nluAccessProfile_, ScriptProfile::NluAccessProfile) };
      inline ScriptProfile& setNluAccessProfile(const ScriptProfile::NluAccessProfile & nluAccessProfile) { DARABONBA_PTR_SET_VALUE(nluAccessProfile_, nluAccessProfile) };
      inline ScriptProfile& setNluAccessProfile(ScriptProfile::NluAccessProfile && nluAccessProfile) { DARABONBA_PTR_SET_RVALUE(nluAccessProfile_, nluAccessProfile) };


      // nluAccessType Field Functions 
      bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
      void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
      inline string getNluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
      inline ScriptProfile& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


      // omniModel Field Functions 
      bool hasOmniModel() const { return this->omniModel_ != nullptr;};
      void deleteOmniModel() { this->omniModel_ = nullptr;};
      inline bool getOmniModel() const { DARABONBA_PTR_GET_DEFAULT(omniModel_, false) };
      inline ScriptProfile& setOmniModel(bool omniModel) { DARABONBA_PTR_SET_VALUE(omniModel_, omniModel) };


    protected:
      shared_ptr<string> agentKey_ {};
      shared_ptr<ScriptProfile::AgentProfile> agentProfile_ {};
      shared_ptr<string> chatbotId_ {};
      shared_ptr<ScriptProfile::FunctionMeta> functionMeta_ {};
      shared_ptr<string> model_ {};
      shared_ptr<ScriptProfile::NluAccessProfile> nluAccessProfile_ {};
      shared_ptr<string> nluAccessType_ {};
      shared_ptr<bool> omniModel_ {};
    };

    class LabelConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LabelConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CandidateValues, candidateValues_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, LabelConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CandidateValues, candidateValues_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      LabelConfig() = default ;
      LabelConfig(const LabelConfig &) = default ;
      LabelConfig(LabelConfig &&) = default ;
      LabelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LabelConfig() = default ;
      LabelConfig& operator=(const LabelConfig &) = default ;
      LabelConfig& operator=(LabelConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->candidateValues_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
      // candidateValues Field Functions 
      bool hasCandidateValues() const { return this->candidateValues_ != nullptr;};
      void deleteCandidateValues() { this->candidateValues_ = nullptr;};
      inline const vector<string> & getCandidateValues() const { DARABONBA_PTR_GET_CONST(candidateValues_, vector<string>) };
      inline vector<string> getCandidateValues() { DARABONBA_PTR_GET(candidateValues_, vector<string>) };
      inline LabelConfig& setCandidateValues(const vector<string> & candidateValues) { DARABONBA_PTR_SET_VALUE(candidateValues_, candidateValues) };
      inline LabelConfig& setCandidateValues(vector<string> && candidateValues) { DARABONBA_PTR_SET_RVALUE(candidateValues_, candidateValues) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LabelConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LabelConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<vector<string>> candidateValues_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
    };

    class InteractionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InteractionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundMusicId, backgroundMusicId_);
        DARABONBA_PTR_TO_JSON(EndConversationConfig, endConversationConfig_);
        DARABONBA_PTR_TO_JSON(InitialGreetingDelayMilliseconds, initialGreetingDelayMilliseconds_);
        DARABONBA_PTR_TO_JSON(SilenceDetectionConfig, silenceDetectionConfig_);
      };
      friend void from_json(const Darabonba::Json& j, InteractionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundMusicId, backgroundMusicId_);
        DARABONBA_PTR_FROM_JSON(EndConversationConfig, endConversationConfig_);
        DARABONBA_PTR_FROM_JSON(InitialGreetingDelayMilliseconds, initialGreetingDelayMilliseconds_);
        DARABONBA_PTR_FROM_JSON(SilenceDetectionConfig, silenceDetectionConfig_);
      };
      InteractionConfig() = default ;
      InteractionConfig(const InteractionConfig &) = default ;
      InteractionConfig(InteractionConfig &&) = default ;
      InteractionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InteractionConfig() = default ;
      InteractionConfig& operator=(const InteractionConfig &) = default ;
      InteractionConfig& operator=(InteractionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SilenceDetectionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SilenceDetectionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(MaxRepeats, maxRepeats_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        };
        friend void from_json(const Darabonba::Json& j, SilenceDetectionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxRepeats, maxRepeats_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        };
        SilenceDetectionConfig() = default ;
        SilenceDetectionConfig(const SilenceDetectionConfig &) = default ;
        SilenceDetectionConfig(SilenceDetectionConfig &&) = default ;
        SilenceDetectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SilenceDetectionConfig() = default ;
        SilenceDetectionConfig& operator=(const SilenceDetectionConfig &) = default ;
        SilenceDetectionConfig& operator=(SilenceDetectionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxRepeats_ == nullptr
        && this->timeout_ == nullptr; };
        // maxRepeats Field Functions 
        bool hasMaxRepeats() const { return this->maxRepeats_ != nullptr;};
        void deleteMaxRepeats() { this->maxRepeats_ = nullptr;};
        inline int32_t getMaxRepeats() const { DARABONBA_PTR_GET_DEFAULT(maxRepeats_, 0) };
        inline SilenceDetectionConfig& setMaxRepeats(int32_t maxRepeats) { DARABONBA_PTR_SET_VALUE(maxRepeats_, maxRepeats) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline SilenceDetectionConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      protected:
        shared_ptr<int32_t> maxRepeats_ {};
        shared_ptr<int32_t> timeout_ {};
      };

      class EndConversationConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EndConversationConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Delay, delay_);
          DARABONBA_PTR_TO_JSON(Triggers, triggers_);
        };
        friend void from_json(const Darabonba::Json& j, EndConversationConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Delay, delay_);
          DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
        };
        EndConversationConfig() = default ;
        EndConversationConfig(const EndConversationConfig &) = default ;
        EndConversationConfig(EndConversationConfig &&) = default ;
        EndConversationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EndConversationConfig() = default ;
        EndConversationConfig& operator=(const EndConversationConfig &) = default ;
        EndConversationConfig& operator=(EndConversationConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Triggers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Triggers& obj) { 
            DARABONBA_PTR_TO_JSON(ClosingStatement, closingStatement_);
            DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
            DARABONBA_PTR_TO_JSON(TurnLimit, turnLimit_);
          };
          friend void from_json(const Darabonba::Json& j, Triggers& obj) { 
            DARABONBA_PTR_FROM_JSON(ClosingStatement, closingStatement_);
            DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
            DARABONBA_PTR_FROM_JSON(TurnLimit, turnLimit_);
          };
          Triggers() = default ;
          Triggers(const Triggers &) = default ;
          Triggers(Triggers &&) = default ;
          Triggers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Triggers() = default ;
          Triggers& operator=(const Triggers &) = default ;
          Triggers& operator=(Triggers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->closingStatement_ == nullptr
        && this->keyWords_ == nullptr && this->triggerType_ == nullptr && this->turnLimit_ == nullptr; };
          // closingStatement Field Functions 
          bool hasClosingStatement() const { return this->closingStatement_ != nullptr;};
          void deleteClosingStatement() { this->closingStatement_ = nullptr;};
          inline string getClosingStatement() const { DARABONBA_PTR_GET_DEFAULT(closingStatement_, "") };
          inline Triggers& setClosingStatement(string closingStatement) { DARABONBA_PTR_SET_VALUE(closingStatement_, closingStatement) };


          // keyWords Field Functions 
          bool hasKeyWords() const { return this->keyWords_ != nullptr;};
          void deleteKeyWords() { this->keyWords_ = nullptr;};
          inline const vector<string> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
          inline vector<string> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
          inline Triggers& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
          inline Triggers& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


          // triggerType Field Functions 
          bool hasTriggerType() const { return this->triggerType_ != nullptr;};
          void deleteTriggerType() { this->triggerType_ = nullptr;};
          inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
          inline Triggers& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


          // turnLimit Field Functions 
          bool hasTurnLimit() const { return this->turnLimit_ != nullptr;};
          void deleteTurnLimit() { this->turnLimit_ = nullptr;};
          inline int32_t getTurnLimit() const { DARABONBA_PTR_GET_DEFAULT(turnLimit_, 0) };
          inline Triggers& setTurnLimit(int32_t turnLimit) { DARABONBA_PTR_SET_VALUE(turnLimit_, turnLimit) };


        protected:
          shared_ptr<string> closingStatement_ {};
          shared_ptr<vector<string>> keyWords_ {};
          shared_ptr<string> triggerType_ {};
          shared_ptr<int32_t> turnLimit_ {};
        };

        virtual bool empty() const override { return this->delay_ == nullptr
        && this->triggers_ == nullptr; };
        // delay Field Functions 
        bool hasDelay() const { return this->delay_ != nullptr;};
        void deleteDelay() { this->delay_ = nullptr;};
        inline int32_t getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0) };
        inline EndConversationConfig& setDelay(int32_t delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


        // triggers Field Functions 
        bool hasTriggers() const { return this->triggers_ != nullptr;};
        void deleteTriggers() { this->triggers_ = nullptr;};
        inline const vector<EndConversationConfig::Triggers> & getTriggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<EndConversationConfig::Triggers>) };
        inline vector<EndConversationConfig::Triggers> getTriggers() { DARABONBA_PTR_GET(triggers_, vector<EndConversationConfig::Triggers>) };
        inline EndConversationConfig& setTriggers(const vector<EndConversationConfig::Triggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
        inline EndConversationConfig& setTriggers(vector<EndConversationConfig::Triggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


      protected:
        shared_ptr<int32_t> delay_ {};
        shared_ptr<vector<EndConversationConfig::Triggers>> triggers_ {};
      };

      virtual bool empty() const override { return this->backgroundMusicId_ == nullptr
        && this->endConversationConfig_ == nullptr && this->initialGreetingDelayMilliseconds_ == nullptr && this->silenceDetectionConfig_ == nullptr; };
      // backgroundMusicId Field Functions 
      bool hasBackgroundMusicId() const { return this->backgroundMusicId_ != nullptr;};
      void deleteBackgroundMusicId() { this->backgroundMusicId_ = nullptr;};
      inline string getBackgroundMusicId() const { DARABONBA_PTR_GET_DEFAULT(backgroundMusicId_, "") };
      inline InteractionConfig& setBackgroundMusicId(string backgroundMusicId) { DARABONBA_PTR_SET_VALUE(backgroundMusicId_, backgroundMusicId) };


      // endConversationConfig Field Functions 
      bool hasEndConversationConfig() const { return this->endConversationConfig_ != nullptr;};
      void deleteEndConversationConfig() { this->endConversationConfig_ = nullptr;};
      inline const InteractionConfig::EndConversationConfig & getEndConversationConfig() const { DARABONBA_PTR_GET_CONST(endConversationConfig_, InteractionConfig::EndConversationConfig) };
      inline InteractionConfig::EndConversationConfig getEndConversationConfig() { DARABONBA_PTR_GET(endConversationConfig_, InteractionConfig::EndConversationConfig) };
      inline InteractionConfig& setEndConversationConfig(const InteractionConfig::EndConversationConfig & endConversationConfig) { DARABONBA_PTR_SET_VALUE(endConversationConfig_, endConversationConfig) };
      inline InteractionConfig& setEndConversationConfig(InteractionConfig::EndConversationConfig && endConversationConfig) { DARABONBA_PTR_SET_RVALUE(endConversationConfig_, endConversationConfig) };


      // initialGreetingDelayMilliseconds Field Functions 
      bool hasInitialGreetingDelayMilliseconds() const { return this->initialGreetingDelayMilliseconds_ != nullptr;};
      void deleteInitialGreetingDelayMilliseconds() { this->initialGreetingDelayMilliseconds_ = nullptr;};
      inline int32_t getInitialGreetingDelayMilliseconds() const { DARABONBA_PTR_GET_DEFAULT(initialGreetingDelayMilliseconds_, 0) };
      inline InteractionConfig& setInitialGreetingDelayMilliseconds(int32_t initialGreetingDelayMilliseconds) { DARABONBA_PTR_SET_VALUE(initialGreetingDelayMilliseconds_, initialGreetingDelayMilliseconds) };


      // silenceDetectionConfig Field Functions 
      bool hasSilenceDetectionConfig() const { return this->silenceDetectionConfig_ != nullptr;};
      void deleteSilenceDetectionConfig() { this->silenceDetectionConfig_ = nullptr;};
      inline const InteractionConfig::SilenceDetectionConfig & getSilenceDetectionConfig() const { DARABONBA_PTR_GET_CONST(silenceDetectionConfig_, InteractionConfig::SilenceDetectionConfig) };
      inline InteractionConfig::SilenceDetectionConfig getSilenceDetectionConfig() { DARABONBA_PTR_GET(silenceDetectionConfig_, InteractionConfig::SilenceDetectionConfig) };
      inline InteractionConfig& setSilenceDetectionConfig(const InteractionConfig::SilenceDetectionConfig & silenceDetectionConfig) { DARABONBA_PTR_SET_VALUE(silenceDetectionConfig_, silenceDetectionConfig) };
      inline InteractionConfig& setSilenceDetectionConfig(InteractionConfig::SilenceDetectionConfig && silenceDetectionConfig) { DARABONBA_PTR_SET_RVALUE(silenceDetectionConfig_, silenceDetectionConfig) };


    protected:
      shared_ptr<string> backgroundMusicId_ {};
      shared_ptr<InteractionConfig::EndConversationConfig> endConversationConfig_ {};
      shared_ptr<int32_t> initialGreetingDelayMilliseconds_ {};
      shared_ptr<InteractionConfig::SilenceDetectionConfig> silenceDetectionConfig_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->interactionConfig_ == nullptr && this->labelConfig_ == nullptr && this->scriptId_ == nullptr && this->scriptProfile_ == nullptr && this->sourceVersionId_ == nullptr
        && this->synthesizerConfig_ == nullptr && this->transcriberConfig_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateScriptVersionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // interactionConfig Field Functions 
    bool hasInteractionConfig() const { return this->interactionConfig_ != nullptr;};
    void deleteInteractionConfig() { this->interactionConfig_ = nullptr;};
    inline const CreateScriptVersionRequest::InteractionConfig & getInteractionConfig() const { DARABONBA_PTR_GET_CONST(interactionConfig_, CreateScriptVersionRequest::InteractionConfig) };
    inline CreateScriptVersionRequest::InteractionConfig getInteractionConfig() { DARABONBA_PTR_GET(interactionConfig_, CreateScriptVersionRequest::InteractionConfig) };
    inline CreateScriptVersionRequest& setInteractionConfig(const CreateScriptVersionRequest::InteractionConfig & interactionConfig) { DARABONBA_PTR_SET_VALUE(interactionConfig_, interactionConfig) };
    inline CreateScriptVersionRequest& setInteractionConfig(CreateScriptVersionRequest::InteractionConfig && interactionConfig) { DARABONBA_PTR_SET_RVALUE(interactionConfig_, interactionConfig) };


    // labelConfig Field Functions 
    bool hasLabelConfig() const { return this->labelConfig_ != nullptr;};
    void deleteLabelConfig() { this->labelConfig_ = nullptr;};
    inline const vector<CreateScriptVersionRequest::LabelConfig> & getLabelConfig() const { DARABONBA_PTR_GET_CONST(labelConfig_, vector<CreateScriptVersionRequest::LabelConfig>) };
    inline vector<CreateScriptVersionRequest::LabelConfig> getLabelConfig() { DARABONBA_PTR_GET(labelConfig_, vector<CreateScriptVersionRequest::LabelConfig>) };
    inline CreateScriptVersionRequest& setLabelConfig(const vector<CreateScriptVersionRequest::LabelConfig> & labelConfig) { DARABONBA_PTR_SET_VALUE(labelConfig_, labelConfig) };
    inline CreateScriptVersionRequest& setLabelConfig(vector<CreateScriptVersionRequest::LabelConfig> && labelConfig) { DARABONBA_PTR_SET_RVALUE(labelConfig_, labelConfig) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline CreateScriptVersionRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptProfile Field Functions 
    bool hasScriptProfile() const { return this->scriptProfile_ != nullptr;};
    void deleteScriptProfile() { this->scriptProfile_ = nullptr;};
    inline const CreateScriptVersionRequest::ScriptProfile & getScriptProfile() const { DARABONBA_PTR_GET_CONST(scriptProfile_, CreateScriptVersionRequest::ScriptProfile) };
    inline CreateScriptVersionRequest::ScriptProfile getScriptProfile() { DARABONBA_PTR_GET(scriptProfile_, CreateScriptVersionRequest::ScriptProfile) };
    inline CreateScriptVersionRequest& setScriptProfile(const CreateScriptVersionRequest::ScriptProfile & scriptProfile) { DARABONBA_PTR_SET_VALUE(scriptProfile_, scriptProfile) };
    inline CreateScriptVersionRequest& setScriptProfile(CreateScriptVersionRequest::ScriptProfile && scriptProfile) { DARABONBA_PTR_SET_RVALUE(scriptProfile_, scriptProfile) };


    // sourceVersionId Field Functions 
    bool hasSourceVersionId() const { return this->sourceVersionId_ != nullptr;};
    void deleteSourceVersionId() { this->sourceVersionId_ = nullptr;};
    inline string getSourceVersionId() const { DARABONBA_PTR_GET_DEFAULT(sourceVersionId_, "") };
    inline CreateScriptVersionRequest& setSourceVersionId(string sourceVersionId) { DARABONBA_PTR_SET_VALUE(sourceVersionId_, sourceVersionId) };


    // synthesizerConfig Field Functions 
    bool hasSynthesizerConfig() const { return this->synthesizerConfig_ != nullptr;};
    void deleteSynthesizerConfig() { this->synthesizerConfig_ = nullptr;};
    inline const CreateScriptVersionRequest::SynthesizerConfig & getSynthesizerConfig() const { DARABONBA_PTR_GET_CONST(synthesizerConfig_, CreateScriptVersionRequest::SynthesizerConfig) };
    inline CreateScriptVersionRequest::SynthesizerConfig getSynthesizerConfig() { DARABONBA_PTR_GET(synthesizerConfig_, CreateScriptVersionRequest::SynthesizerConfig) };
    inline CreateScriptVersionRequest& setSynthesizerConfig(const CreateScriptVersionRequest::SynthesizerConfig & synthesizerConfig) { DARABONBA_PTR_SET_VALUE(synthesizerConfig_, synthesizerConfig) };
    inline CreateScriptVersionRequest& setSynthesizerConfig(CreateScriptVersionRequest::SynthesizerConfig && synthesizerConfig) { DARABONBA_PTR_SET_RVALUE(synthesizerConfig_, synthesizerConfig) };


    // transcriberConfig Field Functions 
    bool hasTranscriberConfig() const { return this->transcriberConfig_ != nullptr;};
    void deleteTranscriberConfig() { this->transcriberConfig_ = nullptr;};
    inline const CreateScriptVersionRequest::TranscriberConfig & getTranscriberConfig() const { DARABONBA_PTR_GET_CONST(transcriberConfig_, CreateScriptVersionRequest::TranscriberConfig) };
    inline CreateScriptVersionRequest::TranscriberConfig getTranscriberConfig() { DARABONBA_PTR_GET(transcriberConfig_, CreateScriptVersionRequest::TranscriberConfig) };
    inline CreateScriptVersionRequest& setTranscriberConfig(const CreateScriptVersionRequest::TranscriberConfig & transcriberConfig) { DARABONBA_PTR_SET_VALUE(transcriberConfig_, transcriberConfig) };
    inline CreateScriptVersionRequest& setTranscriberConfig(CreateScriptVersionRequest::TranscriberConfig && transcriberConfig) { DARABONBA_PTR_SET_RVALUE(transcriberConfig_, transcriberConfig) };


  protected:
    shared_ptr<string> instanceId_ {};
    shared_ptr<CreateScriptVersionRequest::InteractionConfig> interactionConfig_ {};
    shared_ptr<vector<CreateScriptVersionRequest::LabelConfig>> labelConfig_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<CreateScriptVersionRequest::ScriptProfile> scriptProfile_ {};
    shared_ptr<string> sourceVersionId_ {};
    shared_ptr<CreateScriptVersionRequest::SynthesizerConfig> synthesizerConfig_ {};
    shared_ptr<CreateScriptVersionRequest::TranscriberConfig> transcriberConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
