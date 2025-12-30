// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCROBOTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCROBOTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeRtcRobotInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcRobotInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcRobotInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeRtcRobotInstanceResponseBody() = default ;
    DescribeRtcRobotInstanceResponseBody(const DescribeRtcRobotInstanceResponseBody &) = default ;
    DescribeRtcRobotInstanceResponseBody(DescribeRtcRobotInstanceResponseBody &&) = default ;
    DescribeRtcRobotInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcRobotInstanceResponseBody() = default ;
    DescribeRtcRobotInstanceResponseBody& operator=(const DescribeRtcRobotInstanceResponseBody &) = default ;
    DescribeRtcRobotInstanceResponseBody& operator=(DescribeRtcRobotInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
        DARABONBA_PTR_TO_JSON(Greeting, greeting_);
        DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
        DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
        DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
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
      virtual bool empty() const override { return this->enableVoiceInterrupt_ == nullptr
        && this->greeting_ == nullptr && this->voiceId_ == nullptr; };
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


      // voiceId Field Functions 
      bool hasVoiceId() const { return this->voiceId_ != nullptr;};
      void deleteVoiceId() { this->voiceId_ = nullptr;};
      inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
      inline Config& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    protected:
      shared_ptr<bool> enableVoiceInterrupt_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<string> voiceId_ {};
    };

    virtual bool empty() const override { return this->authToken_ == nullptr
        && this->channelId_ == nullptr && this->config_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->userData_ == nullptr
        && this->userId_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string getAuthToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeRtcRobotInstanceResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, DescribeRtcRobotInstanceResponseBody::Config) };
    inline DescribeRtcRobotInstanceResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, DescribeRtcRobotInstanceResponseBody::Config) };
    inline DescribeRtcRobotInstanceResponseBody& setConfig(const DescribeRtcRobotInstanceResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeRtcRobotInstanceResponseBody& setConfig(DescribeRtcRobotInstanceResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> authToken_ {};
    shared_ptr<string> channelId_ {};
    shared_ptr<DescribeRtcRobotInstanceResponseBody::Config> config_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> userData_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
