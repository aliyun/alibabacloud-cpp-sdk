// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOTELALARMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOTELALARMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class CreateHotelAlarmShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(MusicType, musicType_);
      DARABONBA_PTR_TO_JSON(Rooms, roomsShrink_);
      DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHotelAlarmShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(MusicType, musicType_);
      DARABONBA_PTR_FROM_JSON(Rooms, roomsShrink_);
      DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfoShrink_);
    };
    CreateHotelAlarmShrinkRequest() = default ;
    CreateHotelAlarmShrinkRequest(const CreateHotelAlarmShrinkRequest &) = default ;
    CreateHotelAlarmShrinkRequest(CreateHotelAlarmShrinkRequest &&) = default ;
    CreateHotelAlarmShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHotelAlarmShrinkRequest() = default ;
    CreateHotelAlarmShrinkRequest& operator=(const CreateHotelAlarmShrinkRequest &) = default ;
    CreateHotelAlarmShrinkRequest& operator=(CreateHotelAlarmShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->musicType_ == nullptr && this->roomsShrink_ == nullptr && this->scheduleInfoShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline CreateHotelAlarmShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // musicType Field Functions 
    bool hasMusicType() const { return this->musicType_ != nullptr;};
    void deleteMusicType() { this->musicType_ = nullptr;};
    inline string getMusicType() const { DARABONBA_PTR_GET_DEFAULT(musicType_, "") };
    inline CreateHotelAlarmShrinkRequest& setMusicType(string musicType) { DARABONBA_PTR_SET_VALUE(musicType_, musicType) };


    // roomsShrink Field Functions 
    bool hasRoomsShrink() const { return this->roomsShrink_ != nullptr;};
    void deleteRoomsShrink() { this->roomsShrink_ = nullptr;};
    inline string getRoomsShrink() const { DARABONBA_PTR_GET_DEFAULT(roomsShrink_, "") };
    inline CreateHotelAlarmShrinkRequest& setRoomsShrink(string roomsShrink) { DARABONBA_PTR_SET_VALUE(roomsShrink_, roomsShrink) };


    // scheduleInfoShrink Field Functions 
    bool hasScheduleInfoShrink() const { return this->scheduleInfoShrink_ != nullptr;};
    void deleteScheduleInfoShrink() { this->scheduleInfoShrink_ = nullptr;};
    inline string getScheduleInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(scheduleInfoShrink_, "") };
    inline CreateHotelAlarmShrinkRequest& setScheduleInfoShrink(string scheduleInfoShrink) { DARABONBA_PTR_SET_VALUE(scheduleInfoShrink_, scheduleInfoShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> musicType_ {};
    // This parameter is required.
    shared_ptr<string> roomsShrink_ {};
    // This parameter is required.
    shared_ptr<string> scheduleInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
