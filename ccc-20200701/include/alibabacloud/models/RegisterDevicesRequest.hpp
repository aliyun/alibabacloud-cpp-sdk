// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RegisterDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserIdListJson, userIdListJson_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserIdListJson, userIdListJson_);
    };
    RegisterDevicesRequest() = default ;
    RegisterDevicesRequest(const RegisterDevicesRequest &) = default ;
    RegisterDevicesRequest(RegisterDevicesRequest &&) = default ;
    RegisterDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterDevicesRequest() = default ;
    RegisterDevicesRequest& operator=(const RegisterDevicesRequest &) = default ;
    RegisterDevicesRequest& operator=(RegisterDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && return this->instanceId_ == nullptr && return this->password_ == nullptr && return this->userIdListJson_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline RegisterDevicesRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RegisterDevicesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RegisterDevicesRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userIdListJson Field Functions 
    bool hasUserIdListJson() const { return this->userIdListJson_ != nullptr;};
    void deleteUserIdListJson() { this->userIdListJson_ = nullptr;};
    inline string userIdListJson() const { DARABONBA_PTR_GET_DEFAULT(userIdListJson_, "") };
    inline RegisterDevicesRequest& setUserIdListJson(string userIdListJson) { DARABONBA_PTR_SET_VALUE(userIdListJson_, userIdListJson) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> userIdListJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
