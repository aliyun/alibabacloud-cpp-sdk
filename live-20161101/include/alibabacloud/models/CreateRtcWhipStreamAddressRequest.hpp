// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERTCWHIPSTREAMADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERTCWHIPSTREAMADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateRTCWhipStreamAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRTCWhipStreamAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRTCWhipStreamAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateRTCWhipStreamAddressRequest() = default ;
    CreateRTCWhipStreamAddressRequest(const CreateRTCWhipStreamAddressRequest &) = default ;
    CreateRTCWhipStreamAddressRequest(CreateRTCWhipStreamAddressRequest &&) = default ;
    CreateRTCWhipStreamAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRTCWhipStreamAddressRequest() = default ;
    CreateRTCWhipStreamAddressRequest& operator=(const CreateRTCWhipStreamAddressRequest &) = default ;
    CreateRTCWhipStreamAddressRequest& operator=(CreateRTCWhipStreamAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->clientToken_ == nullptr && return this->displayName_ == nullptr && return this->expireTime_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateRTCWhipStreamAddressRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreateRTCWhipStreamAddressRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRTCWhipStreamAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateRTCWhipStreamAddressRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline CreateRTCWhipStreamAddressRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateRTCWhipStreamAddressRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<int32_t> expireTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
