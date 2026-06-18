// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCCOSMARTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCCOSMARTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class SendCcoSmartCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCcoSmartCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionCodeBreak, actionCodeBreak_);
      DARABONBA_PTR_TO_JSON(ActionCodeTimeBreak, actionCodeTimeBreak_);
      DARABONBA_PTR_TO_JSON(AsrAlsAmId, asrAlsAmId_);
      DARABONBA_PTR_TO_JSON(AsrBaseId, asrBaseId_);
      DARABONBA_PTR_TO_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_TO_JSON(AsrVocabularyId, asrVocabularyId_);
      DARABONBA_PTR_TO_JSON(BackgroundFileCode, backgroundFileCode_);
      DARABONBA_PTR_TO_JSON(BackgroundSpeed, backgroundSpeed_);
      DARABONBA_PTR_TO_JSON(BackgroundVolume, backgroundVolume_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_TO_JSON(DynamicId, dynamicId_);
      DARABONBA_PTR_TO_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_TO_JSON(EnableITN, enableITN_);
      DARABONBA_PTR_TO_JSON(MuteTime, muteTime_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PauseTime, pauseTime_);
      DARABONBA_PTR_TO_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(RecordFlag, recordFlag_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(TtsConf, ttsConf_);
      DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
      DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_TO_JSON(VoiceCodeParam, voiceCodeParam_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SendCcoSmartCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionCodeBreak, actionCodeBreak_);
      DARABONBA_PTR_FROM_JSON(ActionCodeTimeBreak, actionCodeTimeBreak_);
      DARABONBA_PTR_FROM_JSON(AsrAlsAmId, asrAlsAmId_);
      DARABONBA_PTR_FROM_JSON(AsrBaseId, asrBaseId_);
      DARABONBA_PTR_FROM_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_FROM_JSON(AsrVocabularyId, asrVocabularyId_);
      DARABONBA_PTR_FROM_JSON(BackgroundFileCode, backgroundFileCode_);
      DARABONBA_PTR_FROM_JSON(BackgroundSpeed, backgroundSpeed_);
      DARABONBA_PTR_FROM_JSON(BackgroundVolume, backgroundVolume_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_FROM_JSON(DynamicId, dynamicId_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_FROM_JSON(EnableITN, enableITN_);
      DARABONBA_PTR_FROM_JSON(MuteTime, muteTime_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PauseTime, pauseTime_);
      DARABONBA_PTR_FROM_JSON(PlayTimes, playTimes_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(RecordFlag, recordFlag_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(TtsConf, ttsConf_);
      DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
      DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_FROM_JSON(VoiceCodeParam, voiceCodeParam_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SendCcoSmartCallRequest() = default ;
    SendCcoSmartCallRequest(const SendCcoSmartCallRequest &) = default ;
    SendCcoSmartCallRequest(SendCcoSmartCallRequest &&) = default ;
    SendCcoSmartCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCcoSmartCallRequest() = default ;
    SendCcoSmartCallRequest& operator=(const SendCcoSmartCallRequest &) = default ;
    SendCcoSmartCallRequest& operator=(SendCcoSmartCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionCodeBreak_ == nullptr
        && this->actionCodeTimeBreak_ == nullptr && this->asrAlsAmId_ == nullptr && this->asrBaseId_ == nullptr && this->asrModelId_ == nullptr && this->asrVocabularyId_ == nullptr
        && this->backgroundFileCode_ == nullptr && this->backgroundSpeed_ == nullptr && this->backgroundVolume_ == nullptr && this->calledNumber_ == nullptr && this->calledShowNumber_ == nullptr
        && this->dynamicId_ == nullptr && this->earlyMediaAsr_ == nullptr && this->enableITN_ == nullptr && this->muteTime_ == nullptr && this->outId_ == nullptr
        && this->ownerId_ == nullptr && this->pauseTime_ == nullptr && this->playTimes_ == nullptr && this->prodCode_ == nullptr && this->recordFlag_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sessionTimeout_ == nullptr && this->speed_ == nullptr && this->ttsConf_ == nullptr
        && this->ttsSpeed_ == nullptr && this->ttsStyle_ == nullptr && this->ttsVolume_ == nullptr && this->voiceCode_ == nullptr && this->voiceCodeParam_ == nullptr
        && this->volume_ == nullptr; };
    // actionCodeBreak Field Functions 
    bool hasActionCodeBreak() const { return this->actionCodeBreak_ != nullptr;};
    void deleteActionCodeBreak() { this->actionCodeBreak_ = nullptr;};
    inline bool getActionCodeBreak() const { DARABONBA_PTR_GET_DEFAULT(actionCodeBreak_, false) };
    inline SendCcoSmartCallRequest& setActionCodeBreak(bool actionCodeBreak) { DARABONBA_PTR_SET_VALUE(actionCodeBreak_, actionCodeBreak) };


    // actionCodeTimeBreak Field Functions 
    bool hasActionCodeTimeBreak() const { return this->actionCodeTimeBreak_ != nullptr;};
    void deleteActionCodeTimeBreak() { this->actionCodeTimeBreak_ = nullptr;};
    inline int32_t getActionCodeTimeBreak() const { DARABONBA_PTR_GET_DEFAULT(actionCodeTimeBreak_, 0) };
    inline SendCcoSmartCallRequest& setActionCodeTimeBreak(int32_t actionCodeTimeBreak) { DARABONBA_PTR_SET_VALUE(actionCodeTimeBreak_, actionCodeTimeBreak) };


    // asrAlsAmId Field Functions 
    bool hasAsrAlsAmId() const { return this->asrAlsAmId_ != nullptr;};
    void deleteAsrAlsAmId() { this->asrAlsAmId_ = nullptr;};
    inline string getAsrAlsAmId() const { DARABONBA_PTR_GET_DEFAULT(asrAlsAmId_, "") };
    inline SendCcoSmartCallRequest& setAsrAlsAmId(string asrAlsAmId) { DARABONBA_PTR_SET_VALUE(asrAlsAmId_, asrAlsAmId) };


    // asrBaseId Field Functions 
    bool hasAsrBaseId() const { return this->asrBaseId_ != nullptr;};
    void deleteAsrBaseId() { this->asrBaseId_ = nullptr;};
    inline string getAsrBaseId() const { DARABONBA_PTR_GET_DEFAULT(asrBaseId_, "") };
    inline SendCcoSmartCallRequest& setAsrBaseId(string asrBaseId) { DARABONBA_PTR_SET_VALUE(asrBaseId_, asrBaseId) };


    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string getAsrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline SendCcoSmartCallRequest& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // asrVocabularyId Field Functions 
    bool hasAsrVocabularyId() const { return this->asrVocabularyId_ != nullptr;};
    void deleteAsrVocabularyId() { this->asrVocabularyId_ = nullptr;};
    inline string getAsrVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(asrVocabularyId_, "") };
    inline SendCcoSmartCallRequest& setAsrVocabularyId(string asrVocabularyId) { DARABONBA_PTR_SET_VALUE(asrVocabularyId_, asrVocabularyId) };


    // backgroundFileCode Field Functions 
    bool hasBackgroundFileCode() const { return this->backgroundFileCode_ != nullptr;};
    void deleteBackgroundFileCode() { this->backgroundFileCode_ = nullptr;};
    inline string getBackgroundFileCode() const { DARABONBA_PTR_GET_DEFAULT(backgroundFileCode_, "") };
    inline SendCcoSmartCallRequest& setBackgroundFileCode(string backgroundFileCode) { DARABONBA_PTR_SET_VALUE(backgroundFileCode_, backgroundFileCode) };


    // backgroundSpeed Field Functions 
    bool hasBackgroundSpeed() const { return this->backgroundSpeed_ != nullptr;};
    void deleteBackgroundSpeed() { this->backgroundSpeed_ = nullptr;};
    inline int32_t getBackgroundSpeed() const { DARABONBA_PTR_GET_DEFAULT(backgroundSpeed_, 0) };
    inline SendCcoSmartCallRequest& setBackgroundSpeed(int32_t backgroundSpeed) { DARABONBA_PTR_SET_VALUE(backgroundSpeed_, backgroundSpeed) };


    // backgroundVolume Field Functions 
    bool hasBackgroundVolume() const { return this->backgroundVolume_ != nullptr;};
    void deleteBackgroundVolume() { this->backgroundVolume_ = nullptr;};
    inline int32_t getBackgroundVolume() const { DARABONBA_PTR_GET_DEFAULT(backgroundVolume_, 0) };
    inline SendCcoSmartCallRequest& setBackgroundVolume(int32_t backgroundVolume) { DARABONBA_PTR_SET_VALUE(backgroundVolume_, backgroundVolume) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline SendCcoSmartCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string getCalledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline SendCcoSmartCallRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // dynamicId Field Functions 
    bool hasDynamicId() const { return this->dynamicId_ != nullptr;};
    void deleteDynamicId() { this->dynamicId_ = nullptr;};
    inline string getDynamicId() const { DARABONBA_PTR_GET_DEFAULT(dynamicId_, "") };
    inline SendCcoSmartCallRequest& setDynamicId(string dynamicId) { DARABONBA_PTR_SET_VALUE(dynamicId_, dynamicId) };


    // earlyMediaAsr Field Functions 
    bool hasEarlyMediaAsr() const { return this->earlyMediaAsr_ != nullptr;};
    void deleteEarlyMediaAsr() { this->earlyMediaAsr_ = nullptr;};
    inline bool getEarlyMediaAsr() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaAsr_, false) };
    inline SendCcoSmartCallRequest& setEarlyMediaAsr(bool earlyMediaAsr) { DARABONBA_PTR_SET_VALUE(earlyMediaAsr_, earlyMediaAsr) };


    // enableITN Field Functions 
    bool hasEnableITN() const { return this->enableITN_ != nullptr;};
    void deleteEnableITN() { this->enableITN_ = nullptr;};
    inline bool getEnableITN() const { DARABONBA_PTR_GET_DEFAULT(enableITN_, false) };
    inline SendCcoSmartCallRequest& setEnableITN(bool enableITN) { DARABONBA_PTR_SET_VALUE(enableITN_, enableITN) };


    // muteTime Field Functions 
    bool hasMuteTime() const { return this->muteTime_ != nullptr;};
    void deleteMuteTime() { this->muteTime_ = nullptr;};
    inline int32_t getMuteTime() const { DARABONBA_PTR_GET_DEFAULT(muteTime_, 0) };
    inline SendCcoSmartCallRequest& setMuteTime(int32_t muteTime) { DARABONBA_PTR_SET_VALUE(muteTime_, muteTime) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendCcoSmartCallRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendCcoSmartCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pauseTime Field Functions 
    bool hasPauseTime() const { return this->pauseTime_ != nullptr;};
    void deletePauseTime() { this->pauseTime_ = nullptr;};
    inline int32_t getPauseTime() const { DARABONBA_PTR_GET_DEFAULT(pauseTime_, 0) };
    inline SendCcoSmartCallRequest& setPauseTime(int32_t pauseTime) { DARABONBA_PTR_SET_VALUE(pauseTime_, pauseTime) };


    // playTimes Field Functions 
    bool hasPlayTimes() const { return this->playTimes_ != nullptr;};
    void deletePlayTimes() { this->playTimes_ = nullptr;};
    inline int32_t getPlayTimes() const { DARABONBA_PTR_GET_DEFAULT(playTimes_, 0) };
    inline SendCcoSmartCallRequest& setPlayTimes(int32_t playTimes) { DARABONBA_PTR_SET_VALUE(playTimes_, playTimes) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline SendCcoSmartCallRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // recordFlag Field Functions 
    bool hasRecordFlag() const { return this->recordFlag_ != nullptr;};
    void deleteRecordFlag() { this->recordFlag_ = nullptr;};
    inline bool getRecordFlag() const { DARABONBA_PTR_GET_DEFAULT(recordFlag_, false) };
    inline SendCcoSmartCallRequest& setRecordFlag(bool recordFlag) { DARABONBA_PTR_SET_VALUE(recordFlag_, recordFlag) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendCcoSmartCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendCcoSmartCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline SendCcoSmartCallRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int32_t getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0) };
    inline SendCcoSmartCallRequest& setSpeed(int32_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // ttsConf Field Functions 
    bool hasTtsConf() const { return this->ttsConf_ != nullptr;};
    void deleteTtsConf() { this->ttsConf_ = nullptr;};
    inline bool getTtsConf() const { DARABONBA_PTR_GET_DEFAULT(ttsConf_, false) };
    inline SendCcoSmartCallRequest& setTtsConf(bool ttsConf) { DARABONBA_PTR_SET_VALUE(ttsConf_, ttsConf) };


    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int32_t getTtsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0) };
    inline SendCcoSmartCallRequest& setTtsSpeed(int32_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsStyle Field Functions 
    bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
    void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
    inline string getTtsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
    inline SendCcoSmartCallRequest& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int32_t getTtsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0) };
    inline SendCcoSmartCallRequest& setTtsVolume(int32_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


    // voiceCode Field Functions 
    bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
    void deleteVoiceCode() { this->voiceCode_ = nullptr;};
    inline string getVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
    inline SendCcoSmartCallRequest& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


    // voiceCodeParam Field Functions 
    bool hasVoiceCodeParam() const { return this->voiceCodeParam_ != nullptr;};
    void deleteVoiceCodeParam() { this->voiceCodeParam_ = nullptr;};
    inline string getVoiceCodeParam() const { DARABONBA_PTR_GET_DEFAULT(voiceCodeParam_, "") };
    inline SendCcoSmartCallRequest& setVoiceCodeParam(string voiceCodeParam) { DARABONBA_PTR_SET_VALUE(voiceCodeParam_, voiceCodeParam) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SendCcoSmartCallRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // Indicates whether the initial playback file can be interrupted. The default value is **true**, meaning the initial playback file can be interrupted.
    shared_ptr<bool> actionCodeBreak_ {};
    // Interrupts based on the user\\"s continuous speaking duration. Takes effect only when ActionCodeBreak is set to **true**. Unit: milliseconds.
    shared_ptr<int32_t> actionCodeTimeBreak_ {};
    // Acoustic model ID.
    shared_ptr<string> asrAlsAmId_ {};
    // ASR foundation model.
    // 
    // - **customer_service_8k**: Mandarin.
    // - **dialect_customer_service_8k**: Strong accent.
    // - If only **asrModelId** is set, the specified ASR model is used.
    // - If only **AsrBaseId** is set, the specified ASR foundation model is used.
    // - If neither is set, the default ASR foundation model is used. By default, **AsrBaseId** is **customer_service_8k**, which corresponds to the Mandarin ASR foundation model.
    // - If both are set, ensure they correctly correspond to each other.
    // 
    // > When invoking the **SendCcoSmartCall** API, you must specify the ASR model to use. We recommend that you specify either **asrModelId** or **AsrBaseId**, but not both.
    shared_ptr<string> asrBaseId_ {};
    // The ASR model ID. You can view the ASR model ID on the [ASR Model Management Page](https://aiccs.console.aliyun.com/sentence/model/private?spm=a2c4g.11186623.0.0.7f9b2964fYSGv4).
    shared_ptr<string> asrModelId_ {};
    // Hotword ID. You can view the ASR hotword ID on the [ASR Hotword Management Page](https://aiccs.console.aliyun.com/sentence/vocab?spm=a2c4g.11186623.0.0.7f9bf965IKBpsi).
    shared_ptr<string> asrVocabularyId_ {};
    // ID of the background audio file played during the conversation between the user and the robot. You can log on to the [Artificial Intelligence Cloud Call Service console](https://aiccs.console.aliyun.com/overview), choose **Intelligent Interaction > Audio File Management**, and click **View Details** to obtain the corresponding audio ID.
    shared_ptr<string> backgroundFileCode_ {};
    // This parameter is not currently supported.
    shared_ptr<int32_t> backgroundSpeed_ {};
    // This parameter is not currently supported.
    shared_ptr<int32_t> backgroundVolume_ {};
    // Callee number. Only numbers from the Chinese mainland are supported.
    // 
    // This parameter is required.
    shared_ptr<string> calledNumber_ {};
    // Called party display number. This must be a purchased number.
    // 
    // You can log on to the [Contact Center console](https://aiccs.console.aliyun.com/overview?spm=a2c4g.11186623.0.0.7f9bf9658X6jte) to view your purchased numbers.
    // 
    // This parameter is required.
    shared_ptr<string> calledShowNumber_ {};
    // A dynamic extension ID reserved for the caller. This ID is returned in the webhook address and used as a developer identity for the customer.
    shared_ptr<string> dynamicId_ {};
    // The early media speech recognition identity. When set to true, it records the reason why the call was not answered. The default value is **false**, meaning this feature is disabled.
    // 
    // > To enable early media speech recognition, you must manually set this parameter to **true**.
    shared_ptr<bool> earlyMediaAsr_ {};
    // Whether to execute ITN in post-processing.
    // 
    // > When set to **true**, Chinese numerals are converted to Arabic numerals in the output. The default value is **false**.
    shared_ptr<bool> enableITN_ {};
    // Mute duration, used to set how long the user remains silent before the call ends. The unit is milliseconds, and the valid range is **1000–20000**.  
    // 
    // - If the specified value is outside this range, the default MuteTime is **10000**.  
    // - This parameter can be dynamically set during the call, and the last setting takes effect.
    shared_ptr<int32_t> muteTime_ {};
    // An ID reserved for the caller, which will ultimately be returned to the caller in the receipt message.  
    // It is of string type and must be 1 to 15 bytes in length.
    shared_ptr<string> outId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The pause duration. This parameter specifies how long a user must pause to indicate the end of a sentence. Unit: milliseconds. Valid values are **300–1200**. If the specified value is outside this range, PauseTime defaults to **800**.
    // 
    // > The first setting takes effect; subsequent settings are ignored.
    shared_ptr<int32_t> pauseTime_ {};
    // This parameter is not currently supported.
    shared_ptr<int32_t> playTimes_ {};
    // Product name. Default value: **aiccs**.
    shared_ptr<string> prodCode_ {};
    // Whether to record during the call.
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> recordFlag_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The maximum call duration, in seconds. The call is automatically disconnected after timeout.
    shared_ptr<int32_t> sessionTimeout_ {};
    // This parameter is currently not supported.
    shared_ptr<int32_t> speed_ {};
    // Whether to configure TTS voice parameters.
    // - If set to **true**, you must configure the voice style using the TtsStyle, TtsVolume, and TtsSpeed parameters.
    // - If set to **false**, related parameters do not take effect, even if configured.
    shared_ptr<bool> ttsConf_ {};
    // The playback speed of the TTS variable. Valid values range from -200 to 200. The default value is 0.
    shared_ptr<int32_t> ttsSpeed_ {};
    // The voice style for TTS variable playback. The default value is **xiaoyun**. For available styles, see the voice style list.
    shared_ptr<string> ttsStyle_ {};
    // Playback volume for TTS variables. Valid values: **0–100**. Default value: **0**.
    shared_ptr<int32_t> ttsVolume_ {};
    // The audio playback file for Intelligent outbound calls, which supports both network files and TTS. Multiple files and TTS parameters can be mixed and separated by commas (,). The replacement values for TTS parameters are specified in **VoiceCodeParam**.
    // 
    // - When using a network file for playback: Set the VoiceCode parameter to a publicly accessible URL of the audio file. We recommend using a .wav audio file with a sampling frequency of 8000 Hz or 16000 Hz.
    // - When using TTS for playback: Set the VoiceCode parameter to a variable name such as $name$, and define the corresponding content for this variable in VoiceCodeParam.
    // 
    // This parameter is required.
    shared_ptr<string> voiceCode_ {};
    // A JSON-formatted string for passing TTS parameters. It must correspond to the TTS parameters of VoiceCode.
    shared_ptr<string> voiceCodeParam_ {};
    // Playback volume for user audio. Valid values: –4 to 4. We recommend setting it to 1.
    shared_ptr<int32_t> volume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
