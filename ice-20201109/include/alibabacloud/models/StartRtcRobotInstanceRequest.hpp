// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartRtcRobotInstanceRequestConfig.hpp>
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
    virtual bool empty() const override { this->authToken_ != nullptr
        && this->channelId_ != nullptr && this->config_ != nullptr && this->robotId_ != nullptr && this->userData_ != nullptr && this->userId_ != nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline StartRtcRobotInstanceRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRtcRobotInstanceRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const StartRtcRobotInstanceRequestConfig & config() const { DARABONBA_PTR_GET_CONST(config_, StartRtcRobotInstanceRequestConfig) };
    inline StartRtcRobotInstanceRequestConfig config() { DARABONBA_PTR_GET(config_, StartRtcRobotInstanceRequestConfig) };
    inline StartRtcRobotInstanceRequest& setConfig(const StartRtcRobotInstanceRequestConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline StartRtcRobotInstanceRequest& setConfig(StartRtcRobotInstanceRequestConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline string robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
    inline StartRtcRobotInstanceRequest& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartRtcRobotInstanceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartRtcRobotInstanceRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> authToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<StartRtcRobotInstanceRequestConfig> config_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> robotId_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
