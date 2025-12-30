// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartRtcRobotInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcRobotInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcRobotInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    StartRtcRobotInstanceRequest() = default ;
    StartRtcRobotInstanceRequest(const StartRtcRobotInstanceRequest &) = default ;
    StartRtcRobotInstanceRequest(StartRtcRobotInstanceRequest &&) = default ;
    StartRtcRobotInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcRobotInstanceRequest() = default ;
    StartRtcRobotInstanceRequest& operator=(const StartRtcRobotInstanceRequest &) = default ;
    StartRtcRobotInstanceRequest& operator=(StartRtcRobotInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
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
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asrMaxSilence_ == nullptr
        && this->enableVoiceInterrupt_ == nullptr && this->greeting_ == nullptr && this->useVoiceprint_ == nullptr && this->userOfflineTimeout_ == nullptr && this->userOnlineTimeout_ == nullptr
        && this->voiceId_ == nullptr && this->voiceprintId_ == nullptr && this->volume_ == nullptr; };
      // asrMaxSilence Field Functions 
      bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
      void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
      inline int32_t getAsrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
      inline Config& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


      // enableVoiceInterrupt Field Functions 
      bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
      void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
      inline bool getEnableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
      inline Config& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


      // greeting Field Functions 
      bool hasGreeting() const { return this->greeting_ != nullptr;};
      void deleteGreeting() { this->greeting_ = nullptr;};
      inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
      inline Config& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


      // useVoiceprint Field Functions 
      bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
      void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
      inline bool getUseVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
      inline Config& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


      // userOfflineTimeout Field Functions 
      bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
      void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
      inline int32_t getUserOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
      inline Config& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


      // userOnlineTimeout Field Functions 
      bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
      void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
      inline int32_t getUserOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
      inline Config& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


      // voiceId Field Functions 
      bool hasVoiceId() const { return this->voiceId_ != nullptr;};
      void deleteVoiceId() { this->voiceId_ = nullptr;};
      inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
      inline Config& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


      // voiceprintId Field Functions 
      bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
      void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
      inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
      inline Config& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int64_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
      inline Config& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      shared_ptr<int32_t> asrMaxSilence_ {};
      shared_ptr<bool> enableVoiceInterrupt_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<bool> useVoiceprint_ {};
      shared_ptr<int32_t> userOfflineTimeout_ {};
      shared_ptr<int32_t> userOnlineTimeout_ {};
      shared_ptr<string> voiceId_ {};
      shared_ptr<string> voiceprintId_ {};
      shared_ptr<int64_t> volume_ {};
    };

    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->channelId_ == nullptr && this->config_ == nullptr && this->robotId_ == nullptr && this->userData_ == nullptr && this->userId_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline StartRtcRobotInstanceRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRtcRobotInstanceRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const StartRtcRobotInstanceRequest::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, StartRtcRobotInstanceRequest::Config) };
    inline StartRtcRobotInstanceRequest::Config getConfig() { DARABONBA_PTR_GET(config_, StartRtcRobotInstanceRequest::Config) };
    inline StartRtcRobotInstanceRequest& setConfig(const StartRtcRobotInstanceRequest::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline StartRtcRobotInstanceRequest& setConfig(StartRtcRobotInstanceRequest::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline string getRobotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
    inline StartRtcRobotInstanceRequest& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartRtcRobotInstanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartRtcRobotInstanceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authToken_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<StartRtcRobotInstanceRequest::Config> config_ {};
    // This parameter is required.
    shared_ptr<string> robotId_ {};
    shared_ptr<string> userData_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
