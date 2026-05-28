// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMODELAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMODELAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddModelApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddModelApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCps, applicationCps_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CallConnectedTriggerModel, callConnectedTriggerModel_);
      DARABONBA_PTR_TO_JSON(DyvmsSceneName, dyvmsSceneName_);
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
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SpeechContent, speechContent_);
      DARABONBA_PTR_TO_JSON(SpeechId, speechId_);
      DARABONBA_PTR_TO_JSON(StartWord, startWord_);
      DARABONBA_PTR_TO_JSON(StartWordType, startWordType_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(UsageDesc, usageDesc_);
    };
    friend void from_json(const Darabonba::Json& j, AddModelApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCps, applicationCps_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CallConnectedTriggerModel, callConnectedTriggerModel_);
      DARABONBA_PTR_FROM_JSON(DyvmsSceneName, dyvmsSceneName_);
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
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SpeechContent, speechContent_);
      DARABONBA_PTR_FROM_JSON(SpeechId, speechId_);
      DARABONBA_PTR_FROM_JSON(StartWord, startWord_);
      DARABONBA_PTR_FROM_JSON(StartWordType, startWordType_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(UsageDesc, usageDesc_);
    };
    AddModelApplicationRequest() = default ;
    AddModelApplicationRequest(const AddModelApplicationRequest &) = default ;
    AddModelApplicationRequest(AddModelApplicationRequest &&) = default ;
    AddModelApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddModelApplicationRequest() = default ;
    AddModelApplicationRequest& operator=(const AddModelApplicationRequest &) = default ;
    AddModelApplicationRequest& operator=(AddModelApplicationRequest &&) = default ;
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
      shared_ptr<int64_t> backgroundSound_ {};
      shared_ptr<int64_t> backgroundVolume_ {};
      shared_ptr<int64_t> customerAccountId_ {};
      shared_ptr<bool> mixingEnabled_ {};
      shared_ptr<int64_t> mixingTemplate_ {};
      shared_ptr<string> resourceId_ {};
      // TTS 变量播放时的声音速度。取值范围：-200~200，默认值为 0。
      shared_ptr<int64_t> ttsSpeed_ {};
      // 声音风格
      shared_ptr<string> ttsStyle_ {};
      // TTS 变量播放的音量。取值范围：0~100，默认值为 0。
      shared_ptr<int64_t> ttsVolume_ {};
      // 音色code
      shared_ptr<string> voiceCode_ {};
      // 声音类型
      shared_ptr<string> voiceType_ {};
    };

    virtual bool empty() const override { return this->applicationCps_ == nullptr
        && this->applicationName_ == nullptr && this->callConnectedTriggerModel_ == nullptr && this->dyvmsSceneName_ == nullptr && this->modelCode_ == nullptr && this->modelVersion_ == nullptr
        && this->muteActive_ == nullptr && this->muteDuration_ == nullptr && this->muteHangupNum_ == nullptr && this->ownerId_ == nullptr && this->prompt_ == nullptr
        && this->qualificationId_ == nullptr && this->qualificationName_ == nullptr && this->recordingFile_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->source_ == nullptr && this->speechContent_ == nullptr && this->speechId_ == nullptr && this->startWord_ == nullptr && this->startWordType_ == nullptr
        && this->ttsConfig_ == nullptr && this->usageDesc_ == nullptr; };
    // applicationCps Field Functions 
    bool hasApplicationCps() const { return this->applicationCps_ != nullptr;};
    void deleteApplicationCps() { this->applicationCps_ = nullptr;};
    inline int64_t getApplicationCps() const { DARABONBA_PTR_GET_DEFAULT(applicationCps_, 0L) };
    inline AddModelApplicationRequest& setApplicationCps(int64_t applicationCps) { DARABONBA_PTR_SET_VALUE(applicationCps_, applicationCps) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline AddModelApplicationRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // callConnectedTriggerModel Field Functions 
    bool hasCallConnectedTriggerModel() const { return this->callConnectedTriggerModel_ != nullptr;};
    void deleteCallConnectedTriggerModel() { this->callConnectedTriggerModel_ = nullptr;};
    inline bool getCallConnectedTriggerModel() const { DARABONBA_PTR_GET_DEFAULT(callConnectedTriggerModel_, false) };
    inline AddModelApplicationRequest& setCallConnectedTriggerModel(bool callConnectedTriggerModel) { DARABONBA_PTR_SET_VALUE(callConnectedTriggerModel_, callConnectedTriggerModel) };


    // dyvmsSceneName Field Functions 
    bool hasDyvmsSceneName() const { return this->dyvmsSceneName_ != nullptr;};
    void deleteDyvmsSceneName() { this->dyvmsSceneName_ = nullptr;};
    inline string getDyvmsSceneName() const { DARABONBA_PTR_GET_DEFAULT(dyvmsSceneName_, "") };
    inline AddModelApplicationRequest& setDyvmsSceneName(string dyvmsSceneName) { DARABONBA_PTR_SET_VALUE(dyvmsSceneName_, dyvmsSceneName) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline AddModelApplicationRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline AddModelApplicationRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // muteActive Field Functions 
    bool hasMuteActive() const { return this->muteActive_ != nullptr;};
    void deleteMuteActive() { this->muteActive_ = nullptr;};
    inline bool getMuteActive() const { DARABONBA_PTR_GET_DEFAULT(muteActive_, false) };
    inline AddModelApplicationRequest& setMuteActive(bool muteActive) { DARABONBA_PTR_SET_VALUE(muteActive_, muteActive) };


    // muteDuration Field Functions 
    bool hasMuteDuration() const { return this->muteDuration_ != nullptr;};
    void deleteMuteDuration() { this->muteDuration_ = nullptr;};
    inline int64_t getMuteDuration() const { DARABONBA_PTR_GET_DEFAULT(muteDuration_, 0L) };
    inline AddModelApplicationRequest& setMuteDuration(int64_t muteDuration) { DARABONBA_PTR_SET_VALUE(muteDuration_, muteDuration) };


    // muteHangupNum Field Functions 
    bool hasMuteHangupNum() const { return this->muteHangupNum_ != nullptr;};
    void deleteMuteHangupNum() { this->muteHangupNum_ = nullptr;};
    inline int64_t getMuteHangupNum() const { DARABONBA_PTR_GET_DEFAULT(muteHangupNum_, 0L) };
    inline AddModelApplicationRequest& setMuteHangupNum(int64_t muteHangupNum) { DARABONBA_PTR_SET_VALUE(muteHangupNum_, muteHangupNum) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddModelApplicationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline AddModelApplicationRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline AddModelApplicationRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string getQualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline AddModelApplicationRequest& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // recordingFile Field Functions 
    bool hasRecordingFile() const { return this->recordingFile_ != nullptr;};
    void deleteRecordingFile() { this->recordingFile_ = nullptr;};
    inline string getRecordingFile() const { DARABONBA_PTR_GET_DEFAULT(recordingFile_, "") };
    inline AddModelApplicationRequest& setRecordingFile(string recordingFile) { DARABONBA_PTR_SET_VALUE(recordingFile_, recordingFile) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddModelApplicationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddModelApplicationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddModelApplicationRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // speechContent Field Functions 
    bool hasSpeechContent() const { return this->speechContent_ != nullptr;};
    void deleteSpeechContent() { this->speechContent_ = nullptr;};
    inline string getSpeechContent() const { DARABONBA_PTR_GET_DEFAULT(speechContent_, "") };
    inline AddModelApplicationRequest& setSpeechContent(string speechContent) { DARABONBA_PTR_SET_VALUE(speechContent_, speechContent) };


    // speechId Field Functions 
    bool hasSpeechId() const { return this->speechId_ != nullptr;};
    void deleteSpeechId() { this->speechId_ = nullptr;};
    inline int64_t getSpeechId() const { DARABONBA_PTR_GET_DEFAULT(speechId_, 0L) };
    inline AddModelApplicationRequest& setSpeechId(int64_t speechId) { DARABONBA_PTR_SET_VALUE(speechId_, speechId) };


    // startWord Field Functions 
    bool hasStartWord() const { return this->startWord_ != nullptr;};
    void deleteStartWord() { this->startWord_ = nullptr;};
    inline string getStartWord() const { DARABONBA_PTR_GET_DEFAULT(startWord_, "") };
    inline AddModelApplicationRequest& setStartWord(string startWord) { DARABONBA_PTR_SET_VALUE(startWord_, startWord) };


    // startWordType Field Functions 
    bool hasStartWordType() const { return this->startWordType_ != nullptr;};
    void deleteStartWordType() { this->startWordType_ = nullptr;};
    inline int64_t getStartWordType() const { DARABONBA_PTR_GET_DEFAULT(startWordType_, 0L) };
    inline AddModelApplicationRequest& setStartWordType(int64_t startWordType) { DARABONBA_PTR_SET_VALUE(startWordType_, startWordType) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const AddModelApplicationRequest::TtsConfig & getTtsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, AddModelApplicationRequest::TtsConfig) };
    inline AddModelApplicationRequest::TtsConfig getTtsConfig() { DARABONBA_PTR_GET(ttsConfig_, AddModelApplicationRequest::TtsConfig) };
    inline AddModelApplicationRequest& setTtsConfig(const AddModelApplicationRequest::TtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline AddModelApplicationRequest& setTtsConfig(AddModelApplicationRequest::TtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // usageDesc Field Functions 
    bool hasUsageDesc() const { return this->usageDesc_ != nullptr;};
    void deleteUsageDesc() { this->usageDesc_ = nullptr;};
    inline string getUsageDesc() const { DARABONBA_PTR_GET_DEFAULT(usageDesc_, "") };
    inline AddModelApplicationRequest& setUsageDesc(string usageDesc) { DARABONBA_PTR_SET_VALUE(usageDesc_, usageDesc) };


  protected:
    // 应用并发请求数
    // 
    // This parameter is required.
    shared_ptr<int64_t> applicationCps_ {};
    // 模型应用名称
    // 
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    shared_ptr<bool> callConnectedTriggerModel_ {};
    // 场景名称
    shared_ptr<string> dyvmsSceneName_ {};
    // 模型编码
    // 
    // This parameter is required.
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
    // 来源
    shared_ptr<string> source_ {};
    // 话术内容
    shared_ptr<string> speechContent_ {};
    // 话束id
    shared_ptr<int64_t> speechId_ {};
    // 开场白
    // 
    // This parameter is required.
    shared_ptr<string> startWord_ {};
    shared_ptr<int64_t> startWordType_ {};
    // tts配置，包括音色、音量、音速等。
    // 
    // This parameter is required.
    shared_ptr<AddModelApplicationRequest::TtsConfig> ttsConfig_ {};
    // 用途
    shared_ptr<string> usageDesc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
