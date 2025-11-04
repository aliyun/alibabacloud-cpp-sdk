// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCROBOTINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class StartRtcRobotInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcRobotInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Config, configShrink_);
      DARABONBA_PTR_TO_JSON(RobotId, robotId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcRobotInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Config, configShrink_);
      DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    StartRtcRobotInstanceShrinkRequest() = default ;
    StartRtcRobotInstanceShrinkRequest(const StartRtcRobotInstanceShrinkRequest &) = default ;
    StartRtcRobotInstanceShrinkRequest(StartRtcRobotInstanceShrinkRequest &&) = default ;
    StartRtcRobotInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcRobotInstanceShrinkRequest() = default ;
    StartRtcRobotInstanceShrinkRequest& operator=(const StartRtcRobotInstanceShrinkRequest &) = default ;
    StartRtcRobotInstanceShrinkRequest& operator=(StartRtcRobotInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authToken_ == nullptr
        && return this->channelId_ == nullptr && return this->configShrink_ == nullptr && return this->robotId_ == nullptr && return this->userData_ == nullptr && return this->userId_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline StartRtcRobotInstanceShrinkRequest& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRtcRobotInstanceShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // configShrink Field Functions 
    bool hasConfigShrink() const { return this->configShrink_ != nullptr;};
    void deleteConfigShrink() { this->configShrink_ = nullptr;};
    inline string configShrink() const { DARABONBA_PTR_GET_DEFAULT(configShrink_, "") };
    inline StartRtcRobotInstanceShrinkRequest& setConfigShrink(string configShrink) { DARABONBA_PTR_SET_VALUE(configShrink_, configShrink) };


    // robotId Field Functions 
    bool hasRobotId() const { return this->robotId_ != nullptr;};
    void deleteRobotId() { this->robotId_ = nullptr;};
    inline string robotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, "") };
    inline StartRtcRobotInstanceShrinkRequest& setRobotId(string robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline StartRtcRobotInstanceShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline StartRtcRobotInstanceShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> authToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> configShrink_ = nullptr;
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
