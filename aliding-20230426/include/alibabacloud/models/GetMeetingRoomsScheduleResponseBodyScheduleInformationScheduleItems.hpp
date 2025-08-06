// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODYSCHEDULEINFORMATIONSCHEDULEITEMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd.hpp>
#include <alibabacloud/models/GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer.hpp>
#include <alibabacloud/models/GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
      DARABONBA_PTR_TO_JSON(Organizer, organizer_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      DARABONBA_PTR_FROM_JSON(Organizer, organizer_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems(const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems(GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems &&) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems() = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& operator=(const GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems &) = default ;
    GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& operator=(GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->end_ != nullptr
        && this->eventId_ != nullptr && this->organizer_ != nullptr && this->start_ != nullptr && this->status_ != nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd & end() const { DARABONBA_PTR_GET_CONST(end_, Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd) };
    inline Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd end() { DARABONBA_PTR_GET(end_, Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setEnd(const Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setEnd(Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // organizer Field Functions 
    bool hasOrganizer() const { return this->organizer_ != nullptr;};
    void deleteOrganizer() { this->organizer_ = nullptr;};
    inline const Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer & organizer() const { DARABONBA_PTR_GET_CONST(organizer_, Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer) };
    inline Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer organizer() { DARABONBA_PTR_GET(organizer_, Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setOrganizer(const Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setOrganizer(Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart & start() const { DARABONBA_PTR_GET_CONST(start_, Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart) };
    inline Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart start() { DARABONBA_PTR_GET(start_, Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setStart(const Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setStart(Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsEnd> end_ = nullptr;
    std::shared_ptr<string> eventId_ = nullptr;
    std::shared_ptr<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsOrganizer> organizer_ = nullptr;
    std::shared_ptr<Models::GetMeetingRoomsScheduleResponseBodyScheduleInformationScheduleItemsStart> start_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
