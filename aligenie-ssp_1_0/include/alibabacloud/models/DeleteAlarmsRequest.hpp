// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALARMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALARMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAlarmsRequestDeviceInfo.hpp>
#include <alibabacloud/models/DeleteAlarmsRequestPayload.hpp>
#include <alibabacloud/models/DeleteAlarmsRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeleteAlarmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlarmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlarmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    DeleteAlarmsRequest() = default ;
    DeleteAlarmsRequest(const DeleteAlarmsRequest &) = default ;
    DeleteAlarmsRequest(DeleteAlarmsRequest &&) = default ;
    DeleteAlarmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlarmsRequest() = default ;
    DeleteAlarmsRequest& operator=(const DeleteAlarmsRequest &) = default ;
    DeleteAlarmsRequest& operator=(DeleteAlarmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const DeleteAlarmsRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, DeleteAlarmsRequestDeviceInfo) };
    inline DeleteAlarmsRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, DeleteAlarmsRequestDeviceInfo) };
    inline DeleteAlarmsRequest& setDeviceInfo(const DeleteAlarmsRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline DeleteAlarmsRequest& setDeviceInfo(DeleteAlarmsRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const DeleteAlarmsRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, DeleteAlarmsRequestPayload) };
    inline DeleteAlarmsRequestPayload payload() { DARABONBA_PTR_GET(payload_, DeleteAlarmsRequestPayload) };
    inline DeleteAlarmsRequest& setPayload(const DeleteAlarmsRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline DeleteAlarmsRequest& setPayload(DeleteAlarmsRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DeleteAlarmsRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DeleteAlarmsRequestUserInfo) };
    inline DeleteAlarmsRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, DeleteAlarmsRequestUserInfo) };
    inline DeleteAlarmsRequest& setUserInfo(const DeleteAlarmsRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DeleteAlarmsRequest& setUserInfo(DeleteAlarmsRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteAlarmsRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteAlarmsRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteAlarmsRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
