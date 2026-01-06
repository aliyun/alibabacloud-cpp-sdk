// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeetingRoomsScheduleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RoomIds, roomIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RoomIds, roomIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetMeetingRoomsScheduleRequest() = default ;
    GetMeetingRoomsScheduleRequest(const GetMeetingRoomsScheduleRequest &) = default ;
    GetMeetingRoomsScheduleRequest(GetMeetingRoomsScheduleRequest &&) = default ;
    GetMeetingRoomsScheduleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleRequest() = default ;
    GetMeetingRoomsScheduleRequest& operator=(const GetMeetingRoomsScheduleRequest &) = default ;
    GetMeetingRoomsScheduleRequest& operator=(GetMeetingRoomsScheduleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->roomIds_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetMeetingRoomsScheduleRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // roomIds Field Functions 
    bool hasRoomIds() const { return this->roomIds_ != nullptr;};
    void deleteRoomIds() { this->roomIds_ = nullptr;};
    inline const vector<string> & getRoomIds() const { DARABONBA_PTR_GET_CONST(roomIds_, vector<string>) };
    inline vector<string> getRoomIds() { DARABONBA_PTR_GET(roomIds_, vector<string>) };
    inline GetMeetingRoomsScheduleRequest& setRoomIds(const vector<string> & roomIds) { DARABONBA_PTR_SET_VALUE(roomIds_, roomIds) };
    inline GetMeetingRoomsScheduleRequest& setRoomIds(vector<string> && roomIds) { DARABONBA_PTR_SET_RVALUE(roomIds_, roomIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMeetingRoomsScheduleRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // This parameter is required.
    shared_ptr<vector<string>> roomIds_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
