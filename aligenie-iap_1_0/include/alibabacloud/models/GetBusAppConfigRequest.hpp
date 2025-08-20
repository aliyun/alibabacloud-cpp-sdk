// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUSAPPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBUSAPPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBusAppConfigRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetBusAppConfigRequestPayload.hpp>
#include <alibabacloud/models/GetBusAppConfigRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetBusAppConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBusAppConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetBusAppConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetBusAppConfigRequest() = default ;
    GetBusAppConfigRequest(const GetBusAppConfigRequest &) = default ;
    GetBusAppConfigRequest(GetBusAppConfigRequest &&) = default ;
    GetBusAppConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBusAppConfigRequest() = default ;
    GetBusAppConfigRequest& operator=(const GetBusAppConfigRequest &) = default ;
    GetBusAppConfigRequest& operator=(GetBusAppConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetBusAppConfigRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetBusAppConfigRequestDeviceInfo) };
    inline GetBusAppConfigRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetBusAppConfigRequestDeviceInfo) };
    inline GetBusAppConfigRequest& setDeviceInfo(const GetBusAppConfigRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetBusAppConfigRequest& setDeviceInfo(GetBusAppConfigRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetBusAppConfigRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, GetBusAppConfigRequestPayload) };
    inline GetBusAppConfigRequestPayload payload() { DARABONBA_PTR_GET(payload_, GetBusAppConfigRequestPayload) };
    inline GetBusAppConfigRequest& setPayload(const GetBusAppConfigRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetBusAppConfigRequest& setPayload(GetBusAppConfigRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetBusAppConfigRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetBusAppConfigRequestUserInfo) };
    inline GetBusAppConfigRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetBusAppConfigRequestUserInfo) };
    inline GetBusAppConfigRequest& setUserInfo(const GetBusAppConfigRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetBusAppConfigRequest& setUserInfo(GetBusAppConfigRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<GetBusAppConfigRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<GetBusAppConfigRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetBusAppConfigRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
