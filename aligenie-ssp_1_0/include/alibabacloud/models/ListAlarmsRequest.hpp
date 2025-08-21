// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlarmsRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListAlarmsRequestPayload.hpp>
#include <alibabacloud/models/ListAlarmsRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListAlarmsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListAlarmsRequest() = default ;
    ListAlarmsRequest(const ListAlarmsRequest &) = default ;
    ListAlarmsRequest(ListAlarmsRequest &&) = default ;
    ListAlarmsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmsRequest() = default ;
    ListAlarmsRequest& operator=(const ListAlarmsRequest &) = default ;
    ListAlarmsRequest& operator=(ListAlarmsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListAlarmsRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListAlarmsRequestDeviceInfo) };
    inline ListAlarmsRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListAlarmsRequestDeviceInfo) };
    inline ListAlarmsRequest& setDeviceInfo(const ListAlarmsRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListAlarmsRequest& setDeviceInfo(ListAlarmsRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const ListAlarmsRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, ListAlarmsRequestPayload) };
    inline ListAlarmsRequestPayload payload() { DARABONBA_PTR_GET(payload_, ListAlarmsRequestPayload) };
    inline ListAlarmsRequest& setPayload(const ListAlarmsRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline ListAlarmsRequest& setPayload(ListAlarmsRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListAlarmsRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListAlarmsRequestUserInfo) };
    inline ListAlarmsRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListAlarmsRequestUserInfo) };
    inline ListAlarmsRequest& setUserInfo(const ListAlarmsRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListAlarmsRequest& setUserInfo(ListAlarmsRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListAlarmsRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListAlarmsRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListAlarmsRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
