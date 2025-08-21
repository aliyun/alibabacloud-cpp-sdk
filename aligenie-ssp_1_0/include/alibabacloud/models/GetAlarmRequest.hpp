// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlarmRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetAlarmRequestPayload.hpp>
#include <alibabacloud/models/GetAlarmRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetAlarmRequest() = default ;
    GetAlarmRequest(const GetAlarmRequest &) = default ;
    GetAlarmRequest(GetAlarmRequest &&) = default ;
    GetAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlarmRequest() = default ;
    GetAlarmRequest& operator=(const GetAlarmRequest &) = default ;
    GetAlarmRequest& operator=(GetAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetAlarmRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetAlarmRequestDeviceInfo) };
    inline GetAlarmRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetAlarmRequestDeviceInfo) };
    inline GetAlarmRequest& setDeviceInfo(const GetAlarmRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetAlarmRequest& setDeviceInfo(GetAlarmRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetAlarmRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, GetAlarmRequestPayload) };
    inline GetAlarmRequestPayload payload() { DARABONBA_PTR_GET(payload_, GetAlarmRequestPayload) };
    inline GetAlarmRequest& setPayload(const GetAlarmRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetAlarmRequest& setPayload(GetAlarmRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetAlarmRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetAlarmRequestUserInfo) };
    inline GetAlarmRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetAlarmRequestUserInfo) };
    inline GetAlarmRequest& setUserInfo(const GetAlarmRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetAlarmRequest& setUserInfo(GetAlarmRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetAlarmRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetAlarmRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetAlarmRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
