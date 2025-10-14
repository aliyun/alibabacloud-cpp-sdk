// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsAttendees.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsCategories.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsEnd.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsExtendedProperties.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsLocation.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsMeetingRooms.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsOnlineMeetingInfo.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsOrganizer.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsOriginStart.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsRecurrence.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsRichTextDescription.hpp>
#include <alibabacloud/models/ListEventsViewResponseBodyEventsStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBodyEvents& obj) { 
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
      DARABONBA_PTR_TO_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_TO_JSON(SeriesMasterId, seriesMasterId_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBodyEvents& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_FROM_JSON(SeriesMasterId, seriesMasterId_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListEventsViewResponseBodyEvents() = default ;
    ListEventsViewResponseBodyEvents(const ListEventsViewResponseBodyEvents &) = default ;
    ListEventsViewResponseBodyEvents(ListEventsViewResponseBodyEvents &&) = default ;
    ListEventsViewResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBodyEvents() = default ;
    ListEventsViewResponseBodyEvents& operator=(const ListEventsViewResponseBodyEvents &) = default ;
    ListEventsViewResponseBodyEvents& operator=(ListEventsViewResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendees_ == nullptr
        && return this->categories_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->end_ == nullptr && return this->extendedProperties_ == nullptr
        && return this->id_ == nullptr && return this->isAllDay_ == nullptr && return this->location_ == nullptr && return this->meetingRooms_ == nullptr && return this->onlineMeetingInfo_ == nullptr
        && return this->organizer_ == nullptr && return this->originStart_ == nullptr && return this->recurrence_ == nullptr && return this->richTextDescription_ == nullptr && return this->seriesMasterId_ == nullptr
        && return this->start_ == nullptr && return this->status_ == nullptr && return this->summary_ == nullptr && return this->updateTime_ == nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<Models::ListEventsViewResponseBodyEventsAttendees> & attendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<Models::ListEventsViewResponseBodyEventsAttendees>) };
    inline vector<Models::ListEventsViewResponseBodyEventsAttendees> attendees() { DARABONBA_PTR_GET(attendees_, vector<Models::ListEventsViewResponseBodyEventsAttendees>) };
    inline ListEventsViewResponseBodyEvents& setAttendees(const vector<Models::ListEventsViewResponseBodyEventsAttendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline ListEventsViewResponseBodyEvents& setAttendees(vector<Models::ListEventsViewResponseBodyEventsAttendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<Models::ListEventsViewResponseBodyEventsCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Models::ListEventsViewResponseBodyEventsCategories>) };
    inline vector<Models::ListEventsViewResponseBodyEventsCategories> categories() { DARABONBA_PTR_GET(categories_, vector<Models::ListEventsViewResponseBodyEventsCategories>) };
    inline ListEventsViewResponseBodyEvents& setCategories(const vector<Models::ListEventsViewResponseBodyEventsCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListEventsViewResponseBodyEvents& setCategories(vector<Models::ListEventsViewResponseBodyEventsCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEventsViewResponseBodyEvents& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListEventsViewResponseBodyEvents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsEnd & end() const { DARABONBA_PTR_GET_CONST(end_, Models::ListEventsViewResponseBodyEventsEnd) };
    inline Models::ListEventsViewResponseBodyEventsEnd end() { DARABONBA_PTR_GET(end_, Models::ListEventsViewResponseBodyEventsEnd) };
    inline ListEventsViewResponseBodyEvents& setEnd(const Models::ListEventsViewResponseBodyEventsEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline ListEventsViewResponseBodyEvents& setEnd(Models::ListEventsViewResponseBodyEventsEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // extendedProperties Field Functions 
    bool hasExtendedProperties() const { return this->extendedProperties_ != nullptr;};
    void deleteExtendedProperties() { this->extendedProperties_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsExtendedProperties & extendedProperties() const { DARABONBA_PTR_GET_CONST(extendedProperties_, Models::ListEventsViewResponseBodyEventsExtendedProperties) };
    inline Models::ListEventsViewResponseBodyEventsExtendedProperties extendedProperties() { DARABONBA_PTR_GET(extendedProperties_, Models::ListEventsViewResponseBodyEventsExtendedProperties) };
    inline ListEventsViewResponseBodyEvents& setExtendedProperties(const Models::ListEventsViewResponseBodyEventsExtendedProperties & extendedProperties) { DARABONBA_PTR_SET_VALUE(extendedProperties_, extendedProperties) };
    inline ListEventsViewResponseBodyEvents& setExtendedProperties(Models::ListEventsViewResponseBodyEventsExtendedProperties && extendedProperties) { DARABONBA_PTR_SET_RVALUE(extendedProperties_, extendedProperties) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListEventsViewResponseBodyEvents& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline ListEventsViewResponseBodyEvents& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ListEventsViewResponseBodyEventsLocation) };
    inline Models::ListEventsViewResponseBodyEventsLocation location() { DARABONBA_PTR_GET(location_, Models::ListEventsViewResponseBodyEventsLocation) };
    inline ListEventsViewResponseBodyEvents& setLocation(const Models::ListEventsViewResponseBodyEventsLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ListEventsViewResponseBodyEvents& setLocation(Models::ListEventsViewResponseBodyEventsLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // meetingRooms Field Functions 
    bool hasMeetingRooms() const { return this->meetingRooms_ != nullptr;};
    void deleteMeetingRooms() { this->meetingRooms_ = nullptr;};
    inline const vector<Models::ListEventsViewResponseBodyEventsMeetingRooms> & meetingRooms() const { DARABONBA_PTR_GET_CONST(meetingRooms_, vector<Models::ListEventsViewResponseBodyEventsMeetingRooms>) };
    inline vector<Models::ListEventsViewResponseBodyEventsMeetingRooms> meetingRooms() { DARABONBA_PTR_GET(meetingRooms_, vector<Models::ListEventsViewResponseBodyEventsMeetingRooms>) };
    inline ListEventsViewResponseBodyEvents& setMeetingRooms(const vector<Models::ListEventsViewResponseBodyEventsMeetingRooms> & meetingRooms) { DARABONBA_PTR_SET_VALUE(meetingRooms_, meetingRooms) };
    inline ListEventsViewResponseBodyEvents& setMeetingRooms(vector<Models::ListEventsViewResponseBodyEventsMeetingRooms> && meetingRooms) { DARABONBA_PTR_SET_RVALUE(meetingRooms_, meetingRooms) };


    // onlineMeetingInfo Field Functions 
    bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
    void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsOnlineMeetingInfo & onlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, Models::ListEventsViewResponseBodyEventsOnlineMeetingInfo) };
    inline Models::ListEventsViewResponseBodyEventsOnlineMeetingInfo onlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, Models::ListEventsViewResponseBodyEventsOnlineMeetingInfo) };
    inline ListEventsViewResponseBodyEvents& setOnlineMeetingInfo(const Models::ListEventsViewResponseBodyEventsOnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
    inline ListEventsViewResponseBodyEvents& setOnlineMeetingInfo(Models::ListEventsViewResponseBodyEventsOnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


    // organizer Field Functions 
    bool hasOrganizer() const { return this->organizer_ != nullptr;};
    void deleteOrganizer() { this->organizer_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsOrganizer & organizer() const { DARABONBA_PTR_GET_CONST(organizer_, Models::ListEventsViewResponseBodyEventsOrganizer) };
    inline Models::ListEventsViewResponseBodyEventsOrganizer organizer() { DARABONBA_PTR_GET(organizer_, Models::ListEventsViewResponseBodyEventsOrganizer) };
    inline ListEventsViewResponseBodyEvents& setOrganizer(const Models::ListEventsViewResponseBodyEventsOrganizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
    inline ListEventsViewResponseBodyEvents& setOrganizer(Models::ListEventsViewResponseBodyEventsOrganizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


    // originStart Field Functions 
    bool hasOriginStart() const { return this->originStart_ != nullptr;};
    void deleteOriginStart() { this->originStart_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsOriginStart & originStart() const { DARABONBA_PTR_GET_CONST(originStart_, Models::ListEventsViewResponseBodyEventsOriginStart) };
    inline Models::ListEventsViewResponseBodyEventsOriginStart originStart() { DARABONBA_PTR_GET(originStart_, Models::ListEventsViewResponseBodyEventsOriginStart) };
    inline ListEventsViewResponseBodyEvents& setOriginStart(const Models::ListEventsViewResponseBodyEventsOriginStart & originStart) { DARABONBA_PTR_SET_VALUE(originStart_, originStart) };
    inline ListEventsViewResponseBodyEvents& setOriginStart(Models::ListEventsViewResponseBodyEventsOriginStart && originStart) { DARABONBA_PTR_SET_RVALUE(originStart_, originStart) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsRecurrence & recurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, Models::ListEventsViewResponseBodyEventsRecurrence) };
    inline Models::ListEventsViewResponseBodyEventsRecurrence recurrence() { DARABONBA_PTR_GET(recurrence_, Models::ListEventsViewResponseBodyEventsRecurrence) };
    inline ListEventsViewResponseBodyEvents& setRecurrence(const Models::ListEventsViewResponseBodyEventsRecurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline ListEventsViewResponseBodyEvents& setRecurrence(Models::ListEventsViewResponseBodyEventsRecurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // richTextDescription Field Functions 
    bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
    void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsRichTextDescription & richTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, Models::ListEventsViewResponseBodyEventsRichTextDescription) };
    inline Models::ListEventsViewResponseBodyEventsRichTextDescription richTextDescription() { DARABONBA_PTR_GET(richTextDescription_, Models::ListEventsViewResponseBodyEventsRichTextDescription) };
    inline ListEventsViewResponseBodyEvents& setRichTextDescription(const Models::ListEventsViewResponseBodyEventsRichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
    inline ListEventsViewResponseBodyEvents& setRichTextDescription(Models::ListEventsViewResponseBodyEventsRichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


    // seriesMasterId Field Functions 
    bool hasSeriesMasterId() const { return this->seriesMasterId_ != nullptr;};
    void deleteSeriesMasterId() { this->seriesMasterId_ = nullptr;};
    inline string seriesMasterId() const { DARABONBA_PTR_GET_DEFAULT(seriesMasterId_, "") };
    inline ListEventsViewResponseBodyEvents& setSeriesMasterId(string seriesMasterId) { DARABONBA_PTR_SET_VALUE(seriesMasterId_, seriesMasterId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const Models::ListEventsViewResponseBodyEventsStart & start() const { DARABONBA_PTR_GET_CONST(start_, Models::ListEventsViewResponseBodyEventsStart) };
    inline Models::ListEventsViewResponseBodyEventsStart start() { DARABONBA_PTR_GET(start_, Models::ListEventsViewResponseBodyEventsStart) };
    inline ListEventsViewResponseBodyEvents& setStart(const Models::ListEventsViewResponseBodyEventsStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline ListEventsViewResponseBodyEvents& setStart(Models::ListEventsViewResponseBodyEventsStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEventsViewResponseBodyEvents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListEventsViewResponseBodyEvents& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListEventsViewResponseBodyEvents& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Models::ListEventsViewResponseBodyEventsAttendees>> attendees_ = nullptr;
    std::shared_ptr<vector<Models::ListEventsViewResponseBodyEventsCategories>> categories_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsEnd> end_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsExtendedProperties> extendedProperties_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsLocation> location_ = nullptr;
    std::shared_ptr<vector<Models::ListEventsViewResponseBodyEventsMeetingRooms>> meetingRooms_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsOnlineMeetingInfo> onlineMeetingInfo_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsOrganizer> organizer_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsOriginStart> originStart_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsRecurrence> recurrence_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsRichTextDescription> richTextDescription_ = nullptr;
    std::shared_ptr<string> seriesMasterId_ = nullptr;
    std::shared_ptr<Models::ListEventsViewResponseBodyEventsStart> start_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
