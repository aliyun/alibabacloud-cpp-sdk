// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATION_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeetingRoomsScheduleResponseBodyScheduleInformation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleResponseBodyScheduleInformation& obj) { 
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(ScheduleItems, scheduleItems_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleResponseBodyScheduleInformation& obj) { 
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(ScheduleItems, scheduleItems_);
    };
    GetMeetingRoomsScheduleResponseBodyScheduleInformation() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformation(const GetMeetingRoomsScheduleResponseBodyScheduleInformation &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformation(GetMeetingRoomsScheduleResponseBodyScheduleInformation &&) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleResponseBodyScheduleInformation() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformation& operator=(const GetMeetingRoomsScheduleResponseBodyScheduleInformation &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformation& operator=(GetMeetingRoomsScheduleResponseBodyScheduleInformation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->error_ != nullptr
        && this->roomId_ != nullptr && this->scheduleItems_ != nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformation& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformation& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // scheduleItems Field Functions 
    bool hasScheduleItems() const { return this->scheduleItems_ != nullptr;};
    void deleteScheduleItems() { this->scheduleItems_ = nullptr;};
    inline const vector<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems> & scheduleItems() const { DARABONBA_PTR_GET_CONST(scheduleItems_, vector<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems>) };
    inline vector<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems> scheduleItems() { DARABONBA_PTR_GET(scheduleItems_, vector<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems>) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformation& setScheduleItems(const vector<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems> & scheduleItems) { DARABONBA_PTR_SET_VALUE(scheduleItems_, scheduleItems) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformation& setScheduleItems(vector<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems> && scheduleItems) { DARABONBA_PTR_SET_RVALUE(scheduleItems_, scheduleItems) };


  protected:
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<vector<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems>> scheduleItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
