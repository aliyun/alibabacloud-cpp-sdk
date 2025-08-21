// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMUSICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMUSICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMusicRequestDeviceInfo.hpp>
#include <alibabacloud/models/ListMusicRequestPayload.hpp>
#include <alibabacloud/models/ListMusicRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListMusicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMusicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListMusicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListMusicRequest() = default ;
    ListMusicRequest(const ListMusicRequest &) = default ;
    ListMusicRequest(ListMusicRequest &&) = default ;
    ListMusicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMusicRequest() = default ;
    ListMusicRequest& operator=(const ListMusicRequest &) = default ;
    ListMusicRequest& operator=(ListMusicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const ListMusicRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, ListMusicRequestDeviceInfo) };
    inline ListMusicRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, ListMusicRequestDeviceInfo) };
    inline ListMusicRequest& setDeviceInfo(const ListMusicRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline ListMusicRequest& setDeviceInfo(ListMusicRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const ListMusicRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, ListMusicRequestPayload) };
    inline ListMusicRequestPayload payload() { DARABONBA_PTR_GET(payload_, ListMusicRequestPayload) };
    inline ListMusicRequest& setPayload(const ListMusicRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline ListMusicRequest& setPayload(ListMusicRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListMusicRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListMusicRequestUserInfo) };
    inline ListMusicRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListMusicRequestUserInfo) };
    inline ListMusicRequest& setUserInfo(const ListMusicRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListMusicRequest& setUserInfo(ListMusicRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListMusicRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListMusicRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListMusicRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
