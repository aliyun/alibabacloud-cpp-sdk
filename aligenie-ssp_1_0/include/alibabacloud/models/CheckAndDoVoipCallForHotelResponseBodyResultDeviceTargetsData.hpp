// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULTDEVICETARGETSDATA_HPP_
#define ALIBABACLOUD_MODELS_CHECKANDDOVOIPCALLFORHOTELRESPONSEBODYRESULTDEVICETARGETSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceIcon, deviceIcon_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceIcon, deviceIcon_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData(const CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData(CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData &&) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData() = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& operator=(const CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData &) = default ;
    CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& operator=(CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceIcon_ != nullptr
        && this->deviceName_ != nullptr && this->deviceType_ != nullptr && this->online_ != nullptr && this->uuid_ != nullptr; };
    // deviceIcon Field Functions 
    bool hasDeviceIcon() const { return this->deviceIcon_ != nullptr;};
    void deleteDeviceIcon() { this->deviceIcon_ = nullptr;};
    inline string deviceIcon() const { DARABONBA_PTR_GET_DEFAULT(deviceIcon_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& setDeviceIcon(string deviceIcon) { DARABONBA_PTR_SET_VALUE(deviceIcon_, deviceIcon) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CheckAndDoVoipCallForHotelResponseBodyResultDeviceTargetsData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> deviceIcon_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    std::shared_ptr<string> deviceType_ = nullptr;
    std::shared_ptr<bool> online_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
