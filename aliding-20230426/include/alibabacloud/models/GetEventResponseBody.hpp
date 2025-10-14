// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetEventResponseBodyAttendees.hpp>
#include <alibabacloud/models/GetEventResponseBodyCategories.hpp>
#include <alibabacloud/models/GetEventResponseBodyEnd.hpp>
#include <alibabacloud/models/GetEventResponseBodyExtendedProperties.hpp>
#include <alibabacloud/models/GetEventResponseBodyLocation.hpp>
#include <alibabacloud/models/GetEventResponseBodyMeetingRooms.hpp>
#include <alibabacloud/models/GetEventResponseBodyOnlineMeetingInfo.hpp>
#include <alibabacloud/models/GetEventResponseBodyOrganizer.hpp>
#include <alibabacloud/models/GetEventResponseBodyOriginStart.hpp>
#include <alibabacloud/models/GetEventResponseBodyRecurrence.hpp>
#include <alibabacloud/models/GetEventResponseBodyReminders.hpp>
#include <alibabacloud/models/GetEventResponseBodyRichTextDescription.hpp>
#include <alibabacloud/models/GetEventResponseBodyStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(attendees, attendees_);
      DARABONBA_PTR_TO_JSON(categories, categories_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(extendedProperties, extendedProperties_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(meetingRooms, meetingRooms_);
      DARABONBA_PTR_TO_JSON(onlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_TO_JSON(organizer, organizer_);
      DARABONBA_PTR_TO_JSON(originStart, originStart_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(reminders, reminders_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(richTextDescription, richTextDescription_);
      DARABONBA_PTR_TO_JSON(seriesMasterId, seriesMasterId_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(categories, categories_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(extendedProperties, extendedProperties_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(meetingRooms, meetingRooms_);
      DARABONBA_PTR_FROM_JSON(onlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_FROM_JSON(organizer, organizer_);
      DARABONBA_PTR_FROM_JSON(originStart, originStart_);
      DARABONBA_PTR_FROM_JSON(recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(richTextDescription, richTextDescription_);
      DARABONBA_PTR_FROM_JSON(seriesMasterId, seriesMasterId_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetEventResponseBody() = default ;
    GetEventResponseBody(const GetEventResponseBody &) = default ;
    GetEventResponseBody(GetEventResponseBody &&) = default ;
    GetEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventResponseBody() = default ;
    GetEventResponseBody& operator=(const GetEventResponseBody &) = default ;
    GetEventResponseBody& operator=(GetEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendees_ == nullptr
        && return this->categories_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->end_ == nullptr && return this->extendedProperties_ == nullptr
        && return this->id_ == nullptr && return this->isAllDay_ == nullptr && return this->location_ == nullptr && return this->meetingRooms_ == nullptr && return this->onlineMeetingInfo_ == nullptr
        && return this->organizer_ == nullptr && return this->originStart_ == nullptr && return this->recurrence_ == nullptr && return this->reminders_ == nullptr && return this->requestId_ == nullptr
        && return this->richTextDescription_ == nullptr && return this->seriesMasterId_ == nullptr && return this->start_ == nullptr && return this->status_ == nullptr && return this->summary_ == nullptr
        && return this->updateTime_ == nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<GetEventResponseBodyAttendees> & attendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<GetEventResponseBodyAttendees>) };
    inline vector<GetEventResponseBodyAttendees> attendees() { DARABONBA_PTR_GET(attendees_, vector<GetEventResponseBodyAttendees>) };
    inline GetEventResponseBody& setAttendees(const vector<GetEventResponseBodyAttendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline GetEventResponseBody& setAttendees(vector<GetEventResponseBodyAttendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<GetEventResponseBodyCategories> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<GetEventResponseBodyCategories>) };
    inline vector<GetEventResponseBodyCategories> categories() { DARABONBA_PTR_GET(categories_, vector<GetEventResponseBodyCategories>) };
    inline GetEventResponseBody& setCategories(const vector<GetEventResponseBodyCategories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline GetEventResponseBody& setCategories(vector<GetEventResponseBodyCategories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetEventResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEventResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const GetEventResponseBodyEnd & end() const { DARABONBA_PTR_GET_CONST(end_, GetEventResponseBodyEnd) };
    inline GetEventResponseBodyEnd end() { DARABONBA_PTR_GET(end_, GetEventResponseBodyEnd) };
    inline GetEventResponseBody& setEnd(const GetEventResponseBodyEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline GetEventResponseBody& setEnd(GetEventResponseBodyEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // extendedProperties Field Functions 
    bool hasExtendedProperties() const { return this->extendedProperties_ != nullptr;};
    void deleteExtendedProperties() { this->extendedProperties_ = nullptr;};
    inline const GetEventResponseBodyExtendedProperties & extendedProperties() const { DARABONBA_PTR_GET_CONST(extendedProperties_, GetEventResponseBodyExtendedProperties) };
    inline GetEventResponseBodyExtendedProperties extendedProperties() { DARABONBA_PTR_GET(extendedProperties_, GetEventResponseBodyExtendedProperties) };
    inline GetEventResponseBody& setExtendedProperties(const GetEventResponseBodyExtendedProperties & extendedProperties) { DARABONBA_PTR_SET_VALUE(extendedProperties_, extendedProperties) };
    inline GetEventResponseBody& setExtendedProperties(GetEventResponseBodyExtendedProperties && extendedProperties) { DARABONBA_PTR_SET_RVALUE(extendedProperties_, extendedProperties) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetEventResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline GetEventResponseBody& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const GetEventResponseBodyLocation & location() const { DARABONBA_PTR_GET_CONST(location_, GetEventResponseBodyLocation) };
    inline GetEventResponseBodyLocation location() { DARABONBA_PTR_GET(location_, GetEventResponseBodyLocation) };
    inline GetEventResponseBody& setLocation(const GetEventResponseBodyLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline GetEventResponseBody& setLocation(GetEventResponseBodyLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // meetingRooms Field Functions 
    bool hasMeetingRooms() const { return this->meetingRooms_ != nullptr;};
    void deleteMeetingRooms() { this->meetingRooms_ = nullptr;};
    inline const vector<GetEventResponseBodyMeetingRooms> & meetingRooms() const { DARABONBA_PTR_GET_CONST(meetingRooms_, vector<GetEventResponseBodyMeetingRooms>) };
    inline vector<GetEventResponseBodyMeetingRooms> meetingRooms() { DARABONBA_PTR_GET(meetingRooms_, vector<GetEventResponseBodyMeetingRooms>) };
    inline GetEventResponseBody& setMeetingRooms(const vector<GetEventResponseBodyMeetingRooms> & meetingRooms) { DARABONBA_PTR_SET_VALUE(meetingRooms_, meetingRooms) };
    inline GetEventResponseBody& setMeetingRooms(vector<GetEventResponseBodyMeetingRooms> && meetingRooms) { DARABONBA_PTR_SET_RVALUE(meetingRooms_, meetingRooms) };


    // onlineMeetingInfo Field Functions 
    bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
    void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
    inline const GetEventResponseBodyOnlineMeetingInfo & onlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, GetEventResponseBodyOnlineMeetingInfo) };
    inline GetEventResponseBodyOnlineMeetingInfo onlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, GetEventResponseBodyOnlineMeetingInfo) };
    inline GetEventResponseBody& setOnlineMeetingInfo(const GetEventResponseBodyOnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
    inline GetEventResponseBody& setOnlineMeetingInfo(GetEventResponseBodyOnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


    // organizer Field Functions 
    bool hasOrganizer() const { return this->organizer_ != nullptr;};
    void deleteOrganizer() { this->organizer_ = nullptr;};
    inline const GetEventResponseBodyOrganizer & organizer() const { DARABONBA_PTR_GET_CONST(organizer_, GetEventResponseBodyOrganizer) };
    inline GetEventResponseBodyOrganizer organizer() { DARABONBA_PTR_GET(organizer_, GetEventResponseBodyOrganizer) };
    inline GetEventResponseBody& setOrganizer(const GetEventResponseBodyOrganizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
    inline GetEventResponseBody& setOrganizer(GetEventResponseBodyOrganizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


    // originStart Field Functions 
    bool hasOriginStart() const { return this->originStart_ != nullptr;};
    void deleteOriginStart() { this->originStart_ = nullptr;};
    inline const GetEventResponseBodyOriginStart & originStart() const { DARABONBA_PTR_GET_CONST(originStart_, GetEventResponseBodyOriginStart) };
    inline GetEventResponseBodyOriginStart originStart() { DARABONBA_PTR_GET(originStart_, GetEventResponseBodyOriginStart) };
    inline GetEventResponseBody& setOriginStart(const GetEventResponseBodyOriginStart & originStart) { DARABONBA_PTR_SET_VALUE(originStart_, originStart) };
    inline GetEventResponseBody& setOriginStart(GetEventResponseBodyOriginStart && originStart) { DARABONBA_PTR_SET_RVALUE(originStart_, originStart) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const GetEventResponseBodyRecurrence & recurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, GetEventResponseBodyRecurrence) };
    inline GetEventResponseBodyRecurrence recurrence() { DARABONBA_PTR_GET(recurrence_, GetEventResponseBodyRecurrence) };
    inline GetEventResponseBody& setRecurrence(const GetEventResponseBodyRecurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline GetEventResponseBody& setRecurrence(GetEventResponseBodyRecurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<GetEventResponseBodyReminders> & reminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<GetEventResponseBodyReminders>) };
    inline vector<GetEventResponseBodyReminders> reminders() { DARABONBA_PTR_GET(reminders_, vector<GetEventResponseBodyReminders>) };
    inline GetEventResponseBody& setReminders(const vector<GetEventResponseBodyReminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline GetEventResponseBody& setReminders(vector<GetEventResponseBodyReminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // richTextDescription Field Functions 
    bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
    void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
    inline const GetEventResponseBodyRichTextDescription & richTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, GetEventResponseBodyRichTextDescription) };
    inline GetEventResponseBodyRichTextDescription richTextDescription() { DARABONBA_PTR_GET(richTextDescription_, GetEventResponseBodyRichTextDescription) };
    inline GetEventResponseBody& setRichTextDescription(const GetEventResponseBodyRichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
    inline GetEventResponseBody& setRichTextDescription(GetEventResponseBodyRichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


    // seriesMasterId Field Functions 
    bool hasSeriesMasterId() const { return this->seriesMasterId_ != nullptr;};
    void deleteSeriesMasterId() { this->seriesMasterId_ = nullptr;};
    inline string seriesMasterId() const { DARABONBA_PTR_GET_DEFAULT(seriesMasterId_, "") };
    inline GetEventResponseBody& setSeriesMasterId(string seriesMasterId) { DARABONBA_PTR_SET_VALUE(seriesMasterId_, seriesMasterId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const GetEventResponseBodyStart & start() const { DARABONBA_PTR_GET_CONST(start_, GetEventResponseBodyStart) };
    inline GetEventResponseBodyStart start() { DARABONBA_PTR_GET(start_, GetEventResponseBodyStart) };
    inline GetEventResponseBody& setStart(const GetEventResponseBodyStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline GetEventResponseBody& setStart(GetEventResponseBodyStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetEventResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetEventResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetEventResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<GetEventResponseBodyAttendees>> attendees_ = nullptr;
    std::shared_ptr<vector<GetEventResponseBodyCategories>> categories_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<GetEventResponseBodyEnd> end_ = nullptr;
    std::shared_ptr<GetEventResponseBodyExtendedProperties> extendedProperties_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<GetEventResponseBodyLocation> location_ = nullptr;
    std::shared_ptr<vector<GetEventResponseBodyMeetingRooms>> meetingRooms_ = nullptr;
    std::shared_ptr<GetEventResponseBodyOnlineMeetingInfo> onlineMeetingInfo_ = nullptr;
    std::shared_ptr<GetEventResponseBodyOrganizer> organizer_ = nullptr;
    std::shared_ptr<GetEventResponseBodyOriginStart> originStart_ = nullptr;
    std::shared_ptr<GetEventResponseBodyRecurrence> recurrence_ = nullptr;
    std::shared_ptr<vector<GetEventResponseBodyReminders>> reminders_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetEventResponseBodyRichTextDescription> richTextDescription_ = nullptr;
    std::shared_ptr<string> seriesMasterId_ = nullptr;
    std::shared_ptr<GetEventResponseBodyStart> start_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
