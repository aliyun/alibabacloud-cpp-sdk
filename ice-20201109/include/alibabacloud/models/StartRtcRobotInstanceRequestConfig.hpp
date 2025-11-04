// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCEREQUESTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCEREQUESTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartRtcRobotInstanceRequestConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcRobotInstanceRequestConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AsrMaxSilence, asrMaxSilence_);
      DARABONBA_PTR_TO_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(UseVoiceprint, useVoiceprint_);
      DARABONBA_PTR_TO_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_TO_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcRobotInstanceRequestConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrMaxSilence, asrMaxSilence_);
      DARABONBA_PTR_FROM_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(UseVoiceprint, useVoiceprint_);
      DARABONBA_PTR_FROM_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_FROM_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    StartRtcRobotInstanceRequestConfig() = default ;
    StartRtcRobotInstanceRequestConfig(const StartRtcRobotInstanceRequestConfig &) = default ;
    StartRtcRobotInstanceRequestConfig(StartRtcRobotInstanceRequestConfig &&) = default ;
    StartRtcRobotInstanceRequestConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcRobotInstanceRequestConfig() = default ;
    StartRtcRobotInstanceRequestConfig& operator=(const StartRtcRobotInstanceRequestConfig &) = default ;
    StartRtcRobotInstanceRequestConfig& operator=(StartRtcRobotInstanceRequestConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrMaxSilence_ == nullptr
        && return this->enableVoiceInterrupt_ == nullptr && return this->greeting_ == nullptr && return this->useVoiceprint_ == nullptr && return this->userOfflineTimeout_ == nullptr && return this->userOnlineTimeout_ == nullptr
        && return this->voiceId_ == nullptr && return this->voiceprintId_ == nullptr && return this->volume_ == nullptr; };
    // asrMaxSilence Field Functions 
    bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
    void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
    inline int32_t asrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
    inline StartRtcRobotInstanceRequestConfig& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


    // enableVoiceInterrupt Field Functions 
    bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
    void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
    inline bool enableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
    inline StartRtcRobotInstanceRequestConfig& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline StartRtcRobotInstanceRequestConfig& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // useVoiceprint Field Functions 
    bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
    void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
    inline bool useVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
    inline StartRtcRobotInstanceRequestConfig& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


    // userOfflineTimeout Field Functions 
    bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
    void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
    inline int32_t userOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
    inline StartRtcRobotInstanceRequestConfig& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


    // userOnlineTimeout Field Functions 
    bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
    void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
    inline int32_t userOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
    inline StartRtcRobotInstanceRequestConfig& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline StartRtcRobotInstanceRequestConfig& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string voiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline StartRtcRobotInstanceRequestConfig& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int64_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
    inline StartRtcRobotInstanceRequestConfig& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<int32_t> asrMaxSilence_ = nullptr;
    std::shared_ptr<bool> enableVoiceInterrupt_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<bool> useVoiceprint_ = nullptr;
    std::shared_ptr<int32_t> userOfflineTimeout_ = nullptr;
    std::shared_ptr<int32_t> userOnlineTimeout_ = nullptr;
    std::shared_ptr<string> voiceId_ = nullptr;
    std::shared_ptr<string> voiceprintId_ = nullptr;
    std::shared_ptr<int64_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
