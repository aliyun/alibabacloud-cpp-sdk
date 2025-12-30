// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(AutoSpeechConfig, autoSpeechConfig_);
      DARABONBA_PTR_TO_JSON(AvatarConfig, avatarConfig_);
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(AvatarUrlType, avatarUrlType_);
      DARABONBA_PTR_TO_JSON(BackChannelingConfig, backChannelingConfig_);
      DARABONBA_PTR_TO_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_TO_JSON(EnablePushToTalk, enablePushToTalk_);
      DARABONBA_PTR_TO_JSON(ExperimentalConfig, experimentalConfig_);
      DARABONBA_PTR_TO_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_TO_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(TurnDetectionConfig, turnDetectionConfig_);
      DARABONBA_PTR_TO_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_TO_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_TO_JSON(VcrConfig, vcrConfig_);
      DARABONBA_PTR_TO_JSON(VoiceprintConfig, voiceprintConfig_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
      DARABONBA_PTR_TO_JSON(WakeUpQuery, wakeUpQuery_);
      DARABONBA_PTR_TO_JSON(WorkflowOverrideParams, workflowOverrideParams_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(AutoSpeechConfig, autoSpeechConfig_);
      DARABONBA_PTR_FROM_JSON(AvatarConfig, avatarConfig_);
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(AvatarUrlType, avatarUrlType_);
      DARABONBA_PTR_FROM_JSON(BackChannelingConfig, backChannelingConfig_);
      DARABONBA_PTR_FROM_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_FROM_JSON(EnablePushToTalk, enablePushToTalk_);
      DARABONBA_PTR_FROM_JSON(ExperimentalConfig, experimentalConfig_);
      DARABONBA_PTR_FROM_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(TurnDetectionConfig, turnDetectionConfig_);
      DARABONBA_PTR_FROM_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_FROM_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_FROM_JSON(VcrConfig, vcrConfig_);
      DARABONBA_PTR_FROM_JSON(VoiceprintConfig, voiceprintConfig_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
      DARABONBA_PTR_FROM_JSON(WakeUpQuery, wakeUpQuery_);
      DARABONBA_PTR_FROM_JSON(WorkflowOverrideParams, workflowOverrideParams_);
    };
    AIAgentConfig() = default ;
    AIAgentConfig(const AIAgentConfig &) = default ;
    AIAgentConfig(AIAgentConfig &&) = default ;
    AIAgentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfig() = default ;
    AIAgentConfig& operator=(const AIAgentConfig &) = default ;
    AIAgentConfig& operator=(AIAgentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceprintConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceprintConfig& obj) { 
        DARABONBA_PTR_TO_JSON(UseVoiceprint, useVoiceprint_);
        DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
      };
      friend void from_json(const Darabonba::Json& j, VoiceprintConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(UseVoiceprint, useVoiceprint_);
        DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
      };
      VoiceprintConfig() = default ;
      VoiceprintConfig(const VoiceprintConfig &) = default ;
      VoiceprintConfig(VoiceprintConfig &&) = default ;
      VoiceprintConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceprintConfig() = default ;
      VoiceprintConfig& operator=(const VoiceprintConfig &) = default ;
      VoiceprintConfig& operator=(VoiceprintConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->useVoiceprint_ == nullptr
        && this->voiceprintId_ == nullptr; };
      // useVoiceprint Field Functions 
      bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
      void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
      inline bool getUseVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
      inline VoiceprintConfig& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


      // voiceprintId Field Functions 
      bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
      void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
      inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
      inline VoiceprintConfig& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


    protected:
      shared_ptr<bool> useVoiceprint_ {};
      shared_ptr<string> voiceprintId_ {};
    };

    class VcrConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VcrConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Equipment, equipment_);
        DARABONBA_PTR_TO_JSON(HeadMotion, headMotion_);
        DARABONBA_PTR_TO_JSON(InvalidFrameMotion, invalidFrameMotion_);
        DARABONBA_PTR_TO_JSON(LookAway, lookAway_);
        DARABONBA_PTR_TO_JSON(PeopleCount, peopleCount_);
        DARABONBA_PTR_TO_JSON(StillFrameMotion, stillFrameMotion_);
      };
      friend void from_json(const Darabonba::Json& j, VcrConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Equipment, equipment_);
        DARABONBA_PTR_FROM_JSON(HeadMotion, headMotion_);
        DARABONBA_PTR_FROM_JSON(InvalidFrameMotion, invalidFrameMotion_);
        DARABONBA_PTR_FROM_JSON(LookAway, lookAway_);
        DARABONBA_PTR_FROM_JSON(PeopleCount, peopleCount_);
        DARABONBA_PTR_FROM_JSON(StillFrameMotion, stillFrameMotion_);
      };
      VcrConfig() = default ;
      VcrConfig(const VcrConfig &) = default ;
      VcrConfig(VcrConfig &&) = default ;
      VcrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VcrConfig() = default ;
      VcrConfig& operator=(const VcrConfig &) = default ;
      VcrConfig& operator=(VcrConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StillFrameMotion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StillFrameMotion& obj) { 
          DARABONBA_PTR_TO_JSON(CallbackDelay, callbackDelay_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, StillFrameMotion& obj) { 
          DARABONBA_PTR_FROM_JSON(CallbackDelay, callbackDelay_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        };
        StillFrameMotion() = default ;
        StillFrameMotion(const StillFrameMotion &) = default ;
        StillFrameMotion(StillFrameMotion &&) = default ;
        StillFrameMotion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StillFrameMotion() = default ;
        StillFrameMotion& operator=(const StillFrameMotion &) = default ;
        StillFrameMotion& operator=(StillFrameMotion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callbackDelay_ == nullptr
        && this->enabled_ == nullptr; };
        // callbackDelay Field Functions 
        bool hasCallbackDelay() const { return this->callbackDelay_ != nullptr;};
        void deleteCallbackDelay() { this->callbackDelay_ = nullptr;};
        inline int32_t getCallbackDelay() const { DARABONBA_PTR_GET_DEFAULT(callbackDelay_, 0) };
        inline StillFrameMotion& setCallbackDelay(int32_t callbackDelay) { DARABONBA_PTR_SET_VALUE(callbackDelay_, callbackDelay) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline StillFrameMotion& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<int32_t> callbackDelay_ {};
        shared_ptr<bool> enabled_ {};
      };

      class PeopleCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeopleCount& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, PeopleCount& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        };
        PeopleCount() = default ;
        PeopleCount(const PeopleCount &) = default ;
        PeopleCount(PeopleCount &&) = default ;
        PeopleCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeopleCount() = default ;
        PeopleCount& operator=(const PeopleCount &) = default ;
        PeopleCount& operator=(PeopleCount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline PeopleCount& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<bool> enabled_ {};
      };

      class LookAway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LookAway& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, LookAway& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        };
        LookAway() = default ;
        LookAway(const LookAway &) = default ;
        LookAway(LookAway &&) = default ;
        LookAway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LookAway() = default ;
        LookAway& operator=(const LookAway &) = default ;
        LookAway& operator=(LookAway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline LookAway& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<bool> enabled_ {};
      };

      class InvalidFrameMotion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvalidFrameMotion& obj) { 
          DARABONBA_PTR_TO_JSON(CallbackDelay, callbackDelay_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, InvalidFrameMotion& obj) { 
          DARABONBA_PTR_FROM_JSON(CallbackDelay, callbackDelay_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        };
        InvalidFrameMotion() = default ;
        InvalidFrameMotion(const InvalidFrameMotion &) = default ;
        InvalidFrameMotion(InvalidFrameMotion &&) = default ;
        InvalidFrameMotion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvalidFrameMotion() = default ;
        InvalidFrameMotion& operator=(const InvalidFrameMotion &) = default ;
        InvalidFrameMotion& operator=(InvalidFrameMotion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callbackDelay_ == nullptr
        && this->enabled_ == nullptr; };
        // callbackDelay Field Functions 
        bool hasCallbackDelay() const { return this->callbackDelay_ != nullptr;};
        void deleteCallbackDelay() { this->callbackDelay_ = nullptr;};
        inline int32_t getCallbackDelay() const { DARABONBA_PTR_GET_DEFAULT(callbackDelay_, 0) };
        inline InvalidFrameMotion& setCallbackDelay(int32_t callbackDelay) { DARABONBA_PTR_SET_VALUE(callbackDelay_, callbackDelay) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline InvalidFrameMotion& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<int32_t> callbackDelay_ {};
        shared_ptr<bool> enabled_ {};
      };

      class HeadMotion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HeadMotion& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, HeadMotion& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        };
        HeadMotion() = default ;
        HeadMotion(const HeadMotion &) = default ;
        HeadMotion(HeadMotion &&) = default ;
        HeadMotion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HeadMotion() = default ;
        HeadMotion& operator=(const HeadMotion &) = default ;
        HeadMotion& operator=(HeadMotion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline HeadMotion& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<bool> enabled_ {};
      };

      class Equipment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Equipment& obj) { 
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        };
        friend void from_json(const Darabonba::Json& j, Equipment& obj) { 
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        };
        Equipment() = default ;
        Equipment(const Equipment &) = default ;
        Equipment(Equipment &&) = default ;
        Equipment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Equipment() = default ;
        Equipment& operator=(const Equipment &) = default ;
        Equipment& operator=(Equipment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enabled_ == nullptr; };
        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Equipment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      protected:
        shared_ptr<bool> enabled_ {};
      };

      virtual bool empty() const override { return this->equipment_ == nullptr
        && this->headMotion_ == nullptr && this->invalidFrameMotion_ == nullptr && this->lookAway_ == nullptr && this->peopleCount_ == nullptr && this->stillFrameMotion_ == nullptr; };
      // equipment Field Functions 
      bool hasEquipment() const { return this->equipment_ != nullptr;};
      void deleteEquipment() { this->equipment_ = nullptr;};
      inline const VcrConfig::Equipment & getEquipment() const { DARABONBA_PTR_GET_CONST(equipment_, VcrConfig::Equipment) };
      inline VcrConfig::Equipment getEquipment() { DARABONBA_PTR_GET(equipment_, VcrConfig::Equipment) };
      inline VcrConfig& setEquipment(const VcrConfig::Equipment & equipment) { DARABONBA_PTR_SET_VALUE(equipment_, equipment) };
      inline VcrConfig& setEquipment(VcrConfig::Equipment && equipment) { DARABONBA_PTR_SET_RVALUE(equipment_, equipment) };


      // headMotion Field Functions 
      bool hasHeadMotion() const { return this->headMotion_ != nullptr;};
      void deleteHeadMotion() { this->headMotion_ = nullptr;};
      inline const VcrConfig::HeadMotion & getHeadMotion() const { DARABONBA_PTR_GET_CONST(headMotion_, VcrConfig::HeadMotion) };
      inline VcrConfig::HeadMotion getHeadMotion() { DARABONBA_PTR_GET(headMotion_, VcrConfig::HeadMotion) };
      inline VcrConfig& setHeadMotion(const VcrConfig::HeadMotion & headMotion) { DARABONBA_PTR_SET_VALUE(headMotion_, headMotion) };
      inline VcrConfig& setHeadMotion(VcrConfig::HeadMotion && headMotion) { DARABONBA_PTR_SET_RVALUE(headMotion_, headMotion) };


      // invalidFrameMotion Field Functions 
      bool hasInvalidFrameMotion() const { return this->invalidFrameMotion_ != nullptr;};
      void deleteInvalidFrameMotion() { this->invalidFrameMotion_ = nullptr;};
      inline const VcrConfig::InvalidFrameMotion & getInvalidFrameMotion() const { DARABONBA_PTR_GET_CONST(invalidFrameMotion_, VcrConfig::InvalidFrameMotion) };
      inline VcrConfig::InvalidFrameMotion getInvalidFrameMotion() { DARABONBA_PTR_GET(invalidFrameMotion_, VcrConfig::InvalidFrameMotion) };
      inline VcrConfig& setInvalidFrameMotion(const VcrConfig::InvalidFrameMotion & invalidFrameMotion) { DARABONBA_PTR_SET_VALUE(invalidFrameMotion_, invalidFrameMotion) };
      inline VcrConfig& setInvalidFrameMotion(VcrConfig::InvalidFrameMotion && invalidFrameMotion) { DARABONBA_PTR_SET_RVALUE(invalidFrameMotion_, invalidFrameMotion) };


      // lookAway Field Functions 
      bool hasLookAway() const { return this->lookAway_ != nullptr;};
      void deleteLookAway() { this->lookAway_ = nullptr;};
      inline const VcrConfig::LookAway & getLookAway() const { DARABONBA_PTR_GET_CONST(lookAway_, VcrConfig::LookAway) };
      inline VcrConfig::LookAway getLookAway() { DARABONBA_PTR_GET(lookAway_, VcrConfig::LookAway) };
      inline VcrConfig& setLookAway(const VcrConfig::LookAway & lookAway) { DARABONBA_PTR_SET_VALUE(lookAway_, lookAway) };
      inline VcrConfig& setLookAway(VcrConfig::LookAway && lookAway) { DARABONBA_PTR_SET_RVALUE(lookAway_, lookAway) };


      // peopleCount Field Functions 
      bool hasPeopleCount() const { return this->peopleCount_ != nullptr;};
      void deletePeopleCount() { this->peopleCount_ = nullptr;};
      inline const VcrConfig::PeopleCount & getPeopleCount() const { DARABONBA_PTR_GET_CONST(peopleCount_, VcrConfig::PeopleCount) };
      inline VcrConfig::PeopleCount getPeopleCount() { DARABONBA_PTR_GET(peopleCount_, VcrConfig::PeopleCount) };
      inline VcrConfig& setPeopleCount(const VcrConfig::PeopleCount & peopleCount) { DARABONBA_PTR_SET_VALUE(peopleCount_, peopleCount) };
      inline VcrConfig& setPeopleCount(VcrConfig::PeopleCount && peopleCount) { DARABONBA_PTR_SET_RVALUE(peopleCount_, peopleCount) };


      // stillFrameMotion Field Functions 
      bool hasStillFrameMotion() const { return this->stillFrameMotion_ != nullptr;};
      void deleteStillFrameMotion() { this->stillFrameMotion_ = nullptr;};
      inline const VcrConfig::StillFrameMotion & getStillFrameMotion() const { DARABONBA_PTR_GET_CONST(stillFrameMotion_, VcrConfig::StillFrameMotion) };
      inline VcrConfig::StillFrameMotion getStillFrameMotion() { DARABONBA_PTR_GET(stillFrameMotion_, VcrConfig::StillFrameMotion) };
      inline VcrConfig& setStillFrameMotion(const VcrConfig::StillFrameMotion & stillFrameMotion) { DARABONBA_PTR_SET_VALUE(stillFrameMotion_, stillFrameMotion) };
      inline VcrConfig& setStillFrameMotion(VcrConfig::StillFrameMotion && stillFrameMotion) { DARABONBA_PTR_SET_RVALUE(stillFrameMotion_, stillFrameMotion) };


    protected:
      shared_ptr<VcrConfig::Equipment> equipment_ {};
      shared_ptr<VcrConfig::HeadMotion> headMotion_ {};
      shared_ptr<VcrConfig::InvalidFrameMotion> invalidFrameMotion_ {};
      shared_ptr<VcrConfig::LookAway> lookAway_ {};
      shared_ptr<VcrConfig::PeopleCount> peopleCount_ {};
      shared_ptr<VcrConfig::StillFrameMotion> stillFrameMotion_ {};
    };

    class TurnDetectionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TurnDetectionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Eagerness, eagerness_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(SemanticWaitDuration, semanticWaitDuration_);
        DARABONBA_PTR_TO_JSON(TurnEndWords, turnEndWords_);
      };
      friend void from_json(const Darabonba::Json& j, TurnDetectionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Eagerness, eagerness_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(SemanticWaitDuration, semanticWaitDuration_);
        DARABONBA_PTR_FROM_JSON(TurnEndWords, turnEndWords_);
      };
      TurnDetectionConfig() = default ;
      TurnDetectionConfig(const TurnDetectionConfig &) = default ;
      TurnDetectionConfig(TurnDetectionConfig &&) = default ;
      TurnDetectionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TurnDetectionConfig() = default ;
      TurnDetectionConfig& operator=(const TurnDetectionConfig &) = default ;
      TurnDetectionConfig& operator=(TurnDetectionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eagerness_ == nullptr
        && this->mode_ == nullptr && this->semanticWaitDuration_ == nullptr && this->turnEndWords_ == nullptr; };
      // eagerness Field Functions 
      bool hasEagerness() const { return this->eagerness_ != nullptr;};
      void deleteEagerness() { this->eagerness_ = nullptr;};
      inline string getEagerness() const { DARABONBA_PTR_GET_DEFAULT(eagerness_, "") };
      inline TurnDetectionConfig& setEagerness(string eagerness) { DARABONBA_PTR_SET_VALUE(eagerness_, eagerness) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline TurnDetectionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // semanticWaitDuration Field Functions 
      bool hasSemanticWaitDuration() const { return this->semanticWaitDuration_ != nullptr;};
      void deleteSemanticWaitDuration() { this->semanticWaitDuration_ = nullptr;};
      inline int32_t getSemanticWaitDuration() const { DARABONBA_PTR_GET_DEFAULT(semanticWaitDuration_, 0) };
      inline TurnDetectionConfig& setSemanticWaitDuration(int32_t semanticWaitDuration) { DARABONBA_PTR_SET_VALUE(semanticWaitDuration_, semanticWaitDuration) };


      // turnEndWords Field Functions 
      bool hasTurnEndWords() const { return this->turnEndWords_ != nullptr;};
      void deleteTurnEndWords() { this->turnEndWords_ = nullptr;};
      inline const vector<string> & getTurnEndWords() const { DARABONBA_PTR_GET_CONST(turnEndWords_, vector<string>) };
      inline vector<string> getTurnEndWords() { DARABONBA_PTR_GET(turnEndWords_, vector<string>) };
      inline TurnDetectionConfig& setTurnEndWords(const vector<string> & turnEndWords) { DARABONBA_PTR_SET_VALUE(turnEndWords_, turnEndWords) };
      inline TurnDetectionConfig& setTurnEndWords(vector<string> && turnEndWords) { DARABONBA_PTR_SET_RVALUE(turnEndWords_, turnEndWords) };


    protected:
      shared_ptr<string> eagerness_ {};
      shared_ptr<string> mode_ {};
      shared_ptr<int32_t> semanticWaitDuration_ {};
      shared_ptr<vector<string>> turnEndWords_ {};
    };

    class TtsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TtsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Emotion, emotion_);
        DARABONBA_PTR_TO_JSON(LanguageId, languageId_);
        DARABONBA_PTR_TO_JSON(ModelId, modelId_);
        DARABONBA_PTR_TO_JSON(PronunciationRules, pronunciationRules_);
        DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
        DARABONBA_PTR_TO_JSON(VoiceIdList, voiceIdList_);
      };
      friend void from_json(const Darabonba::Json& j, TtsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Emotion, emotion_);
        DARABONBA_PTR_FROM_JSON(LanguageId, languageId_);
        DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
        DARABONBA_PTR_FROM_JSON(PronunciationRules, pronunciationRules_);
        DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
        DARABONBA_PTR_FROM_JSON(VoiceIdList, voiceIdList_);
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
      class PronunciationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PronunciationRules& obj) { 
          DARABONBA_PTR_TO_JSON(Pronunciation, pronunciation_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Word, word_);
        };
        friend void from_json(const Darabonba::Json& j, PronunciationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Pronunciation, pronunciation_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Word, word_);
        };
        PronunciationRules() = default ;
        PronunciationRules(const PronunciationRules &) = default ;
        PronunciationRules(PronunciationRules &&) = default ;
        PronunciationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PronunciationRules() = default ;
        PronunciationRules& operator=(const PronunciationRules &) = default ;
        PronunciationRules& operator=(PronunciationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->pronunciation_ == nullptr
        && this->type_ == nullptr && this->word_ == nullptr; };
        // pronunciation Field Functions 
        bool hasPronunciation() const { return this->pronunciation_ != nullptr;};
        void deletePronunciation() { this->pronunciation_ = nullptr;};
        inline string getPronunciation() const { DARABONBA_PTR_GET_DEFAULT(pronunciation_, "") };
        inline PronunciationRules& setPronunciation(string pronunciation) { DARABONBA_PTR_SET_VALUE(pronunciation_, pronunciation) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline PronunciationRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // word Field Functions 
        bool hasWord() const { return this->word_ != nullptr;};
        void deleteWord() { this->word_ = nullptr;};
        inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
        inline PronunciationRules& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


      protected:
        shared_ptr<string> pronunciation_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> word_ {};
      };

      virtual bool empty() const override { return this->emotion_ == nullptr
        && this->languageId_ == nullptr && this->modelId_ == nullptr && this->pronunciationRules_ == nullptr && this->speechRate_ == nullptr && this->voiceId_ == nullptr
        && this->voiceIdList_ == nullptr; };
      // emotion Field Functions 
      bool hasEmotion() const { return this->emotion_ != nullptr;};
      void deleteEmotion() { this->emotion_ = nullptr;};
      inline string getEmotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
      inline TtsConfig& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


      // languageId Field Functions 
      bool hasLanguageId() const { return this->languageId_ != nullptr;};
      void deleteLanguageId() { this->languageId_ = nullptr;};
      inline string getLanguageId() const { DARABONBA_PTR_GET_DEFAULT(languageId_, "") };
      inline TtsConfig& setLanguageId(string languageId) { DARABONBA_PTR_SET_VALUE(languageId_, languageId) };


      // modelId Field Functions 
      bool hasModelId() const { return this->modelId_ != nullptr;};
      void deleteModelId() { this->modelId_ = nullptr;};
      inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
      inline TtsConfig& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


      // pronunciationRules Field Functions 
      bool hasPronunciationRules() const { return this->pronunciationRules_ != nullptr;};
      void deletePronunciationRules() { this->pronunciationRules_ = nullptr;};
      inline const vector<TtsConfig::PronunciationRules> & getPronunciationRules() const { DARABONBA_PTR_GET_CONST(pronunciationRules_, vector<TtsConfig::PronunciationRules>) };
      inline vector<TtsConfig::PronunciationRules> getPronunciationRules() { DARABONBA_PTR_GET(pronunciationRules_, vector<TtsConfig::PronunciationRules>) };
      inline TtsConfig& setPronunciationRules(const vector<TtsConfig::PronunciationRules> & pronunciationRules) { DARABONBA_PTR_SET_VALUE(pronunciationRules_, pronunciationRules) };
      inline TtsConfig& setPronunciationRules(vector<TtsConfig::PronunciationRules> && pronunciationRules) { DARABONBA_PTR_SET_RVALUE(pronunciationRules_, pronunciationRules) };


      // speechRate Field Functions 
      bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
      void deleteSpeechRate() { this->speechRate_ = nullptr;};
      inline double getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0.0) };
      inline TtsConfig& setSpeechRate(double speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


      // voiceId Field Functions 
      bool hasVoiceId() const { return this->voiceId_ != nullptr;};
      void deleteVoiceId() { this->voiceId_ = nullptr;};
      inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
      inline TtsConfig& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


      // voiceIdList Field Functions 
      bool hasVoiceIdList() const { return this->voiceIdList_ != nullptr;};
      void deleteVoiceIdList() { this->voiceIdList_ = nullptr;};
      inline const vector<string> & getVoiceIdList() const { DARABONBA_PTR_GET_CONST(voiceIdList_, vector<string>) };
      inline vector<string> getVoiceIdList() { DARABONBA_PTR_GET(voiceIdList_, vector<string>) };
      inline TtsConfig& setVoiceIdList(const vector<string> & voiceIdList) { DARABONBA_PTR_SET_VALUE(voiceIdList_, voiceIdList) };
      inline TtsConfig& setVoiceIdList(vector<string> && voiceIdList) { DARABONBA_PTR_SET_RVALUE(voiceIdList_, voiceIdList) };


    protected:
      shared_ptr<string> emotion_ {};
      shared_ptr<string> languageId_ {};
      shared_ptr<string> modelId_ {};
      shared_ptr<vector<TtsConfig::PronunciationRules>> pronunciationRules_ {};
      shared_ptr<double> speechRate_ {};
      shared_ptr<string> voiceId_ {};
      shared_ptr<vector<string>> voiceIdList_ {};
    };

    class LlmConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LlmConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BailianAppParams, bailianAppParams_);
        DARABONBA_PTR_TO_JSON(FunctionMap, functionMap_);
        DARABONBA_PTR_TO_JSON(HistorySyncWithTTS, historySyncWithTTS_);
        DARABONBA_PTR_TO_JSON(LlmCompleteReply, llmCompleteReply_);
        DARABONBA_PTR_TO_JSON(LlmHistory, llmHistory_);
        DARABONBA_PTR_TO_JSON(LlmHistoryLimit, llmHistoryLimit_);
        DARABONBA_PTR_TO_JSON(LlmSystemPrompt, llmSystemPrompt_);
        DARABONBA_PTR_TO_JSON(OpenAIExtraQuery, openAIExtraQuery_);
        DARABONBA_PTR_TO_JSON(OutputMaxDelay, outputMaxDelay_);
        DARABONBA_PTR_TO_JSON(OutputMinLength, outputMinLength_);
      };
      friend void from_json(const Darabonba::Json& j, LlmConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BailianAppParams, bailianAppParams_);
        DARABONBA_PTR_FROM_JSON(FunctionMap, functionMap_);
        DARABONBA_PTR_FROM_JSON(HistorySyncWithTTS, historySyncWithTTS_);
        DARABONBA_PTR_FROM_JSON(LlmCompleteReply, llmCompleteReply_);
        DARABONBA_PTR_FROM_JSON(LlmHistory, llmHistory_);
        DARABONBA_PTR_FROM_JSON(LlmHistoryLimit, llmHistoryLimit_);
        DARABONBA_PTR_FROM_JSON(LlmSystemPrompt, llmSystemPrompt_);
        DARABONBA_PTR_FROM_JSON(OpenAIExtraQuery, openAIExtraQuery_);
        DARABONBA_PTR_FROM_JSON(OutputMaxDelay, outputMaxDelay_);
        DARABONBA_PTR_FROM_JSON(OutputMinLength, outputMinLength_);
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
      class LlmHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmHistory& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, LlmHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        LlmHistory() = default ;
        LlmHistory(const LlmHistory &) = default ;
        LlmHistory(LlmHistory &&) = default ;
        LlmHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmHistory() = default ;
        LlmHistory& operator=(const LlmHistory &) = default ;
        LlmHistory& operator=(LlmHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline LlmHistory& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline LlmHistory& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> role_ {};
      };

      class FunctionMap : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FunctionMap& obj) { 
          DARABONBA_PTR_TO_JSON(Function, function_);
          DARABONBA_PTR_TO_JSON(MatchFunction, matchFunction_);
        };
        friend void from_json(const Darabonba::Json& j, FunctionMap& obj) { 
          DARABONBA_PTR_FROM_JSON(Function, function_);
          DARABONBA_PTR_FROM_JSON(MatchFunction, matchFunction_);
        };
        FunctionMap() = default ;
        FunctionMap(const FunctionMap &) = default ;
        FunctionMap(FunctionMap &&) = default ;
        FunctionMap(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FunctionMap() = default ;
        FunctionMap& operator=(const FunctionMap &) = default ;
        FunctionMap& operator=(FunctionMap &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->function_ == nullptr
        && this->matchFunction_ == nullptr; };
        // function Field Functions 
        bool hasFunction() const { return this->function_ != nullptr;};
        void deleteFunction() { this->function_ = nullptr;};
        inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
        inline FunctionMap& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


        // matchFunction Field Functions 
        bool hasMatchFunction() const { return this->matchFunction_ != nullptr;};
        void deleteMatchFunction() { this->matchFunction_ = nullptr;};
        inline string getMatchFunction() const { DARABONBA_PTR_GET_DEFAULT(matchFunction_, "") };
        inline FunctionMap& setMatchFunction(string matchFunction) { DARABONBA_PTR_SET_VALUE(matchFunction_, matchFunction) };


      protected:
        shared_ptr<string> function_ {};
        shared_ptr<string> matchFunction_ {};
      };

      virtual bool empty() const override { return this->bailianAppParams_ == nullptr
        && this->functionMap_ == nullptr && this->historySyncWithTTS_ == nullptr && this->llmCompleteReply_ == nullptr && this->llmHistory_ == nullptr && this->llmHistoryLimit_ == nullptr
        && this->llmSystemPrompt_ == nullptr && this->openAIExtraQuery_ == nullptr && this->outputMaxDelay_ == nullptr && this->outputMinLength_ == nullptr; };
      // bailianAppParams Field Functions 
      bool hasBailianAppParams() const { return this->bailianAppParams_ != nullptr;};
      void deleteBailianAppParams() { this->bailianAppParams_ = nullptr;};
      inline string getBailianAppParams() const { DARABONBA_PTR_GET_DEFAULT(bailianAppParams_, "") };
      inline LlmConfig& setBailianAppParams(string bailianAppParams) { DARABONBA_PTR_SET_VALUE(bailianAppParams_, bailianAppParams) };


      // functionMap Field Functions 
      bool hasFunctionMap() const { return this->functionMap_ != nullptr;};
      void deleteFunctionMap() { this->functionMap_ = nullptr;};
      inline const vector<LlmConfig::FunctionMap> & getFunctionMap() const { DARABONBA_PTR_GET_CONST(functionMap_, vector<LlmConfig::FunctionMap>) };
      inline vector<LlmConfig::FunctionMap> getFunctionMap() { DARABONBA_PTR_GET(functionMap_, vector<LlmConfig::FunctionMap>) };
      inline LlmConfig& setFunctionMap(const vector<LlmConfig::FunctionMap> & functionMap) { DARABONBA_PTR_SET_VALUE(functionMap_, functionMap) };
      inline LlmConfig& setFunctionMap(vector<LlmConfig::FunctionMap> && functionMap) { DARABONBA_PTR_SET_RVALUE(functionMap_, functionMap) };


      // historySyncWithTTS Field Functions 
      bool hasHistorySyncWithTTS() const { return this->historySyncWithTTS_ != nullptr;};
      void deleteHistorySyncWithTTS() { this->historySyncWithTTS_ = nullptr;};
      inline bool getHistorySyncWithTTS() const { DARABONBA_PTR_GET_DEFAULT(historySyncWithTTS_, false) };
      inline LlmConfig& setHistorySyncWithTTS(bool historySyncWithTTS) { DARABONBA_PTR_SET_VALUE(historySyncWithTTS_, historySyncWithTTS) };


      // llmCompleteReply Field Functions 
      bool hasLlmCompleteReply() const { return this->llmCompleteReply_ != nullptr;};
      void deleteLlmCompleteReply() { this->llmCompleteReply_ = nullptr;};
      inline bool getLlmCompleteReply() const { DARABONBA_PTR_GET_DEFAULT(llmCompleteReply_, false) };
      inline LlmConfig& setLlmCompleteReply(bool llmCompleteReply) { DARABONBA_PTR_SET_VALUE(llmCompleteReply_, llmCompleteReply) };


      // llmHistory Field Functions 
      bool hasLlmHistory() const { return this->llmHistory_ != nullptr;};
      void deleteLlmHistory() { this->llmHistory_ = nullptr;};
      inline const vector<LlmConfig::LlmHistory> & getLlmHistory() const { DARABONBA_PTR_GET_CONST(llmHistory_, vector<LlmConfig::LlmHistory>) };
      inline vector<LlmConfig::LlmHistory> getLlmHistory() { DARABONBA_PTR_GET(llmHistory_, vector<LlmConfig::LlmHistory>) };
      inline LlmConfig& setLlmHistory(const vector<LlmConfig::LlmHistory> & llmHistory) { DARABONBA_PTR_SET_VALUE(llmHistory_, llmHistory) };
      inline LlmConfig& setLlmHistory(vector<LlmConfig::LlmHistory> && llmHistory) { DARABONBA_PTR_SET_RVALUE(llmHistory_, llmHistory) };


      // llmHistoryLimit Field Functions 
      bool hasLlmHistoryLimit() const { return this->llmHistoryLimit_ != nullptr;};
      void deleteLlmHistoryLimit() { this->llmHistoryLimit_ = nullptr;};
      inline int32_t getLlmHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(llmHistoryLimit_, 0) };
      inline LlmConfig& setLlmHistoryLimit(int32_t llmHistoryLimit) { DARABONBA_PTR_SET_VALUE(llmHistoryLimit_, llmHistoryLimit) };


      // llmSystemPrompt Field Functions 
      bool hasLlmSystemPrompt() const { return this->llmSystemPrompt_ != nullptr;};
      void deleteLlmSystemPrompt() { this->llmSystemPrompt_ = nullptr;};
      inline string getLlmSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmSystemPrompt_, "") };
      inline LlmConfig& setLlmSystemPrompt(string llmSystemPrompt) { DARABONBA_PTR_SET_VALUE(llmSystemPrompt_, llmSystemPrompt) };


      // openAIExtraQuery Field Functions 
      bool hasOpenAIExtraQuery() const { return this->openAIExtraQuery_ != nullptr;};
      void deleteOpenAIExtraQuery() { this->openAIExtraQuery_ = nullptr;};
      inline string getOpenAIExtraQuery() const { DARABONBA_PTR_GET_DEFAULT(openAIExtraQuery_, "") };
      inline LlmConfig& setOpenAIExtraQuery(string openAIExtraQuery) { DARABONBA_PTR_SET_VALUE(openAIExtraQuery_, openAIExtraQuery) };


      // outputMaxDelay Field Functions 
      bool hasOutputMaxDelay() const { return this->outputMaxDelay_ != nullptr;};
      void deleteOutputMaxDelay() { this->outputMaxDelay_ = nullptr;};
      inline int32_t getOutputMaxDelay() const { DARABONBA_PTR_GET_DEFAULT(outputMaxDelay_, 0) };
      inline LlmConfig& setOutputMaxDelay(int32_t outputMaxDelay) { DARABONBA_PTR_SET_VALUE(outputMaxDelay_, outputMaxDelay) };


      // outputMinLength Field Functions 
      bool hasOutputMinLength() const { return this->outputMinLength_ != nullptr;};
      void deleteOutputMinLength() { this->outputMinLength_ = nullptr;};
      inline int32_t getOutputMinLength() const { DARABONBA_PTR_GET_DEFAULT(outputMinLength_, 0) };
      inline LlmConfig& setOutputMinLength(int32_t outputMinLength) { DARABONBA_PTR_SET_VALUE(outputMinLength_, outputMinLength) };


    protected:
      shared_ptr<string> bailianAppParams_ {};
      shared_ptr<vector<LlmConfig::FunctionMap>> functionMap_ {};
      shared_ptr<bool> historySyncWithTTS_ {};
      shared_ptr<bool> llmCompleteReply_ {};
      shared_ptr<vector<LlmConfig::LlmHistory>> llmHistory_ {};
      shared_ptr<int32_t> llmHistoryLimit_ {};
      shared_ptr<string> llmSystemPrompt_ {};
      shared_ptr<string> openAIExtraQuery_ {};
      shared_ptr<int32_t> outputMaxDelay_ {};
      shared_ptr<int32_t> outputMinLength_ {};
    };

    class InterruptConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterruptConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
        DARABONBA_PTR_TO_JSON(InterruptWords, interruptWords_);
        DARABONBA_PTR_TO_JSON(NoInterruptMode, noInterruptMode_);
      };
      friend void from_json(const Darabonba::Json& j, InterruptConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
        DARABONBA_PTR_FROM_JSON(InterruptWords, interruptWords_);
        DARABONBA_PTR_FROM_JSON(NoInterruptMode, noInterruptMode_);
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
      virtual bool empty() const override { return this->enableVoiceInterrupt_ == nullptr
        && this->interruptWords_ == nullptr && this->noInterruptMode_ == nullptr; };
      // enableVoiceInterrupt Field Functions 
      bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
      void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
      inline bool getEnableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
      inline InterruptConfig& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


      // interruptWords Field Functions 
      bool hasInterruptWords() const { return this->interruptWords_ != nullptr;};
      void deleteInterruptWords() { this->interruptWords_ = nullptr;};
      inline const vector<string> & getInterruptWords() const { DARABONBA_PTR_GET_CONST(interruptWords_, vector<string>) };
      inline vector<string> getInterruptWords() { DARABONBA_PTR_GET(interruptWords_, vector<string>) };
      inline InterruptConfig& setInterruptWords(const vector<string> & interruptWords) { DARABONBA_PTR_SET_VALUE(interruptWords_, interruptWords) };
      inline InterruptConfig& setInterruptWords(vector<string> && interruptWords) { DARABONBA_PTR_SET_RVALUE(interruptWords_, interruptWords) };


      // noInterruptMode Field Functions 
      bool hasNoInterruptMode() const { return this->noInterruptMode_ != nullptr;};
      void deleteNoInterruptMode() { this->noInterruptMode_ = nullptr;};
      inline string getNoInterruptMode() const { DARABONBA_PTR_GET_DEFAULT(noInterruptMode_, "") };
      inline InterruptConfig& setNoInterruptMode(string noInterruptMode) { DARABONBA_PTR_SET_VALUE(noInterruptMode_, noInterruptMode) };


    protected:
      shared_ptr<bool> enableVoiceInterrupt_ {};
      shared_ptr<vector<string>> interruptWords_ {};
      shared_ptr<string> noInterruptMode_ {};
    };

    class BackChannelingConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackChannelingConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Probability, probability_);
        DARABONBA_PTR_TO_JSON(TriggerStage, triggerStage_);
        DARABONBA_PTR_TO_JSON(Words, words_);
      };
      friend void from_json(const Darabonba::Json& j, BackChannelingConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Probability, probability_);
        DARABONBA_PTR_FROM_JSON(TriggerStage, triggerStage_);
        DARABONBA_PTR_FROM_JSON(Words, words_);
      };
      BackChannelingConfig() = default ;
      BackChannelingConfig(const BackChannelingConfig &) = default ;
      BackChannelingConfig(BackChannelingConfig &&) = default ;
      BackChannelingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackChannelingConfig() = default ;
      BackChannelingConfig& operator=(const BackChannelingConfig &) = default ;
      BackChannelingConfig& operator=(BackChannelingConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Words : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Words& obj) { 
          DARABONBA_PTR_TO_JSON(Probability, probability_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Words& obj) { 
          DARABONBA_PTR_FROM_JSON(Probability, probability_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Words() = default ;
        Words(const Words &) = default ;
        Words(Words &&) = default ;
        Words(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Words() = default ;
        Words& operator=(const Words &) = default ;
        Words& operator=(Words &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->probability_ == nullptr
        && this->text_ == nullptr; };
        // probability Field Functions 
        bool hasProbability() const { return this->probability_ != nullptr;};
        void deleteProbability() { this->probability_ = nullptr;};
        inline double getProbability() const { DARABONBA_PTR_GET_DEFAULT(probability_, 0.0) };
        inline Words& setProbability(double probability) { DARABONBA_PTR_SET_VALUE(probability_, probability) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Words& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<double> probability_ {};
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->probability_ == nullptr && this->triggerStage_ == nullptr && this->words_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline BackChannelingConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // probability Field Functions 
      bool hasProbability() const { return this->probability_ != nullptr;};
      void deleteProbability() { this->probability_ = nullptr;};
      inline double getProbability() const { DARABONBA_PTR_GET_DEFAULT(probability_, 0.0) };
      inline BackChannelingConfig& setProbability(double probability) { DARABONBA_PTR_SET_VALUE(probability_, probability) };


      // triggerStage Field Functions 
      bool hasTriggerStage() const { return this->triggerStage_ != nullptr;};
      void deleteTriggerStage() { this->triggerStage_ = nullptr;};
      inline string getTriggerStage() const { DARABONBA_PTR_GET_DEFAULT(triggerStage_, "") };
      inline BackChannelingConfig& setTriggerStage(string triggerStage) { DARABONBA_PTR_SET_VALUE(triggerStage_, triggerStage) };


      // words Field Functions 
      bool hasWords() const { return this->words_ != nullptr;};
      void deleteWords() { this->words_ = nullptr;};
      inline const vector<BackChannelingConfig::Words> & getWords() const { DARABONBA_PTR_GET_CONST(words_, vector<BackChannelingConfig::Words>) };
      inline vector<BackChannelingConfig::Words> getWords() { DARABONBA_PTR_GET(words_, vector<BackChannelingConfig::Words>) };
      inline BackChannelingConfig& setWords(const vector<BackChannelingConfig::Words> & words) { DARABONBA_PTR_SET_VALUE(words_, words) };
      inline BackChannelingConfig& setWords(vector<BackChannelingConfig::Words> && words) { DARABONBA_PTR_SET_RVALUE(words_, words) };


    protected:
      shared_ptr<bool> enabled_ {};
      shared_ptr<double> probability_ {};
      shared_ptr<string> triggerStage_ {};
      shared_ptr<vector<BackChannelingConfig::Words>> words_ {};
    };

    class AvatarConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvatarConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      };
      friend void from_json(const Darabonba::Json& j, AvatarConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      };
      AvatarConfig() = default ;
      AvatarConfig(const AvatarConfig &) = default ;
      AvatarConfig(AvatarConfig &&) = default ;
      AvatarConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvatarConfig() = default ;
      AvatarConfig& operator=(const AvatarConfig &) = default ;
      AvatarConfig& operator=(AvatarConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avatarId_ == nullptr; };
      // avatarId Field Functions 
      bool hasAvatarId() const { return this->avatarId_ != nullptr;};
      void deleteAvatarId() { this->avatarId_ = nullptr;};
      inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
      inline AvatarConfig& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    protected:
      shared_ptr<string> avatarId_ {};
    };

    class AutoSpeechConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoSpeechConfig& obj) { 
        DARABONBA_PTR_TO_JSON(LlmPending, llmPending_);
        DARABONBA_PTR_TO_JSON(UserIdle, userIdle_);
      };
      friend void from_json(const Darabonba::Json& j, AutoSpeechConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(LlmPending, llmPending_);
        DARABONBA_PTR_FROM_JSON(UserIdle, userIdle_);
      };
      AutoSpeechConfig() = default ;
      AutoSpeechConfig(const AutoSpeechConfig &) = default ;
      AutoSpeechConfig(AutoSpeechConfig &&) = default ;
      AutoSpeechConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoSpeechConfig() = default ;
      AutoSpeechConfig& operator=(const AutoSpeechConfig &) = default ;
      AutoSpeechConfig& operator=(AutoSpeechConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserIdle : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserIdle& obj) { 
          DARABONBA_PTR_TO_JSON(MaxRepeats, maxRepeats_);
          DARABONBA_PTR_TO_JSON(Messages, messages_);
          DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
        };
        friend void from_json(const Darabonba::Json& j, UserIdle& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxRepeats, maxRepeats_);
          DARABONBA_PTR_FROM_JSON(Messages, messages_);
          DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
        };
        UserIdle() = default ;
        UserIdle(const UserIdle &) = default ;
        UserIdle(UserIdle &&) = default ;
        UserIdle(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserIdle() = default ;
        UserIdle& operator=(const UserIdle &) = default ;
        UserIdle& operator=(UserIdle &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Messages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Messages& obj) { 
            DARABONBA_PTR_TO_JSON(Probability, probability_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, Messages& obj) { 
            DARABONBA_PTR_FROM_JSON(Probability, probability_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
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
          virtual bool empty() const override { return this->probability_ == nullptr
        && this->text_ == nullptr; };
          // probability Field Functions 
          bool hasProbability() const { return this->probability_ != nullptr;};
          void deleteProbability() { this->probability_ = nullptr;};
          inline double getProbability() const { DARABONBA_PTR_GET_DEFAULT(probability_, 0.0) };
          inline Messages& setProbability(double probability) { DARABONBA_PTR_SET_VALUE(probability_, probability) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Messages& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          shared_ptr<double> probability_ {};
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->maxRepeats_ == nullptr
        && this->messages_ == nullptr && this->waitTime_ == nullptr; };
        // maxRepeats Field Functions 
        bool hasMaxRepeats() const { return this->maxRepeats_ != nullptr;};
        void deleteMaxRepeats() { this->maxRepeats_ = nullptr;};
        inline int32_t getMaxRepeats() const { DARABONBA_PTR_GET_DEFAULT(maxRepeats_, 0) };
        inline UserIdle& setMaxRepeats(int32_t maxRepeats) { DARABONBA_PTR_SET_VALUE(maxRepeats_, maxRepeats) };


        // messages Field Functions 
        bool hasMessages() const { return this->messages_ != nullptr;};
        void deleteMessages() { this->messages_ = nullptr;};
        inline const vector<UserIdle::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<UserIdle::Messages>) };
        inline vector<UserIdle::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<UserIdle::Messages>) };
        inline UserIdle& setMessages(const vector<UserIdle::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
        inline UserIdle& setMessages(vector<UserIdle::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


        // waitTime Field Functions 
        bool hasWaitTime() const { return this->waitTime_ != nullptr;};
        void deleteWaitTime() { this->waitTime_ = nullptr;};
        inline int32_t getWaitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0) };
        inline UserIdle& setWaitTime(int32_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


      protected:
        shared_ptr<int32_t> maxRepeats_ {};
        shared_ptr<vector<UserIdle::Messages>> messages_ {};
        shared_ptr<int32_t> waitTime_ {};
      };

      class LlmPending : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmPending& obj) { 
          DARABONBA_PTR_TO_JSON(Messages, messages_);
          DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
        };
        friend void from_json(const Darabonba::Json& j, LlmPending& obj) { 
          DARABONBA_PTR_FROM_JSON(Messages, messages_);
          DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
        };
        LlmPending() = default ;
        LlmPending(const LlmPending &) = default ;
        LlmPending(LlmPending &&) = default ;
        LlmPending(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmPending() = default ;
        LlmPending& operator=(const LlmPending &) = default ;
        LlmPending& operator=(LlmPending &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Messages : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Messages& obj) { 
            DARABONBA_PTR_TO_JSON(Probability, probability_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, Messages& obj) { 
            DARABONBA_PTR_FROM_JSON(Probability, probability_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
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
          virtual bool empty() const override { return this->probability_ == nullptr
        && this->text_ == nullptr; };
          // probability Field Functions 
          bool hasProbability() const { return this->probability_ != nullptr;};
          void deleteProbability() { this->probability_ = nullptr;};
          inline double getProbability() const { DARABONBA_PTR_GET_DEFAULT(probability_, 0.0) };
          inline Messages& setProbability(double probability) { DARABONBA_PTR_SET_VALUE(probability_, probability) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Messages& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          shared_ptr<double> probability_ {};
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->messages_ == nullptr
        && this->waitTime_ == nullptr; };
        // messages Field Functions 
        bool hasMessages() const { return this->messages_ != nullptr;};
        void deleteMessages() { this->messages_ = nullptr;};
        inline const vector<LlmPending::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<LlmPending::Messages>) };
        inline vector<LlmPending::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<LlmPending::Messages>) };
        inline LlmPending& setMessages(const vector<LlmPending::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
        inline LlmPending& setMessages(vector<LlmPending::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


        // waitTime Field Functions 
        bool hasWaitTime() const { return this->waitTime_ != nullptr;};
        void deleteWaitTime() { this->waitTime_ = nullptr;};
        inline int32_t getWaitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0) };
        inline LlmPending& setWaitTime(int32_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


      protected:
        shared_ptr<vector<LlmPending::Messages>> messages_ {};
        shared_ptr<int32_t> waitTime_ {};
      };

      virtual bool empty() const override { return this->llmPending_ == nullptr
        && this->userIdle_ == nullptr; };
      // llmPending Field Functions 
      bool hasLlmPending() const { return this->llmPending_ != nullptr;};
      void deleteLlmPending() { this->llmPending_ = nullptr;};
      inline const AutoSpeechConfig::LlmPending & getLlmPending() const { DARABONBA_PTR_GET_CONST(llmPending_, AutoSpeechConfig::LlmPending) };
      inline AutoSpeechConfig::LlmPending getLlmPending() { DARABONBA_PTR_GET(llmPending_, AutoSpeechConfig::LlmPending) };
      inline AutoSpeechConfig& setLlmPending(const AutoSpeechConfig::LlmPending & llmPending) { DARABONBA_PTR_SET_VALUE(llmPending_, llmPending) };
      inline AutoSpeechConfig& setLlmPending(AutoSpeechConfig::LlmPending && llmPending) { DARABONBA_PTR_SET_RVALUE(llmPending_, llmPending) };


      // userIdle Field Functions 
      bool hasUserIdle() const { return this->userIdle_ != nullptr;};
      void deleteUserIdle() { this->userIdle_ = nullptr;};
      inline const AutoSpeechConfig::UserIdle & getUserIdle() const { DARABONBA_PTR_GET_CONST(userIdle_, AutoSpeechConfig::UserIdle) };
      inline AutoSpeechConfig::UserIdle getUserIdle() { DARABONBA_PTR_GET(userIdle_, AutoSpeechConfig::UserIdle) };
      inline AutoSpeechConfig& setUserIdle(const AutoSpeechConfig::UserIdle & userIdle) { DARABONBA_PTR_SET_VALUE(userIdle_, userIdle) };
      inline AutoSpeechConfig& setUserIdle(AutoSpeechConfig::UserIdle && userIdle) { DARABONBA_PTR_SET_RVALUE(userIdle_, userIdle) };


    protected:
      shared_ptr<AutoSpeechConfig::LlmPending> llmPending_ {};
      shared_ptr<AutoSpeechConfig::UserIdle> userIdle_ {};
    };

    class AsrConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AsrConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AsrHotWords, asrHotWords_);
        DARABONBA_PTR_TO_JSON(AsrLanguageId, asrLanguageId_);
        DARABONBA_PTR_TO_JSON(AsrMaxSilence, asrMaxSilence_);
        DARABONBA_PTR_TO_JSON(CustomParams, customParams_);
        DARABONBA_PTR_TO_JSON(VadDuration, vadDuration_);
        DARABONBA_PTR_TO_JSON(VadLevel, vadLevel_);
      };
      friend void from_json(const Darabonba::Json& j, AsrConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrHotWords, asrHotWords_);
        DARABONBA_PTR_FROM_JSON(AsrLanguageId, asrLanguageId_);
        DARABONBA_PTR_FROM_JSON(AsrMaxSilence, asrMaxSilence_);
        DARABONBA_PTR_FROM_JSON(CustomParams, customParams_);
        DARABONBA_PTR_FROM_JSON(VadDuration, vadDuration_);
        DARABONBA_PTR_FROM_JSON(VadLevel, vadLevel_);
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
      virtual bool empty() const override { return this->asrHotWords_ == nullptr
        && this->asrLanguageId_ == nullptr && this->asrMaxSilence_ == nullptr && this->customParams_ == nullptr && this->vadDuration_ == nullptr && this->vadLevel_ == nullptr; };
      // asrHotWords Field Functions 
      bool hasAsrHotWords() const { return this->asrHotWords_ != nullptr;};
      void deleteAsrHotWords() { this->asrHotWords_ = nullptr;};
      inline const vector<string> & getAsrHotWords() const { DARABONBA_PTR_GET_CONST(asrHotWords_, vector<string>) };
      inline vector<string> getAsrHotWords() { DARABONBA_PTR_GET(asrHotWords_, vector<string>) };
      inline AsrConfig& setAsrHotWords(const vector<string> & asrHotWords) { DARABONBA_PTR_SET_VALUE(asrHotWords_, asrHotWords) };
      inline AsrConfig& setAsrHotWords(vector<string> && asrHotWords) { DARABONBA_PTR_SET_RVALUE(asrHotWords_, asrHotWords) };


      // asrLanguageId Field Functions 
      bool hasAsrLanguageId() const { return this->asrLanguageId_ != nullptr;};
      void deleteAsrLanguageId() { this->asrLanguageId_ = nullptr;};
      inline string getAsrLanguageId() const { DARABONBA_PTR_GET_DEFAULT(asrLanguageId_, "") };
      inline AsrConfig& setAsrLanguageId(string asrLanguageId) { DARABONBA_PTR_SET_VALUE(asrLanguageId_, asrLanguageId) };


      // asrMaxSilence Field Functions 
      bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
      void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
      inline int32_t getAsrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
      inline AsrConfig& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


      // customParams Field Functions 
      bool hasCustomParams() const { return this->customParams_ != nullptr;};
      void deleteCustomParams() { this->customParams_ = nullptr;};
      inline string getCustomParams() const { DARABONBA_PTR_GET_DEFAULT(customParams_, "") };
      inline AsrConfig& setCustomParams(string customParams) { DARABONBA_PTR_SET_VALUE(customParams_, customParams) };


      // vadDuration Field Functions 
      bool hasVadDuration() const { return this->vadDuration_ != nullptr;};
      void deleteVadDuration() { this->vadDuration_ = nullptr;};
      inline int32_t getVadDuration() const { DARABONBA_PTR_GET_DEFAULT(vadDuration_, 0) };
      inline AsrConfig& setVadDuration(int32_t vadDuration) { DARABONBA_PTR_SET_VALUE(vadDuration_, vadDuration) };


      // vadLevel Field Functions 
      bool hasVadLevel() const { return this->vadLevel_ != nullptr;};
      void deleteVadLevel() { this->vadLevel_ = nullptr;};
      inline int32_t getVadLevel() const { DARABONBA_PTR_GET_DEFAULT(vadLevel_, 0) };
      inline AsrConfig& setVadLevel(int32_t vadLevel) { DARABONBA_PTR_SET_VALUE(vadLevel_, vadLevel) };


    protected:
      shared_ptr<vector<string>> asrHotWords_ {};
      shared_ptr<string> asrLanguageId_ {};
      shared_ptr<int32_t> asrMaxSilence_ {};
      shared_ptr<string> customParams_ {};
      shared_ptr<int32_t> vadDuration_ {};
      shared_ptr<int32_t> vadLevel_ {};
    };

    class AmbientSoundConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AmbientSoundConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, AmbientSoundConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
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
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->volume_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline AmbientSoundConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
      inline AmbientSoundConfig& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      shared_ptr<string> resourceId_ {};
      shared_ptr<int32_t> volume_ {};
    };

    virtual bool empty() const override { return this->ambientSoundConfig_ == nullptr
        && this->asrConfig_ == nullptr && this->autoSpeechConfig_ == nullptr && this->avatarConfig_ == nullptr && this->avatarUrl_ == nullptr && this->avatarUrlType_ == nullptr
        && this->backChannelingConfig_ == nullptr && this->enableIntelligentSegment_ == nullptr && this->enablePushToTalk_ == nullptr && this->experimentalConfig_ == nullptr && this->gracefulShutdown_ == nullptr
        && this->greeting_ == nullptr && this->interruptConfig_ == nullptr && this->llmConfig_ == nullptr && this->maxIdleTime_ == nullptr && this->ttsConfig_ == nullptr
        && this->turnDetectionConfig_ == nullptr && this->userOfflineTimeout_ == nullptr && this->userOnlineTimeout_ == nullptr && this->vcrConfig_ == nullptr && this->voiceprintConfig_ == nullptr
        && this->volume_ == nullptr && this->wakeUpQuery_ == nullptr && this->workflowOverrideParams_ == nullptr; };
    // ambientSoundConfig Field Functions 
    bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
    void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
    inline const AIAgentConfig::AmbientSoundConfig & getAmbientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, AIAgentConfig::AmbientSoundConfig) };
    inline AIAgentConfig::AmbientSoundConfig getAmbientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, AIAgentConfig::AmbientSoundConfig) };
    inline AIAgentConfig& setAmbientSoundConfig(const AIAgentConfig::AmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
    inline AIAgentConfig& setAmbientSoundConfig(AIAgentConfig::AmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline const AIAgentConfig::AsrConfig & getAsrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, AIAgentConfig::AsrConfig) };
    inline AIAgentConfig::AsrConfig getAsrConfig() { DARABONBA_PTR_GET(asrConfig_, AIAgentConfig::AsrConfig) };
    inline AIAgentConfig& setAsrConfig(const AIAgentConfig::AsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
    inline AIAgentConfig& setAsrConfig(AIAgentConfig::AsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


    // autoSpeechConfig Field Functions 
    bool hasAutoSpeechConfig() const { return this->autoSpeechConfig_ != nullptr;};
    void deleteAutoSpeechConfig() { this->autoSpeechConfig_ = nullptr;};
    inline const AIAgentConfig::AutoSpeechConfig & getAutoSpeechConfig() const { DARABONBA_PTR_GET_CONST(autoSpeechConfig_, AIAgentConfig::AutoSpeechConfig) };
    inline AIAgentConfig::AutoSpeechConfig getAutoSpeechConfig() { DARABONBA_PTR_GET(autoSpeechConfig_, AIAgentConfig::AutoSpeechConfig) };
    inline AIAgentConfig& setAutoSpeechConfig(const AIAgentConfig::AutoSpeechConfig & autoSpeechConfig) { DARABONBA_PTR_SET_VALUE(autoSpeechConfig_, autoSpeechConfig) };
    inline AIAgentConfig& setAutoSpeechConfig(AIAgentConfig::AutoSpeechConfig && autoSpeechConfig) { DARABONBA_PTR_SET_RVALUE(autoSpeechConfig_, autoSpeechConfig) };


    // avatarConfig Field Functions 
    bool hasAvatarConfig() const { return this->avatarConfig_ != nullptr;};
    void deleteAvatarConfig() { this->avatarConfig_ = nullptr;};
    inline const AIAgentConfig::AvatarConfig & getAvatarConfig() const { DARABONBA_PTR_GET_CONST(avatarConfig_, AIAgentConfig::AvatarConfig) };
    inline AIAgentConfig::AvatarConfig getAvatarConfig() { DARABONBA_PTR_GET(avatarConfig_, AIAgentConfig::AvatarConfig) };
    inline AIAgentConfig& setAvatarConfig(const AIAgentConfig::AvatarConfig & avatarConfig) { DARABONBA_PTR_SET_VALUE(avatarConfig_, avatarConfig) };
    inline AIAgentConfig& setAvatarConfig(AIAgentConfig::AvatarConfig && avatarConfig) { DARABONBA_PTR_SET_RVALUE(avatarConfig_, avatarConfig) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline AIAgentConfig& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // avatarUrlType Field Functions 
    bool hasAvatarUrlType() const { return this->avatarUrlType_ != nullptr;};
    void deleteAvatarUrlType() { this->avatarUrlType_ = nullptr;};
    inline string getAvatarUrlType() const { DARABONBA_PTR_GET_DEFAULT(avatarUrlType_, "") };
    inline AIAgentConfig& setAvatarUrlType(string avatarUrlType) { DARABONBA_PTR_SET_VALUE(avatarUrlType_, avatarUrlType) };


    // backChannelingConfig Field Functions 
    bool hasBackChannelingConfig() const { return this->backChannelingConfig_ != nullptr;};
    void deleteBackChannelingConfig() { this->backChannelingConfig_ = nullptr;};
    inline const vector<AIAgentConfig::BackChannelingConfig> & getBackChannelingConfig() const { DARABONBA_PTR_GET_CONST(backChannelingConfig_, vector<AIAgentConfig::BackChannelingConfig>) };
    inline vector<AIAgentConfig::BackChannelingConfig> getBackChannelingConfig() { DARABONBA_PTR_GET(backChannelingConfig_, vector<AIAgentConfig::BackChannelingConfig>) };
    inline AIAgentConfig& setBackChannelingConfig(const vector<AIAgentConfig::BackChannelingConfig> & backChannelingConfig) { DARABONBA_PTR_SET_VALUE(backChannelingConfig_, backChannelingConfig) };
    inline AIAgentConfig& setBackChannelingConfig(vector<AIAgentConfig::BackChannelingConfig> && backChannelingConfig) { DARABONBA_PTR_SET_RVALUE(backChannelingConfig_, backChannelingConfig) };


    // enableIntelligentSegment Field Functions 
    bool hasEnableIntelligentSegment() const { return this->enableIntelligentSegment_ != nullptr;};
    void deleteEnableIntelligentSegment() { this->enableIntelligentSegment_ = nullptr;};
    inline bool getEnableIntelligentSegment() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligentSegment_, false) };
    inline AIAgentConfig& setEnableIntelligentSegment(bool enableIntelligentSegment) { DARABONBA_PTR_SET_VALUE(enableIntelligentSegment_, enableIntelligentSegment) };


    // enablePushToTalk Field Functions 
    bool hasEnablePushToTalk() const { return this->enablePushToTalk_ != nullptr;};
    void deleteEnablePushToTalk() { this->enablePushToTalk_ = nullptr;};
    inline bool getEnablePushToTalk() const { DARABONBA_PTR_GET_DEFAULT(enablePushToTalk_, false) };
    inline AIAgentConfig& setEnablePushToTalk(bool enablePushToTalk) { DARABONBA_PTR_SET_VALUE(enablePushToTalk_, enablePushToTalk) };


    // experimentalConfig Field Functions 
    bool hasExperimentalConfig() const { return this->experimentalConfig_ != nullptr;};
    void deleteExperimentalConfig() { this->experimentalConfig_ = nullptr;};
    inline string getExperimentalConfig() const { DARABONBA_PTR_GET_DEFAULT(experimentalConfig_, "") };
    inline AIAgentConfig& setExperimentalConfig(string experimentalConfig) { DARABONBA_PTR_SET_VALUE(experimentalConfig_, experimentalConfig) };


    // gracefulShutdown Field Functions 
    bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
    void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
    inline bool getGracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
    inline AIAgentConfig& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline AIAgentConfig& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // interruptConfig Field Functions 
    bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
    void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
    inline const AIAgentConfig::InterruptConfig & getInterruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, AIAgentConfig::InterruptConfig) };
    inline AIAgentConfig::InterruptConfig getInterruptConfig() { DARABONBA_PTR_GET(interruptConfig_, AIAgentConfig::InterruptConfig) };
    inline AIAgentConfig& setInterruptConfig(const AIAgentConfig::InterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
    inline AIAgentConfig& setInterruptConfig(AIAgentConfig::InterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const AIAgentConfig::LlmConfig & getLlmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, AIAgentConfig::LlmConfig) };
    inline AIAgentConfig::LlmConfig getLlmConfig() { DARABONBA_PTR_GET(llmConfig_, AIAgentConfig::LlmConfig) };
    inline AIAgentConfig& setLlmConfig(const AIAgentConfig::LlmConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline AIAgentConfig& setLlmConfig(AIAgentConfig::LlmConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline int32_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0) };
    inline AIAgentConfig& setMaxIdleTime(int32_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const AIAgentConfig::TtsConfig & getTtsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, AIAgentConfig::TtsConfig) };
    inline AIAgentConfig::TtsConfig getTtsConfig() { DARABONBA_PTR_GET(ttsConfig_, AIAgentConfig::TtsConfig) };
    inline AIAgentConfig& setTtsConfig(const AIAgentConfig::TtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline AIAgentConfig& setTtsConfig(AIAgentConfig::TtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // turnDetectionConfig Field Functions 
    bool hasTurnDetectionConfig() const { return this->turnDetectionConfig_ != nullptr;};
    void deleteTurnDetectionConfig() { this->turnDetectionConfig_ = nullptr;};
    inline const AIAgentConfig::TurnDetectionConfig & getTurnDetectionConfig() const { DARABONBA_PTR_GET_CONST(turnDetectionConfig_, AIAgentConfig::TurnDetectionConfig) };
    inline AIAgentConfig::TurnDetectionConfig getTurnDetectionConfig() { DARABONBA_PTR_GET(turnDetectionConfig_, AIAgentConfig::TurnDetectionConfig) };
    inline AIAgentConfig& setTurnDetectionConfig(const AIAgentConfig::TurnDetectionConfig & turnDetectionConfig) { DARABONBA_PTR_SET_VALUE(turnDetectionConfig_, turnDetectionConfig) };
    inline AIAgentConfig& setTurnDetectionConfig(AIAgentConfig::TurnDetectionConfig && turnDetectionConfig) { DARABONBA_PTR_SET_RVALUE(turnDetectionConfig_, turnDetectionConfig) };


    // userOfflineTimeout Field Functions 
    bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
    void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
    inline int32_t getUserOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
    inline AIAgentConfig& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


    // userOnlineTimeout Field Functions 
    bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
    void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
    inline int32_t getUserOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
    inline AIAgentConfig& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


    // vcrConfig Field Functions 
    bool hasVcrConfig() const { return this->vcrConfig_ != nullptr;};
    void deleteVcrConfig() { this->vcrConfig_ = nullptr;};
    inline const AIAgentConfig::VcrConfig & getVcrConfig() const { DARABONBA_PTR_GET_CONST(vcrConfig_, AIAgentConfig::VcrConfig) };
    inline AIAgentConfig::VcrConfig getVcrConfig() { DARABONBA_PTR_GET(vcrConfig_, AIAgentConfig::VcrConfig) };
    inline AIAgentConfig& setVcrConfig(const AIAgentConfig::VcrConfig & vcrConfig) { DARABONBA_PTR_SET_VALUE(vcrConfig_, vcrConfig) };
    inline AIAgentConfig& setVcrConfig(AIAgentConfig::VcrConfig && vcrConfig) { DARABONBA_PTR_SET_RVALUE(vcrConfig_, vcrConfig) };


    // voiceprintConfig Field Functions 
    bool hasVoiceprintConfig() const { return this->voiceprintConfig_ != nullptr;};
    void deleteVoiceprintConfig() { this->voiceprintConfig_ = nullptr;};
    inline const AIAgentConfig::VoiceprintConfig & getVoiceprintConfig() const { DARABONBA_PTR_GET_CONST(voiceprintConfig_, AIAgentConfig::VoiceprintConfig) };
    inline AIAgentConfig::VoiceprintConfig getVoiceprintConfig() { DARABONBA_PTR_GET(voiceprintConfig_, AIAgentConfig::VoiceprintConfig) };
    inline AIAgentConfig& setVoiceprintConfig(const AIAgentConfig::VoiceprintConfig & voiceprintConfig) { DARABONBA_PTR_SET_VALUE(voiceprintConfig_, voiceprintConfig) };
    inline AIAgentConfig& setVoiceprintConfig(AIAgentConfig::VoiceprintConfig && voiceprintConfig) { DARABONBA_PTR_SET_RVALUE(voiceprintConfig_, voiceprintConfig) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int64_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
    inline AIAgentConfig& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    // wakeUpQuery Field Functions 
    bool hasWakeUpQuery() const { return this->wakeUpQuery_ != nullptr;};
    void deleteWakeUpQuery() { this->wakeUpQuery_ = nullptr;};
    inline string getWakeUpQuery() const { DARABONBA_PTR_GET_DEFAULT(wakeUpQuery_, "") };
    inline AIAgentConfig& setWakeUpQuery(string wakeUpQuery) { DARABONBA_PTR_SET_VALUE(wakeUpQuery_, wakeUpQuery) };


    // workflowOverrideParams Field Functions 
    bool hasWorkflowOverrideParams() const { return this->workflowOverrideParams_ != nullptr;};
    void deleteWorkflowOverrideParams() { this->workflowOverrideParams_ = nullptr;};
    inline string getWorkflowOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(workflowOverrideParams_, "") };
    inline AIAgentConfig& setWorkflowOverrideParams(string workflowOverrideParams) { DARABONBA_PTR_SET_VALUE(workflowOverrideParams_, workflowOverrideParams) };


  protected:
    shared_ptr<AIAgentConfig::AmbientSoundConfig> ambientSoundConfig_ {};
    shared_ptr<AIAgentConfig::AsrConfig> asrConfig_ {};
    shared_ptr<AIAgentConfig::AutoSpeechConfig> autoSpeechConfig_ {};
    shared_ptr<AIAgentConfig::AvatarConfig> avatarConfig_ {};
    shared_ptr<string> avatarUrl_ {};
    shared_ptr<string> avatarUrlType_ {};
    shared_ptr<vector<AIAgentConfig::BackChannelingConfig>> backChannelingConfig_ {};
    shared_ptr<bool> enableIntelligentSegment_ {};
    shared_ptr<bool> enablePushToTalk_ {};
    shared_ptr<string> experimentalConfig_ {};
    shared_ptr<bool> gracefulShutdown_ {};
    shared_ptr<string> greeting_ {};
    shared_ptr<AIAgentConfig::InterruptConfig> interruptConfig_ {};
    shared_ptr<AIAgentConfig::LlmConfig> llmConfig_ {};
    shared_ptr<int32_t> maxIdleTime_ {};
    shared_ptr<AIAgentConfig::TtsConfig> ttsConfig_ {};
    shared_ptr<AIAgentConfig::TurnDetectionConfig> turnDetectionConfig_ {};
    shared_ptr<int32_t> userOfflineTimeout_ {};
    shared_ptr<int32_t> userOnlineTimeout_ {};
    shared_ptr<AIAgentConfig::VcrConfig> vcrConfig_ {};
    shared_ptr<AIAgentConfig::VoiceprintConfig> voiceprintConfig_ {};
    shared_ptr<int64_t> volume_ {};
    shared_ptr<string> wakeUpQuery_ {};
    shared_ptr<string> workflowOverrideParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
