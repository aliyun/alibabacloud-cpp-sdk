// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class UpdateModelApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(ApplicationCps, applicationCps_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CallAssistantHangup, callAssistantHangup_);
      DARABONBA_PTR_TO_JSON(CallAssistantRecognize, callAssistantRecognize_);
      DARABONBA_PTR_TO_JSON(CallConnectedTriggerModel, callConnectedTriggerModel_);
      DARABONBA_PTR_TO_JSON(DtmfAllowedDigits, dtmfAllowedDigits_);
      DARABONBA_PTR_TO_JSON(DtmfAutoValidateEnable, dtmfAutoValidateEnable_);
      DARABONBA_PTR_TO_JSON(DtmfDigitCount, dtmfDigitCount_);
      DARABONBA_PTR_TO_JSON(DtmfInputTimeout, dtmfInputTimeout_);
      DARABONBA_PTR_TO_JSON(DtmfOutOfRangeAction, dtmfOutOfRangeAction_);
      DARABONBA_PTR_TO_JSON(DtmfRetryPlayTimes, dtmfRetryPlayTimes_);
      DARABONBA_PTR_TO_JSON(DtmfRetryPromptText, dtmfRetryPromptText_);
      DARABONBA_PTR_TO_JSON(DyvmsSceneName, dyvmsSceneName_);
      DARABONBA_PTR_TO_JSON(EnableDtmfReceive, enableDtmfReceive_);
      DARABONBA_PTR_TO_JSON(EnableMorse, enableMorse_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_TO_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_TO_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_TO_JSON(MuteActive, muteActive_);
      DARABONBA_PTR_TO_JSON(MuteDuration, muteDuration_);
      DARABONBA_PTR_TO_JSON(MuteHangupNum, muteHangupNum_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_TO_JSON(RecordingFile, recordingFile_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SpeechContent, speechContent_);
      DARABONBA_PTR_TO_JSON(SpeechId, speechId_);
      DARABONBA_PTR_TO_JSON(StartWord, startWord_);
      DARABONBA_PTR_TO_JSON(StartWordType, startWordType_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(UsageDesc, usageDesc_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(ApplicationCps, applicationCps_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CallAssistantHangup, callAssistantHangup_);
      DARABONBA_PTR_FROM_JSON(CallAssistantRecognize, callAssistantRecognize_);
      DARABONBA_PTR_FROM_JSON(CallConnectedTriggerModel, callConnectedTriggerModel_);
      DARABONBA_PTR_FROM_JSON(DtmfAllowedDigits, dtmfAllowedDigits_);
      DARABONBA_PTR_FROM_JSON(DtmfAutoValidateEnable, dtmfAutoValidateEnable_);
      DARABONBA_PTR_FROM_JSON(DtmfDigitCount, dtmfDigitCount_);
      DARABONBA_PTR_FROM_JSON(DtmfInputTimeout, dtmfInputTimeout_);
      DARABONBA_PTR_FROM_JSON(DtmfOutOfRangeAction, dtmfOutOfRangeAction_);
      DARABONBA_PTR_FROM_JSON(DtmfRetryPlayTimes, dtmfRetryPlayTimes_);
      DARABONBA_PTR_FROM_JSON(DtmfRetryPromptText, dtmfRetryPromptText_);
      DARABONBA_PTR_FROM_JSON(DyvmsSceneName, dyvmsSceneName_);
      DARABONBA_PTR_FROM_JSON(EnableDtmfReceive, enableDtmfReceive_);
      DARABONBA_PTR_FROM_JSON(EnableMorse, enableMorse_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_FROM_JSON(ModelCode, modelCode_);
      DARABONBA_PTR_FROM_JSON(ModelVersion, modelVersion_);
      DARABONBA_PTR_FROM_JSON(MuteActive, muteActive_);
      DARABONBA_PTR_FROM_JSON(MuteDuration, muteDuration_);
      DARABONBA_PTR_FROM_JSON(MuteHangupNum, muteHangupNum_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(QualificationName, qualificationName_);
      DARABONBA_PTR_FROM_JSON(RecordingFile, recordingFile_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SpeechContent, speechContent_);
      DARABONBA_PTR_FROM_JSON(SpeechId, speechId_);
      DARABONBA_PTR_FROM_JSON(StartWord, startWord_);
      DARABONBA_PTR_FROM_JSON(StartWordType, startWordType_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(UsageDesc, usageDesc_);
    };
    UpdateModelApplicationRequest() = default ;
    UpdateModelApplicationRequest(const UpdateModelApplicationRequest &) = default ;
    UpdateModelApplicationRequest(UpdateModelApplicationRequest &&) = default ;
    UpdateModelApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelApplicationRequest() = default ;
    UpdateModelApplicationRequest& operator=(const UpdateModelApplicationRequest &) = default ;
    UpdateModelApplicationRequest& operator=(UpdateModelApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TtsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TtsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BackgroundEnabled, backgroundEnabled_);
        DARABONBA_PTR_TO_JSON(BackgroundSound, backgroundSound_);
        DARABONBA_PTR_TO_JSON(BackgroundVolume, backgroundVolume_);
        DARABONBA_PTR_TO_JSON(CustomerAccountId, customerAccountId_);
        DARABONBA_PTR_TO_JSON(MixingEnabled, mixingEnabled_);
        DARABONBA_PTR_TO_JSON(MixingTemplate, mixingTemplate_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
        DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
        DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
        DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
        DARABONBA_PTR_TO_JSON(VoiceType, voiceType_);
      };
      friend void from_json(const Darabonba::Json& j, TtsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BackgroundEnabled, backgroundEnabled_);
        DARABONBA_PTR_FROM_JSON(BackgroundSound, backgroundSound_);
        DARABONBA_PTR_FROM_JSON(BackgroundVolume, backgroundVolume_);
        DARABONBA_PTR_FROM_JSON(CustomerAccountId, customerAccountId_);
        DARABONBA_PTR_FROM_JSON(MixingEnabled, mixingEnabled_);
        DARABONBA_PTR_FROM_JSON(MixingTemplate, mixingTemplate_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
        DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
        DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
        DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
        DARABONBA_PTR_FROM_JSON(VoiceType, voiceType_);
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
      virtual bool empty() const override { return this->backgroundEnabled_ == nullptr
        && this->backgroundSound_ == nullptr && this->backgroundVolume_ == nullptr && this->customerAccountId_ == nullptr && this->mixingEnabled_ == nullptr && this->mixingTemplate_ == nullptr
        && this->resourceId_ == nullptr && this->ttsSpeed_ == nullptr && this->ttsStyle_ == nullptr && this->ttsVolume_ == nullptr && this->voiceCode_ == nullptr
        && this->voiceType_ == nullptr; };
      // backgroundEnabled Field Functions 
      bool hasBackgroundEnabled() const { return this->backgroundEnabled_ != nullptr;};
      void deleteBackgroundEnabled() { this->backgroundEnabled_ = nullptr;};
      inline bool getBackgroundEnabled() const { DARABONBA_PTR_GET_DEFAULT(backgroundEnabled_, false) };
      inline TtsConfig& setBackgroundEnabled(bool backgroundEnabled) { DARABONBA_PTR_SET_VALUE(backgroundEnabled_, backgroundEnabled) };


      // backgroundSound Field Functions 
      bool hasBackgroundSound() const { return this->backgroundSound_ != nullptr;};
      void deleteBackgroundSound() { this->backgroundSound_ = nullptr;};
      inline int64_t getBackgroundSound() const { DARABONBA_PTR_GET_DEFAULT(backgroundSound_, 0L) };
      inline TtsConfig& setBackgroundSound(int64_t backgroundSound) { DARABONBA_PTR_SET_VALUE(backgroundSound_, backgroundSound) };


      // backgroundVolume Field Functions 
      bool hasBackgroundVolume() const { return this->backgroundVolume_ != nullptr;};
      void deleteBackgroundVolume() { this->backgroundVolume_ = nullptr;};
      inline int64_t getBackgroundVolume() const { DARABONBA_PTR_GET_DEFAULT(backgroundVolume_, 0L) };
      inline TtsConfig& setBackgroundVolume(int64_t backgroundVolume) { DARABONBA_PTR_SET_VALUE(backgroundVolume_, backgroundVolume) };


      // customerAccountId Field Functions 
      bool hasCustomerAccountId() const { return this->customerAccountId_ != nullptr;};
      void deleteCustomerAccountId() { this->customerAccountId_ = nullptr;};
      inline int64_t getCustomerAccountId() const { DARABONBA_PTR_GET_DEFAULT(customerAccountId_, 0L) };
      inline TtsConfig& setCustomerAccountId(int64_t customerAccountId) { DARABONBA_PTR_SET_VALUE(customerAccountId_, customerAccountId) };


      // mixingEnabled Field Functions 
      bool hasMixingEnabled() const { return this->mixingEnabled_ != nullptr;};
      void deleteMixingEnabled() { this->mixingEnabled_ = nullptr;};
      inline bool getMixingEnabled() const { DARABONBA_PTR_GET_DEFAULT(mixingEnabled_, false) };
      inline TtsConfig& setMixingEnabled(bool mixingEnabled) { DARABONBA_PTR_SET_VALUE(mixingEnabled_, mixingEnabled) };


      // mixingTemplate Field Functions 
      bool hasMixingTemplate() const { return this->mixingTemplate_ != nullptr;};
      void deleteMixingTemplate() { this->mixingTemplate_ = nullptr;};
      inline int64_t getMixingTemplate() const { DARABONBA_PTR_GET_DEFAULT(mixingTemplate_, 0L) };
      inline TtsConfig& setMixingTemplate(int64_t mixingTemplate) { DARABONBA_PTR_SET_VALUE(mixingTemplate_, mixingTemplate) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline TtsConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // ttsSpeed Field Functions 
      bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
      void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
      inline int64_t getTtsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0L) };
      inline TtsConfig& setTtsSpeed(int64_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


      // ttsStyle Field Functions 
      bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
      void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
      inline string getTtsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
      inline TtsConfig& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


      // ttsVolume Field Functions 
      bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
      void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
      inline int64_t getTtsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0L) };
      inline TtsConfig& setTtsVolume(int64_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


      // voiceCode Field Functions 
      bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
      void deleteVoiceCode() { this->voiceCode_ = nullptr;};
      inline string getVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
      inline TtsConfig& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


      // voiceType Field Functions 
      bool hasVoiceType() const { return this->voiceType_ != nullptr;};
      void deleteVoiceType() { this->voiceType_ = nullptr;};
      inline string getVoiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
      inline TtsConfig& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


    protected:
      shared_ptr<bool> backgroundEnabled_ {};
      // 背景音id
      shared_ptr<int64_t> backgroundSound_ {};
      // 背景音音量(id)
      shared_ptr<int64_t> backgroundVolume_ {};
      shared_ptr<int64_t> customerAccountId_ {};
      shared_ptr<bool> mixingEnabled_ {};
      // 混音模版id
      shared_ptr<int64_t> mixingTemplate_ {};
      shared_ptr<string> resourceId_ {};
      // TTS 变量播放时的声音速度。取值范围：-200~200，默认值为 0。
      shared_ptr<int64_t> ttsSpeed_ {};
      // 声音风格
      shared_ptr<string> ttsStyle_ {};
      // TTS 变量播放的音量。取值范围：0~100，默认值为 0。
      shared_ptr<int64_t> ttsVolume_ {};
      // 声音编码
      shared_ptr<string> voiceCode_ {};
      // 声音类型
      shared_ptr<string> voiceType_ {};
    };

    class InterruptConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InterruptConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AvoidInterruptDTO, avoidInterruptDTO_);
        DARABONBA_PTR_TO_JSON(EnableAvoidInterrupt, enableAvoidInterrupt_);
        DARABONBA_PTR_TO_JSON(EnableInterruptBackchannel, enableInterruptBackchannel_);
        DARABONBA_PTR_TO_JSON(EnableStartwordEntireNotInterrupt, enableStartwordEntireNotInterrupt_);
        DARABONBA_PTR_TO_JSON(EnableStartwordNotInterrupt, enableStartwordNotInterrupt_);
        DARABONBA_PTR_TO_JSON(StartwordProtectDuration, startwordProtectDuration_);
      };
      friend void from_json(const Darabonba::Json& j, InterruptConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AvoidInterruptDTO, avoidInterruptDTO_);
        DARABONBA_PTR_FROM_JSON(EnableAvoidInterrupt, enableAvoidInterrupt_);
        DARABONBA_PTR_FROM_JSON(EnableInterruptBackchannel, enableInterruptBackchannel_);
        DARABONBA_PTR_FROM_JSON(EnableStartwordEntireNotInterrupt, enableStartwordEntireNotInterrupt_);
        DARABONBA_PTR_FROM_JSON(EnableStartwordNotInterrupt, enableStartwordNotInterrupt_);
        DARABONBA_PTR_FROM_JSON(StartwordProtectDuration, startwordProtectDuration_);
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
      class AvoidInterruptDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvoidInterruptDTO& obj) { 
          DARABONBA_PTR_TO_JSON(InterruptNum, interruptNum_);
          DARABONBA_PTR_TO_JSON(InterruptProtectDuration, interruptProtectDuration_);
        };
        friend void from_json(const Darabonba::Json& j, AvoidInterruptDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(InterruptNum, interruptNum_);
          DARABONBA_PTR_FROM_JSON(InterruptProtectDuration, interruptProtectDuration_);
        };
        AvoidInterruptDTO() = default ;
        AvoidInterruptDTO(const AvoidInterruptDTO &) = default ;
        AvoidInterruptDTO(AvoidInterruptDTO &&) = default ;
        AvoidInterruptDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvoidInterruptDTO() = default ;
        AvoidInterruptDTO& operator=(const AvoidInterruptDTO &) = default ;
        AvoidInterruptDTO& operator=(AvoidInterruptDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->interruptNum_ == nullptr
        && this->interruptProtectDuration_ == nullptr; };
        // interruptNum Field Functions 
        bool hasInterruptNum() const { return this->interruptNum_ != nullptr;};
        void deleteInterruptNum() { this->interruptNum_ = nullptr;};
        inline int64_t getInterruptNum() const { DARABONBA_PTR_GET_DEFAULT(interruptNum_, 0L) };
        inline AvoidInterruptDTO& setInterruptNum(int64_t interruptNum) { DARABONBA_PTR_SET_VALUE(interruptNum_, interruptNum) };


        // interruptProtectDuration Field Functions 
        bool hasInterruptProtectDuration() const { return this->interruptProtectDuration_ != nullptr;};
        void deleteInterruptProtectDuration() { this->interruptProtectDuration_ = nullptr;};
        inline double getInterruptProtectDuration() const { DARABONBA_PTR_GET_DEFAULT(interruptProtectDuration_, 0.0) };
        inline AvoidInterruptDTO& setInterruptProtectDuration(double interruptProtectDuration) { DARABONBA_PTR_SET_VALUE(interruptProtectDuration_, interruptProtectDuration) };


      protected:
        shared_ptr<int64_t> interruptNum_ {};
        shared_ptr<double> interruptProtectDuration_ {};
      };

      virtual bool empty() const override { return this->avoidInterruptDTO_ == nullptr
        && this->enableAvoidInterrupt_ == nullptr && this->enableInterruptBackchannel_ == nullptr && this->enableStartwordEntireNotInterrupt_ == nullptr && this->enableStartwordNotInterrupt_ == nullptr && this->startwordProtectDuration_ == nullptr; };
      // avoidInterruptDTO Field Functions 
      bool hasAvoidInterruptDTO() const { return this->avoidInterruptDTO_ != nullptr;};
      void deleteAvoidInterruptDTO() { this->avoidInterruptDTO_ = nullptr;};
      inline const InterruptConfig::AvoidInterruptDTO & getAvoidInterruptDTO() const { DARABONBA_PTR_GET_CONST(avoidInterruptDTO_, InterruptConfig::AvoidInterruptDTO) };
      inline InterruptConfig::AvoidInterruptDTO getAvoidInterruptDTO() { DARABONBA_PTR_GET(avoidInterruptDTO_, InterruptConfig::AvoidInterruptDTO) };
      inline InterruptConfig& setAvoidInterruptDTO(const InterruptConfig::AvoidInterruptDTO & avoidInterruptDTO) { DARABONBA_PTR_SET_VALUE(avoidInterruptDTO_, avoidInterruptDTO) };
      inline InterruptConfig& setAvoidInterruptDTO(InterruptConfig::AvoidInterruptDTO && avoidInterruptDTO) { DARABONBA_PTR_SET_RVALUE(avoidInterruptDTO_, avoidInterruptDTO) };


      // enableAvoidInterrupt Field Functions 
      bool hasEnableAvoidInterrupt() const { return this->enableAvoidInterrupt_ != nullptr;};
      void deleteEnableAvoidInterrupt() { this->enableAvoidInterrupt_ = nullptr;};
      inline bool getEnableAvoidInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableAvoidInterrupt_, false) };
      inline InterruptConfig& setEnableAvoidInterrupt(bool enableAvoidInterrupt) { DARABONBA_PTR_SET_VALUE(enableAvoidInterrupt_, enableAvoidInterrupt) };


      // enableInterruptBackchannel Field Functions 
      bool hasEnableInterruptBackchannel() const { return this->enableInterruptBackchannel_ != nullptr;};
      void deleteEnableInterruptBackchannel() { this->enableInterruptBackchannel_ = nullptr;};
      inline bool getEnableInterruptBackchannel() const { DARABONBA_PTR_GET_DEFAULT(enableInterruptBackchannel_, false) };
      inline InterruptConfig& setEnableInterruptBackchannel(bool enableInterruptBackchannel) { DARABONBA_PTR_SET_VALUE(enableInterruptBackchannel_, enableInterruptBackchannel) };


      // enableStartwordEntireNotInterrupt Field Functions 
      bool hasEnableStartwordEntireNotInterrupt() const { return this->enableStartwordEntireNotInterrupt_ != nullptr;};
      void deleteEnableStartwordEntireNotInterrupt() { this->enableStartwordEntireNotInterrupt_ = nullptr;};
      inline bool getEnableStartwordEntireNotInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableStartwordEntireNotInterrupt_, false) };
      inline InterruptConfig& setEnableStartwordEntireNotInterrupt(bool enableStartwordEntireNotInterrupt) { DARABONBA_PTR_SET_VALUE(enableStartwordEntireNotInterrupt_, enableStartwordEntireNotInterrupt) };


      // enableStartwordNotInterrupt Field Functions 
      bool hasEnableStartwordNotInterrupt() const { return this->enableStartwordNotInterrupt_ != nullptr;};
      void deleteEnableStartwordNotInterrupt() { this->enableStartwordNotInterrupt_ = nullptr;};
      inline bool getEnableStartwordNotInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableStartwordNotInterrupt_, false) };
      inline InterruptConfig& setEnableStartwordNotInterrupt(bool enableStartwordNotInterrupt) { DARABONBA_PTR_SET_VALUE(enableStartwordNotInterrupt_, enableStartwordNotInterrupt) };


      // startwordProtectDuration Field Functions 
      bool hasStartwordProtectDuration() const { return this->startwordProtectDuration_ != nullptr;};
      void deleteStartwordProtectDuration() { this->startwordProtectDuration_ = nullptr;};
      inline double getStartwordProtectDuration() const { DARABONBA_PTR_GET_DEFAULT(startwordProtectDuration_, 0.0) };
      inline InterruptConfig& setStartwordProtectDuration(double startwordProtectDuration) { DARABONBA_PTR_SET_VALUE(startwordProtectDuration_, startwordProtectDuration) };


    protected:
      // 防止连续抢话功能配置
      shared_ptr<InterruptConfig::AvoidInterruptDTO> avoidInterruptDTO_ {};
      // 防止连续抢话功能是否开启
      shared_ptr<bool> enableAvoidInterrupt_ {};
      shared_ptr<bool> enableInterruptBackchannel_ {};
      // 开场白全程不打断
      shared_ptr<bool> enableStartwordEntireNotInterrupt_ {};
      // 开场白不打断配置是否开启
      shared_ptr<bool> enableStartwordNotInterrupt_ {};
      // 开场白保护时长
      shared_ptr<double> startwordProtectDuration_ {};
    };

    virtual bool empty() const override { return this->applicationCode_ == nullptr
        && this->applicationCps_ == nullptr && this->applicationName_ == nullptr && this->callAssistantHangup_ == nullptr && this->callAssistantRecognize_ == nullptr && this->callConnectedTriggerModel_ == nullptr
        && this->dtmfAllowedDigits_ == nullptr && this->dtmfAutoValidateEnable_ == nullptr && this->dtmfDigitCount_ == nullptr && this->dtmfInputTimeout_ == nullptr && this->dtmfOutOfRangeAction_ == nullptr
        && this->dtmfRetryPlayTimes_ == nullptr && this->dtmfRetryPromptText_ == nullptr && this->dyvmsSceneName_ == nullptr && this->enableDtmfReceive_ == nullptr && this->enableMorse_ == nullptr
        && this->interruptConfig_ == nullptr && this->modelCode_ == nullptr && this->modelVersion_ == nullptr && this->muteActive_ == nullptr && this->muteDuration_ == nullptr
        && this->muteHangupNum_ == nullptr && this->ownerId_ == nullptr && this->prompt_ == nullptr && this->qualificationId_ == nullptr && this->qualificationName_ == nullptr
        && this->recordingFile_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sessionTimeout_ == nullptr && this->source_ == nullptr
        && this->speechContent_ == nullptr && this->speechId_ == nullptr && this->startWord_ == nullptr && this->startWordType_ == nullptr && this->ttsConfig_ == nullptr
        && this->usageDesc_ == nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline UpdateModelApplicationRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // applicationCps Field Functions 
    bool hasApplicationCps() const { return this->applicationCps_ != nullptr;};
    void deleteApplicationCps() { this->applicationCps_ = nullptr;};
    inline int64_t getApplicationCps() const { DARABONBA_PTR_GET_DEFAULT(applicationCps_, 0L) };
    inline UpdateModelApplicationRequest& setApplicationCps(int64_t applicationCps) { DARABONBA_PTR_SET_VALUE(applicationCps_, applicationCps) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateModelApplicationRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // callAssistantHangup Field Functions 
    bool hasCallAssistantHangup() const { return this->callAssistantHangup_ != nullptr;};
    void deleteCallAssistantHangup() { this->callAssistantHangup_ = nullptr;};
    inline bool getCallAssistantHangup() const { DARABONBA_PTR_GET_DEFAULT(callAssistantHangup_, false) };
    inline UpdateModelApplicationRequest& setCallAssistantHangup(bool callAssistantHangup) { DARABONBA_PTR_SET_VALUE(callAssistantHangup_, callAssistantHangup) };


    // callAssistantRecognize Field Functions 
    bool hasCallAssistantRecognize() const { return this->callAssistantRecognize_ != nullptr;};
    void deleteCallAssistantRecognize() { this->callAssistantRecognize_ = nullptr;};
    inline bool getCallAssistantRecognize() const { DARABONBA_PTR_GET_DEFAULT(callAssistantRecognize_, false) };
    inline UpdateModelApplicationRequest& setCallAssistantRecognize(bool callAssistantRecognize) { DARABONBA_PTR_SET_VALUE(callAssistantRecognize_, callAssistantRecognize) };


    // callConnectedTriggerModel Field Functions 
    bool hasCallConnectedTriggerModel() const { return this->callConnectedTriggerModel_ != nullptr;};
    void deleteCallConnectedTriggerModel() { this->callConnectedTriggerModel_ = nullptr;};
    inline bool getCallConnectedTriggerModel() const { DARABONBA_PTR_GET_DEFAULT(callConnectedTriggerModel_, false) };
    inline UpdateModelApplicationRequest& setCallConnectedTriggerModel(bool callConnectedTriggerModel) { DARABONBA_PTR_SET_VALUE(callConnectedTriggerModel_, callConnectedTriggerModel) };


    // dtmfAllowedDigits Field Functions 
    bool hasDtmfAllowedDigits() const { return this->dtmfAllowedDigits_ != nullptr;};
    void deleteDtmfAllowedDigits() { this->dtmfAllowedDigits_ = nullptr;};
    inline string getDtmfAllowedDigits() const { DARABONBA_PTR_GET_DEFAULT(dtmfAllowedDigits_, "") };
    inline UpdateModelApplicationRequest& setDtmfAllowedDigits(string dtmfAllowedDigits) { DARABONBA_PTR_SET_VALUE(dtmfAllowedDigits_, dtmfAllowedDigits) };


    // dtmfAutoValidateEnable Field Functions 
    bool hasDtmfAutoValidateEnable() const { return this->dtmfAutoValidateEnable_ != nullptr;};
    void deleteDtmfAutoValidateEnable() { this->dtmfAutoValidateEnable_ = nullptr;};
    inline bool getDtmfAutoValidateEnable() const { DARABONBA_PTR_GET_DEFAULT(dtmfAutoValidateEnable_, false) };
    inline UpdateModelApplicationRequest& setDtmfAutoValidateEnable(bool dtmfAutoValidateEnable) { DARABONBA_PTR_SET_VALUE(dtmfAutoValidateEnable_, dtmfAutoValidateEnable) };


    // dtmfDigitCount Field Functions 
    bool hasDtmfDigitCount() const { return this->dtmfDigitCount_ != nullptr;};
    void deleteDtmfDigitCount() { this->dtmfDigitCount_ = nullptr;};
    inline int64_t getDtmfDigitCount() const { DARABONBA_PTR_GET_DEFAULT(dtmfDigitCount_, 0L) };
    inline UpdateModelApplicationRequest& setDtmfDigitCount(int64_t dtmfDigitCount) { DARABONBA_PTR_SET_VALUE(dtmfDigitCount_, dtmfDigitCount) };


    // dtmfInputTimeout Field Functions 
    bool hasDtmfInputTimeout() const { return this->dtmfInputTimeout_ != nullptr;};
    void deleteDtmfInputTimeout() { this->dtmfInputTimeout_ = nullptr;};
    inline int64_t getDtmfInputTimeout() const { DARABONBA_PTR_GET_DEFAULT(dtmfInputTimeout_, 0L) };
    inline UpdateModelApplicationRequest& setDtmfInputTimeout(int64_t dtmfInputTimeout) { DARABONBA_PTR_SET_VALUE(dtmfInputTimeout_, dtmfInputTimeout) };


    // dtmfOutOfRangeAction Field Functions 
    bool hasDtmfOutOfRangeAction() const { return this->dtmfOutOfRangeAction_ != nullptr;};
    void deleteDtmfOutOfRangeAction() { this->dtmfOutOfRangeAction_ = nullptr;};
    inline string getDtmfOutOfRangeAction() const { DARABONBA_PTR_GET_DEFAULT(dtmfOutOfRangeAction_, "") };
    inline UpdateModelApplicationRequest& setDtmfOutOfRangeAction(string dtmfOutOfRangeAction) { DARABONBA_PTR_SET_VALUE(dtmfOutOfRangeAction_, dtmfOutOfRangeAction) };


    // dtmfRetryPlayTimes Field Functions 
    bool hasDtmfRetryPlayTimes() const { return this->dtmfRetryPlayTimes_ != nullptr;};
    void deleteDtmfRetryPlayTimes() { this->dtmfRetryPlayTimes_ = nullptr;};
    inline int64_t getDtmfRetryPlayTimes() const { DARABONBA_PTR_GET_DEFAULT(dtmfRetryPlayTimes_, 0L) };
    inline UpdateModelApplicationRequest& setDtmfRetryPlayTimes(int64_t dtmfRetryPlayTimes) { DARABONBA_PTR_SET_VALUE(dtmfRetryPlayTimes_, dtmfRetryPlayTimes) };


    // dtmfRetryPromptText Field Functions 
    bool hasDtmfRetryPromptText() const { return this->dtmfRetryPromptText_ != nullptr;};
    void deleteDtmfRetryPromptText() { this->dtmfRetryPromptText_ = nullptr;};
    inline string getDtmfRetryPromptText() const { DARABONBA_PTR_GET_DEFAULT(dtmfRetryPromptText_, "") };
    inline UpdateModelApplicationRequest& setDtmfRetryPromptText(string dtmfRetryPromptText) { DARABONBA_PTR_SET_VALUE(dtmfRetryPromptText_, dtmfRetryPromptText) };


    // dyvmsSceneName Field Functions 
    bool hasDyvmsSceneName() const { return this->dyvmsSceneName_ != nullptr;};
    void deleteDyvmsSceneName() { this->dyvmsSceneName_ = nullptr;};
    inline string getDyvmsSceneName() const { DARABONBA_PTR_GET_DEFAULT(dyvmsSceneName_, "") };
    inline UpdateModelApplicationRequest& setDyvmsSceneName(string dyvmsSceneName) { DARABONBA_PTR_SET_VALUE(dyvmsSceneName_, dyvmsSceneName) };


    // enableDtmfReceive Field Functions 
    bool hasEnableDtmfReceive() const { return this->enableDtmfReceive_ != nullptr;};
    void deleteEnableDtmfReceive() { this->enableDtmfReceive_ = nullptr;};
    inline bool getEnableDtmfReceive() const { DARABONBA_PTR_GET_DEFAULT(enableDtmfReceive_, false) };
    inline UpdateModelApplicationRequest& setEnableDtmfReceive(bool enableDtmfReceive) { DARABONBA_PTR_SET_VALUE(enableDtmfReceive_, enableDtmfReceive) };


    // enableMorse Field Functions 
    bool hasEnableMorse() const { return this->enableMorse_ != nullptr;};
    void deleteEnableMorse() { this->enableMorse_ = nullptr;};
    inline bool getEnableMorse() const { DARABONBA_PTR_GET_DEFAULT(enableMorse_, false) };
    inline UpdateModelApplicationRequest& setEnableMorse(bool enableMorse) { DARABONBA_PTR_SET_VALUE(enableMorse_, enableMorse) };


    // interruptConfig Field Functions 
    bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
    void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
    inline const UpdateModelApplicationRequest::InterruptConfig & getInterruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, UpdateModelApplicationRequest::InterruptConfig) };
    inline UpdateModelApplicationRequest::InterruptConfig getInterruptConfig() { DARABONBA_PTR_GET(interruptConfig_, UpdateModelApplicationRequest::InterruptConfig) };
    inline UpdateModelApplicationRequest& setInterruptConfig(const UpdateModelApplicationRequest::InterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
    inline UpdateModelApplicationRequest& setInterruptConfig(UpdateModelApplicationRequest::InterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline UpdateModelApplicationRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline UpdateModelApplicationRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // muteActive Field Functions 
    bool hasMuteActive() const { return this->muteActive_ != nullptr;};
    void deleteMuteActive() { this->muteActive_ = nullptr;};
    inline bool getMuteActive() const { DARABONBA_PTR_GET_DEFAULT(muteActive_, false) };
    inline UpdateModelApplicationRequest& setMuteActive(bool muteActive) { DARABONBA_PTR_SET_VALUE(muteActive_, muteActive) };


    // muteDuration Field Functions 
    bool hasMuteDuration() const { return this->muteDuration_ != nullptr;};
    void deleteMuteDuration() { this->muteDuration_ = nullptr;};
    inline int64_t getMuteDuration() const { DARABONBA_PTR_GET_DEFAULT(muteDuration_, 0L) };
    inline UpdateModelApplicationRequest& setMuteDuration(int64_t muteDuration) { DARABONBA_PTR_SET_VALUE(muteDuration_, muteDuration) };


    // muteHangupNum Field Functions 
    bool hasMuteHangupNum() const { return this->muteHangupNum_ != nullptr;};
    void deleteMuteHangupNum() { this->muteHangupNum_ = nullptr;};
    inline int64_t getMuteHangupNum() const { DARABONBA_PTR_GET_DEFAULT(muteHangupNum_, 0L) };
    inline UpdateModelApplicationRequest& setMuteHangupNum(int64_t muteHangupNum) { DARABONBA_PTR_SET_VALUE(muteHangupNum_, muteHangupNum) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateModelApplicationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateModelApplicationRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline UpdateModelApplicationRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string getQualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline UpdateModelApplicationRequest& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // recordingFile Field Functions 
    bool hasRecordingFile() const { return this->recordingFile_ != nullptr;};
    void deleteRecordingFile() { this->recordingFile_ = nullptr;};
    inline string getRecordingFile() const { DARABONBA_PTR_GET_DEFAULT(recordingFile_, "") };
    inline UpdateModelApplicationRequest& setRecordingFile(string recordingFile) { DARABONBA_PTR_SET_VALUE(recordingFile_, recordingFile) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateModelApplicationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateModelApplicationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int64_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0L) };
    inline UpdateModelApplicationRequest& setSessionTimeout(int64_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateModelApplicationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // speechContent Field Functions 
    bool hasSpeechContent() const { return this->speechContent_ != nullptr;};
    void deleteSpeechContent() { this->speechContent_ = nullptr;};
    inline string getSpeechContent() const { DARABONBA_PTR_GET_DEFAULT(speechContent_, "") };
    inline UpdateModelApplicationRequest& setSpeechContent(string speechContent) { DARABONBA_PTR_SET_VALUE(speechContent_, speechContent) };


    // speechId Field Functions 
    bool hasSpeechId() const { return this->speechId_ != nullptr;};
    void deleteSpeechId() { this->speechId_ = nullptr;};
    inline int64_t getSpeechId() const { DARABONBA_PTR_GET_DEFAULT(speechId_, 0L) };
    inline UpdateModelApplicationRequest& setSpeechId(int64_t speechId) { DARABONBA_PTR_SET_VALUE(speechId_, speechId) };


    // startWord Field Functions 
    bool hasStartWord() const { return this->startWord_ != nullptr;};
    void deleteStartWord() { this->startWord_ = nullptr;};
    inline string getStartWord() const { DARABONBA_PTR_GET_DEFAULT(startWord_, "") };
    inline UpdateModelApplicationRequest& setStartWord(string startWord) { DARABONBA_PTR_SET_VALUE(startWord_, startWord) };


    // startWordType Field Functions 
    bool hasStartWordType() const { return this->startWordType_ != nullptr;};
    void deleteStartWordType() { this->startWordType_ = nullptr;};
    inline int64_t getStartWordType() const { DARABONBA_PTR_GET_DEFAULT(startWordType_, 0L) };
    inline UpdateModelApplicationRequest& setStartWordType(int64_t startWordType) { DARABONBA_PTR_SET_VALUE(startWordType_, startWordType) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const UpdateModelApplicationRequest::TtsConfig & getTtsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, UpdateModelApplicationRequest::TtsConfig) };
    inline UpdateModelApplicationRequest::TtsConfig getTtsConfig() { DARABONBA_PTR_GET(ttsConfig_, UpdateModelApplicationRequest::TtsConfig) };
    inline UpdateModelApplicationRequest& setTtsConfig(const UpdateModelApplicationRequest::TtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline UpdateModelApplicationRequest& setTtsConfig(UpdateModelApplicationRequest::TtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // usageDesc Field Functions 
    bool hasUsageDesc() const { return this->usageDesc_ != nullptr;};
    void deleteUsageDesc() { this->usageDesc_ = nullptr;};
    inline string getUsageDesc() const { DARABONBA_PTR_GET_DEFAULT(usageDesc_, "") };
    inline UpdateModelApplicationRequest& setUsageDesc(string usageDesc) { DARABONBA_PTR_SET_VALUE(usageDesc_, usageDesc) };


  protected:
    // 应用编码
    // 
    // This parameter is required.
    shared_ptr<string> applicationCode_ {};
    // 应用并发请求数
    shared_ptr<int64_t> applicationCps_ {};
    // 模型应用名称
    shared_ptr<string> applicationName_ {};
    shared_ptr<bool> callAssistantHangup_ {};
    // 通话助手识别
    shared_ptr<bool> callAssistantRecognize_ {};
    shared_ptr<bool> callConnectedTriggerModel_ {};
    shared_ptr<string> dtmfAllowedDigits_ {};
    shared_ptr<bool> dtmfAutoValidateEnable_ {};
    shared_ptr<int64_t> dtmfDigitCount_ {};
    shared_ptr<int64_t> dtmfInputTimeout_ {};
    shared_ptr<string> dtmfOutOfRangeAction_ {};
    shared_ptr<int64_t> dtmfRetryPlayTimes_ {};
    shared_ptr<string> dtmfRetryPromptText_ {};
    // 场景名称
    shared_ptr<string> dyvmsSceneName_ {};
    shared_ptr<bool> enableDtmfReceive_ {};
    shared_ptr<bool> enableMorse_ {};
    // 打断配置
    shared_ptr<UpdateModelApplicationRequest::InterruptConfig> interruptConfig_ {};
    // 模型编码
    shared_ptr<string> modelCode_ {};
    // 模型版本
    shared_ptr<string> modelVersion_ {};
    // 第一个静音是否唤起模型
    shared_ptr<bool> muteActive_ {};
    // 静音时长
    shared_ptr<int64_t> muteDuration_ {};
    // 连续多少个静音事件主动挂机
    shared_ptr<int64_t> muteHangupNum_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 提示词
    shared_ptr<string> prompt_ {};
    // 资质ID
    shared_ptr<int64_t> qualificationId_ {};
    // 资质名称
    shared_ptr<string> qualificationName_ {};
    shared_ptr<string> recordingFile_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 最大通话时长
    shared_ptr<int64_t> sessionTimeout_ {};
    // 来源
    shared_ptr<string> source_ {};
    // 话术内容
    shared_ptr<string> speechContent_ {};
    // 话束id
    shared_ptr<int64_t> speechId_ {};
    // 开场白
    shared_ptr<string> startWord_ {};
    shared_ptr<int64_t> startWordType_ {};
    // tts配置，包括音色、音量、音速等。
    shared_ptr<UpdateModelApplicationRequest::TtsConfig> ttsConfig_ {};
    // 用途
    shared_ptr<string> usageDesc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
