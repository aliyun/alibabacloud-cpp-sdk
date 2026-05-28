// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class UpdateModelApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelApplicationShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfigShrink_);
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
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfigShrink_);
      DARABONBA_PTR_TO_JSON(UsageDesc, usageDesc_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelApplicationShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfigShrink_);
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
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UsageDesc, usageDesc_);
    };
    UpdateModelApplicationShrinkRequest() = default ;
    UpdateModelApplicationShrinkRequest(const UpdateModelApplicationShrinkRequest &) = default ;
    UpdateModelApplicationShrinkRequest(UpdateModelApplicationShrinkRequest &&) = default ;
    UpdateModelApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelApplicationShrinkRequest() = default ;
    UpdateModelApplicationShrinkRequest& operator=(const UpdateModelApplicationShrinkRequest &) = default ;
    UpdateModelApplicationShrinkRequest& operator=(UpdateModelApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCode_ == nullptr
        && this->applicationCps_ == nullptr && this->applicationName_ == nullptr && this->callAssistantHangup_ == nullptr && this->callAssistantRecognize_ == nullptr && this->callConnectedTriggerModel_ == nullptr
        && this->dtmfAllowedDigits_ == nullptr && this->dtmfAutoValidateEnable_ == nullptr && this->dtmfDigitCount_ == nullptr && this->dtmfInputTimeout_ == nullptr && this->dtmfOutOfRangeAction_ == nullptr
        && this->dtmfRetryPlayTimes_ == nullptr && this->dtmfRetryPromptText_ == nullptr && this->dyvmsSceneName_ == nullptr && this->enableDtmfReceive_ == nullptr && this->enableMorse_ == nullptr
        && this->interruptConfigShrink_ == nullptr && this->modelCode_ == nullptr && this->modelVersion_ == nullptr && this->muteActive_ == nullptr && this->muteDuration_ == nullptr
        && this->muteHangupNum_ == nullptr && this->ownerId_ == nullptr && this->prompt_ == nullptr && this->qualificationId_ == nullptr && this->qualificationName_ == nullptr
        && this->recordingFile_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sessionTimeout_ == nullptr && this->source_ == nullptr
        && this->speechContent_ == nullptr && this->speechId_ == nullptr && this->startWord_ == nullptr && this->startWordType_ == nullptr && this->ttsConfigShrink_ == nullptr
        && this->usageDesc_ == nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline UpdateModelApplicationShrinkRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // applicationCps Field Functions 
    bool hasApplicationCps() const { return this->applicationCps_ != nullptr;};
    void deleteApplicationCps() { this->applicationCps_ = nullptr;};
    inline int64_t getApplicationCps() const { DARABONBA_PTR_GET_DEFAULT(applicationCps_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setApplicationCps(int64_t applicationCps) { DARABONBA_PTR_SET_VALUE(applicationCps_, applicationCps) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline UpdateModelApplicationShrinkRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // callAssistantHangup Field Functions 
    bool hasCallAssistantHangup() const { return this->callAssistantHangup_ != nullptr;};
    void deleteCallAssistantHangup() { this->callAssistantHangup_ = nullptr;};
    inline bool getCallAssistantHangup() const { DARABONBA_PTR_GET_DEFAULT(callAssistantHangup_, false) };
    inline UpdateModelApplicationShrinkRequest& setCallAssistantHangup(bool callAssistantHangup) { DARABONBA_PTR_SET_VALUE(callAssistantHangup_, callAssistantHangup) };


    // callAssistantRecognize Field Functions 
    bool hasCallAssistantRecognize() const { return this->callAssistantRecognize_ != nullptr;};
    void deleteCallAssistantRecognize() { this->callAssistantRecognize_ = nullptr;};
    inline bool getCallAssistantRecognize() const { DARABONBA_PTR_GET_DEFAULT(callAssistantRecognize_, false) };
    inline UpdateModelApplicationShrinkRequest& setCallAssistantRecognize(bool callAssistantRecognize) { DARABONBA_PTR_SET_VALUE(callAssistantRecognize_, callAssistantRecognize) };


    // callConnectedTriggerModel Field Functions 
    bool hasCallConnectedTriggerModel() const { return this->callConnectedTriggerModel_ != nullptr;};
    void deleteCallConnectedTriggerModel() { this->callConnectedTriggerModel_ = nullptr;};
    inline bool getCallConnectedTriggerModel() const { DARABONBA_PTR_GET_DEFAULT(callConnectedTriggerModel_, false) };
    inline UpdateModelApplicationShrinkRequest& setCallConnectedTriggerModel(bool callConnectedTriggerModel) { DARABONBA_PTR_SET_VALUE(callConnectedTriggerModel_, callConnectedTriggerModel) };


    // dtmfAllowedDigits Field Functions 
    bool hasDtmfAllowedDigits() const { return this->dtmfAllowedDigits_ != nullptr;};
    void deleteDtmfAllowedDigits() { this->dtmfAllowedDigits_ = nullptr;};
    inline string getDtmfAllowedDigits() const { DARABONBA_PTR_GET_DEFAULT(dtmfAllowedDigits_, "") };
    inline UpdateModelApplicationShrinkRequest& setDtmfAllowedDigits(string dtmfAllowedDigits) { DARABONBA_PTR_SET_VALUE(dtmfAllowedDigits_, dtmfAllowedDigits) };


    // dtmfAutoValidateEnable Field Functions 
    bool hasDtmfAutoValidateEnable() const { return this->dtmfAutoValidateEnable_ != nullptr;};
    void deleteDtmfAutoValidateEnable() { this->dtmfAutoValidateEnable_ = nullptr;};
    inline bool getDtmfAutoValidateEnable() const { DARABONBA_PTR_GET_DEFAULT(dtmfAutoValidateEnable_, false) };
    inline UpdateModelApplicationShrinkRequest& setDtmfAutoValidateEnable(bool dtmfAutoValidateEnable) { DARABONBA_PTR_SET_VALUE(dtmfAutoValidateEnable_, dtmfAutoValidateEnable) };


    // dtmfDigitCount Field Functions 
    bool hasDtmfDigitCount() const { return this->dtmfDigitCount_ != nullptr;};
    void deleteDtmfDigitCount() { this->dtmfDigitCount_ = nullptr;};
    inline int64_t getDtmfDigitCount() const { DARABONBA_PTR_GET_DEFAULT(dtmfDigitCount_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setDtmfDigitCount(int64_t dtmfDigitCount) { DARABONBA_PTR_SET_VALUE(dtmfDigitCount_, dtmfDigitCount) };


    // dtmfInputTimeout Field Functions 
    bool hasDtmfInputTimeout() const { return this->dtmfInputTimeout_ != nullptr;};
    void deleteDtmfInputTimeout() { this->dtmfInputTimeout_ = nullptr;};
    inline int64_t getDtmfInputTimeout() const { DARABONBA_PTR_GET_DEFAULT(dtmfInputTimeout_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setDtmfInputTimeout(int64_t dtmfInputTimeout) { DARABONBA_PTR_SET_VALUE(dtmfInputTimeout_, dtmfInputTimeout) };


    // dtmfOutOfRangeAction Field Functions 
    bool hasDtmfOutOfRangeAction() const { return this->dtmfOutOfRangeAction_ != nullptr;};
    void deleteDtmfOutOfRangeAction() { this->dtmfOutOfRangeAction_ = nullptr;};
    inline string getDtmfOutOfRangeAction() const { DARABONBA_PTR_GET_DEFAULT(dtmfOutOfRangeAction_, "") };
    inline UpdateModelApplicationShrinkRequest& setDtmfOutOfRangeAction(string dtmfOutOfRangeAction) { DARABONBA_PTR_SET_VALUE(dtmfOutOfRangeAction_, dtmfOutOfRangeAction) };


    // dtmfRetryPlayTimes Field Functions 
    bool hasDtmfRetryPlayTimes() const { return this->dtmfRetryPlayTimes_ != nullptr;};
    void deleteDtmfRetryPlayTimes() { this->dtmfRetryPlayTimes_ = nullptr;};
    inline int64_t getDtmfRetryPlayTimes() const { DARABONBA_PTR_GET_DEFAULT(dtmfRetryPlayTimes_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setDtmfRetryPlayTimes(int64_t dtmfRetryPlayTimes) { DARABONBA_PTR_SET_VALUE(dtmfRetryPlayTimes_, dtmfRetryPlayTimes) };


    // dtmfRetryPromptText Field Functions 
    bool hasDtmfRetryPromptText() const { return this->dtmfRetryPromptText_ != nullptr;};
    void deleteDtmfRetryPromptText() { this->dtmfRetryPromptText_ = nullptr;};
    inline string getDtmfRetryPromptText() const { DARABONBA_PTR_GET_DEFAULT(dtmfRetryPromptText_, "") };
    inline UpdateModelApplicationShrinkRequest& setDtmfRetryPromptText(string dtmfRetryPromptText) { DARABONBA_PTR_SET_VALUE(dtmfRetryPromptText_, dtmfRetryPromptText) };


    // dyvmsSceneName Field Functions 
    bool hasDyvmsSceneName() const { return this->dyvmsSceneName_ != nullptr;};
    void deleteDyvmsSceneName() { this->dyvmsSceneName_ = nullptr;};
    inline string getDyvmsSceneName() const { DARABONBA_PTR_GET_DEFAULT(dyvmsSceneName_, "") };
    inline UpdateModelApplicationShrinkRequest& setDyvmsSceneName(string dyvmsSceneName) { DARABONBA_PTR_SET_VALUE(dyvmsSceneName_, dyvmsSceneName) };


    // enableDtmfReceive Field Functions 
    bool hasEnableDtmfReceive() const { return this->enableDtmfReceive_ != nullptr;};
    void deleteEnableDtmfReceive() { this->enableDtmfReceive_ = nullptr;};
    inline bool getEnableDtmfReceive() const { DARABONBA_PTR_GET_DEFAULT(enableDtmfReceive_, false) };
    inline UpdateModelApplicationShrinkRequest& setEnableDtmfReceive(bool enableDtmfReceive) { DARABONBA_PTR_SET_VALUE(enableDtmfReceive_, enableDtmfReceive) };


    // enableMorse Field Functions 
    bool hasEnableMorse() const { return this->enableMorse_ != nullptr;};
    void deleteEnableMorse() { this->enableMorse_ = nullptr;};
    inline bool getEnableMorse() const { DARABONBA_PTR_GET_DEFAULT(enableMorse_, false) };
    inline UpdateModelApplicationShrinkRequest& setEnableMorse(bool enableMorse) { DARABONBA_PTR_SET_VALUE(enableMorse_, enableMorse) };


    // interruptConfigShrink Field Functions 
    bool hasInterruptConfigShrink() const { return this->interruptConfigShrink_ != nullptr;};
    void deleteInterruptConfigShrink() { this->interruptConfigShrink_ = nullptr;};
    inline string getInterruptConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(interruptConfigShrink_, "") };
    inline UpdateModelApplicationShrinkRequest& setInterruptConfigShrink(string interruptConfigShrink) { DARABONBA_PTR_SET_VALUE(interruptConfigShrink_, interruptConfigShrink) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline UpdateModelApplicationShrinkRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline UpdateModelApplicationShrinkRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // muteActive Field Functions 
    bool hasMuteActive() const { return this->muteActive_ != nullptr;};
    void deleteMuteActive() { this->muteActive_ = nullptr;};
    inline bool getMuteActive() const { DARABONBA_PTR_GET_DEFAULT(muteActive_, false) };
    inline UpdateModelApplicationShrinkRequest& setMuteActive(bool muteActive) { DARABONBA_PTR_SET_VALUE(muteActive_, muteActive) };


    // muteDuration Field Functions 
    bool hasMuteDuration() const { return this->muteDuration_ != nullptr;};
    void deleteMuteDuration() { this->muteDuration_ = nullptr;};
    inline int64_t getMuteDuration() const { DARABONBA_PTR_GET_DEFAULT(muteDuration_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setMuteDuration(int64_t muteDuration) { DARABONBA_PTR_SET_VALUE(muteDuration_, muteDuration) };


    // muteHangupNum Field Functions 
    bool hasMuteHangupNum() const { return this->muteHangupNum_ != nullptr;};
    void deleteMuteHangupNum() { this->muteHangupNum_ = nullptr;};
    inline int64_t getMuteHangupNum() const { DARABONBA_PTR_GET_DEFAULT(muteHangupNum_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setMuteHangupNum(int64_t muteHangupNum) { DARABONBA_PTR_SET_VALUE(muteHangupNum_, muteHangupNum) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateModelApplicationShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string getQualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline UpdateModelApplicationShrinkRequest& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // recordingFile Field Functions 
    bool hasRecordingFile() const { return this->recordingFile_ != nullptr;};
    void deleteRecordingFile() { this->recordingFile_ = nullptr;};
    inline string getRecordingFile() const { DARABONBA_PTR_GET_DEFAULT(recordingFile_, "") };
    inline UpdateModelApplicationShrinkRequest& setRecordingFile(string recordingFile) { DARABONBA_PTR_SET_VALUE(recordingFile_, recordingFile) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateModelApplicationShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int64_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setSessionTimeout(int64_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateModelApplicationShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // speechContent Field Functions 
    bool hasSpeechContent() const { return this->speechContent_ != nullptr;};
    void deleteSpeechContent() { this->speechContent_ = nullptr;};
    inline string getSpeechContent() const { DARABONBA_PTR_GET_DEFAULT(speechContent_, "") };
    inline UpdateModelApplicationShrinkRequest& setSpeechContent(string speechContent) { DARABONBA_PTR_SET_VALUE(speechContent_, speechContent) };


    // speechId Field Functions 
    bool hasSpeechId() const { return this->speechId_ != nullptr;};
    void deleteSpeechId() { this->speechId_ = nullptr;};
    inline int64_t getSpeechId() const { DARABONBA_PTR_GET_DEFAULT(speechId_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setSpeechId(int64_t speechId) { DARABONBA_PTR_SET_VALUE(speechId_, speechId) };


    // startWord Field Functions 
    bool hasStartWord() const { return this->startWord_ != nullptr;};
    void deleteStartWord() { this->startWord_ = nullptr;};
    inline string getStartWord() const { DARABONBA_PTR_GET_DEFAULT(startWord_, "") };
    inline UpdateModelApplicationShrinkRequest& setStartWord(string startWord) { DARABONBA_PTR_SET_VALUE(startWord_, startWord) };


    // startWordType Field Functions 
    bool hasStartWordType() const { return this->startWordType_ != nullptr;};
    void deleteStartWordType() { this->startWordType_ = nullptr;};
    inline int64_t getStartWordType() const { DARABONBA_PTR_GET_DEFAULT(startWordType_, 0L) };
    inline UpdateModelApplicationShrinkRequest& setStartWordType(int64_t startWordType) { DARABONBA_PTR_SET_VALUE(startWordType_, startWordType) };


    // ttsConfigShrink Field Functions 
    bool hasTtsConfigShrink() const { return this->ttsConfigShrink_ != nullptr;};
    void deleteTtsConfigShrink() { this->ttsConfigShrink_ = nullptr;};
    inline string getTtsConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(ttsConfigShrink_, "") };
    inline UpdateModelApplicationShrinkRequest& setTtsConfigShrink(string ttsConfigShrink) { DARABONBA_PTR_SET_VALUE(ttsConfigShrink_, ttsConfigShrink) };


    // usageDesc Field Functions 
    bool hasUsageDesc() const { return this->usageDesc_ != nullptr;};
    void deleteUsageDesc() { this->usageDesc_ = nullptr;};
    inline string getUsageDesc() const { DARABONBA_PTR_GET_DEFAULT(usageDesc_, "") };
    inline UpdateModelApplicationShrinkRequest& setUsageDesc(string usageDesc) { DARABONBA_PTR_SET_VALUE(usageDesc_, usageDesc) };


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
    shared_ptr<string> interruptConfigShrink_ {};
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
    shared_ptr<string> ttsConfigShrink_ {};
    // 用途
    shared_ptr<string> usageDesc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
