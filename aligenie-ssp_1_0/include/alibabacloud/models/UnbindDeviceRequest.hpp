// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UnbindDeviceRequestDeviceInfo.hpp>
#include <alibabacloud/models/UnbindDeviceRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class UnbindDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    UnbindDeviceRequest() = default ;
    UnbindDeviceRequest(const UnbindDeviceRequest &) = default ;
    UnbindDeviceRequest(UnbindDeviceRequest &&) = default ;
    UnbindDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindDeviceRequest() = default ;
    UnbindDeviceRequest& operator=(const UnbindDeviceRequest &) = default ;
    UnbindDeviceRequest& operator=(UnbindDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const UnbindDeviceRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, UnbindDeviceRequestDeviceInfo) };
    inline UnbindDeviceRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, UnbindDeviceRequestDeviceInfo) };
    inline UnbindDeviceRequest& setDeviceInfo(const UnbindDeviceRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline UnbindDeviceRequest& setDeviceInfo(UnbindDeviceRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const UnbindDeviceRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, UnbindDeviceRequestUserInfo) };
    inline UnbindDeviceRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, UnbindDeviceRequestUserInfo) };
    inline UnbindDeviceRequest& setUserInfo(const UnbindDeviceRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline UnbindDeviceRequest& setUserInfo(UnbindDeviceRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<UnbindDeviceRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<UnbindDeviceRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
