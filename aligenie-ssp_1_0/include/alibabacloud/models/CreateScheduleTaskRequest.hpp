// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateScheduleTaskRequestDeviceInfo.hpp>
#include <alibabacloud/models/CreateScheduleTaskRequestPayload.hpp>
#include <alibabacloud/models/CreateScheduleTaskRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreateScheduleTaskRequest() = default ;
    CreateScheduleTaskRequest(const CreateScheduleTaskRequest &) = default ;
    CreateScheduleTaskRequest(CreateScheduleTaskRequest &&) = default ;
    CreateScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduleTaskRequest() = default ;
    CreateScheduleTaskRequest& operator=(const CreateScheduleTaskRequest &) = default ;
    CreateScheduleTaskRequest& operator=(CreateScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreateScheduleTaskRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreateScheduleTaskRequestDeviceInfo) };
    inline CreateScheduleTaskRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreateScheduleTaskRequestDeviceInfo) };
    inline CreateScheduleTaskRequest& setDeviceInfo(const CreateScheduleTaskRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreateScheduleTaskRequest& setDeviceInfo(CreateScheduleTaskRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const CreateScheduleTaskRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, CreateScheduleTaskRequestPayload) };
    inline CreateScheduleTaskRequestPayload payload() { DARABONBA_PTR_GET(payload_, CreateScheduleTaskRequestPayload) };
    inline CreateScheduleTaskRequest& setPayload(const CreateScheduleTaskRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline CreateScheduleTaskRequest& setPayload(CreateScheduleTaskRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateScheduleTaskRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateScheduleTaskRequestUserInfo) };
    inline CreateScheduleTaskRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CreateScheduleTaskRequestUserInfo) };
    inline CreateScheduleTaskRequest& setUserInfo(const CreateScheduleTaskRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateScheduleTaskRequest& setUserInfo(CreateScheduleTaskRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateScheduleTaskRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateScheduleTaskRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateScheduleTaskRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
