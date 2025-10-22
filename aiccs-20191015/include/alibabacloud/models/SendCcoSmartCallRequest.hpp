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
        && return this->actionCodeTimeBreak_ == nullptr && return this->asrAlsAmId_ == nullptr && return this->asrBaseId_ == nullptr && return this->asrModelId_ == nullptr && return this->asrVocabularyId_ == nullptr
        && return this->backgroundFileCode_ == nullptr && return this->backgroundSpeed_ == nullptr && return this->backgroundVolume_ == nullptr && return this->calledNumber_ == nullptr && return this->calledShowNumber_ == nullptr
        && return this->dynamicId_ == nullptr && return this->earlyMediaAsr_ == nullptr && return this->enableITN_ == nullptr && return this->muteTime_ == nullptr && return this->outId_ == nullptr
        && return this->ownerId_ == nullptr && return this->pauseTime_ == nullptr && return this->playTimes_ == nullptr && return this->prodCode_ == nullptr && return this->recordFlag_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sessionTimeout_ == nullptr && return this->speed_ == nullptr && return this->ttsConf_ == nullptr
        && return this->ttsSpeed_ == nullptr && return this->ttsStyle_ == nullptr && return this->ttsVolume_ == nullptr && return this->voiceCode_ == nullptr && return this->voiceCodeParam_ == nullptr
        && return this->volume_ == nullptr; };
    // actionCodeBreak Field Functions 
    bool hasActionCodeBreak() const { return this->actionCodeBreak_ != nullptr;};
    void deleteActionCodeBreak() { this->actionCodeBreak_ = nullptr;};
    inline bool actionCodeBreak() const { DARABONBA_PTR_GET_DEFAULT(actionCodeBreak_, false) };
    inline SendCcoSmartCallRequest& setActionCodeBreak(bool actionCodeBreak) { DARABONBA_PTR_SET_VALUE(actionCodeBreak_, actionCodeBreak) };


    // actionCodeTimeBreak Field Functions 
    bool hasActionCodeTimeBreak() const { return this->actionCodeTimeBreak_ != nullptr;};
    void deleteActionCodeTimeBreak() { this->actionCodeTimeBreak_ = nullptr;};
    inline int32_t actionCodeTimeBreak() const { DARABONBA_PTR_GET_DEFAULT(actionCodeTimeBreak_, 0) };
    inline SendCcoSmartCallRequest& setActionCodeTimeBreak(int32_t actionCodeTimeBreak) { DARABONBA_PTR_SET_VALUE(actionCodeTimeBreak_, actionCodeTimeBreak) };


    // asrAlsAmId Field Functions 
    bool hasAsrAlsAmId() const { return this->asrAlsAmId_ != nullptr;};
    void deleteAsrAlsAmId() { this->asrAlsAmId_ = nullptr;};
    inline string asrAlsAmId() const { DARABONBA_PTR_GET_DEFAULT(asrAlsAmId_, "") };
    inline SendCcoSmartCallRequest& setAsrAlsAmId(string asrAlsAmId) { DARABONBA_PTR_SET_VALUE(asrAlsAmId_, asrAlsAmId) };


    // asrBaseId Field Functions 
    bool hasAsrBaseId() const { return this->asrBaseId_ != nullptr;};
    void deleteAsrBaseId() { this->asrBaseId_ = nullptr;};
    inline string asrBaseId() const { DARABONBA_PTR_GET_DEFAULT(asrBaseId_, "") };
    inline SendCcoSmartCallRequest& setAsrBaseId(string asrBaseId) { DARABONBA_PTR_SET_VALUE(asrBaseId_, asrBaseId) };


    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string asrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline SendCcoSmartCallRequest& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // asrVocabularyId Field Functions 
    bool hasAsrVocabularyId() const { return this->asrVocabularyId_ != nullptr;};
    void deleteAsrVocabularyId() { this->asrVocabularyId_ = nullptr;};
    inline string asrVocabularyId() const { DARABONBA_PTR_GET_DEFAULT(asrVocabularyId_, "") };
    inline SendCcoSmartCallRequest& setAsrVocabularyId(string asrVocabularyId) { DARABONBA_PTR_SET_VALUE(asrVocabularyId_, asrVocabularyId) };


    // backgroundFileCode Field Functions 
    bool hasBackgroundFileCode() const { return this->backgroundFileCode_ != nullptr;};
    void deleteBackgroundFileCode() { this->backgroundFileCode_ = nullptr;};
    inline string backgroundFileCode() const { DARABONBA_PTR_GET_DEFAULT(backgroundFileCode_, "") };
    inline SendCcoSmartCallRequest& setBackgroundFileCode(string backgroundFileCode) { DARABONBA_PTR_SET_VALUE(backgroundFileCode_, backgroundFileCode) };


    // backgroundSpeed Field Functions 
    bool hasBackgroundSpeed() const { return this->backgroundSpeed_ != nullptr;};
    void deleteBackgroundSpeed() { this->backgroundSpeed_ = nullptr;};
    inline int32_t backgroundSpeed() const { DARABONBA_PTR_GET_DEFAULT(backgroundSpeed_, 0) };
    inline SendCcoSmartCallRequest& setBackgroundSpeed(int32_t backgroundSpeed) { DARABONBA_PTR_SET_VALUE(backgroundSpeed_, backgroundSpeed) };


    // backgroundVolume Field Functions 
    bool hasBackgroundVolume() const { return this->backgroundVolume_ != nullptr;};
    void deleteBackgroundVolume() { this->backgroundVolume_ = nullptr;};
    inline int32_t backgroundVolume() const { DARABONBA_PTR_GET_DEFAULT(backgroundVolume_, 0) };
    inline SendCcoSmartCallRequest& setBackgroundVolume(int32_t backgroundVolume) { DARABONBA_PTR_SET_VALUE(backgroundVolume_, backgroundVolume) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline SendCcoSmartCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string calledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline SendCcoSmartCallRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // dynamicId Field Functions 
    bool hasDynamicId() const { return this->dynamicId_ != nullptr;};
    void deleteDynamicId() { this->dynamicId_ = nullptr;};
    inline string dynamicId() const { DARABONBA_PTR_GET_DEFAULT(dynamicId_, "") };
    inline SendCcoSmartCallRequest& setDynamicId(string dynamicId) { DARABONBA_PTR_SET_VALUE(dynamicId_, dynamicId) };


    // earlyMediaAsr Field Functions 
    bool hasEarlyMediaAsr() const { return this->earlyMediaAsr_ != nullptr;};
    void deleteEarlyMediaAsr() { this->earlyMediaAsr_ = nullptr;};
    inline bool earlyMediaAsr() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaAsr_, false) };
    inline SendCcoSmartCallRequest& setEarlyMediaAsr(bool earlyMediaAsr) { DARABONBA_PTR_SET_VALUE(earlyMediaAsr_, earlyMediaAsr) };


    // enableITN Field Functions 
    bool hasEnableITN() const { return this->enableITN_ != nullptr;};
    void deleteEnableITN() { this->enableITN_ = nullptr;};
    inline bool enableITN() const { DARABONBA_PTR_GET_DEFAULT(enableITN_, false) };
    inline SendCcoSmartCallRequest& setEnableITN(bool enableITN) { DARABONBA_PTR_SET_VALUE(enableITN_, enableITN) };


    // muteTime Field Functions 
    bool hasMuteTime() const { return this->muteTime_ != nullptr;};
    void deleteMuteTime() { this->muteTime_ = nullptr;};
    inline int32_t muteTime() const { DARABONBA_PTR_GET_DEFAULT(muteTime_, 0) };
    inline SendCcoSmartCallRequest& setMuteTime(int32_t muteTime) { DARABONBA_PTR_SET_VALUE(muteTime_, muteTime) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendCcoSmartCallRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SendCcoSmartCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pauseTime Field Functions 
    bool hasPauseTime() const { return this->pauseTime_ != nullptr;};
    void deletePauseTime() { this->pauseTime_ = nullptr;};
    inline int32_t pauseTime() const { DARABONBA_PTR_GET_DEFAULT(pauseTime_, 0) };
    inline SendCcoSmartCallRequest& setPauseTime(int32_t pauseTime) { DARABONBA_PTR_SET_VALUE(pauseTime_, pauseTime) };


    // playTimes Field Functions 
    bool hasPlayTimes() const { return this->playTimes_ != nullptr;};
    void deletePlayTimes() { this->playTimes_ = nullptr;};
    inline int32_t playTimes() const { DARABONBA_PTR_GET_DEFAULT(playTimes_, 0) };
    inline SendCcoSmartCallRequest& setPlayTimes(int32_t playTimes) { DARABONBA_PTR_SET_VALUE(playTimes_, playTimes) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string prodCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline SendCcoSmartCallRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // recordFlag Field Functions 
    bool hasRecordFlag() const { return this->recordFlag_ != nullptr;};
    void deleteRecordFlag() { this->recordFlag_ = nullptr;};
    inline bool recordFlag() const { DARABONBA_PTR_GET_DEFAULT(recordFlag_, false) };
    inline SendCcoSmartCallRequest& setRecordFlag(bool recordFlag) { DARABONBA_PTR_SET_VALUE(recordFlag_, recordFlag) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SendCcoSmartCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SendCcoSmartCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline SendCcoSmartCallRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int32_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0) };
    inline SendCcoSmartCallRequest& setSpeed(int32_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // ttsConf Field Functions 
    bool hasTtsConf() const { return this->ttsConf_ != nullptr;};
    void deleteTtsConf() { this->ttsConf_ = nullptr;};
    inline bool ttsConf() const { DARABONBA_PTR_GET_DEFAULT(ttsConf_, false) };
    inline SendCcoSmartCallRequest& setTtsConf(bool ttsConf) { DARABONBA_PTR_SET_VALUE(ttsConf_, ttsConf) };


    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int32_t ttsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0) };
    inline SendCcoSmartCallRequest& setTtsSpeed(int32_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsStyle Field Functions 
    bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
    void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
    inline string ttsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
    inline SendCcoSmartCallRequest& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int32_t ttsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0) };
    inline SendCcoSmartCallRequest& setTtsVolume(int32_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


    // voiceCode Field Functions 
    bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
    void deleteVoiceCode() { this->voiceCode_ = nullptr;};
    inline string voiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
    inline SendCcoSmartCallRequest& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


    // voiceCodeParam Field Functions 
    bool hasVoiceCodeParam() const { return this->voiceCodeParam_ != nullptr;};
    void deleteVoiceCodeParam() { this->voiceCodeParam_ = nullptr;};
    inline string voiceCodeParam() const { DARABONBA_PTR_GET_DEFAULT(voiceCodeParam_, "") };
    inline SendCcoSmartCallRequest& setVoiceCodeParam(string voiceCodeParam) { DARABONBA_PTR_SET_VALUE(voiceCodeParam_, voiceCodeParam) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SendCcoSmartCallRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<bool> actionCodeBreak_ = nullptr;
    std::shared_ptr<int32_t> actionCodeTimeBreak_ = nullptr;
    std::shared_ptr<string> asrAlsAmId_ = nullptr;
    std::shared_ptr<string> asrBaseId_ = nullptr;
    std::shared_ptr<string> asrModelId_ = nullptr;
    std::shared_ptr<string> asrVocabularyId_ = nullptr;
    std::shared_ptr<string> backgroundFileCode_ = nullptr;
    std::shared_ptr<int32_t> backgroundSpeed_ = nullptr;
    std::shared_ptr<int32_t> backgroundVolume_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calledShowNumber_ = nullptr;
    std::shared_ptr<string> dynamicId_ = nullptr;
    std::shared_ptr<bool> earlyMediaAsr_ = nullptr;
    std::shared_ptr<bool> enableITN_ = nullptr;
    std::shared_ptr<int32_t> muteTime_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<int32_t> pauseTime_ = nullptr;
    std::shared_ptr<int32_t> playTimes_ = nullptr;
    std::shared_ptr<string> prodCode_ = nullptr;
    std::shared_ptr<bool> recordFlag_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<int32_t> sessionTimeout_ = nullptr;
    std::shared_ptr<int32_t> speed_ = nullptr;
    std::shared_ptr<bool> ttsConf_ = nullptr;
    std::shared_ptr<int32_t> ttsSpeed_ = nullptr;
    std::shared_ptr<string> ttsStyle_ = nullptr;
    std::shared_ptr<int32_t> ttsVolume_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> voiceCode_ = nullptr;
    std::shared_ptr<string> voiceCodeParam_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
