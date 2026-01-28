// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class UpdateApplicationVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(InteractionConfig, interactionConfig_);
      DARABONBA_PTR_TO_JSON(ScriptProfile, scriptProfile_);
      DARABONBA_PTR_TO_JSON(SynthesizerConfig, synthesizerConfig_);
      DARABONBA_PTR_TO_JSON(TranscriberConfig, transcriberConfig_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(InteractionConfig, interactionConfig_);
      DARABONBA_PTR_FROM_JSON(ScriptProfile, scriptProfile_);
      DARABONBA_PTR_FROM_JSON(SynthesizerConfig, synthesizerConfig_);
      DARABONBA_PTR_FROM_JSON(TranscriberConfig, transcriberConfig_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    UpdateApplicationVersionRequest() = default ;
    UpdateApplicationVersionRequest(const UpdateApplicationVersionRequest &) = default ;
    UpdateApplicationVersionRequest(UpdateApplicationVersionRequest &&) = default ;
    UpdateApplicationVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationVersionRequest() = default ;
    UpdateApplicationVersionRequest& operator=(const UpdateApplicationVersionRequest &) = default ;
    UpdateApplicationVersionRequest& operator=(UpdateApplicationVersionRequest &&) = default ;
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
      };
      friend void from_json(const Darabonba::Json& j, ScriptProfile& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentProfile, agentProfile_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
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
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PromptsJson, promptsJson_);
          DARABONBA_PTR_TO_JSON(ScriptProfileTemplateId, scriptProfileTemplateId_);
        };
        friend void from_json(const Darabonba::Json& j, AgentProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
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
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->promptsJson_ == nullptr && this->scriptProfileTemplateId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AgentProfile& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AgentProfile& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> promptsJson_ {};
        shared_ptr<string> scriptProfileTemplateId_ {};
      };

      virtual bool empty() const override { return this->agentProfile_ == nullptr
        && this->model_ == nullptr; };
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


    protected:
      shared_ptr<ScriptProfile::AgentProfile> agentProfile_ {};
      shared_ptr<string> model_ {};
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

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->businessUnitId_ == nullptr && this->interactionConfig_ == nullptr && this->scriptProfile_ == nullptr && this->synthesizerConfig_ == nullptr && this->transcriberConfig_ == nullptr
        && this->versionId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdateApplicationVersionRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline UpdateApplicationVersionRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // interactionConfig Field Functions 
    bool hasInteractionConfig() const { return this->interactionConfig_ != nullptr;};
    void deleteInteractionConfig() { this->interactionConfig_ = nullptr;};
    inline const UpdateApplicationVersionRequest::InteractionConfig & getInteractionConfig() const { DARABONBA_PTR_GET_CONST(interactionConfig_, UpdateApplicationVersionRequest::InteractionConfig) };
    inline UpdateApplicationVersionRequest::InteractionConfig getInteractionConfig() { DARABONBA_PTR_GET(interactionConfig_, UpdateApplicationVersionRequest::InteractionConfig) };
    inline UpdateApplicationVersionRequest& setInteractionConfig(const UpdateApplicationVersionRequest::InteractionConfig & interactionConfig) { DARABONBA_PTR_SET_VALUE(interactionConfig_, interactionConfig) };
    inline UpdateApplicationVersionRequest& setInteractionConfig(UpdateApplicationVersionRequest::InteractionConfig && interactionConfig) { DARABONBA_PTR_SET_RVALUE(interactionConfig_, interactionConfig) };


    // scriptProfile Field Functions 
    bool hasScriptProfile() const { return this->scriptProfile_ != nullptr;};
    void deleteScriptProfile() { this->scriptProfile_ = nullptr;};
    inline const UpdateApplicationVersionRequest::ScriptProfile & getScriptProfile() const { DARABONBA_PTR_GET_CONST(scriptProfile_, UpdateApplicationVersionRequest::ScriptProfile) };
    inline UpdateApplicationVersionRequest::ScriptProfile getScriptProfile() { DARABONBA_PTR_GET(scriptProfile_, UpdateApplicationVersionRequest::ScriptProfile) };
    inline UpdateApplicationVersionRequest& setScriptProfile(const UpdateApplicationVersionRequest::ScriptProfile & scriptProfile) { DARABONBA_PTR_SET_VALUE(scriptProfile_, scriptProfile) };
    inline UpdateApplicationVersionRequest& setScriptProfile(UpdateApplicationVersionRequest::ScriptProfile && scriptProfile) { DARABONBA_PTR_SET_RVALUE(scriptProfile_, scriptProfile) };


    // synthesizerConfig Field Functions 
    bool hasSynthesizerConfig() const { return this->synthesizerConfig_ != nullptr;};
    void deleteSynthesizerConfig() { this->synthesizerConfig_ = nullptr;};
    inline const UpdateApplicationVersionRequest::SynthesizerConfig & getSynthesizerConfig() const { DARABONBA_PTR_GET_CONST(synthesizerConfig_, UpdateApplicationVersionRequest::SynthesizerConfig) };
    inline UpdateApplicationVersionRequest::SynthesizerConfig getSynthesizerConfig() { DARABONBA_PTR_GET(synthesizerConfig_, UpdateApplicationVersionRequest::SynthesizerConfig) };
    inline UpdateApplicationVersionRequest& setSynthesizerConfig(const UpdateApplicationVersionRequest::SynthesizerConfig & synthesizerConfig) { DARABONBA_PTR_SET_VALUE(synthesizerConfig_, synthesizerConfig) };
    inline UpdateApplicationVersionRequest& setSynthesizerConfig(UpdateApplicationVersionRequest::SynthesizerConfig && synthesizerConfig) { DARABONBA_PTR_SET_RVALUE(synthesizerConfig_, synthesizerConfig) };


    // transcriberConfig Field Functions 
    bool hasTranscriberConfig() const { return this->transcriberConfig_ != nullptr;};
    void deleteTranscriberConfig() { this->transcriberConfig_ = nullptr;};
    inline const UpdateApplicationVersionRequest::TranscriberConfig & getTranscriberConfig() const { DARABONBA_PTR_GET_CONST(transcriberConfig_, UpdateApplicationVersionRequest::TranscriberConfig) };
    inline UpdateApplicationVersionRequest::TranscriberConfig getTranscriberConfig() { DARABONBA_PTR_GET(transcriberConfig_, UpdateApplicationVersionRequest::TranscriberConfig) };
    inline UpdateApplicationVersionRequest& setTranscriberConfig(const UpdateApplicationVersionRequest::TranscriberConfig & transcriberConfig) { DARABONBA_PTR_SET_VALUE(transcriberConfig_, transcriberConfig) };
    inline UpdateApplicationVersionRequest& setTranscriberConfig(UpdateApplicationVersionRequest::TranscriberConfig && transcriberConfig) { DARABONBA_PTR_SET_RVALUE(transcriberConfig_, transcriberConfig) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline UpdateApplicationVersionRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<UpdateApplicationVersionRequest::InteractionConfig> interactionConfig_ {};
    // This parameter is required.
    shared_ptr<UpdateApplicationVersionRequest::ScriptProfile> scriptProfile_ {};
    shared_ptr<UpdateApplicationVersionRequest::SynthesizerConfig> synthesizerConfig_ {};
    shared_ptr<UpdateApplicationVersionRequest::TranscriberConfig> transcriberConfig_ {};
    // This parameter is required.
    shared_ptr<string> versionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
