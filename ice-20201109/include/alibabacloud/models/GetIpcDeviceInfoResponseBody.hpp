// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPCDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIPCDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetIpcDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpcDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpcDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetIpcDeviceInfoResponseBody() = default ;
    GetIpcDeviceInfoResponseBody(const GetIpcDeviceInfoResponseBody &) = default ;
    GetIpcDeviceInfoResponseBody(GetIpcDeviceInfoResponseBody &&) = default ;
    GetIpcDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpcDeviceInfoResponseBody() = default ;
    GetIpcDeviceInfoResponseBody& operator=(const GetIpcDeviceInfoResponseBody &) = default ;
    GetIpcDeviceInfoResponseBody& operator=(GetIpcDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Capability, capability_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Capability, capability_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      };
      DeviceInfos() = default ;
      DeviceInfos(const DeviceInfos &) = default ;
      DeviceInfos(DeviceInfos &&) = default ;
      DeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfos() = default ;
      DeviceInfos& operator=(const DeviceInfos &) = default ;
      DeviceInfos& operator=(DeviceInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capability_ == nullptr
        && this->deviceId_ == nullptr && this->expireTime_ == nullptr; };
      // capability Field Functions 
      bool hasCapability() const { return this->capability_ != nullptr;};
      void deleteCapability() { this->capability_ = nullptr;};
      inline string getCapability() const { DARABONBA_PTR_GET_DEFAULT(capability_, "") };
      inline DeviceInfos& setCapability(string capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline DeviceInfos& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline DeviceInfos& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    protected:
      shared_ptr<string> capability_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> expireTime_ {};
    };

    virtual bool empty() const override { return this->deviceInfos_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // deviceInfos Field Functions 
    bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
    void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
    inline const vector<GetIpcDeviceInfoResponseBody::DeviceInfos> & getDeviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, vector<GetIpcDeviceInfoResponseBody::DeviceInfos>) };
    inline vector<GetIpcDeviceInfoResponseBody::DeviceInfos> getDeviceInfos() { DARABONBA_PTR_GET(deviceInfos_, vector<GetIpcDeviceInfoResponseBody::DeviceInfos>) };
    inline GetIpcDeviceInfoResponseBody& setDeviceInfos(const vector<GetIpcDeviceInfoResponseBody::DeviceInfos> & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
    inline GetIpcDeviceInfoResponseBody& setDeviceInfos(vector<GetIpcDeviceInfoResponseBody::DeviceInfos> && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIpcDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetIpcDeviceInfoResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<vector<GetIpcDeviceInfoResponseBody::DeviceInfos>> deviceInfos_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
