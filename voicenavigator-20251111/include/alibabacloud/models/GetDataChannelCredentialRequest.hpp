// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHANNELCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHANNELCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class GetDataChannelCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataChannelCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataChannelCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetDataChannelCredentialRequest() = default ;
    GetDataChannelCredentialRequest(const GetDataChannelCredentialRequest &) = default ;
    GetDataChannelCredentialRequest(GetDataChannelCredentialRequest &&) = default ;
    GetDataChannelCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataChannelCredentialRequest() = default ;
    GetDataChannelCredentialRequest& operator=(const GetDataChannelCredentialRequest &) = default ;
    GetDataChannelCredentialRequest& operator=(GetDataChannelCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->instanceId_ == nullptr; };
    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetDataChannelCredentialRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDataChannelCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<string> deviceId_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
