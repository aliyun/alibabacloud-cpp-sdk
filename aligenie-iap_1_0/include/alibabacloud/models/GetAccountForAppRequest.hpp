// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTFORAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTFORAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccountForAppRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetAccountForAppRequestPayload.hpp>
#include <alibabacloud/models/GetAccountForAppRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetAccountForAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountForAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountForAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetAccountForAppRequest() = default ;
    GetAccountForAppRequest(const GetAccountForAppRequest &) = default ;
    GetAccountForAppRequest(GetAccountForAppRequest &&) = default ;
    GetAccountForAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountForAppRequest() = default ;
    GetAccountForAppRequest& operator=(const GetAccountForAppRequest &) = default ;
    GetAccountForAppRequest& operator=(GetAccountForAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetAccountForAppRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetAccountForAppRequestDeviceInfo) };
    inline GetAccountForAppRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetAccountForAppRequestDeviceInfo) };
    inline GetAccountForAppRequest& setDeviceInfo(const GetAccountForAppRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetAccountForAppRequest& setDeviceInfo(GetAccountForAppRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetAccountForAppRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, GetAccountForAppRequestPayload) };
    inline GetAccountForAppRequestPayload payload() { DARABONBA_PTR_GET(payload_, GetAccountForAppRequestPayload) };
    inline GetAccountForAppRequest& setPayload(const GetAccountForAppRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetAccountForAppRequest& setPayload(GetAccountForAppRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetAccountForAppRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetAccountForAppRequestUserInfo) };
    inline GetAccountForAppRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetAccountForAppRequestUserInfo) };
    inline GetAccountForAppRequest& setUserInfo(const GetAccountForAppRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetAccountForAppRequest& setUserInfo(GetAccountForAppRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<GetAccountForAppRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<GetAccountForAppRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetAccountForAppRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
