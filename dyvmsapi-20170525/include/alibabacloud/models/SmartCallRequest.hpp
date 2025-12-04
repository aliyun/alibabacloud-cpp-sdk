// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SMARTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SMARTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SmartCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SmartCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionCodeBreak, actionCodeBreak_);
      DARABONBA_PTR_TO_JSON(ActionCodeTimeBreak, actionCodeTimeBreak_);
      DARABONBA_PTR_TO_JSON(AsrBaseId, asrBaseId_);
      DARABONBA_PTR_TO_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_TO_JSON(BackgroundFileCode, backgroundFileCode_);
      DARABONBA_PTR_TO_JSON(BackgroundSpeed, backgroundSpeed_);
      DARABONBA_PTR_TO_JSON(BackgroundVolume, backgroundVolume_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_TO_JSON(DynamicId, dynamicId_);
      DARABONBA_PTR_TO_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_TO_JSON(EnableITN, enableITN_);
      DARABONBA_PTR_TO_JSON(MuteTime, muteTime_);
      DARABONBA_PTR_TO_JSON(NoiseThreshold, noiseThreshold_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PauseTime, pauseTime_);
      DARABONBA_PTR_TO_JSON(RecordFlag, recordFlag_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(StreamAsr, streamAsr_);
      DARABONBA_PTR_TO_JSON(TtsConf, ttsConf_);
      DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
      DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_TO_JSON(VoiceCodeParam, voiceCodeParam_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SmartCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionCodeBreak, actionCodeBreak_);
      DARABONBA_PTR_FROM_JSON(ActionCodeTimeBreak, actionCodeTimeBreak_);
      DARABONBA_PTR_FROM_JSON(AsrBaseId, asrBaseId_);
      DARABONBA_PTR_FROM_JSON(AsrModelId, asrModelId_);
      DARABONBA_PTR_FROM_JSON(BackgroundFileCode, backgroundFileCode_);
      DARABONBA_PTR_FROM_JSON(BackgroundSpeed, backgroundSpeed_);
      DARABONBA_PTR_FROM_JSON(BackgroundVolume, backgroundVolume_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CalledShowNumber, calledShowNumber_);
      DARABONBA_PTR_FROM_JSON(DynamicId, dynamicId_);
      DARABONBA_PTR_FROM_JSON(EarlyMediaAsr, earlyMediaAsr_);
      DARABONBA_PTR_FROM_JSON(EnableITN, enableITN_);
      DARABONBA_PTR_FROM_JSON(MuteTime, muteTime_);
      DARABONBA_PTR_FROM_JSON(NoiseThreshold, noiseThreshold_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PauseTime, pauseTime_);
      DARABONBA_PTR_FROM_JSON(RecordFlag, recordFlag_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(StreamAsr, streamAsr_);
      DARABONBA_PTR_FROM_JSON(TtsConf, ttsConf_);
      DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
      DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_FROM_JSON(VoiceCodeParam, voiceCodeParam_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SmartCallRequest() = default ;
    SmartCallRequest(const SmartCallRequest &) = default ;
    SmartCallRequest(SmartCallRequest &&) = default ;
    SmartCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SmartCallRequest() = default ;
    SmartCallRequest& operator=(const SmartCallRequest &) = default ;
    SmartCallRequest& operator=(SmartCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionCodeBreak_ == nullptr
        && return this->actionCodeTimeBreak_ == nullptr && return this->asrBaseId_ == nullptr && return this->asrModelId_ == nullptr && return this->backgroundFileCode_ == nullptr && return this->backgroundSpeed_ == nullptr
        && return this->backgroundVolume_ == nullptr && return this->calledNumber_ == nullptr && return this->calledShowNumber_ == nullptr && return this->dynamicId_ == nullptr && return this->earlyMediaAsr_ == nullptr
        && return this->enableITN_ == nullptr && return this->muteTime_ == nullptr && return this->noiseThreshold_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr
        && return this->pauseTime_ == nullptr && return this->recordFlag_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sessionTimeout_ == nullptr
        && return this->speed_ == nullptr && return this->streamAsr_ == nullptr && return this->ttsConf_ == nullptr && return this->ttsSpeed_ == nullptr && return this->ttsStyle_ == nullptr
        && return this->ttsVolume_ == nullptr && return this->voiceCode_ == nullptr && return this->voiceCodeParam_ == nullptr && return this->volume_ == nullptr; };
    // actionCodeBreak Field Functions 
    bool hasActionCodeBreak() const { return this->actionCodeBreak_ != nullptr;};
    void deleteActionCodeBreak() { this->actionCodeBreak_ = nullptr;};
    inline bool actionCodeBreak() const { DARABONBA_PTR_GET_DEFAULT(actionCodeBreak_, false) };
    inline SmartCallRequest& setActionCodeBreak(bool actionCodeBreak) { DARABONBA_PTR_SET_VALUE(actionCodeBreak_, actionCodeBreak) };


    // actionCodeTimeBreak Field Functions 
    bool hasActionCodeTimeBreak() const { return this->actionCodeTimeBreak_ != nullptr;};
    void deleteActionCodeTimeBreak() { this->actionCodeTimeBreak_ = nullptr;};
    inline int32_t actionCodeTimeBreak() const { DARABONBA_PTR_GET_DEFAULT(actionCodeTimeBreak_, 0) };
    inline SmartCallRequest& setActionCodeTimeBreak(int32_t actionCodeTimeBreak) { DARABONBA_PTR_SET_VALUE(actionCodeTimeBreak_, actionCodeTimeBreak) };


    // asrBaseId Field Functions 
    bool hasAsrBaseId() const { return this->asrBaseId_ != nullptr;};
    void deleteAsrBaseId() { this->asrBaseId_ = nullptr;};
    inline string asrBaseId() const { DARABONBA_PTR_GET_DEFAULT(asrBaseId_, "") };
    inline SmartCallRequest& setAsrBaseId(string asrBaseId) { DARABONBA_PTR_SET_VALUE(asrBaseId_, asrBaseId) };


    // asrModelId Field Functions 
    bool hasAsrModelId() const { return this->asrModelId_ != nullptr;};
    void deleteAsrModelId() { this->asrModelId_ = nullptr;};
    inline string asrModelId() const { DARABONBA_PTR_GET_DEFAULT(asrModelId_, "") };
    inline SmartCallRequest& setAsrModelId(string asrModelId) { DARABONBA_PTR_SET_VALUE(asrModelId_, asrModelId) };


    // backgroundFileCode Field Functions 
    bool hasBackgroundFileCode() const { return this->backgroundFileCode_ != nullptr;};
    void deleteBackgroundFileCode() { this->backgroundFileCode_ = nullptr;};
    inline string backgroundFileCode() const { DARABONBA_PTR_GET_DEFAULT(backgroundFileCode_, "") };
    inline SmartCallRequest& setBackgroundFileCode(string backgroundFileCode) { DARABONBA_PTR_SET_VALUE(backgroundFileCode_, backgroundFileCode) };


    // backgroundSpeed Field Functions 
    bool hasBackgroundSpeed() const { return this->backgroundSpeed_ != nullptr;};
    void deleteBackgroundSpeed() { this->backgroundSpeed_ = nullptr;};
    inline int32_t backgroundSpeed() const { DARABONBA_PTR_GET_DEFAULT(backgroundSpeed_, 0) };
    inline SmartCallRequest& setBackgroundSpeed(int32_t backgroundSpeed) { DARABONBA_PTR_SET_VALUE(backgroundSpeed_, backgroundSpeed) };


    // backgroundVolume Field Functions 
    bool hasBackgroundVolume() const { return this->backgroundVolume_ != nullptr;};
    void deleteBackgroundVolume() { this->backgroundVolume_ = nullptr;};
    inline int32_t backgroundVolume() const { DARABONBA_PTR_GET_DEFAULT(backgroundVolume_, 0) };
    inline SmartCallRequest& setBackgroundVolume(int32_t backgroundVolume) { DARABONBA_PTR_SET_VALUE(backgroundVolume_, backgroundVolume) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline SmartCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // calledShowNumber Field Functions 
    bool hasCalledShowNumber() const { return this->calledShowNumber_ != nullptr;};
    void deleteCalledShowNumber() { this->calledShowNumber_ = nullptr;};
    inline string calledShowNumber() const { DARABONBA_PTR_GET_DEFAULT(calledShowNumber_, "") };
    inline SmartCallRequest& setCalledShowNumber(string calledShowNumber) { DARABONBA_PTR_SET_VALUE(calledShowNumber_, calledShowNumber) };


    // dynamicId Field Functions 
    bool hasDynamicId() const { return this->dynamicId_ != nullptr;};
    void deleteDynamicId() { this->dynamicId_ = nullptr;};
    inline string dynamicId() const { DARABONBA_PTR_GET_DEFAULT(dynamicId_, "") };
    inline SmartCallRequest& setDynamicId(string dynamicId) { DARABONBA_PTR_SET_VALUE(dynamicId_, dynamicId) };


    // earlyMediaAsr Field Functions 
    bool hasEarlyMediaAsr() const { return this->earlyMediaAsr_ != nullptr;};
    void deleteEarlyMediaAsr() { this->earlyMediaAsr_ = nullptr;};
    inline bool earlyMediaAsr() const { DARABONBA_PTR_GET_DEFAULT(earlyMediaAsr_, false) };
    inline SmartCallRequest& setEarlyMediaAsr(bool earlyMediaAsr) { DARABONBA_PTR_SET_VALUE(earlyMediaAsr_, earlyMediaAsr) };


    // enableITN Field Functions 
    bool hasEnableITN() const { return this->enableITN_ != nullptr;};
    void deleteEnableITN() { this->enableITN_ = nullptr;};
    inline bool enableITN() const { DARABONBA_PTR_GET_DEFAULT(enableITN_, false) };
    inline SmartCallRequest& setEnableITN(bool enableITN) { DARABONBA_PTR_SET_VALUE(enableITN_, enableITN) };


    // muteTime Field Functions 
    bool hasMuteTime() const { return this->muteTime_ != nullptr;};
    void deleteMuteTime() { this->muteTime_ = nullptr;};
    inline int32_t muteTime() const { DARABONBA_PTR_GET_DEFAULT(muteTime_, 0) };
    inline SmartCallRequest& setMuteTime(int32_t muteTime) { DARABONBA_PTR_SET_VALUE(muteTime_, muteTime) };


    // noiseThreshold Field Functions 
    bool hasNoiseThreshold() const { return this->noiseThreshold_ != nullptr;};
    void deleteNoiseThreshold() { this->noiseThreshold_ = nullptr;};
    inline double noiseThreshold() const { DARABONBA_PTR_GET_DEFAULT(noiseThreshold_, 0.0) };
    inline SmartCallRequest& setNoiseThreshold(double noiseThreshold) { DARABONBA_PTR_SET_VALUE(noiseThreshold_, noiseThreshold) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SmartCallRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SmartCallRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pauseTime Field Functions 
    bool hasPauseTime() const { return this->pauseTime_ != nullptr;};
    void deletePauseTime() { this->pauseTime_ = nullptr;};
    inline int32_t pauseTime() const { DARABONBA_PTR_GET_DEFAULT(pauseTime_, 0) };
    inline SmartCallRequest& setPauseTime(int32_t pauseTime) { DARABONBA_PTR_SET_VALUE(pauseTime_, pauseTime) };


    // recordFlag Field Functions 
    bool hasRecordFlag() const { return this->recordFlag_ != nullptr;};
    void deleteRecordFlag() { this->recordFlag_ = nullptr;};
    inline bool recordFlag() const { DARABONBA_PTR_GET_DEFAULT(recordFlag_, false) };
    inline SmartCallRequest& setRecordFlag(bool recordFlag) { DARABONBA_PTR_SET_VALUE(recordFlag_, recordFlag) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SmartCallRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SmartCallRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline SmartCallRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int32_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0) };
    inline SmartCallRequest& setSpeed(int32_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // streamAsr Field Functions 
    bool hasStreamAsr() const { return this->streamAsr_ != nullptr;};
    void deleteStreamAsr() { this->streamAsr_ = nullptr;};
    inline int32_t streamAsr() const { DARABONBA_PTR_GET_DEFAULT(streamAsr_, 0) };
    inline SmartCallRequest& setStreamAsr(int32_t streamAsr) { DARABONBA_PTR_SET_VALUE(streamAsr_, streamAsr) };


    // ttsConf Field Functions 
    bool hasTtsConf() const { return this->ttsConf_ != nullptr;};
    void deleteTtsConf() { this->ttsConf_ = nullptr;};
    inline bool ttsConf() const { DARABONBA_PTR_GET_DEFAULT(ttsConf_, false) };
    inline SmartCallRequest& setTtsConf(bool ttsConf) { DARABONBA_PTR_SET_VALUE(ttsConf_, ttsConf) };


    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int32_t ttsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0) };
    inline SmartCallRequest& setTtsSpeed(int32_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsStyle Field Functions 
    bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
    void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
    inline string ttsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
    inline SmartCallRequest& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int32_t ttsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0) };
    inline SmartCallRequest& setTtsVolume(int32_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


    // voiceCode Field Functions 
    bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
    void deleteVoiceCode() { this->voiceCode_ = nullptr;};
    inline string voiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
    inline SmartCallRequest& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


    // voiceCodeParam Field Functions 
    bool hasVoiceCodeParam() const { return this->voiceCodeParam_ != nullptr;};
    void deleteVoiceCodeParam() { this->voiceCodeParam_ = nullptr;};
    inline string voiceCodeParam() const { DARABONBA_PTR_GET_DEFAULT(voiceCodeParam_, "") };
    inline SmartCallRequest& setVoiceCodeParam(string voiceCodeParam) { DARABONBA_PTR_SET_VALUE(voiceCodeParam_, voiceCodeParam) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SmartCallRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    // Specifies whether the playback of the recording file can be interrupted. Default value: **true**. The default value indicates that the playback of the recording file can be interrupted.
    // 
    // If you set the value of this parameter to false, the playback of the recording file cannot be interrupted even if the value of action_break is set to true.
    // 
    // > The value of action_code_break takes precedence over the value of action_break.
    std::shared_ptr<bool> actionCodeBreak_ = nullptr;
    // The duration that the user keeps speaking. The playback of the recording file is interrupted when this duration is reached. Unit: milliseconds.
    // 
    // If the value of ActionCodeBreak is set to **true** for the recording file and the duration that the user keeps speaking reaches the specified duration, the playback of the recording file is interrupted. If you do not specify ActionCodeTimeBreak or set the value of ActionCodeTimeBreak to 0, the setting of ActionCodeBreak does not take effect.
    std::shared_ptr<int32_t> actionCodeTimeBreak_ = nullptr;
    // The ASR base model. Valid values:
    // 
    // *   **customer_service_8k** (default): Chinese Mandarin.
    // *   **dialect_customer_service_8k**: a heavy accent.
    // 
    // > You must specify the ASR model when you call the SmartCall operation. We recommend that you specify either of the AsrModelId and AsrBaseId parameters.
    // 
    // *   If you specify only the AsrModelId parameter, the specified ASR model is used.
    // 
    // *   If you specify only the AsrBaseId parameter, the ASR base model is used.
    // 
    // *   If you specify neither of the two parameters, the default ASR base model is used, that is, the default value customer_service_8k is used for the AsrBaseId parameter.
    // 
    // *   If you specify both parameters, make sure that their values do not conflict with each other.
    std::shared_ptr<string> asrBaseId_ = nullptr;
    // The ID of the Automatic Speech Recognition (ASR) model.
    // 
    // You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home) and view the ID of the ASR model on the **ASR Model Management** page.
    // 
    // > You must specify the ASR model when you call the SmartCall operation. We recommend that you specify either of the AsrModelId and AsrBaseId parameters.
    // 
    // *   If you specify only the AsrModelId parameter, the specified ASR model is used.
    // 
    // *   If you specify only the AsrBaseId parameter, the specified ASR base model is used.
    // 
    // *   If you specify neither of the two parameters, the default value customer_service_8k is used for the AsrBaseId parameter. This means that the default Mandarin ASR base model is used.
    // 
    // *   If you specify both parameters, make sure that their values do not conflict with each other.
    std::shared_ptr<string> asrModelId_ = nullptr;
    // The ID of the background voice file that is played back when the user talks with the robot.
    // 
    // You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice File Management**, click the **Intelligent Speech Interaction Recording File** tab, and then click **Details** in the Actions column to view the voice ID.
    std::shared_ptr<string> backgroundFileCode_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<int32_t> backgroundSpeed_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<int32_t> backgroundVolume_ = nullptr;
    // The called number. Only phone numbers in the Chinese mainland are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    // The number displayed to the called party. The value must be the number you purchased.
    // 
    // You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home) and choose **Voice Numbers** > **Real Number Management** to view the number you purchased.
    // 
    // This parameter is required.
    std::shared_ptr<string> calledShowNumber_ = nullptr;
    // The dynamic extension ID that is reserved for the caller of the operation. This ID is returned in the callback URL and is used as the development identifier of the customer.
    std::shared_ptr<string> dynamicId_ = nullptr;
    // Specifies whether to enable speech recognition of early media. Valid values:
    // 
    // *   **false** (default): Speech recognition of early media is disabled.
    // *   **true**: Speech recognition of early media is enabled.
    // 
    // > If you set the value of this parameter to **true**, the reason why the call is not answered is recorded.
    std::shared_ptr<bool> earlyMediaAsr_ = nullptr;
    // Specifies whether to enable Inverse Text Normalization (ITN) during post-processing. Default value: **false**. If you set the value to false, ITN is not enabled during post-processing.
    // 
    // If you set the value to **true**, Chinese numerals are converted into Arabic numerals for output.
    std::shared_ptr<bool> enableITN_ = nullptr;
    // The silence duration. The system determines the end of the conversation based on the silence duration of the user. Unit: milliseconds. Valid values: 1000 to 20000.****
    // 
    // > 
    // 
    // *   If you specify a value out of the valid range, the default value **10000** is used.
    // 
    // *   The parameter value can be adjusted during the conversation. The last setting prevails.
    std::shared_ptr<int32_t> muteTime_ = nullptr;
    std::shared_ptr<double> noiseThreshold_ = nullptr;
    // The ID that is reserved for the caller of the operation. This ID is returned to the caller in a receipt message.
    // 
    // The value is of the STRING type and must be 1 to 15 bytes in length.
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The pause duration. The system determines the end of a sentence based on the pause duration of the user in the conversation. Unit: milliseconds. Valid values: 300 to 1200.****
    // 
    // > 
    // 
    // *   If you specify a value out of the valid range, the default value **800** is used.
    // 
    // *   You cannot change the parameter value after specifying it.
    std::shared_ptr<int32_t> pauseTime_ = nullptr;
    // Specifies whether to record the conversation. Valid values:
    // 
    // *   **true**: The conversation is recorded.
    // *   **false**: The conversation is not recorded.
    std::shared_ptr<bool> recordFlag_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The maximum call duration. The call is automatically hung up when the maximum call duration is reached. Unit: seconds.
    // 
    // > The maximum call duration is 3,600 seconds.
    std::shared_ptr<int32_t> sessionTimeout_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<int32_t> speed_ = nullptr;
    // Specifies whether to enable streaming ASR, which intelligently judges what the user wants to express based on the first few words spoken by the user. Valid values:
    // 
    // *   **0**: Streaming ASR is disabled.
    // *   **1**: Streaming ASR is enabled.
    std::shared_ptr<int32_t> streamAsr_ = nullptr;
    // Specifies whether to set TTS sound parameters. Valid values:
    // 
    // *   **true**: TTS sound parameters must be set. You must set the **TtsStyle**, **TtsColume**, and **TtsSpeed** parameters to specify a sound style.
    // *   **false**: TTS sound parameters do not need to be set. The values of TTS sound parameters do not take effect even if you set them.
    std::shared_ptr<bool> ttsConf_ = nullptr;
    // The speed of TTS variable playback. Valid values: -200 to 200. Default value: 0.
    std::shared_ptr<int32_t> ttsSpeed_ = nullptr;
    // The sound style for TTS variable playback. Default value: **xiaoyun**. For more information about the sound styles, see the **Sound styles** table below.
    std::shared_ptr<string> ttsStyle_ = nullptr;
    // The volume of TTS variable playback. Valid values: 0 to 100. Default value: 0.
    std::shared_ptr<int32_t> ttsVolume_ = nullptr;
    // The recording file that is played back in the intelligent outbound call.
    // 
    // The file can be an online file, a voice file uploaded from the Voice Messaging Service console, or a text-to-speech (TTS) template that contains variables. You can specify multiple files and a TTS variable together. Separate them with commas (,). The values of the variables in the TTS template are specified by the **VoiceCodeParam** parameter.
    // 
    // *   If you use an online file as the recording file, set the value of **VoiceCode** to the URL of the file that can be accessed over the Internet.
    // *   If you use a voice file uploaded from the Voice Messaging Service console as the recording file, set the value of **VoiceCode** to the voice ID of the file. You can log on to the [Voice Messaging Service console](https://dyvms.console.aliyun.com/overview/home), choose **Voice File Management**, click the **Intelligent Speech Interaction Recording File** tab, and then click **Details** in the Actions column to view the voice ID.
    // *   If you use a TTS template that contains variables as the recording file, set the value of **VoiceCode** to a variable name such as $name$, and also set a value for the variable in the **VoiceCodeParam** parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> voiceCode_ = nullptr;
    // The value of the TTS variable, in the JSON format. This value must match the TTS variable specified by the **VoiceCode** parameter.
    std::shared_ptr<string> voiceCodeParam_ = nullptr;
    // The volume at which the recording file is played. Valid values: -4 to 4. We recommend that you set the value of this parameter to **1**.
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
