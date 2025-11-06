// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHQUERYDEVICESTATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PUSHQUERYDEVICESTATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushQueryDeviceStateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushQueryDeviceStateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryToken, deliveryToken_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(Manufacturer, manufacturer_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(Statue, statue_);
      DARABONBA_PTR_TO_JSON(ThirdToken, thirdToken_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, PushQueryDeviceStateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryToken, deliveryToken_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(Manufacturer, manufacturer_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(Statue, statue_);
      DARABONBA_PTR_FROM_JSON(ThirdToken, thirdToken_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    PushQueryDeviceStateResponseBodyData() = default ;
    PushQueryDeviceStateResponseBodyData(const PushQueryDeviceStateResponseBodyData &) = default ;
    PushQueryDeviceStateResponseBodyData(PushQueryDeviceStateResponseBodyData &&) = default ;
    PushQueryDeviceStateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushQueryDeviceStateResponseBodyData() = default ;
    PushQueryDeviceStateResponseBodyData& operator=(const PushQueryDeviceStateResponseBodyData &) = default ;
    PushQueryDeviceStateResponseBodyData& operator=(PushQueryDeviceStateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryToken_ == nullptr
        && return this->deviceId_ == nullptr && return this->manufacturer_ == nullptr && return this->platform_ == nullptr && return this->statue_ == nullptr && return this->thirdToken_ == nullptr
        && return this->userId_ == nullptr; };
    // deliveryToken Field Functions 
    bool hasDeliveryToken() const { return this->deliveryToken_ != nullptr;};
    void deleteDeliveryToken() { this->deliveryToken_ = nullptr;};
    inline string deliveryToken() const { DARABONBA_PTR_GET_DEFAULT(deliveryToken_, "") };
    inline PushQueryDeviceStateResponseBodyData& setDeliveryToken(string deliveryToken) { DARABONBA_PTR_SET_VALUE(deliveryToken_, deliveryToken) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline PushQueryDeviceStateResponseBodyData& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // manufacturer Field Functions 
    bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
    void deleteManufacturer() { this->manufacturer_ = nullptr;};
    inline string manufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
    inline PushQueryDeviceStateResponseBodyData& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline PushQueryDeviceStateResponseBodyData& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // statue Field Functions 
    bool hasStatue() const { return this->statue_ != nullptr;};
    void deleteStatue() { this->statue_ = nullptr;};
    inline string statue() const { DARABONBA_PTR_GET_DEFAULT(statue_, "") };
    inline PushQueryDeviceStateResponseBodyData& setStatue(string statue) { DARABONBA_PTR_SET_VALUE(statue_, statue) };


    // thirdToken Field Functions 
    bool hasThirdToken() const { return this->thirdToken_ != nullptr;};
    void deleteThirdToken() { this->thirdToken_ = nullptr;};
    inline string thirdToken() const { DARABONBA_PTR_GET_DEFAULT(thirdToken_, "") };
    inline PushQueryDeviceStateResponseBodyData& setThirdToken(string thirdToken) { DARABONBA_PTR_SET_VALUE(thirdToken_, thirdToken) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline PushQueryDeviceStateResponseBodyData& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> deliveryToken_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> manufacturer_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> statue_ = nullptr;
    std::shared_ptr<string> thirdToken_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
