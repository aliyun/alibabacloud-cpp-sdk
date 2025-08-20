// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEREMINDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEREMINDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateReminderRequestDeviceInfo.hpp>
#include <alibabacloud/models/UpdateReminderRequestPayload.hpp>
#include <alibabacloud/models/UpdateReminderRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class UpdateReminderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateReminderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateReminderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    UpdateReminderRequest() = default ;
    UpdateReminderRequest(const UpdateReminderRequest &) = default ;
    UpdateReminderRequest(UpdateReminderRequest &&) = default ;
    UpdateReminderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateReminderRequest() = default ;
    UpdateReminderRequest& operator=(const UpdateReminderRequest &) = default ;
    UpdateReminderRequest& operator=(UpdateReminderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const UpdateReminderRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, UpdateReminderRequestDeviceInfo) };
    inline UpdateReminderRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, UpdateReminderRequestDeviceInfo) };
    inline UpdateReminderRequest& setDeviceInfo(const UpdateReminderRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline UpdateReminderRequest& setDeviceInfo(UpdateReminderRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const UpdateReminderRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, UpdateReminderRequestPayload) };
    inline UpdateReminderRequestPayload payload() { DARABONBA_PTR_GET(payload_, UpdateReminderRequestPayload) };
    inline UpdateReminderRequest& setPayload(const UpdateReminderRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline UpdateReminderRequest& setPayload(UpdateReminderRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const UpdateReminderRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, UpdateReminderRequestUserInfo) };
    inline UpdateReminderRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, UpdateReminderRequestUserInfo) };
    inline UpdateReminderRequest& setUserInfo(const UpdateReminderRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline UpdateReminderRequest& setUserInfo(UpdateReminderRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<UpdateReminderRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateReminderRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateReminderRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
