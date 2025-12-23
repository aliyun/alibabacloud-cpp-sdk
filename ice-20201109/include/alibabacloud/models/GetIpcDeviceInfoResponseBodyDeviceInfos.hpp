// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIPCDEVICEINFORESPONSEBODYDEVICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETIPCDEVICEINFORESPONSEBODYDEVICEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetIpcDeviceInfoResponseBodyDeviceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIpcDeviceInfoResponseBodyDeviceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Capability, capability_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetIpcDeviceInfoResponseBodyDeviceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Capability, capability_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
    };
    GetIpcDeviceInfoResponseBodyDeviceInfos() = default ;
    GetIpcDeviceInfoResponseBodyDeviceInfos(const GetIpcDeviceInfoResponseBodyDeviceInfos &) = default ;
    GetIpcDeviceInfoResponseBodyDeviceInfos(GetIpcDeviceInfoResponseBodyDeviceInfos &&) = default ;
    GetIpcDeviceInfoResponseBodyDeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIpcDeviceInfoResponseBodyDeviceInfos() = default ;
    GetIpcDeviceInfoResponseBodyDeviceInfos& operator=(const GetIpcDeviceInfoResponseBodyDeviceInfos &) = default ;
    GetIpcDeviceInfoResponseBodyDeviceInfos& operator=(GetIpcDeviceInfoResponseBodyDeviceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capability_ == nullptr
        && return this->deviceId_ == nullptr && return this->expireTime_ == nullptr; };
    // capability Field Functions 
    bool hasCapability() const { return this->capability_ != nullptr;};
    void deleteCapability() { this->capability_ = nullptr;};
    inline string capability() const { DARABONBA_PTR_GET_DEFAULT(capability_, "") };
    inline GetIpcDeviceInfoResponseBodyDeviceInfos& setCapability(string capability) { DARABONBA_PTR_SET_VALUE(capability_, capability) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetIpcDeviceInfoResponseBodyDeviceInfos& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline GetIpcDeviceInfoResponseBodyDeviceInfos& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


  protected:
    std::shared_ptr<string> capability_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
