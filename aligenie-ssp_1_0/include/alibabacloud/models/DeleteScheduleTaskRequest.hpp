// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCHEDULETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCHEDULETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteScheduleTaskRequestDeviceInfo.hpp>
#include <alibabacloud/models/DeleteScheduleTaskRequestPayload.hpp>
#include <alibabacloud/models/DeleteScheduleTaskRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeleteScheduleTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScheduleTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScheduleTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    DeleteScheduleTaskRequest() = default ;
    DeleteScheduleTaskRequest(const DeleteScheduleTaskRequest &) = default ;
    DeleteScheduleTaskRequest(DeleteScheduleTaskRequest &&) = default ;
    DeleteScheduleTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScheduleTaskRequest() = default ;
    DeleteScheduleTaskRequest& operator=(const DeleteScheduleTaskRequest &) = default ;
    DeleteScheduleTaskRequest& operator=(DeleteScheduleTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const DeleteScheduleTaskRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, DeleteScheduleTaskRequestDeviceInfo) };
    inline DeleteScheduleTaskRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, DeleteScheduleTaskRequestDeviceInfo) };
    inline DeleteScheduleTaskRequest& setDeviceInfo(const DeleteScheduleTaskRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline DeleteScheduleTaskRequest& setDeviceInfo(DeleteScheduleTaskRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const DeleteScheduleTaskRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, DeleteScheduleTaskRequestPayload) };
    inline DeleteScheduleTaskRequestPayload payload() { DARABONBA_PTR_GET(payload_, DeleteScheduleTaskRequestPayload) };
    inline DeleteScheduleTaskRequest& setPayload(const DeleteScheduleTaskRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline DeleteScheduleTaskRequest& setPayload(DeleteScheduleTaskRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const DeleteScheduleTaskRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, DeleteScheduleTaskRequestUserInfo) };
    inline DeleteScheduleTaskRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, DeleteScheduleTaskRequestUserInfo) };
    inline DeleteScheduleTaskRequest& setUserInfo(const DeleteScheduleTaskRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline DeleteScheduleTaskRequest& setUserInfo(DeleteScheduleTaskRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<DeleteScheduleTaskRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteScheduleTaskRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteScheduleTaskRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
