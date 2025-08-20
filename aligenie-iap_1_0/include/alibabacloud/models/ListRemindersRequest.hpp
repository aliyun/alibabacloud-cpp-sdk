// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMINDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREMINDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRemindersRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListRemindersRequestPayload.hpp>
#include <alibabacloud/models/ListRemindersRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class ListRemindersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemindersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemindersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListRemindersRequest() = default ;
    ListRemindersRequest(const ListRemindersRequest &) = default ;
    ListRemindersRequest(ListRemindersRequest &&) = default ;
    ListRemindersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemindersRequest() = default ;
    ListRemindersRequest& operator=(const ListRemindersRequest &) = default ;
    ListRemindersRequest& operator=(ListRemindersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListRemindersRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListRemindersRequestDeviceInfo) };
    inline ListRemindersRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListRemindersRequestDeviceInfo) };
    inline ListRemindersRequest& setDeviceInfo(const ListRemindersRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListRemindersRequest& setDeviceInfo(ListRemindersRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const ListRemindersRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, ListRemindersRequestPayload) };
    inline ListRemindersRequestPayload payload() { DARABONBA_PTR_GET(payload_, ListRemindersRequestPayload) };
    inline ListRemindersRequest& setPayload(const ListRemindersRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline ListRemindersRequest& setPayload(ListRemindersRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListRemindersRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListRemindersRequestUserInfo) };
    inline ListRemindersRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListRemindersRequestUserInfo) };
    inline ListRemindersRequest& setUserInfo(const ListRemindersRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListRemindersRequest& setUserInfo(ListRemindersRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListRemindersRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListRemindersRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListRemindersRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
