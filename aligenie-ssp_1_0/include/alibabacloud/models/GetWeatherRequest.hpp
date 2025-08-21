// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWEATHERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWEATHERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWeatherRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetWeatherRequestPayload.hpp>
#include <alibabacloud/models/GetWeatherRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetWeatherRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWeatherRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetWeatherRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetWeatherRequest() = default ;
    GetWeatherRequest(const GetWeatherRequest &) = default ;
    GetWeatherRequest(GetWeatherRequest &&) = default ;
    GetWeatherRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWeatherRequest() = default ;
    GetWeatherRequest& operator=(const GetWeatherRequest &) = default ;
    GetWeatherRequest& operator=(GetWeatherRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetWeatherRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetWeatherRequestDeviceInfo) };
    inline GetWeatherRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetWeatherRequestDeviceInfo) };
    inline GetWeatherRequest& setDeviceInfo(const GetWeatherRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetWeatherRequest& setDeviceInfo(GetWeatherRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetWeatherRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, GetWeatherRequestPayload) };
    inline GetWeatherRequestPayload payload() { DARABONBA_PTR_GET(payload_, GetWeatherRequestPayload) };
    inline GetWeatherRequest& setPayload(const GetWeatherRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetWeatherRequest& setPayload(GetWeatherRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetWeatherRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetWeatherRequestUserInfo) };
    inline GetWeatherRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetWeatherRequestUserInfo) };
    inline GetWeatherRequest& setUserInfo(const GetWeatherRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetWeatherRequest& setUserInfo(GetWeatherRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetWeatherRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<GetWeatherRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetWeatherRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
