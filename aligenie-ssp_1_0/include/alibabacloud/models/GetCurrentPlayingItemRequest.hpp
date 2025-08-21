// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCURRENTPLAYINGITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCURRENTPLAYINGITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCurrentPlayingItemRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetCurrentPlayingItemRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetCurrentPlayingItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCurrentPlayingItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetCurrentPlayingItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetCurrentPlayingItemRequest() = default ;
    GetCurrentPlayingItemRequest(const GetCurrentPlayingItemRequest &) = default ;
    GetCurrentPlayingItemRequest(GetCurrentPlayingItemRequest &&) = default ;
    GetCurrentPlayingItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCurrentPlayingItemRequest() = default ;
    GetCurrentPlayingItemRequest& operator=(const GetCurrentPlayingItemRequest &) = default ;
    GetCurrentPlayingItemRequest& operator=(GetCurrentPlayingItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetCurrentPlayingItemRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetCurrentPlayingItemRequestDeviceInfo) };
    inline GetCurrentPlayingItemRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetCurrentPlayingItemRequestDeviceInfo) };
    inline GetCurrentPlayingItemRequest& setDeviceInfo(const GetCurrentPlayingItemRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetCurrentPlayingItemRequest& setDeviceInfo(GetCurrentPlayingItemRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetCurrentPlayingItemRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetCurrentPlayingItemRequestUserInfo) };
    inline GetCurrentPlayingItemRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetCurrentPlayingItemRequestUserInfo) };
    inline GetCurrentPlayingItemRequest& setUserInfo(const GetCurrentPlayingItemRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetCurrentPlayingItemRequest& setUserInfo(GetCurrentPlayingItemRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetCurrentPlayingItemRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetCurrentPlayingItemRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
