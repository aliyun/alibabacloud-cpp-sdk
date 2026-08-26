// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROOMREALTIMESTREAMADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROOMREALTIMESTREAMADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateRoomRealTimeStreamAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoomRealTimeStreamAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoomRealTimeStreamAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateRoomRealTimeStreamAddressRequest() = default ;
    CreateRoomRealTimeStreamAddressRequest(const CreateRoomRealTimeStreamAddressRequest &) = default ;
    CreateRoomRealTimeStreamAddressRequest(CreateRoomRealTimeStreamAddressRequest &&) = default ;
    CreateRoomRealTimeStreamAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoomRealTimeStreamAddressRequest() = default ;
    CreateRoomRealTimeStreamAddressRequest& operator=(const CreateRoomRealTimeStreamAddressRequest &) = default ;
    CreateRoomRealTimeStreamAddressRequest& operator=(CreateRoomRealTimeStreamAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->displayName_ == nullptr && this->expireTime_ == nullptr && this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateRoomRealTimeStreamAddressRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreateRoomRealTimeStreamAddressRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateRoomRealTimeStreamAddressRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int32_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0) };
    inline CreateRoomRealTimeStreamAddressRequest& setExpireTime(int32_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateRoomRealTimeStreamAddressRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the ApsaraVideo Real-time Communication application. Only a single ID is supported. The value can contain uppercase and lowercase letters, digits, underscores, and hyphens (-), with a maximum of 64 characters. You can view your application IDs by navigating to **ApsaraVideo Live > Live+ > Real-time Communication > Application Management**. If no application exists, create one by clicking **Create Application**.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The ID of the channel to join. Only a single ID is supported. The value can contain uppercase and lowercase letters, digits, underscores, and hyphens (-), with a maximum of 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The display name of the RTMP stream in the channel. Maximum length: 40 characters.
    // 
    // This parameter is required.
    shared_ptr<string> displayName_ {};
    // The validity period of the RTMP URL. Unit: seconds. Default value: 36000 (10 hours).
    shared_ptr<int32_t> expireTime_ {};
    // The user ID for the RTMP stream ingest. This value must not duplicate any other user ID in the channel. The value can contain uppercase and lowercase letters, digits, underscores, and hyphens (-), with a maximum of 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
