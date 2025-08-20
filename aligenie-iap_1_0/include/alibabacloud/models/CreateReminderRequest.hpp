// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREMINDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREMINDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateReminderRequestDeviceInfo.hpp>
#include <alibabacloud/models/CreateReminderRequestPayload.hpp>
#include <alibabacloud/models/CreateReminderRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class CreateReminderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateReminderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateReminderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreateReminderRequest() = default ;
    CreateReminderRequest(const CreateReminderRequest &) = default ;
    CreateReminderRequest(CreateReminderRequest &&) = default ;
    CreateReminderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateReminderRequest() = default ;
    CreateReminderRequest& operator=(const CreateReminderRequest &) = default ;
    CreateReminderRequest& operator=(CreateReminderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreateReminderRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreateReminderRequestDeviceInfo) };
    inline CreateReminderRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreateReminderRequestDeviceInfo) };
    inline CreateReminderRequest& setDeviceInfo(const CreateReminderRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreateReminderRequest& setDeviceInfo(CreateReminderRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const CreateReminderRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, CreateReminderRequestPayload) };
    inline CreateReminderRequestPayload payload() { DARABONBA_PTR_GET(payload_, CreateReminderRequestPayload) };
    inline CreateReminderRequest& setPayload(const CreateReminderRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline CreateReminderRequest& setPayload(CreateReminderRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateReminderRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateReminderRequestUserInfo) };
    inline CreateReminderRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CreateReminderRequestUserInfo) };
    inline CreateReminderRequest& setUserInfo(const CreateReminderRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateReminderRequest& setUserInfo(CreateReminderRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateReminderRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateReminderRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateReminderRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
