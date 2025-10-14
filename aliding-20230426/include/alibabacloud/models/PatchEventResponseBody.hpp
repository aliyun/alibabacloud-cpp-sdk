// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PatchEventResponseBodyAttendees.hpp>
#include <alibabacloud/models/PatchEventResponseBodyEnd.hpp>
#include <alibabacloud/models/PatchEventResponseBodyLocation.hpp>
#include <alibabacloud/models/PatchEventResponseBodyOrganizer.hpp>
#include <alibabacloud/models/PatchEventResponseBodyRecurrence.hpp>
#include <alibabacloud/models/PatchEventResponseBodyReminders.hpp>
#include <alibabacloud/models/PatchEventResponseBodyStart.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(attendees, attendees_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(organizer, organizer_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(reminders, reminders_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(organizer, organizer_);
      DARABONBA_PTR_FROM_JSON(recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    PatchEventResponseBody() = default ;
    PatchEventResponseBody(const PatchEventResponseBody &) = default ;
    PatchEventResponseBody(PatchEventResponseBody &&) = default ;
    PatchEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventResponseBody() = default ;
    PatchEventResponseBody& operator=(const PatchEventResponseBody &) = default ;
    PatchEventResponseBody& operator=(PatchEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attendees_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->end_ == nullptr && return this->id_ == nullptr && return this->isAllDay_ == nullptr
        && return this->location_ == nullptr && return this->organizer_ == nullptr && return this->recurrence_ == nullptr && return this->reminders_ == nullptr && return this->requestId_ == nullptr
        && return this->start_ == nullptr && return this->summary_ == nullptr && return this->updateTime_ == nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<PatchEventResponseBodyAttendees> & attendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<PatchEventResponseBodyAttendees>) };
    inline vector<PatchEventResponseBodyAttendees> attendees() { DARABONBA_PTR_GET(attendees_, vector<PatchEventResponseBodyAttendees>) };
    inline PatchEventResponseBody& setAttendees(const vector<PatchEventResponseBodyAttendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline PatchEventResponseBody& setAttendees(vector<PatchEventResponseBodyAttendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PatchEventResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PatchEventResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const PatchEventResponseBodyEnd & end() const { DARABONBA_PTR_GET_CONST(end_, PatchEventResponseBodyEnd) };
    inline PatchEventResponseBodyEnd end() { DARABONBA_PTR_GET(end_, PatchEventResponseBodyEnd) };
    inline PatchEventResponseBody& setEnd(const PatchEventResponseBodyEnd & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline PatchEventResponseBody& setEnd(PatchEventResponseBodyEnd && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PatchEventResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool isAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline PatchEventResponseBody& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const PatchEventResponseBodyLocation & location() const { DARABONBA_PTR_GET_CONST(location_, PatchEventResponseBodyLocation) };
    inline PatchEventResponseBodyLocation location() { DARABONBA_PTR_GET(location_, PatchEventResponseBodyLocation) };
    inline PatchEventResponseBody& setLocation(const PatchEventResponseBodyLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline PatchEventResponseBody& setLocation(PatchEventResponseBodyLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // organizer Field Functions 
    bool hasOrganizer() const { return this->organizer_ != nullptr;};
    void deleteOrganizer() { this->organizer_ = nullptr;};
    inline const PatchEventResponseBodyOrganizer & organizer() const { DARABONBA_PTR_GET_CONST(organizer_, PatchEventResponseBodyOrganizer) };
    inline PatchEventResponseBodyOrganizer organizer() { DARABONBA_PTR_GET(organizer_, PatchEventResponseBodyOrganizer) };
    inline PatchEventResponseBody& setOrganizer(const PatchEventResponseBodyOrganizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
    inline PatchEventResponseBody& setOrganizer(PatchEventResponseBodyOrganizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const PatchEventResponseBodyRecurrence & recurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, PatchEventResponseBodyRecurrence) };
    inline PatchEventResponseBodyRecurrence recurrence() { DARABONBA_PTR_GET(recurrence_, PatchEventResponseBodyRecurrence) };
    inline PatchEventResponseBody& setRecurrence(const PatchEventResponseBodyRecurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline PatchEventResponseBody& setRecurrence(PatchEventResponseBodyRecurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<PatchEventResponseBodyReminders> & reminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<PatchEventResponseBodyReminders>) };
    inline vector<PatchEventResponseBodyReminders> reminders() { DARABONBA_PTR_GET(reminders_, vector<PatchEventResponseBodyReminders>) };
    inline PatchEventResponseBody& setReminders(const vector<PatchEventResponseBodyReminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline PatchEventResponseBody& setReminders(vector<PatchEventResponseBodyReminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PatchEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const PatchEventResponseBodyStart & start() const { DARABONBA_PTR_GET_CONST(start_, PatchEventResponseBodyStart) };
    inline PatchEventResponseBodyStart start() { DARABONBA_PTR_GET(start_, PatchEventResponseBodyStart) };
    inline PatchEventResponseBody& setStart(const PatchEventResponseBodyStart & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline PatchEventResponseBody& setStart(PatchEventResponseBodyStart && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline PatchEventResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline PatchEventResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<PatchEventResponseBodyAttendees>> attendees_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<PatchEventResponseBodyEnd> end_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isAllDay_ = nullptr;
    std::shared_ptr<PatchEventResponseBodyLocation> location_ = nullptr;
    std::shared_ptr<PatchEventResponseBodyOrganizer> organizer_ = nullptr;
    std::shared_ptr<PatchEventResponseBodyRecurrence> recurrence_ = nullptr;
    std::shared_ptr<vector<PatchEventResponseBodyReminders>> reminders_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<PatchEventResponseBodyStart> start_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
