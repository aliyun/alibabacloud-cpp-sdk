// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class GetApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationResponseBody() = default ;
    GetApplicationResponseBody(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody(GetApplicationResponseBody &&) = default ;
    GetApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBody() = default ;
    GetApplicationResponseBody& operator=(const GetApplicationResponseBody &) = default ;
    GetApplicationResponseBody& operator=(GetApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
        DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
        DARABONBA_PTR_TO_JSON(PublishedVersion, publishedVersion_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
        DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
        DARABONBA_PTR_FROM_JSON(PublishedVersion, publishedVersion_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PublishedVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublishedVersion& obj) { 
          DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfig_);
          DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfile_);
          DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfig_);
          DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfig_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, PublishedVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfig_);
          DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfile_);
          DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfig_);
          DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfig_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        PublishedVersion() = default ;
        PublishedVersion(const PublishedVersion &) = default ;
        PublishedVersion(PublishedVersion &&) = default ;
        PublishedVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublishedVersion() = default ;
        PublishedVersion& operator=(const PublishedVersion &) = default ;
        PublishedVersion& operator=(PublishedVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TranscriberConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TranscriberConfig& obj) { 
            DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
          };
          friend void from_json(const Darabonba::Json& j, TranscriberConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
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
          virtual bool empty() const override { return this->nlsAccessType_ == nullptr
        && this->nlsEngine_ == nullptr; };
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


        protected:
          shared_ptr<string> nlsAccessType_ {};
          shared_ptr<string> nlsEngine_ {};
        };

        class SynthesizerConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SynthesizerConfig& obj) { 
            DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
            DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
            DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_TO_JSON(Voice, voice_);
            DARABONBA_PTR_TO_JSON(Volume, volume_);
          };
          friend void from_json(const Darabonba::Json& j, SynthesizerConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
            DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
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
          virtual bool empty() const override { return this->nlsAccessType_ == nullptr
        && this->nlsEngine_ == nullptr && this->pitchRate_ == nullptr && this->speechRate_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
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
          shared_ptr<string> nlsAccessType_ {};
          shared_ptr<string> nlsEngine_ {};
          shared_ptr<int32_t> pitchRate_ {};
          shared_ptr<int32_t> speechRate_ {};
          shared_ptr<string> voice_ {};
          shared_ptr<int32_t> volume_ {};
        };

        class ScriptProfile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScriptProfile& obj) { 
            DARABONBA_PTR_TO_JSON(AgentProfile, agentProfile_);
            DARABONBA_PTR_TO_JSON(Model, model_);
            DARABONBA_PTR_TO_JSON(Temperature, temperature_);
            DARABONBA_PTR_TO_JSON(TopP, topP_);
          };
          friend void from_json(const Darabonba::Json& j, ScriptProfile& obj) { 
            DARABONBA_PTR_FROM_JSON(AgentProfile, agentProfile_);
            DARABONBA_PTR_FROM_JSON(Model, model_);
            DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
            DARABONBA_PTR_FROM_JSON(TopP, topP_);
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
          class AgentProfile : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AgentProfile& obj) { 
              DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(PromptsJson, promptsJson_);
              DARABONBA_PTR_TO_JSON(ScriptProfileTemplateId, scriptProfileTemplateId_);
            };
            friend void from_json(const Darabonba::Json& j, AgentProfile& obj) { 
              DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
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
            virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && this->description_ == nullptr && this->promptsJson_ == nullptr && this->scriptProfileTemplateId_ == nullptr; };
            // agentProfileId Field Functions 
            bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
            void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
            inline string getAgentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
            inline AgentProfile& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline AgentProfile& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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
            shared_ptr<string> agentProfileId_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> promptsJson_ {};
            shared_ptr<string> scriptProfileTemplateId_ {};
          };

          virtual bool empty() const override { return this->agentProfile_ == nullptr
        && this->model_ == nullptr && this->temperature_ == nullptr && this->topP_ == nullptr; };
          // agentProfile Field Functions 
          bool hasAgentProfile() const { return this->agentProfile_ != nullptr;};
          void deleteAgentProfile() { this->agentProfile_ = nullptr;};
          inline const ScriptProfile::AgentProfile & getAgentProfile() const { DARABONBA_PTR_GET_CONST(agentProfile_, ScriptProfile::AgentProfile) };
          inline ScriptProfile::AgentProfile getAgentProfile() { DARABONBA_PTR_GET(agentProfile_, ScriptProfile::AgentProfile) };
          inline ScriptProfile& setAgentProfile(const ScriptProfile::AgentProfile & agentProfile) { DARABONBA_PTR_SET_VALUE(agentProfile_, agentProfile) };
          inline ScriptProfile& setAgentProfile(ScriptProfile::AgentProfile && agentProfile) { DARABONBA_PTR_SET_RVALUE(agentProfile_, agentProfile) };


          // model Field Functions 
          bool hasModel() const { return this->model_ != nullptr;};
          void deleteModel() { this->model_ = nullptr;};
          inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
          inline ScriptProfile& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


          // temperature Field Functions 
          bool hasTemperature() const { return this->temperature_ != nullptr;};
          void deleteTemperature() { this->temperature_ = nullptr;};
          inline string getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, "") };
          inline ScriptProfile& setTemperature(string temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


          // topP Field Functions 
          bool hasTopP() const { return this->topP_ != nullptr;};
          void deleteTopP() { this->topP_ = nullptr;};
          inline string getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, "") };
          inline ScriptProfile& setTopP(string topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


        protected:
          shared_ptr<ScriptProfile::AgentProfile> agentProfile_ {};
          shared_ptr<string> model_ {};
          shared_ptr<string> temperature_ {};
          shared_ptr<string> topP_ {};
        };

        class InteractionConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InteractionConfig& obj) { 
            DARABONBA_PTR_TO_JSON(SilenceDetectionConfig, silenceDetectionConfig_);
          };
          friend void from_json(const Darabonba::Json& j, InteractionConfig& obj) { 
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
              DARABONBA_PTR_TO_JSON(Timeout, timeout_);
            };
            friend void from_json(const Darabonba::Json& j, SilenceDetectionConfig& obj) { 
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
            virtual bool empty() const override { return this->timeout_ == nullptr; };
            // timeout Field Functions 
            bool hasTimeout() const { return this->timeout_ != nullptr;};
            void deleteTimeout() { this->timeout_ = nullptr;};
            inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
            inline SilenceDetectionConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          protected:
            shared_ptr<int32_t> timeout_ {};
          };

          virtual bool empty() const override { return this->silenceDetectionConfig_ == nullptr; };
          // silenceDetectionConfig Field Functions 
          bool hasSilenceDetectionConfig() const { return this->silenceDetectionConfig_ != nullptr;};
          void deleteSilenceDetectionConfig() { this->silenceDetectionConfig_ = nullptr;};
          inline const InteractionConfig::SilenceDetectionConfig & getSilenceDetectionConfig() const { DARABONBA_PTR_GET_CONST(silenceDetectionConfig_, InteractionConfig::SilenceDetectionConfig) };
          inline InteractionConfig::SilenceDetectionConfig getSilenceDetectionConfig() { DARABONBA_PTR_GET(silenceDetectionConfig_, InteractionConfig::SilenceDetectionConfig) };
          inline InteractionConfig& setSilenceDetectionConfig(const InteractionConfig::SilenceDetectionConfig & silenceDetectionConfig) { DARABONBA_PTR_SET_VALUE(silenceDetectionConfig_, silenceDetectionConfig) };
          inline InteractionConfig& setSilenceDetectionConfig(InteractionConfig::SilenceDetectionConfig && silenceDetectionConfig) { DARABONBA_PTR_SET_RVALUE(silenceDetectionConfig_, silenceDetectionConfig) };


        protected:
          shared_ptr<InteractionConfig::SilenceDetectionConfig> silenceDetectionConfig_ {};
        };

        virtual bool empty() const override { return this->interactionConfig_ == nullptr
        && this->scriptProfile_ == nullptr && this->synthesizerConfig_ == nullptr && this->transcriberConfig_ == nullptr && this->versionId_ == nullptr; };
        // interactionConfig Field Functions 
        bool hasInteractionConfig() const { return this->interactionConfig_ != nullptr;};
        void deleteInteractionConfig() { this->interactionConfig_ = nullptr;};
        inline const PublishedVersion::InteractionConfig & getInteractionConfig() const { DARABONBA_PTR_GET_CONST(interactionConfig_, PublishedVersion::InteractionConfig) };
        inline PublishedVersion::InteractionConfig getInteractionConfig() { DARABONBA_PTR_GET(interactionConfig_, PublishedVersion::InteractionConfig) };
        inline PublishedVersion& setInteractionConfig(const PublishedVersion::InteractionConfig & interactionConfig) { DARABONBA_PTR_SET_VALUE(interactionConfig_, interactionConfig) };
        inline PublishedVersion& setInteractionConfig(PublishedVersion::InteractionConfig && interactionConfig) { DARABONBA_PTR_SET_RVALUE(interactionConfig_, interactionConfig) };


        // scriptProfile Field Functions 
        bool hasScriptProfile() const { return this->scriptProfile_ != nullptr;};
        void deleteScriptProfile() { this->scriptProfile_ = nullptr;};
        inline const PublishedVersion::ScriptProfile & getScriptProfile() const { DARABONBA_PTR_GET_CONST(scriptProfile_, PublishedVersion::ScriptProfile) };
        inline PublishedVersion::ScriptProfile getScriptProfile() { DARABONBA_PTR_GET(scriptProfile_, PublishedVersion::ScriptProfile) };
        inline PublishedVersion& setScriptProfile(const PublishedVersion::ScriptProfile & scriptProfile) { DARABONBA_PTR_SET_VALUE(scriptProfile_, scriptProfile) };
        inline PublishedVersion& setScriptProfile(PublishedVersion::ScriptProfile && scriptProfile) { DARABONBA_PTR_SET_RVALUE(scriptProfile_, scriptProfile) };


        // synthesizerConfig Field Functions 
        bool hasSynthesizerConfig() const { return this->synthesizerConfig_ != nullptr;};
        void deleteSynthesizerConfig() { this->synthesizerConfig_ = nullptr;};
        inline const PublishedVersion::SynthesizerConfig & getSynthesizerConfig() const { DARABONBA_PTR_GET_CONST(synthesizerConfig_, PublishedVersion::SynthesizerConfig) };
        inline PublishedVersion::SynthesizerConfig getSynthesizerConfig() { DARABONBA_PTR_GET(synthesizerConfig_, PublishedVersion::SynthesizerConfig) };
        inline PublishedVersion& setSynthesizerConfig(const PublishedVersion::SynthesizerConfig & synthesizerConfig) { DARABONBA_PTR_SET_VALUE(synthesizerConfig_, synthesizerConfig) };
        inline PublishedVersion& setSynthesizerConfig(PublishedVersion::SynthesizerConfig && synthesizerConfig) { DARABONBA_PTR_SET_RVALUE(synthesizerConfig_, synthesizerConfig) };


        // transcriberConfig Field Functions 
        bool hasTranscriberConfig() const { return this->transcriberConfig_ != nullptr;};
        void deleteTranscriberConfig() { this->transcriberConfig_ = nullptr;};
        inline const PublishedVersion::TranscriberConfig & getTranscriberConfig() const { DARABONBA_PTR_GET_CONST(transcriberConfig_, PublishedVersion::TranscriberConfig) };
        inline PublishedVersion::TranscriberConfig getTranscriberConfig() { DARABONBA_PTR_GET(transcriberConfig_, PublishedVersion::TranscriberConfig) };
        inline PublishedVersion& setTranscriberConfig(const PublishedVersion::TranscriberConfig & transcriberConfig) { DARABONBA_PTR_SET_VALUE(transcriberConfig_, transcriberConfig) };
        inline PublishedVersion& setTranscriberConfig(PublishedVersion::TranscriberConfig && transcriberConfig) { DARABONBA_PTR_SET_RVALUE(transcriberConfig_, transcriberConfig) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline PublishedVersion& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        shared_ptr<PublishedVersion::InteractionConfig> interactionConfig_ {};
        shared_ptr<PublishedVersion::ScriptProfile> scriptProfile_ {};
        shared_ptr<PublishedVersion::SynthesizerConfig> synthesizerConfig_ {};
        shared_ptr<PublishedVersion::TranscriberConfig> transcriberConfig_ {};
        shared_ptr<string> versionId_ {};
      };

      class DraftVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DraftVersion& obj) { 
          DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfig_);
          DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfile_);
          DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfig_);
          DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfig_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, DraftVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfig_);
          DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfile_);
          DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfig_);
          DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfig_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        DraftVersion() = default ;
        DraftVersion(const DraftVersion &) = default ;
        DraftVersion(DraftVersion &&) = default ;
        DraftVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DraftVersion() = default ;
        DraftVersion& operator=(const DraftVersion &) = default ;
        DraftVersion& operator=(DraftVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TranscriberConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TranscriberConfig& obj) { 
            DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
          };
          friend void from_json(const Darabonba::Json& j, TranscriberConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
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
          virtual bool empty() const override { return this->nlsAccessType_ == nullptr
        && this->nlsEngine_ == nullptr; };
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


        protected:
          shared_ptr<string> nlsAccessType_ {};
          shared_ptr<string> nlsEngine_ {};
        };

        class SynthesizerConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SynthesizerConfig& obj) { 
            DARABONBA_PTR_TO_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
            DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
            DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_TO_JSON(Voice, voice_);
            DARABONBA_PTR_TO_JSON(Volume, volume_);
          };
          friend void from_json(const Darabonba::Json& j, SynthesizerConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(NlsAccessType, nlsAccessType_);
            DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
            DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
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
          virtual bool empty() const override { return this->nlsAccessType_ == nullptr
        && this->nlsEngine_ == nullptr && this->pitchRate_ == nullptr && this->speechRate_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
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
          shared_ptr<string> nlsAccessType_ {};
          shared_ptr<string> nlsEngine_ {};
          shared_ptr<int32_t> pitchRate_ {};
          shared_ptr<int32_t> speechRate_ {};
          shared_ptr<string> voice_ {};
          shared_ptr<int32_t> volume_ {};
        };

        class ScriptProfile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScriptProfile& obj) { 
            DARABONBA_PTR_TO_JSON(AgentProfile, agentProfile_);
            DARABONBA_PTR_TO_JSON(Model, model_);
            DARABONBA_PTR_TO_JSON(Temperature, temperature_);
            DARABONBA_PTR_TO_JSON(TopP, topP_);
          };
          friend void from_json(const Darabonba::Json& j, ScriptProfile& obj) { 
            DARABONBA_PTR_FROM_JSON(AgentProfile, agentProfile_);
            DARABONBA_PTR_FROM_JSON(Model, model_);
            DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
            DARABONBA_PTR_FROM_JSON(TopP, topP_);
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
          class AgentProfile : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AgentProfile& obj) { 
              DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(PromptsJson, promptsJson_);
              DARABONBA_PTR_TO_JSON(ScriptProfileTemplateId, scriptProfileTemplateId_);
            };
            friend void from_json(const Darabonba::Json& j, AgentProfile& obj) { 
              DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
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
            virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && this->description_ == nullptr && this->promptsJson_ == nullptr && this->scriptProfileTemplateId_ == nullptr; };
            // agentProfileId Field Functions 
            bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
            void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
            inline string getAgentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
            inline AgentProfile& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline AgentProfile& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


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
            shared_ptr<string> agentProfileId_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> promptsJson_ {};
            shared_ptr<string> scriptProfileTemplateId_ {};
          };

          virtual bool empty() const override { return this->agentProfile_ == nullptr
        && this->model_ == nullptr && this->temperature_ == nullptr && this->topP_ == nullptr; };
          // agentProfile Field Functions 
          bool hasAgentProfile() const { return this->agentProfile_ != nullptr;};
          void deleteAgentProfile() { this->agentProfile_ = nullptr;};
          inline const ScriptProfile::AgentProfile & getAgentProfile() const { DARABONBA_PTR_GET_CONST(agentProfile_, ScriptProfile::AgentProfile) };
          inline ScriptProfile::AgentProfile getAgentProfile() { DARABONBA_PTR_GET(agentProfile_, ScriptProfile::AgentProfile) };
          inline ScriptProfile& setAgentProfile(const ScriptProfile::AgentProfile & agentProfile) { DARABONBA_PTR_SET_VALUE(agentProfile_, agentProfile) };
          inline ScriptProfile& setAgentProfile(ScriptProfile::AgentProfile && agentProfile) { DARABONBA_PTR_SET_RVALUE(agentProfile_, agentProfile) };


          // model Field Functions 
          bool hasModel() const { return this->model_ != nullptr;};
          void deleteModel() { this->model_ = nullptr;};
          inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
          inline ScriptProfile& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


          // temperature Field Functions 
          bool hasTemperature() const { return this->temperature_ != nullptr;};
          void deleteTemperature() { this->temperature_ = nullptr;};
          inline string getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, "") };
          inline ScriptProfile& setTemperature(string temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


          // topP Field Functions 
          bool hasTopP() const { return this->topP_ != nullptr;};
          void deleteTopP() { this->topP_ = nullptr;};
          inline string getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, "") };
          inline ScriptProfile& setTopP(string topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


        protected:
          shared_ptr<ScriptProfile::AgentProfile> agentProfile_ {};
          shared_ptr<string> model_ {};
          shared_ptr<string> temperature_ {};
          shared_ptr<string> topP_ {};
        };

        class InteractionConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InteractionConfig& obj) { 
            DARABONBA_PTR_TO_JSON(SilenceDetectionConfig, silenceDetectionConfig_);
          };
          friend void from_json(const Darabonba::Json& j, InteractionConfig& obj) { 
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
              DARABONBA_PTR_TO_JSON(Timeout, timeout_);
            };
            friend void from_json(const Darabonba::Json& j, SilenceDetectionConfig& obj) { 
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
            virtual bool empty() const override { return this->timeout_ == nullptr; };
            // timeout Field Functions 
            bool hasTimeout() const { return this->timeout_ != nullptr;};
            void deleteTimeout() { this->timeout_ = nullptr;};
            inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
            inline SilenceDetectionConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


          protected:
            shared_ptr<int32_t> timeout_ {};
          };

          virtual bool empty() const override { return this->silenceDetectionConfig_ == nullptr; };
          // silenceDetectionConfig Field Functions 
          bool hasSilenceDetectionConfig() const { return this->silenceDetectionConfig_ != nullptr;};
          void deleteSilenceDetectionConfig() { this->silenceDetectionConfig_ = nullptr;};
          inline const InteractionConfig::SilenceDetectionConfig & getSilenceDetectionConfig() const { DARABONBA_PTR_GET_CONST(silenceDetectionConfig_, InteractionConfig::SilenceDetectionConfig) };
          inline InteractionConfig::SilenceDetectionConfig getSilenceDetectionConfig() { DARABONBA_PTR_GET(silenceDetectionConfig_, InteractionConfig::SilenceDetectionConfig) };
          inline InteractionConfig& setSilenceDetectionConfig(const InteractionConfig::SilenceDetectionConfig & silenceDetectionConfig) { DARABONBA_PTR_SET_VALUE(silenceDetectionConfig_, silenceDetectionConfig) };
          inline InteractionConfig& setSilenceDetectionConfig(InteractionConfig::SilenceDetectionConfig && silenceDetectionConfig) { DARABONBA_PTR_SET_RVALUE(silenceDetectionConfig_, silenceDetectionConfig) };


        protected:
          shared_ptr<InteractionConfig::SilenceDetectionConfig> silenceDetectionConfig_ {};
        };

        virtual bool empty() const override { return this->interactionConfig_ == nullptr
        && this->scriptProfile_ == nullptr && this->synthesizerConfig_ == nullptr && this->transcriberConfig_ == nullptr && this->versionId_ == nullptr; };
        // interactionConfig Field Functions 
        bool hasInteractionConfig() const { return this->interactionConfig_ != nullptr;};
        void deleteInteractionConfig() { this->interactionConfig_ = nullptr;};
        inline const DraftVersion::InteractionConfig & getInteractionConfig() const { DARABONBA_PTR_GET_CONST(interactionConfig_, DraftVersion::InteractionConfig) };
        inline DraftVersion::InteractionConfig getInteractionConfig() { DARABONBA_PTR_GET(interactionConfig_, DraftVersion::InteractionConfig) };
        inline DraftVersion& setInteractionConfig(const DraftVersion::InteractionConfig & interactionConfig) { DARABONBA_PTR_SET_VALUE(interactionConfig_, interactionConfig) };
        inline DraftVersion& setInteractionConfig(DraftVersion::InteractionConfig && interactionConfig) { DARABONBA_PTR_SET_RVALUE(interactionConfig_, interactionConfig) };


        // scriptProfile Field Functions 
        bool hasScriptProfile() const { return this->scriptProfile_ != nullptr;};
        void deleteScriptProfile() { this->scriptProfile_ = nullptr;};
        inline const DraftVersion::ScriptProfile & getScriptProfile() const { DARABONBA_PTR_GET_CONST(scriptProfile_, DraftVersion::ScriptProfile) };
        inline DraftVersion::ScriptProfile getScriptProfile() { DARABONBA_PTR_GET(scriptProfile_, DraftVersion::ScriptProfile) };
        inline DraftVersion& setScriptProfile(const DraftVersion::ScriptProfile & scriptProfile) { DARABONBA_PTR_SET_VALUE(scriptProfile_, scriptProfile) };
        inline DraftVersion& setScriptProfile(DraftVersion::ScriptProfile && scriptProfile) { DARABONBA_PTR_SET_RVALUE(scriptProfile_, scriptProfile) };


        // synthesizerConfig Field Functions 
        bool hasSynthesizerConfig() const { return this->synthesizerConfig_ != nullptr;};
        void deleteSynthesizerConfig() { this->synthesizerConfig_ = nullptr;};
        inline const DraftVersion::SynthesizerConfig & getSynthesizerConfig() const { DARABONBA_PTR_GET_CONST(synthesizerConfig_, DraftVersion::SynthesizerConfig) };
        inline DraftVersion::SynthesizerConfig getSynthesizerConfig() { DARABONBA_PTR_GET(synthesizerConfig_, DraftVersion::SynthesizerConfig) };
        inline DraftVersion& setSynthesizerConfig(const DraftVersion::SynthesizerConfig & synthesizerConfig) { DARABONBA_PTR_SET_VALUE(synthesizerConfig_, synthesizerConfig) };
        inline DraftVersion& setSynthesizerConfig(DraftVersion::SynthesizerConfig && synthesizerConfig) { DARABONBA_PTR_SET_RVALUE(synthesizerConfig_, synthesizerConfig) };


        // transcriberConfig Field Functions 
        bool hasTranscriberConfig() const { return this->transcriberConfig_ != nullptr;};
        void deleteTranscriberConfig() { this->transcriberConfig_ = nullptr;};
        inline const DraftVersion::TranscriberConfig & getTranscriberConfig() const { DARABONBA_PTR_GET_CONST(transcriberConfig_, DraftVersion::TranscriberConfig) };
        inline DraftVersion::TranscriberConfig getTranscriberConfig() { DARABONBA_PTR_GET(transcriberConfig_, DraftVersion::TranscriberConfig) };
        inline DraftVersion& setTranscriberConfig(const DraftVersion::TranscriberConfig & transcriberConfig) { DARABONBA_PTR_SET_VALUE(transcriberConfig_, transcriberConfig) };
        inline DraftVersion& setTranscriberConfig(DraftVersion::TranscriberConfig && transcriberConfig) { DARABONBA_PTR_SET_RVALUE(transcriberConfig_, transcriberConfig) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline DraftVersion& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        shared_ptr<DraftVersion::InteractionConfig> interactionConfig_ {};
        shared_ptr<DraftVersion::ScriptProfile> scriptProfile_ {};
        shared_ptr<DraftVersion::SynthesizerConfig> synthesizerConfig_ {};
        shared_ptr<DraftVersion::TranscriberConfig> transcriberConfig_ {};
        shared_ptr<string> versionId_ {};
      };

      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->concurrency_ == nullptr && this->createdTime_ == nullptr && this->description_ == nullptr && this->draftVersion_ == nullptr && this->name_ == nullptr
        && this->nluAccessType_ == nullptr && this->nluEngine_ == nullptr && this->publishedVersion_ == nullptr && this->updatedTime_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline Data& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // concurrency Field Functions 
      bool hasConcurrency() const { return this->concurrency_ != nullptr;};
      void deleteConcurrency() { this->concurrency_ = nullptr;};
      inline int32_t getConcurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0) };
      inline Data& setConcurrency(int32_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Data& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // draftVersion Field Functions 
      bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
      void deleteDraftVersion() { this->draftVersion_ = nullptr;};
      inline const Data::DraftVersion & getDraftVersion() const { DARABONBA_PTR_GET_CONST(draftVersion_, Data::DraftVersion) };
      inline Data::DraftVersion getDraftVersion() { DARABONBA_PTR_GET(draftVersion_, Data::DraftVersion) };
      inline Data& setDraftVersion(const Data::DraftVersion & draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };
      inline Data& setDraftVersion(Data::DraftVersion && draftVersion) { DARABONBA_PTR_SET_RVALUE(draftVersion_, draftVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nluAccessType Field Functions 
      bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
      void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
      inline string getNluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
      inline Data& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


      // nluEngine Field Functions 
      bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
      void deleteNluEngine() { this->nluEngine_ = nullptr;};
      inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
      inline Data& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


      // publishedVersion Field Functions 
      bool hasPublishedVersion() const { return this->publishedVersion_ != nullptr;};
      void deletePublishedVersion() { this->publishedVersion_ = nullptr;};
      inline const Data::PublishedVersion & getPublishedVersion() const { DARABONBA_PTR_GET_CONST(publishedVersion_, Data::PublishedVersion) };
      inline Data::PublishedVersion getPublishedVersion() { DARABONBA_PTR_GET(publishedVersion_, Data::PublishedVersion) };
      inline Data& setPublishedVersion(const Data::PublishedVersion & publishedVersion) { DARABONBA_PTR_SET_VALUE(publishedVersion_, publishedVersion) };
      inline Data& setPublishedVersion(Data::PublishedVersion && publishedVersion) { DARABONBA_PTR_SET_RVALUE(publishedVersion_, publishedVersion) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Data& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    protected:
      shared_ptr<string> applicationId_ {};
      shared_ptr<int32_t> concurrency_ {};
      shared_ptr<int64_t> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Data::DraftVersion> draftVersion_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nluAccessType_ {};
      shared_ptr<string> nluEngine_ {};
      shared_ptr<Data::PublishedVersion> publishedVersion_ {};
      shared_ptr<int64_t> updatedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetApplicationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetApplicationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetApplicationResponseBody::Data) };
    inline GetApplicationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetApplicationResponseBody::Data) };
    inline GetApplicationResponseBody& setData(const GetApplicationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApplicationResponseBody& setData(GetApplicationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetApplicationResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetApplicationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetApplicationResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
