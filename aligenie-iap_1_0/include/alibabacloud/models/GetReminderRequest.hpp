// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetReminderRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetReminderRequestPayload.hpp>
#include <alibabacloud/models/GetReminderRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetReminderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReminderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetReminderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetReminderRequest() = default ;
    GetReminderRequest(const GetReminderRequest &) = default ;
    GetReminderRequest(GetReminderRequest &&) = default ;
    GetReminderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReminderRequest() = default ;
    GetReminderRequest& operator=(const GetReminderRequest &) = default ;
    GetReminderRequest& operator=(GetReminderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetReminderRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetReminderRequestDeviceInfo) };
    inline GetReminderRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetReminderRequestDeviceInfo) };
    inline GetReminderRequest& setDeviceInfo(const GetReminderRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetReminderRequest& setDeviceInfo(GetReminderRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetReminderRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, GetReminderRequestPayload) };
    inline GetReminderRequestPayload payload() { DARABONBA_PTR_GET(payload_, GetReminderRequestPayload) };
    inline GetReminderRequest& setPayload(const GetReminderRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetReminderRequest& setPayload(GetReminderRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetReminderRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetReminderRequestUserInfo) };
    inline GetReminderRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetReminderRequestUserInfo) };
    inline GetReminderRequest& setUserInfo(const GetReminderRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetReminderRequest& setUserInfo(GetReminderRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetReminderRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetReminderRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetReminderRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
