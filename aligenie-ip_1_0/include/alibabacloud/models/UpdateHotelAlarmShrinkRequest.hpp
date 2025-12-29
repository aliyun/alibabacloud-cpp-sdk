// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTELALARMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTELALARMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateHotelAlarmShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarmsShrink_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarmsShrink_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfoShrink_);
    };
    UpdateHotelAlarmShrinkRequest() = default ;
    UpdateHotelAlarmShrinkRequest(const UpdateHotelAlarmShrinkRequest &) = default ;
    UpdateHotelAlarmShrinkRequest(UpdateHotelAlarmShrinkRequest &&) = default ;
    UpdateHotelAlarmShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotelAlarmShrinkRequest() = default ;
    UpdateHotelAlarmShrinkRequest& operator=(const UpdateHotelAlarmShrinkRequest &) = default ;
    UpdateHotelAlarmShrinkRequest& operator=(UpdateHotelAlarmShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmsShrink_ == nullptr
        && this->hotelId_ == nullptr && this->scheduleInfoShrink_ == nullptr; };
    // alarmsShrink Field Functions 
    bool hasAlarmsShrink() const { return this->alarmsShrink_ != nullptr;};
    void deleteAlarmsShrink() { this->alarmsShrink_ = nullptr;};
    inline string getAlarmsShrink() const { DARABONBA_PTR_GET_DEFAULT(alarmsShrink_, "") };
    inline UpdateHotelAlarmShrinkRequest& setAlarmsShrink(string alarmsShrink) { DARABONBA_PTR_SET_VALUE(alarmsShrink_, alarmsShrink) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateHotelAlarmShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // scheduleInfoShrink Field Functions 
    bool hasScheduleInfoShrink() const { return this->scheduleInfoShrink_ != nullptr;};
    void deleteScheduleInfoShrink() { this->scheduleInfoShrink_ = nullptr;};
    inline string getScheduleInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleInfoShrink_, "") };
    inline UpdateHotelAlarmShrinkRequest& setScheduleInfoShrink(string scheduleInfoShrink) { DARABONBA_PTR_SET_VALUE(scheduleInfoShrink_, scheduleInfoShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> alarmsShrink_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> scheduleInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
