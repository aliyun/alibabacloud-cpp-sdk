// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeetingRoomsScheduleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RoomIds, roomIdsShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RoomIds, roomIdsShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetMeetingRoomsScheduleShrinkRequest() = default ;
    GetMeetingRoomsScheduleShrinkRequest(const GetMeetingRoomsScheduleShrinkRequest &) = default ;
    GetMeetingRoomsScheduleShrinkRequest(GetMeetingRoomsScheduleShrinkRequest &&) = default ;
    GetMeetingRoomsScheduleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleShrinkRequest() = default ;
    GetMeetingRoomsScheduleShrinkRequest& operator=(const GetMeetingRoomsScheduleShrinkRequest &) = default ;
    GetMeetingRoomsScheduleShrinkRequest& operator=(GetMeetingRoomsScheduleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->roomIdsShrink_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetMeetingRoomsScheduleShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // roomIdsShrink Field Functions 
    bool hasRoomIdsShrink() const { return this->roomIdsShrink_ != nullptr;};
    void deleteRoomIdsShrink() { this->roomIdsShrink_ = nullptr;};
    inline string roomIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(roomIdsShrink_, "") };
    inline GetMeetingRoomsScheduleShrinkRequest& setRoomIdsShrink(string roomIdsShrink) { DARABONBA_PTR_SET_VALUE(roomIdsShrink_, roomIdsShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMeetingRoomsScheduleShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roomIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
