// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCROBOTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCROBOTINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcRobotInstanceResponseBodyConfig.hpp>
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
    virtual bool empty() const override { return this->authToken_ == nullptr
        && return this->channelId_ == nullptr && return this->config_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->userData_ == nullptr
        && return this->userId_ == nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline string authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setAuthToken(string authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeRtcRobotInstanceResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, DescribeRtcRobotInstanceResponseBodyConfig) };
    inline DescribeRtcRobotInstanceResponseBodyConfig config() { DARABONBA_PTR_GET(config_, DescribeRtcRobotInstanceResponseBodyConfig) };
    inline DescribeRtcRobotInstanceResponseBody& setConfig(const DescribeRtcRobotInstanceResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeRtcRobotInstanceResponseBody& setConfig(DescribeRtcRobotInstanceResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeRtcRobotInstanceResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> authToken_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<DescribeRtcRobotInstanceResponseBodyConfig> config_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
