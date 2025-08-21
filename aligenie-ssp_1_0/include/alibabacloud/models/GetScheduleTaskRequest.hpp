// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScheduleTaskRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetScheduleTaskRequestPayload.hpp>
#include <alibabacloud/models/GetScheduleTaskRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetScheduleTaskRequest() = default ;
    GetScheduleTaskRequest(const GetScheduleTaskRequest &) = default ;
    GetScheduleTaskRequest(GetScheduleTaskRequest &&) = default ;
    GetScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleTaskRequest() = default ;
    GetScheduleTaskRequest& operator=(const GetScheduleTaskRequest &) = default ;
    GetScheduleTaskRequest& operator=(GetScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetScheduleTaskRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetScheduleTaskRequestDeviceInfo) };
    inline GetScheduleTaskRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetScheduleTaskRequestDeviceInfo) };
    inline GetScheduleTaskRequest& setDeviceInfo(const GetScheduleTaskRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetScheduleTaskRequest& setDeviceInfo(GetScheduleTaskRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const GetScheduleTaskRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, GetScheduleTaskRequestPayload) };
    inline GetScheduleTaskRequestPayload payload() { DARABONBA_PTR_GET(payload_, GetScheduleTaskRequestPayload) };
    inline GetScheduleTaskRequest& setPayload(const GetScheduleTaskRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline GetScheduleTaskRequest& setPayload(GetScheduleTaskRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetScheduleTaskRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetScheduleTaskRequestUserInfo) };
    inline GetScheduleTaskRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetScheduleTaskRequestUserInfo) };
    inline GetScheduleTaskRequest& setUserInfo(const GetScheduleTaskRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetScheduleTaskRequest& setUserInfo(GetScheduleTaskRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetScheduleTaskRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetScheduleTaskRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetScheduleTaskRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
