// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMODELAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMODELAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class AddModelApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddModelApplicationShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfigShrink_);
      DARABONBA_PTR_TO_JSON(UsageDesc, usageDesc_);
    };
    friend void from_json(const Darabonba::Json& j, AddModelApplicationShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfigShrink_);
      DARABONBA_PTR_FROM_JSON(UsageDesc, usageDesc_);
    };
    AddModelApplicationShrinkRequest() = default ;
    AddModelApplicationShrinkRequest(const AddModelApplicationShrinkRequest &) = default ;
    AddModelApplicationShrinkRequest(AddModelApplicationShrinkRequest &&) = default ;
    AddModelApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddModelApplicationShrinkRequest() = default ;
    AddModelApplicationShrinkRequest& operator=(const AddModelApplicationShrinkRequest &) = default ;
    AddModelApplicationShrinkRequest& operator=(AddModelApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCps_ == nullptr
        && this->applicationName_ == nullptr && this->callConnectedTriggerModel_ == nullptr && this->dyvmsSceneName_ == nullptr && this->modelCode_ == nullptr && this->modelVersion_ == nullptr
        && this->muteActive_ == nullptr && this->muteDuration_ == nullptr && this->muteHangupNum_ == nullptr && this->ownerId_ == nullptr && this->prompt_ == nullptr
        && this->qualificationId_ == nullptr && this->qualificationName_ == nullptr && this->recordingFile_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->source_ == nullptr && this->speechContent_ == nullptr && this->speechId_ == nullptr && this->startWord_ == nullptr && this->startWordType_ == nullptr
        && this->ttsConfigShrink_ == nullptr && this->usageDesc_ == nullptr; };
    // applicationCps Field Functions 
    bool hasApplicationCps() const { return this->applicationCps_ != nullptr;};
    void deleteApplicationCps() { this->applicationCps_ = nullptr;};
    inline int64_t getApplicationCps() const { DARABONBA_PTR_GET_DEFAULT(applicationCps_, 0L) };
    inline AddModelApplicationShrinkRequest& setApplicationCps(int64_t applicationCps) { DARABONBA_PTR_SET_VALUE(applicationCps_, applicationCps) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline AddModelApplicationShrinkRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // callConnectedTriggerModel Field Functions 
    bool hasCallConnectedTriggerModel() const { return this->callConnectedTriggerModel_ != nullptr;};
    void deleteCallConnectedTriggerModel() { this->callConnectedTriggerModel_ = nullptr;};
    inline bool getCallConnectedTriggerModel() const { DARABONBA_PTR_GET_DEFAULT(callConnectedTriggerModel_, false) };
    inline AddModelApplicationShrinkRequest& setCallConnectedTriggerModel(bool callConnectedTriggerModel) { DARABONBA_PTR_SET_VALUE(callConnectedTriggerModel_, callConnectedTriggerModel) };


    // dyvmsSceneName Field Functions 
    bool hasDyvmsSceneName() const { return this->dyvmsSceneName_ != nullptr;};
    void deleteDyvmsSceneName() { this->dyvmsSceneName_ = nullptr;};
    inline string getDyvmsSceneName() const { DARABONBA_PTR_GET_DEFAULT(dyvmsSceneName_, "") };
    inline AddModelApplicationShrinkRequest& setDyvmsSceneName(string dyvmsSceneName) { DARABONBA_PTR_SET_VALUE(dyvmsSceneName_, dyvmsSceneName) };


    // modelCode Field Functions 
    bool hasModelCode() const { return this->modelCode_ != nullptr;};
    void deleteModelCode() { this->modelCode_ = nullptr;};
    inline string getModelCode() const { DARABONBA_PTR_GET_DEFAULT(modelCode_, "") };
    inline AddModelApplicationShrinkRequest& setModelCode(string modelCode) { DARABONBA_PTR_SET_VALUE(modelCode_, modelCode) };


    // modelVersion Field Functions 
    bool hasModelVersion() const { return this->modelVersion_ != nullptr;};
    void deleteModelVersion() { this->modelVersion_ = nullptr;};
    inline string getModelVersion() const { DARABONBA_PTR_GET_DEFAULT(modelVersion_, "") };
    inline AddModelApplicationShrinkRequest& setModelVersion(string modelVersion) { DARABONBA_PTR_SET_VALUE(modelVersion_, modelVersion) };


    // muteActive Field Functions 
    bool hasMuteActive() const { return this->muteActive_ != nullptr;};
    void deleteMuteActive() { this->muteActive_ = nullptr;};
    inline bool getMuteActive() const { DARABONBA_PTR_GET_DEFAULT(muteActive_, false) };
    inline AddModelApplicationShrinkRequest& setMuteActive(bool muteActive) { DARABONBA_PTR_SET_VALUE(muteActive_, muteActive) };


    // muteDuration Field Functions 
    bool hasMuteDuration() const { return this->muteDuration_ != nullptr;};
    void deleteMuteDuration() { this->muteDuration_ = nullptr;};
    inline int64_t getMuteDuration() const { DARABONBA_PTR_GET_DEFAULT(muteDuration_, 0L) };
    inline AddModelApplicationShrinkRequest& setMuteDuration(int64_t muteDuration) { DARABONBA_PTR_SET_VALUE(muteDuration_, muteDuration) };


    // muteHangupNum Field Functions 
    bool hasMuteHangupNum() const { return this->muteHangupNum_ != nullptr;};
    void deleteMuteHangupNum() { this->muteHangupNum_ = nullptr;};
    inline int64_t getMuteHangupNum() const { DARABONBA_PTR_GET_DEFAULT(muteHangupNum_, 0L) };
    inline AddModelApplicationShrinkRequest& setMuteHangupNum(int64_t muteHangupNum) { DARABONBA_PTR_SET_VALUE(muteHangupNum_, muteHangupNum) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddModelApplicationShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline AddModelApplicationShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline AddModelApplicationShrinkRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // qualificationName Field Functions 
    bool hasQualificationName() const { return this->qualificationName_ != nullptr;};
    void deleteQualificationName() { this->qualificationName_ = nullptr;};
    inline string getQualificationName() const { DARABONBA_PTR_GET_DEFAULT(qualificationName_, "") };
    inline AddModelApplicationShrinkRequest& setQualificationName(string qualificationName) { DARABONBA_PTR_SET_VALUE(qualificationName_, qualificationName) };


    // recordingFile Field Functions 
    bool hasRecordingFile() const { return this->recordingFile_ != nullptr;};
    void deleteRecordingFile() { this->recordingFile_ = nullptr;};
    inline string getRecordingFile() const { DARABONBA_PTR_GET_DEFAULT(recordingFile_, "") };
    inline AddModelApplicationShrinkRequest& setRecordingFile(string recordingFile) { DARABONBA_PTR_SET_VALUE(recordingFile_, recordingFile) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddModelApplicationShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddModelApplicationShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AddModelApplicationShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // speechContent Field Functions 
    bool hasSpeechContent() const { return this->speechContent_ != nullptr;};
    void deleteSpeechContent() { this->speechContent_ = nullptr;};
    inline string getSpeechContent() const { DARABONBA_PTR_GET_DEFAULT(speechContent_, "") };
    inline AddModelApplicationShrinkRequest& setSpeechContent(string speechContent) { DARABONBA_PTR_SET_VALUE(speechContent_, speechContent) };


    // speechId Field Functions 
    bool hasSpeechId() const { return this->speechId_ != nullptr;};
    void deleteSpeechId() { this->speechId_ = nullptr;};
    inline int64_t getSpeechId() const { DARABONBA_PTR_GET_DEFAULT(speechId_, 0L) };
    inline AddModelApplicationShrinkRequest& setSpeechId(int64_t speechId) { DARABONBA_PTR_SET_VALUE(speechId_, speechId) };


    // startWord Field Functions 
    bool hasStartWord() const { return this->startWord_ != nullptr;};
    void deleteStartWord() { this->startWord_ = nullptr;};
    inline string getStartWord() const { DARABONBA_PTR_GET_DEFAULT(startWord_, "") };
    inline AddModelApplicationShrinkRequest& setStartWord(string startWord) { DARABONBA_PTR_SET_VALUE(startWord_, startWord) };


    // startWordType Field Functions 
    bool hasStartWordType() const { return this->startWordType_ != nullptr;};
    void deleteStartWordType() { this->startWordType_ = nullptr;};
    inline int64_t getStartWordType() const { DARABONBA_PTR_GET_DEFAULT(startWordType_, 0L) };
    inline AddModelApplicationShrinkRequest& setStartWordType(int64_t startWordType) { DARABONBA_PTR_SET_VALUE(startWordType_, startWordType) };


    // ttsConfigShrink Field Functions 
    bool hasTtsConfigShrink() const { return this->ttsConfigShrink_ != nullptr;};
    void deleteTtsConfigShrink() { this->ttsConfigShrink_ = nullptr;};
    inline string getTtsConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(ttsConfigShrink_, "") };
    inline AddModelApplicationShrinkRequest& setTtsConfigShrink(string ttsConfigShrink) { DARABONBA_PTR_SET_VALUE(ttsConfigShrink_, ttsConfigShrink) };


    // usageDesc Field Functions 
    bool hasUsageDesc() const { return this->usageDesc_ != nullptr;};
    void deleteUsageDesc() { this->usageDesc_ = nullptr;};
    inline string getUsageDesc() const { DARABONBA_PTR_GET_DEFAULT(usageDesc_, "") };
    inline AddModelApplicationShrinkRequest& setUsageDesc(string usageDesc) { DARABONBA_PTR_SET_VALUE(usageDesc_, usageDesc) };


  protected:
    // The number of concurrent requests per second (CPS).
    // 
    // This parameter is required.
    shared_ptr<int64_t> applicationCps_ {};
    // The name of the model application.
    // 
    // This parameter is required.
    shared_ptr<string> applicationName_ {};
    // Specifies whether to push an event notification when a call is connected. The default value is false.
    shared_ptr<bool> callConnectedTriggerModel_ {};
    // The scene name.
    shared_ptr<string> dyvmsSceneName_ {};
    // The model code.
    // 
    // This parameter is required.
    shared_ptr<string> modelCode_ {};
    // The model version.
    shared_ptr<string> modelVersion_ {};
    // Specifies whether the first mute event triggers the model.
    shared_ptr<bool> muteActive_ {};
    // The mute duration.
    shared_ptr<int64_t> muteDuration_ {};
    // The number of consecutive mute events that trigger an automatic hang-up.
    shared_ptr<int64_t> muteHangupNum_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The prompt.
    shared_ptr<string> prompt_ {};
    // The qualification ID.
    shared_ptr<int64_t> qualificationId_ {};
    // The name of the qualification.
    shared_ptr<string> qualificationName_ {};
    // The URL of the audio file for the opening line. This parameter is required if `StartWordType` is set to `1`.
    shared_ptr<string> recordingFile_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source. The value must be `USER`.
    shared_ptr<string> source_ {};
    // The speech script content.
    shared_ptr<string> speechContent_ {};
    // The speech script ID.
    shared_ptr<int64_t> speechId_ {};
    // The opening line.
    // 
    // This parameter is required.
    shared_ptr<string> startWord_ {};
    // The type of the opening line.
    shared_ptr<int64_t> startWordType_ {};
    // The TTS configuration, including voice, volume, speech speed, and more.
    // 
    // This parameter is required.
    shared_ptr<string> ttsConfigShrink_ {};
    // The purpose of the application.
    shared_ptr<string> usageDesc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
