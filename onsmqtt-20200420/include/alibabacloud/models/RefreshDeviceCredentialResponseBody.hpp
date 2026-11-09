// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHDEVICECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REFRESHDEVICECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class RefreshDeviceCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshDeviceCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceCredential, deviceCredential_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshDeviceCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceCredential, deviceCredential_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RefreshDeviceCredentialResponseBody() = default ;
    RefreshDeviceCredentialResponseBody(const RefreshDeviceCredentialResponseBody &) = default ;
    RefreshDeviceCredentialResponseBody(RefreshDeviceCredentialResponseBody &&) = default ;
    RefreshDeviceCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshDeviceCredentialResponseBody() = default ;
    RefreshDeviceCredentialResponseBody& operator=(const RefreshDeviceCredentialResponseBody &) = default ;
    RefreshDeviceCredentialResponseBody& operator=(RefreshDeviceCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceCredential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceCredential& obj) { 
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DeviceAccessKeyId, deviceAccessKeyId_);
        DARABONBA_PTR_TO_JSON(DeviceAccessKeySecret, deviceAccessKeySecret_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceCredential& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DeviceAccessKeyId, deviceAccessKeyId_);
        DARABONBA_PTR_FROM_JSON(DeviceAccessKeySecret, deviceAccessKeySecret_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DeviceCredential() = default ;
      DeviceCredential(const DeviceCredential &) = default ;
      DeviceCredential(DeviceCredential &&) = default ;
      DeviceCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceCredential() = default ;
      DeviceCredential& operator=(const DeviceCredential &) = default ;
      DeviceCredential& operator=(DeviceCredential &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientId_ == nullptr
        && this->createTime_ == nullptr && this->deviceAccessKeyId_ == nullptr && this->deviceAccessKeySecret_ == nullptr && this->instanceId_ == nullptr && this->updateTime_ == nullptr; };
      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline DeviceCredential& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DeviceCredential& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // deviceAccessKeyId Field Functions 
      bool hasDeviceAccessKeyId() const { return this->deviceAccessKeyId_ != nullptr;};
      void deleteDeviceAccessKeyId() { this->deviceAccessKeyId_ = nullptr;};
      inline string getDeviceAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(deviceAccessKeyId_, "") };
      inline DeviceCredential& setDeviceAccessKeyId(string deviceAccessKeyId) { DARABONBA_PTR_SET_VALUE(deviceAccessKeyId_, deviceAccessKeyId) };


      // deviceAccessKeySecret Field Functions 
      bool hasDeviceAccessKeySecret() const { return this->deviceAccessKeySecret_ != nullptr;};
      void deleteDeviceAccessKeySecret() { this->deviceAccessKeySecret_ = nullptr;};
      inline string getDeviceAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(deviceAccessKeySecret_, "") };
      inline DeviceCredential& setDeviceAccessKeySecret(string deviceAccessKeySecret) { DARABONBA_PTR_SET_VALUE(deviceAccessKeySecret_, deviceAccessKeySecret) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline DeviceCredential& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DeviceCredential& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The client ID of the device.
      shared_ptr<string> clientId_ {};
      // The timestamp that indicates when the access credential of the device was created. The value of this parameter is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The AccessKey ID of the device.
      shared_ptr<string> deviceAccessKeyId_ {};
      // The AccessKey secret of the device.
      shared_ptr<string> deviceAccessKeySecret_ {};
      // The ID of the ApsaraMQ for MQTT instance.
      shared_ptr<string> instanceId_ {};
      // The timestamp that indicates when the access credential of the device was last updated. The value of this parameter is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->deviceCredential_ == nullptr
        && this->requestId_ == nullptr; };
    // deviceCredential Field Functions 
    bool hasDeviceCredential() const { return this->deviceCredential_ != nullptr;};
    void deleteDeviceCredential() { this->deviceCredential_ = nullptr;};
    inline const RefreshDeviceCredentialResponseBody::DeviceCredential & getDeviceCredential() const { DARABONBA_PTR_GET_CONST(deviceCredential_, RefreshDeviceCredentialResponseBody::DeviceCredential) };
    inline RefreshDeviceCredentialResponseBody::DeviceCredential getDeviceCredential() { DARABONBA_PTR_GET(deviceCredential_, RefreshDeviceCredentialResponseBody::DeviceCredential) };
    inline RefreshDeviceCredentialResponseBody& setDeviceCredential(const RefreshDeviceCredentialResponseBody::DeviceCredential & deviceCredential) { DARABONBA_PTR_SET_VALUE(deviceCredential_, deviceCredential) };
    inline RefreshDeviceCredentialResponseBody& setDeviceCredential(RefreshDeviceCredentialResponseBody::DeviceCredential && deviceCredential) { DARABONBA_PTR_SET_RVALUE(deviceCredential_, deviceCredential) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RefreshDeviceCredentialResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The access credential of the device.
    shared_ptr<RefreshDeviceCredentialResponseBody::DeviceCredential> deviceCredential_ {};
    // The request ID. This parameter is a common parameter.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
