// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALARMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALARMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAlarmRequestDeviceInfo.hpp>
#include <alibabacloud/models/CreateAlarmRequestPayload.hpp>
#include <alibabacloud/models/CreateAlarmRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreateAlarmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlarmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlarmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreateAlarmRequest() = default ;
    CreateAlarmRequest(const CreateAlarmRequest &) = default ;
    CreateAlarmRequest(CreateAlarmRequest &&) = default ;
    CreateAlarmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlarmRequest() = default ;
    CreateAlarmRequest& operator=(const CreateAlarmRequest &) = default ;
    CreateAlarmRequest& operator=(CreateAlarmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreateAlarmRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreateAlarmRequestDeviceInfo) };
    inline CreateAlarmRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreateAlarmRequestDeviceInfo) };
    inline CreateAlarmRequest& setDeviceInfo(const CreateAlarmRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreateAlarmRequest& setDeviceInfo(CreateAlarmRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const CreateAlarmRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, CreateAlarmRequestPayload) };
    inline CreateAlarmRequestPayload payload() { DARABONBA_PTR_GET(payload_, CreateAlarmRequestPayload) };
    inline CreateAlarmRequest& setPayload(const CreateAlarmRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline CreateAlarmRequest& setPayload(CreateAlarmRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreateAlarmRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreateAlarmRequestUserInfo) };
    inline CreateAlarmRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, CreateAlarmRequestUserInfo) };
    inline CreateAlarmRequest& setUserInfo(const CreateAlarmRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreateAlarmRequest& setUserInfo(CreateAlarmRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<CreateAlarmRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAlarmRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAlarmRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
