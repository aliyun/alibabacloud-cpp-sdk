// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateEventResponseBodyAttendees.hpp>
#include <alibabacloud/models/CreateEventResponseBodyEnd.hpp>
#include <alibabacloud/models/CreateEventResponseBodyLocation.hpp>
#include <alibabacloud/models/CreateEventResponseBodyOnlineMeetingInfo.hpp>
#include <alibabacloud/models/CreateEventResponseBodyOrganizer.hpp>
#include <alibabacloud/models/CreateEventResponseBodyRecurrence.hpp>
#include <alibabacloud/models/CreateEventResponseBodyReminders.hpp>
#include <alibabacloud/models/CreateEventResponseBodyRichTextDescription.hpp>
#include <alibabacloud/models/CreateEventResponseBodyStart.hpp>
#include <alibabacloud/models/CreateEventResponseBodyUiConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(attendees, attendees_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(onlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_TO_JSON(organizer, organizer_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(reminders, reminders_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(richTextDescription, richTextDescription_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(uiConfigs, uiConfigs_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(onlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_FROM_JSON(organizer, organizer_);
      DARABONBA_PTR_FROM_JSON(recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(richTextDescription, richTextDescription_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(uiConfigs, uiConfigs_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    CreateEventResponseBody() = default ;
    CreateEventResponseBody(const CreateEventResponseBody &) = default ;
    CreateEventResponseBody(CreateEventResponseBody &&) = default ;
    CreateEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventResponseBody() = default ;
    CreateEventResponseBody& operator=(const CreateEventResponseBody &) = default ;
    CreateEventResponseBody& operator=(CreateEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendees_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->end_ == nullptr && return this->id_ == nullptr && return this->isAllDay_ == nullptr
        && return this->location_ == nullptr && return this->onlineMeetingInfo_ == nullptr && return this->organizer_ == nullptr && return this->recurrence_ == nullptr && return this->reminders_ == nullptr
        && return this->requestId_ == nullptr && return this->richTextDescription_ == nullptr && return this->start_ == nullptr && return this->summary_ == nullptr && return this->uiConfigs_ == nullptr
        && return this->updateTime_ == nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<CreateEventResponseBodyAttendees> & attendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<CreateEventResponseBodyAttendees>) };
    inline vector<CreateEventResponseBodyAttendees> attendees() { DARABONBA_PTR_GET(attendees_, vector<CreateEventResponseBodyAttendees>) };
    inline CreateEventResponseBody& setAttendees(const vector<CreateEventResponseBodyAttendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline CreateEventResponseBody& setAttendees(vector<CreateEventResponseBodyAttendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateEventResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const CreateEventResponseBodyEnd & end() const { DARABONBA_PTR_GET_CONST(end_, CreateEventResponseBodyEnd) };
    inline CreateEventResponseBodyEnd end() { DARABONBA_PTR_GET(end_, CreateEventResponseBodyEnd) };
    inline CreateEventResponseBody& setEnd(const CreateEventResponseBodyEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline CreateEventResponseBody& setEnd(CreateEventResponseBodyEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateEventResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline CreateEventResponseBody& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const CreateEventResponseBodyLocation & location() const { DARABONBA_PTR_GET_CONST(location_, CreateEventResponseBodyLocation) };
    inline CreateEventResponseBodyLocation location() { DARABONBA_PTR_GET(location_, CreateEventResponseBodyLocation) };
    inline CreateEventResponseBody& setLocation(const CreateEventResponseBodyLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline CreateEventResponseBody& setLocation(CreateEventResponseBodyLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // onlineMeetingInfo Field Functions 
    bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
    void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
    inline const CreateEventResponseBodyOnlineMeetingInfo & onlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, CreateEventResponseBodyOnlineMeetingInfo) };
    inline CreateEventResponseBodyOnlineMeetingInfo onlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, CreateEventResponseBodyOnlineMeetingInfo) };
    inline CreateEventResponseBody& setOnlineMeetingInfo(const CreateEventResponseBodyOnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
    inline CreateEventResponseBody& setOnlineMeetingInfo(CreateEventResponseBodyOnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


    // organizer Field Functions 
    bool hasOrganizer() const { return this->organizer_ != nullptr;};
    void deleteOrganizer() { this->organizer_ = nullptr;};
    inline const CreateEventResponseBodyOrganizer & organizer() const { DARABONBA_PTR_GET_CONST(organizer_, CreateEventResponseBodyOrganizer) };
    inline CreateEventResponseBodyOrganizer organizer() { DARABONBA_PTR_GET(organizer_, CreateEventResponseBodyOrganizer) };
    inline CreateEventResponseBody& setOrganizer(const CreateEventResponseBodyOrganizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
    inline CreateEventResponseBody& setOrganizer(CreateEventResponseBodyOrganizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const CreateEventResponseBodyRecurrence & recurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, CreateEventResponseBodyRecurrence) };
    inline CreateEventResponseBodyRecurrence recurrence() { DARABONBA_PTR_GET(recurrence_, CreateEventResponseBodyRecurrence) };
    inline CreateEventResponseBody& setRecurrence(const CreateEventResponseBodyRecurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline CreateEventResponseBody& setRecurrence(CreateEventResponseBodyRecurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<CreateEventResponseBodyReminders> & reminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<CreateEventResponseBodyReminders>) };
    inline vector<CreateEventResponseBodyReminders> reminders() { DARABONBA_PTR_GET(reminders_, vector<CreateEventResponseBodyReminders>) };
    inline CreateEventResponseBody& setReminders(const vector<CreateEventResponseBodyReminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline CreateEventResponseBody& setReminders(vector<CreateEventResponseBodyReminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // richTextDescription Field Functions 
    bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
    void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
    inline const CreateEventResponseBodyRichTextDescription & richTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, CreateEventResponseBodyRichTextDescription) };
    inline CreateEventResponseBodyRichTextDescription richTextDescription() { DARABONBA_PTR_GET(richTextDescription_, CreateEventResponseBodyRichTextDescription) };
    inline CreateEventResponseBody& setRichTextDescription(const CreateEventResponseBodyRichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
    inline CreateEventResponseBody& setRichTextDescription(CreateEventResponseBodyRichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const CreateEventResponseBodyStart & start() const { DARABONBA_PTR_GET_CONST(start_, CreateEventResponseBodyStart) };
    inline CreateEventResponseBodyStart start() { DARABONBA_PTR_GET(start_, CreateEventResponseBodyStart) };
    inline CreateEventResponseBody& setStart(const CreateEventResponseBodyStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline CreateEventResponseBody& setStart(CreateEventResponseBodyStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateEventResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // uiConfigs Field Functions 
    bool hasUiConfigs() const { return this->uiConfigs_ != nullptr;};
    void deleteUiConfigs() { this->uiConfigs_ = nullptr;};
    inline const vector<CreateEventResponseBodyUiConfigs> & uiConfigs() const { DARABONBA_PTR_GET_CONST(uiConfigs_, vector<CreateEventResponseBodyUiConfigs>) };
    inline vector<CreateEventResponseBodyUiConfigs> uiConfigs() { DARABONBA_PTR_GET(uiConfigs_, vector<CreateEventResponseBodyUiConfigs>) };
    inline CreateEventResponseBody& setUiConfigs(const vector<CreateEventResponseBodyUiConfigs> & uiConfigs) { DARABONBA_PTR_SET_VALUE(uiConfigs_, uiConfigs) };
    inline CreateEventResponseBody& setUiConfigs(vector<CreateEventResponseBodyUiConfigs> && uiConfigs) { DARABONBA_PTR_SET_RVALUE(uiConfigs_, uiConfigs) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline CreateEventResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<CreateEventResponseBodyAttendees>> attendees_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateEventResponseBodyEnd> end_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<CreateEventResponseBodyLocation> location_ = nullptr;
    std::shared_ptr<CreateEventResponseBodyOnlineMeetingInfo> onlineMeetingInfo_ = nullptr;
    std::shared_ptr<CreateEventResponseBodyOrganizer> organizer_ = nullptr;
    std::shared_ptr<CreateEventResponseBodyRecurrence> recurrence_ = nullptr;
    std::shared_ptr<vector<CreateEventResponseBodyReminders>> reminders_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CreateEventResponseBodyRichTextDescription> richTextDescription_ = nullptr;
    std::shared_ptr<CreateEventResponseBodyStart> start_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<vector<CreateEventResponseBodyUiConfigs>> uiConfigs_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
