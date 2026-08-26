// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetMessageTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetMessageTokenRequest() = default ;
    GetMessageTokenRequest(const GetMessageTokenRequest &) = default ;
    GetMessageTokenRequest(GetMessageTokenRequest &&) = default ;
    GetMessageTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageTokenRequest() = default ;
    GetMessageTokenRequest& operator=(const GetMessageTokenRequest &) = default ;
    GetMessageTokenRequest& operator=(GetMessageTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->deviceId_ == nullptr && this->deviceType_ == nullptr && this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMessageTokenRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetMessageTokenRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline GetMessageTokenRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetMessageTokenRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Interactive Messages application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // Terminal device ID, uniquely representing a user terminal device, user-defined. It consists of lowercase letters, numbers, underscores (_), and hyphens (-), with a maximum length of 64 characters. Different terminal devices need to use different DeviceIds. We recommend obtaining it from the terminal device and passing it to the server.
    // 
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
    // Terminal device type. Valid values:
    // 
    // - ios
    // 
    // - android
    // 
    // - web
    // 
    // - pc
    // 
    // This parameter is required.
    shared_ptr<string> deviceType_ {};
    // User UserId, user-defined, unique within the AppId. It consists of lowercase letters, numbers, underscores (_), and periods (.), with a maximum length of 32 characters. Different users need to use different UserIds.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
