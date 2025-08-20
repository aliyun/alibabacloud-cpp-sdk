// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREMINDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREMINDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteReminderRequestDeviceInfo.hpp>
#include <alibabacloud/models/DeleteReminderRequestPayload.hpp>
#include <alibabacloud/models/DeleteReminderRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class DeleteReminderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteReminderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteReminderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    DeleteReminderRequest() = default ;
    DeleteReminderRequest(const DeleteReminderRequest &) = default ;
    DeleteReminderRequest(DeleteReminderRequest &&) = default ;
    DeleteReminderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteReminderRequest() = default ;
    DeleteReminderRequest& operator=(const DeleteReminderRequest &) = default ;
    DeleteReminderRequest& operator=(DeleteReminderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const DeleteReminderRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, DeleteReminderRequestDeviceInfo) };
    inline DeleteReminderRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, DeleteReminderRequestDeviceInfo) };
    inline DeleteReminderRequest& setDeviceInfo(const DeleteReminderRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline DeleteReminderRequest& setDeviceInfo(DeleteReminderRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const DeleteReminderRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, DeleteReminderRequestPayload) };
    inline DeleteReminderRequestPayload payload() { DARABONBA_PTR_GET(payload_, DeleteReminderRequestPayload) };
    inline DeleteReminderRequest& setPayload(const DeleteReminderRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline DeleteReminderRequest& setPayload(DeleteReminderRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DeleteReminderRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DeleteReminderRequestUserInfo) };
    inline DeleteReminderRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, DeleteReminderRequestUserInfo) };
    inline DeleteReminderRequest& setUserInfo(const DeleteReminderRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DeleteReminderRequest& setUserInfo(DeleteReminderRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteReminderRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteReminderRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteReminderRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
