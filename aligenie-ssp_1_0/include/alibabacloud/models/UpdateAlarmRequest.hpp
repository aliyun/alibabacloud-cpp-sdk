// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAlarmRequestDeviceInfo.hpp>
#include <alibabacloud/models/UpdateAlarmRequestPayload.hpp>
#include <alibabacloud/models/UpdateAlarmRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class UpdateAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    UpdateAlarmRequest() = default ;
    UpdateAlarmRequest(const UpdateAlarmRequest &) = default ;
    UpdateAlarmRequest(UpdateAlarmRequest &&) = default ;
    UpdateAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlarmRequest() = default ;
    UpdateAlarmRequest& operator=(const UpdateAlarmRequest &) = default ;
    UpdateAlarmRequest& operator=(UpdateAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const UpdateAlarmRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, UpdateAlarmRequestDeviceInfo) };
    inline UpdateAlarmRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, UpdateAlarmRequestDeviceInfo) };
    inline UpdateAlarmRequest& setDeviceInfo(const UpdateAlarmRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline UpdateAlarmRequest& setDeviceInfo(UpdateAlarmRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const UpdateAlarmRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, UpdateAlarmRequestPayload) };
    inline UpdateAlarmRequestPayload payload() { DARABONBA_PTR_GET(payload_, UpdateAlarmRequestPayload) };
    inline UpdateAlarmRequest& setPayload(const UpdateAlarmRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline UpdateAlarmRequest& setPayload(UpdateAlarmRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const UpdateAlarmRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, UpdateAlarmRequestUserInfo) };
    inline UpdateAlarmRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, UpdateAlarmRequestUserInfo) };
    inline UpdateAlarmRequest& setUserInfo(const UpdateAlarmRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline UpdateAlarmRequest& setUserInfo(UpdateAlarmRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<UpdateAlarmRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateAlarmRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UpdateAlarmRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
