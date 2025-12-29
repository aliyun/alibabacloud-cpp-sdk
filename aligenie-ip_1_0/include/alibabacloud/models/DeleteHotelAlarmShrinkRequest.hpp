// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHOTELALARMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHOTELALARMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class DeleteHotelAlarmShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alarms, alarmsShrink_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alarms, alarmsShrink_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
    };
    DeleteHotelAlarmShrinkRequest() = default ;
    DeleteHotelAlarmShrinkRequest(const DeleteHotelAlarmShrinkRequest &) = default ;
    DeleteHotelAlarmShrinkRequest(DeleteHotelAlarmShrinkRequest &&) = default ;
    DeleteHotelAlarmShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHotelAlarmShrinkRequest() = default ;
    DeleteHotelAlarmShrinkRequest& operator=(const DeleteHotelAlarmShrinkRequest &) = default ;
    DeleteHotelAlarmShrinkRequest& operator=(DeleteHotelAlarmShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmsShrink_ == nullptr
        && this->hotelId_ == nullptr; };
    // alarmsShrink Field Functions 
    bool hasAlarmsShrink() const { return this->alarmsShrink_ != nullptr;};
    void deleteAlarmsShrink() { this->alarmsShrink_ = nullptr;};
    inline string getAlarmsShrink() const { DARABONBA_PTR_GET_DEFAULT(alarmsShrink_, "") };
    inline DeleteHotelAlarmShrinkRequest& setAlarmsShrink(string alarmsShrink) { DARABONBA_PTR_SET_VALUE(alarmsShrink_, alarmsShrink) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline DeleteHotelAlarmShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


  protected:
    // This parameter is required.
    shared_ptr<string> alarmsShrink_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
