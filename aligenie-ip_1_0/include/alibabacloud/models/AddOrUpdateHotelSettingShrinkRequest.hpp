// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDORUPDATEHOTELSETTINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDORUPDATEHOTELSETTINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class AddOrUpdateHotelSettingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddOrUpdateHotelSettingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelDeviceModeList, hotelDeviceModeListShrink_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(HotelScreenSaver, hotelScreenSaverShrink_);
      DARABONBA_PTR_TO_JSON(NightMode, nightModeShrink_);
      DARABONBA_PTR_TO_JSON(SettingType, settingType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, AddOrUpdateHotelSettingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelDeviceModeList, hotelDeviceModeListShrink_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(HotelScreenSaver, hotelScreenSaverShrink_);
      DARABONBA_PTR_FROM_JSON(NightMode, nightModeShrink_);
      DARABONBA_PTR_FROM_JSON(SettingType, settingType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    AddOrUpdateHotelSettingShrinkRequest() = default ;
    AddOrUpdateHotelSettingShrinkRequest(const AddOrUpdateHotelSettingShrinkRequest &) = default ;
    AddOrUpdateHotelSettingShrinkRequest(AddOrUpdateHotelSettingShrinkRequest &&) = default ;
    AddOrUpdateHotelSettingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddOrUpdateHotelSettingShrinkRequest() = default ;
    AddOrUpdateHotelSettingShrinkRequest& operator=(const AddOrUpdateHotelSettingShrinkRequest &) = default ;
    AddOrUpdateHotelSettingShrinkRequest& operator=(AddOrUpdateHotelSettingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelDeviceModeListShrink_ == nullptr
        && this->hotelId_ == nullptr && this->hotelScreenSaverShrink_ == nullptr && this->nightModeShrink_ == nullptr && this->settingType_ == nullptr && this->value_ == nullptr; };
    // hotelDeviceModeListShrink Field Functions 
    bool hasHotelDeviceModeListShrink() const { return this->hotelDeviceModeListShrink_ != nullptr;};
    void deleteHotelDeviceModeListShrink() { this->hotelDeviceModeListShrink_ = nullptr;};
    inline string getHotelDeviceModeListShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelDeviceModeListShrink_, "") };
    inline AddOrUpdateHotelSettingShrinkRequest& setHotelDeviceModeListShrink(string hotelDeviceModeListShrink) { DARABONBA_PTR_SET_VALUE(hotelDeviceModeListShrink_, hotelDeviceModeListShrink) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline AddOrUpdateHotelSettingShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelScreenSaverShrink Field Functions 
    bool hasHotelScreenSaverShrink() const { return this->hotelScreenSaverShrink_ != nullptr;};
    void deleteHotelScreenSaverShrink() { this->hotelScreenSaverShrink_ = nullptr;};
    inline string getHotelScreenSaverShrink() const { DARABONBA_PTR_GET_DEFAULT(hotelScreenSaverShrink_, "") };
    inline AddOrUpdateHotelSettingShrinkRequest& setHotelScreenSaverShrink(string hotelScreenSaverShrink) { DARABONBA_PTR_SET_VALUE(hotelScreenSaverShrink_, hotelScreenSaverShrink) };


    // nightModeShrink Field Functions 
    bool hasNightModeShrink() const { return this->nightModeShrink_ != nullptr;};
    void deleteNightModeShrink() { this->nightModeShrink_ = nullptr;};
    inline string getNightModeShrink() const { DARABONBA_PTR_GET_DEFAULT(nightModeShrink_, "") };
    inline AddOrUpdateHotelSettingShrinkRequest& setNightModeShrink(string nightModeShrink) { DARABONBA_PTR_SET_VALUE(nightModeShrink_, nightModeShrink) };


    // settingType Field Functions 
    bool hasSettingType() const { return this->settingType_ != nullptr;};
    void deleteSettingType() { this->settingType_ = nullptr;};
    inline string getSettingType() const { DARABONBA_PTR_GET_DEFAULT(settingType_, "") };
    inline AddOrUpdateHotelSettingShrinkRequest& setSettingType(string settingType) { DARABONBA_PTR_SET_VALUE(settingType_, settingType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AddOrUpdateHotelSettingShrinkRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> hotelDeviceModeListShrink_ {};
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> hotelScreenSaverShrink_ {};
    shared_ptr<string> nightModeShrink_ {};
    shared_ptr<string> settingType_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
