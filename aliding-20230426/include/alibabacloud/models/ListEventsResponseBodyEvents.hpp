// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventsResponseBodyEventsAttendees.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsCategories.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsEnd.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsExtendedProperties.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsLocation.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsMeetingRooms.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsOnlineMeetingInfo.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsOrganizer.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsOriginStart.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsRecurrence.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsReminders.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsRichTextDescription.hpp>
#include <alibabacloud/models/ListEventsResponseBodyEventsStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(Attendees, attendees_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(ExtendedProperties, extendedProperties_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(MeetingRooms, meetingRooms_);
      DARABONBA_PTR_TO_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_TO_JSON(Organizer, organizer_);
      DARABONBA_PTR_TO_JSON(OriginStart, originStart_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(Reminders, reminders_);
      DARABONBA_PTR_TO_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_TO_JSON(SeriesMasterId, seriesMasterId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(Attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(ExtendedProperties, extendedProperties_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(MeetingRooms, meetingRooms_);
      DARABONBA_PTR_FROM_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_FROM_JSON(Organizer, organizer_);
      DARABONBA_PTR_FROM_JSON(OriginStart, originStart_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(Reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_FROM_JSON(SeriesMasterId, seriesMasterId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListEventsResponseBodyEvents() = default ;
    ListEventsResponseBodyEvents(const ListEventsResponseBodyEvents &) = default ;
    ListEventsResponseBodyEvents(ListEventsResponseBodyEvents &&) = default ;
    ListEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEvents() = default ;
    ListEventsResponseBodyEvents& operator=(const ListEventsResponseBodyEvents &) = default ;
    ListEventsResponseBodyEvents& operator=(ListEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attendees_ != nullptr
        && this->categories_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->end_ != nullptr && this->extendedProperties_ != nullptr
        && this->id_ != nullptr && this->isAllDay_ != nullptr && this->location_ != nullptr && this->meetingRooms_ != nullptr && this->onlineMeetingInfo_ != nullptr
        && this->organizer_ != nullptr && this->originStart_ != nullptr && this->recurrence_ != nullptr && this->reminders_ != nullptr && this->richTextDescription_ != nullptr
        && this->seriesMasterId_ != nullptr && this->start_ != nullptr && this->status_ != nullptr && this->summary_ != nullptr && this->updateTime_ != nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<Models::ListEventsResponseBodyEventsAttendees> & attendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<Models::ListEventsResponseBodyEventsAttendees>) };
    inline vector<Models::ListEventsResponseBodyEventsAttendees> attendees() { DARABONBA_PTR_GET(attendees_, vector<Models::ListEventsResponseBodyEventsAttendees>) };
    inline ListEventsResponseBodyEvents& setAttendees(const vector<Models::ListEventsResponseBodyEventsAttendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline ListEventsResponseBodyEvents& setAttendees(vector<Models::ListEventsResponseBodyEventsAttendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<Models::ListEventsResponseBodyEventsCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Models::ListEventsResponseBodyEventsCategories>) };
    inline vector<Models::ListEventsResponseBodyEventsCategories> categories() { DARABONBA_PTR_GET(categories_, vector<Models::ListEventsResponseBodyEventsCategories>) };
    inline ListEventsResponseBodyEvents& setCategories(const vector<Models::ListEventsResponseBodyEventsCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListEventsResponseBodyEvents& setCategories(vector<Models::ListEventsResponseBodyEventsCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEventsResponseBodyEvents& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEventsResponseBodyEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsEnd & end() const { DARABONBA_PTR_GET_CONST(end_, Models::ListEventsResponseBodyEventsEnd) };
    inline Models::ListEventsResponseBodyEventsEnd end() { DARABONBA_PTR_GET(end_, Models::ListEventsResponseBodyEventsEnd) };
    inline ListEventsResponseBodyEvents& setEnd(const Models::ListEventsResponseBodyEventsEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline ListEventsResponseBodyEvents& setEnd(Models::ListEventsResponseBodyEventsEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // extendedProperties Field Functions 
    bool hasExtendedProperties() const { return this->extendedProperties_ != nullptr;};
    void deleteExtendedProperties() { this->extendedProperties_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsExtendedProperties & extendedProperties() const { DARABONBA_PTR_GET_CONST(extendedProperties_, Models::ListEventsResponseBodyEventsExtendedProperties) };
    inline Models::ListEventsResponseBodyEventsExtendedProperties extendedProperties() { DARABONBA_PTR_GET(extendedProperties_, Models::ListEventsResponseBodyEventsExtendedProperties) };
    inline ListEventsResponseBodyEvents& setExtendedProperties(const Models::ListEventsResponseBodyEventsExtendedProperties & extendedProperties) { DARABONBA_PTR_SET_VALUE(extendedProperties_, extendedProperties) };
    inline ListEventsResponseBodyEvents& setExtendedProperties(Models::ListEventsResponseBodyEventsExtendedProperties && extendedProperties) { DARABONBA_PTR_SET_RVALUE(extendedProperties_, extendedProperties) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListEventsResponseBodyEvents& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline ListEventsResponseBodyEvents& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ListEventsResponseBodyEventsLocation) };
    inline Models::ListEventsResponseBodyEventsLocation location() { DARABONBA_PTR_GET(location_, Models::ListEventsResponseBodyEventsLocation) };
    inline ListEventsResponseBodyEvents& setLocation(const Models::ListEventsResponseBodyEventsLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ListEventsResponseBodyEvents& setLocation(Models::ListEventsResponseBodyEventsLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // meetingRooms Field Functions 
    bool hasMeetingRooms() const { return this->meetingRooms_ != nullptr;};
    void deleteMeetingRooms() { this->meetingRooms_ = nullptr;};
    inline const vector<Models::ListEventsResponseBodyEventsMeetingRooms> & meetingRooms() const { DARABONBA_PTR_GET_CONST(meetingRooms_, vector<Models::ListEventsResponseBodyEventsMeetingRooms>) };
    inline vector<Models::ListEventsResponseBodyEventsMeetingRooms> meetingRooms() { DARABONBA_PTR_GET(meetingRooms_, vector<Models::ListEventsResponseBodyEventsMeetingRooms>) };
    inline ListEventsResponseBodyEvents& setMeetingRooms(const vector<Models::ListEventsResponseBodyEventsMeetingRooms> & meetingRooms) { DARABONBA_PTR_SET_VALUE(meetingRooms_, meetingRooms) };
    inline ListEventsResponseBodyEvents& setMeetingRooms(vector<Models::ListEventsResponseBodyEventsMeetingRooms> && meetingRooms) { DARABONBA_PTR_SET_RVALUE(meetingRooms_, meetingRooms) };


    // onlineMeetingInfo Field Functions 
    bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
    void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsOnlineMeetingInfo & onlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, Models::ListEventsResponseBodyEventsOnlineMeetingInfo) };
    inline Models::ListEventsResponseBodyEventsOnlineMeetingInfo onlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, Models::ListEventsResponseBodyEventsOnlineMeetingInfo) };
    inline ListEventsResponseBodyEvents& setOnlineMeetingInfo(const Models::ListEventsResponseBodyEventsOnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
    inline ListEventsResponseBodyEvents& setOnlineMeetingInfo(Models::ListEventsResponseBodyEventsOnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


    // organizer Field Functions 
    bool hasOrganizer() const { return this->organizer_ != nullptr;};
    void deleteOrganizer() { this->organizer_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsOrganizer & organizer() const { DARABONBA_PTR_GET_CONST(organizer_, Models::ListEventsResponseBodyEventsOrganizer) };
    inline Models::ListEventsResponseBodyEventsOrganizer organizer() { DARABONBA_PTR_GET(organizer_, Models::ListEventsResponseBodyEventsOrganizer) };
    inline ListEventsResponseBodyEvents& setOrganizer(const Models::ListEventsResponseBodyEventsOrganizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
    inline ListEventsResponseBodyEvents& setOrganizer(Models::ListEventsResponseBodyEventsOrganizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


    // originStart Field Functions 
    bool hasOriginStart() const { return this->originStart_ != nullptr;};
    void deleteOriginStart() { this->originStart_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsOriginStart & originStart() const { DARABONBA_PTR_GET_CONST(originStart_, Models::ListEventsResponseBodyEventsOriginStart) };
    inline Models::ListEventsResponseBodyEventsOriginStart originStart() { DARABONBA_PTR_GET(originStart_, Models::ListEventsResponseBodyEventsOriginStart) };
    inline ListEventsResponseBodyEvents& setOriginStart(const Models::ListEventsResponseBodyEventsOriginStart & originStart) { DARABONBA_PTR_SET_VALUE(originStart_, originStart) };
    inline ListEventsResponseBodyEvents& setOriginStart(Models::ListEventsResponseBodyEventsOriginStart && originStart) { DARABONBA_PTR_SET_RVALUE(originStart_, originStart) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsRecurrence & recurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, Models::ListEventsResponseBodyEventsRecurrence) };
    inline Models::ListEventsResponseBodyEventsRecurrence recurrence() { DARABONBA_PTR_GET(recurrence_, Models::ListEventsResponseBodyEventsRecurrence) };
    inline ListEventsResponseBodyEvents& setRecurrence(const Models::ListEventsResponseBodyEventsRecurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline ListEventsResponseBodyEvents& setRecurrence(Models::ListEventsResponseBodyEventsRecurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<Models::ListEventsResponseBodyEventsReminders> & reminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<Models::ListEventsResponseBodyEventsReminders>) };
    inline vector<Models::ListEventsResponseBodyEventsReminders> reminders() { DARABONBA_PTR_GET(reminders_, vector<Models::ListEventsResponseBodyEventsReminders>) };
    inline ListEventsResponseBodyEvents& setReminders(const vector<Models::ListEventsResponseBodyEventsReminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline ListEventsResponseBodyEvents& setReminders(vector<Models::ListEventsResponseBodyEventsReminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // richTextDescription Field Functions 
    bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
    void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsRichTextDescription & richTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, Models::ListEventsResponseBodyEventsRichTextDescription) };
    inline Models::ListEventsResponseBodyEventsRichTextDescription richTextDescription() { DARABONBA_PTR_GET(richTextDescription_, Models::ListEventsResponseBodyEventsRichTextDescription) };
    inline ListEventsResponseBodyEvents& setRichTextDescription(const Models::ListEventsResponseBodyEventsRichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
    inline ListEventsResponseBodyEvents& setRichTextDescription(Models::ListEventsResponseBodyEventsRichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


    // seriesMasterId Field Functions 
    bool hasSeriesMasterId() const { return this->seriesMasterId_ != nullptr;};
    void deleteSeriesMasterId() { this->seriesMasterId_ = nullptr;};
    inline string seriesMasterId() const { DARABONBA_PTR_GET_DEFAULT(seriesMasterId_, "") };
    inline ListEventsResponseBodyEvents& setSeriesMasterId(string seriesMasterId) { DARABONBA_PTR_SET_VALUE(seriesMasterId_, seriesMasterId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const Models::ListEventsResponseBodyEventsStart & start() const { DARABONBA_PTR_GET_CONST(start_, Models::ListEventsResponseBodyEventsStart) };
    inline Models::ListEventsResponseBodyEventsStart start() { DARABONBA_PTR_GET(start_, Models::ListEventsResponseBodyEventsStart) };
    inline ListEventsResponseBodyEvents& setStart(const Models::ListEventsResponseBodyEventsStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline ListEventsResponseBodyEvents& setStart(Models::ListEventsResponseBodyEventsStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEventsResponseBodyEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListEventsResponseBodyEvents& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListEventsResponseBodyEvents& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Models::ListEventsResponseBodyEventsAttendees>> attendees_ = nullptr;
    std::shared_ptr<vector<Models::ListEventsResponseBodyEventsCategories>> categories_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsEnd> end_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsExtendedProperties> extendedProperties_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsLocation> location_ = nullptr;
    std::shared_ptr<vector<Models::ListEventsResponseBodyEventsMeetingRooms>> meetingRooms_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsOnlineMeetingInfo> onlineMeetingInfo_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsOrganizer> organizer_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsOriginStart> originStart_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsRecurrence> recurrence_ = nullptr;
    std::shared_ptr<vector<Models::ListEventsResponseBodyEventsReminders>> reminders_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsRichTextDescription> richTextDescription_ = nullptr;
    std::shared_ptr<string> seriesMasterId_ = nullptr;
    std::shared_ptr<Models::ListEventsResponseBodyEventsStart> start_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
