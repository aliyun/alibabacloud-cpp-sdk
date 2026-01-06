// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEETINGROOMSSCHEDULERESPONSEBODY_HPP_
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
  class GetMeetingRoomsScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMeetingRoomsScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scheduleInformation, scheduleInformation_);
    };
    friend void from_json(const Darabonba::Json& j, GetMeetingRoomsScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scheduleInformation, scheduleInformation_);
    };
    GetMeetingRoomsScheduleResponseBody() = default ;
    GetMeetingRoomsScheduleResponseBody(const GetMeetingRoomsScheduleResponseBody &) = default ;
    GetMeetingRoomsScheduleResponseBody(GetMeetingRoomsScheduleResponseBody &&) = default ;
    GetMeetingRoomsScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMeetingRoomsScheduleResponseBody() = default ;
    GetMeetingRoomsScheduleResponseBody& operator=(const GetMeetingRoomsScheduleResponseBody &) = default ;
    GetMeetingRoomsScheduleResponseBody& operator=(GetMeetingRoomsScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScheduleInformation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleInformation& obj) { 
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(RoomId, roomId_);
        DARABONBA_PTR_TO_JSON(ScheduleItems, scheduleItems_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleInformation& obj) { 
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
        DARABONBA_PTR_FROM_JSON(ScheduleItems, scheduleItems_);
      };
      ScheduleInformation() = default ;
      ScheduleInformation(const ScheduleInformation &) = default ;
      ScheduleInformation(ScheduleInformation &&) = default ;
      ScheduleInformation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleInformation() = default ;
      ScheduleInformation& operator=(const ScheduleInformation &) = default ;
      ScheduleInformation& operator=(ScheduleInformation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScheduleItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScheduleItems& obj) { 
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(EventId, eventId_);
          DARABONBA_PTR_TO_JSON(Organizer, organizer_);
          DARABONBA_PTR_TO_JSON(Start, start_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, ScheduleItems& obj) { 
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(EventId, eventId_);
          DARABONBA_PTR_FROM_JSON(Organizer, organizer_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        ScheduleItems() = default ;
        ScheduleItems(const ScheduleItems &) = default ;
        ScheduleItems(ScheduleItems &&) = default ;
        ScheduleItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScheduleItems() = default ;
        ScheduleItems& operator=(const ScheduleItems &) = default ;
        ScheduleItems& operator=(ScheduleItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Start : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Start& obj) { 
            DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
            DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
          };
          friend void from_json(const Darabonba::Json& j, Start& obj) { 
            DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
            DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
          };
          Start() = default ;
          Start(const Start &) = default ;
          Start(Start &&) = default ;
          Start(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Start() = default ;
          Start& operator=(const Start &) = default ;
          Start& operator=(Start &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dateTime_ == nullptr
        && this->timeZone_ == nullptr; };
          // dateTime Field Functions 
          bool hasDateTime() const { return this->dateTime_ != nullptr;};
          void deleteDateTime() { this->dateTime_ = nullptr;};
          inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
          inline Start& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


          // timeZone Field Functions 
          bool hasTimeZone() const { return this->timeZone_ != nullptr;};
          void deleteTimeZone() { this->timeZone_ = nullptr;};
          inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
          inline Start& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


        protected:
          shared_ptr<string> dateTime_ {};
          shared_ptr<string> timeZone_ {};
        };

        class Organizer : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Organizer& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
          };
          friend void from_json(const Darabonba::Json& j, Organizer& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
          };
          Organizer() = default ;
          Organizer(const Organizer &) = default ;
          Organizer(Organizer &&) = default ;
          Organizer(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Organizer() = default ;
          Organizer& operator=(const Organizer &) = default ;
          Organizer& operator=(Organizer &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Organizer& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        protected:
          shared_ptr<string> id_ {};
        };

        class End : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const End& obj) { 
            DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
            DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
          };
          friend void from_json(const Darabonba::Json& j, End& obj) { 
            DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
            DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
          };
          End() = default ;
          End(const End &) = default ;
          End(End &&) = default ;
          End(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~End() = default ;
          End& operator=(const End &) = default ;
          End& operator=(End &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dateTime_ == nullptr
        && this->timeZone_ == nullptr; };
          // dateTime Field Functions 
          bool hasDateTime() const { return this->dateTime_ != nullptr;};
          void deleteDateTime() { this->dateTime_ = nullptr;};
          inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
          inline End& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


          // timeZone Field Functions 
          bool hasTimeZone() const { return this->timeZone_ != nullptr;};
          void deleteTimeZone() { this->timeZone_ = nullptr;};
          inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
          inline End& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


        protected:
          shared_ptr<string> dateTime_ {};
          shared_ptr<string> timeZone_ {};
        };

        virtual bool empty() const override { return this->end_ == nullptr
        && this->eventId_ == nullptr && this->organizer_ == nullptr && this->start_ == nullptr && this->status_ == nullptr; };
        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline const ScheduleItems::End & getEnd() const { DARABONBA_PTR_GET_CONST(end_, ScheduleItems::End) };
        inline ScheduleItems::End getEnd() { DARABONBA_PTR_GET(end_, ScheduleItems::End) };
        inline ScheduleItems& setEnd(const ScheduleItems::End & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
        inline ScheduleItems& setEnd(ScheduleItems::End && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline ScheduleItems& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // organizer Field Functions 
        bool hasOrganizer() const { return this->organizer_ != nullptr;};
        void deleteOrganizer() { this->organizer_ = nullptr;};
        inline const ScheduleItems::Organizer & getOrganizer() const { DARABONBA_PTR_GET_CONST(organizer_, ScheduleItems::Organizer) };
        inline ScheduleItems::Organizer getOrganizer() { DARABONBA_PTR_GET(organizer_, ScheduleItems::Organizer) };
        inline ScheduleItems& setOrganizer(const ScheduleItems::Organizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
        inline ScheduleItems& setOrganizer(ScheduleItems::Organizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline const ScheduleItems::Start & getStart() const { DARABONBA_PTR_GET_CONST(start_, ScheduleItems::Start) };
        inline ScheduleItems::Start getStart() { DARABONBA_PTR_GET(start_, ScheduleItems::Start) };
        inline ScheduleItems& setStart(const ScheduleItems::Start & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
        inline ScheduleItems& setStart(ScheduleItems::Start && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ScheduleItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<ScheduleItems::End> end_ {};
        shared_ptr<string> eventId_ {};
        shared_ptr<ScheduleItems::Organizer> organizer_ {};
        shared_ptr<ScheduleItems::Start> start_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->error_ == nullptr
        && this->roomId_ == nullptr && this->scheduleItems_ == nullptr; };
      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline ScheduleInformation& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // roomId Field Functions 
      bool hasRoomId() const { return this->roomId_ != nullptr;};
      void deleteRoomId() { this->roomId_ = nullptr;};
      inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
      inline ScheduleInformation& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


      // scheduleItems Field Functions 
      bool hasScheduleItems() const { return this->scheduleItems_ != nullptr;};
      void deleteScheduleItems() { this->scheduleItems_ = nullptr;};
      inline const vector<ScheduleInformation::ScheduleItems> & getScheduleItems() const { DARABONBA_PTR_GET_CONST(scheduleItems_, vector<ScheduleInformation::ScheduleItems>) };
      inline vector<ScheduleInformation::ScheduleItems> getScheduleItems() { DARABONBA_PTR_GET(scheduleItems_, vector<ScheduleInformation::ScheduleItems>) };
      inline ScheduleInformation& setScheduleItems(const vector<ScheduleInformation::ScheduleItems> & scheduleItems) { DARABONBA_PTR_SET_VALUE(scheduleItems_, scheduleItems) };
      inline ScheduleInformation& setScheduleItems(vector<ScheduleInformation::ScheduleItems> && scheduleItems) { DARABONBA_PTR_SET_RVALUE(scheduleItems_, scheduleItems) };


    protected:
      shared_ptr<string> error_ {};
      shared_ptr<string> roomId_ {};
      shared_ptr<vector<ScheduleInformation::ScheduleItems>> scheduleItems_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scheduleInformation_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMeetingRoomsScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduleInformation Field Functions 
    bool hasScheduleInformation() const { return this->scheduleInformation_ != nullptr;};
    void deleteScheduleInformation() { this->scheduleInformation_ = nullptr;};
    inline const vector<GetMeetingRoomsScheduleResponseBody::ScheduleInformation> & getScheduleInformation() const { DARABONBA_PTR_GET_CONST(scheduleInformation_, vector<GetMeetingRoomsScheduleResponseBody::ScheduleInformation>) };
    inline vector<GetMeetingRoomsScheduleResponseBody::ScheduleInformation> getScheduleInformation() { DARABONBA_PTR_GET(scheduleInformation_, vector<GetMeetingRoomsScheduleResponseBody::ScheduleInformation>) };
    inline GetMeetingRoomsScheduleResponseBody& setScheduleInformation(const vector<GetMeetingRoomsScheduleResponseBody::ScheduleInformation> & scheduleInformation) { DARABONBA_PTR_SET_VALUE(scheduleInformation_, scheduleInformation) };
    inline GetMeetingRoomsScheduleResponseBody& setScheduleInformation(vector<GetMeetingRoomsScheduleResponseBody::ScheduleInformation> && scheduleInformation) { DARABONBA_PTR_SET_RVALUE(scheduleInformation_, scheduleInformation) };


  protected:
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetMeetingRoomsScheduleResponseBody::ScheduleInformation>> scheduleInformation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
