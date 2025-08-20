// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPUSETIMEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPUSETIMEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AppUseTimeReportRequestDeviceInfo.hpp>
#include <alibabacloud/models/AppUseTimeReportRequestPayload.hpp>
#include <alibabacloud/models/AppUseTimeReportRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class AppUseTimeReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppUseTimeReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AppUseTimeReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    AppUseTimeReportRequest() = default ;
    AppUseTimeReportRequest(const AppUseTimeReportRequest &) = default ;
    AppUseTimeReportRequest(AppUseTimeReportRequest &&) = default ;
    AppUseTimeReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppUseTimeReportRequest() = default ;
    AppUseTimeReportRequest& operator=(const AppUseTimeReportRequest &) = default ;
    AppUseTimeReportRequest& operator=(AppUseTimeReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const AppUseTimeReportRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, AppUseTimeReportRequestDeviceInfo) };
    inline AppUseTimeReportRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, AppUseTimeReportRequestDeviceInfo) };
    inline AppUseTimeReportRequest& setDeviceInfo(const AppUseTimeReportRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline AppUseTimeReportRequest& setDeviceInfo(AppUseTimeReportRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const AppUseTimeReportRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, AppUseTimeReportRequestPayload) };
    inline AppUseTimeReportRequestPayload payload() { DARABONBA_PTR_GET(payload_, AppUseTimeReportRequestPayload) };
    inline AppUseTimeReportRequest& setPayload(const AppUseTimeReportRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline AppUseTimeReportRequest& setPayload(AppUseTimeReportRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const AppUseTimeReportRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, AppUseTimeReportRequestUserInfo) };
    inline AppUseTimeReportRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, AppUseTimeReportRequestUserInfo) };
    inline AppUseTimeReportRequest& setUserInfo(const AppUseTimeReportRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline AppUseTimeReportRequest& setUserInfo(AppUseTimeReportRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<AppUseTimeReportRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<AppUseTimeReportRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<AppUseTimeReportRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
